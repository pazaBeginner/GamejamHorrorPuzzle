// Copyright Epic Games, Inc. All Rights Reserved.

#include "GamejamHorrorPuzzleCharacter.h"
#include "GamejamHorrorPuzzleProjectile.h"
#include "InventoryComponent.h"
#include "ItemBase.h"
#include "ItemDataStruct.h"
#include "BPI_Interactable.h"

#include "Animation/AnimInstance.h"
#include "Blueprint/UserWidget.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Components/StaticMeshComponent.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/InputSettings.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"


DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

//////////////////////////////////////////////////////////////////////////
// AGamejamHorrorPuzzleCharacter

AGamejamHorrorPuzzleCharacter::AGamejamHorrorPuzzleCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

	// Crouch
	GetCharacterMovement()->GetNavAgentPropertiesRef().bCanCrouch = true;

	InteractDistance = 500.0f;

	// Inventory
	PlayerInventory = CreateDefaultSubobject<UInventoryComponent>(TEXT("PlayerInventory"));

	// Location Held Item Mesh
	HeldItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Held Item"));
	HeldItemMesh->SetupAttachment(FirstPersonCameraComponent);
	HeldItemMesh->SetRelativeLocation(FVector(50.0f, 0.0f, 0.0f));

}

void AGamejamHorrorPuzzleCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	NormalWalkSpeed = GetCharacterMovement()->MaxWalkSpeed;

	bIsCrouched = false;

	// Create the widget inventory
	if (!CurrentInventoryWidget) {
        CurrentInventoryWidget = CreateWidget<UUserWidget>(GetWorld(), InventoryWidgetClass);

		if (CurrentInventoryWidget) {
			CurrentInventoryWidget->AddToViewport();
			CurrentInventoryWidget->SetVisibility(ESlateVisibility::Collapsed);
		}
	}

}

//////////////////////////////////////////////////////////////////////////
// Input

void AGamejamHorrorPuzzleCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Bind sprint events
	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AGamejamHorrorPuzzleCharacter::OnPlayerSprint);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &AGamejamHorrorPuzzleCharacter::ResetValueWalkSpeed);

	// Bind fire event
	//PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AGamejamHorrorPuzzleCharacter::OnFire);

	// Bind crouch event
	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &AGamejamHorrorPuzzleCharacter::StartCrouch);

	// Bind Interact Event
	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &AGamejamHorrorPuzzleCharacter::Interact);

	// Bind inventory events
    PlayerInputComponent->BindAction("Inventory", IE_Pressed, this, &AGamejamHorrorPuzzleCharacter::ToggleInventory);

	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &AGamejamHorrorPuzzleCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AGamejamHorrorPuzzleCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AGamejamHorrorPuzzleCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AGamejamHorrorPuzzleCharacter::LookUpAtRate);
}

void AGamejamHorrorPuzzleCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// Add SFX Footstep
		OnPlayerMoveSound();

		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);

	}

}

void AGamejamHorrorPuzzleCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// Add SFX Footstep
		OnPlayerMoveSound();

		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}

	
}

void AGamejamHorrorPuzzleCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AGamejamHorrorPuzzleCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AGamejamHorrorPuzzleCharacter::OnPlayerSprint() {

	if (GetCharacterMovement()->IsCrouching()) {
		return;
	}
	else {
		
		GetCharacterMovement()->MaxWalkSpeed = NormalWalkSpeed * ValuesToSprint;
		
		// Delay sound footstep
		FootStepInterval = FootStepInterval / 1.9f;
		
		// Set volume sound footstep
		ValuesVolumeFootStep = 1.5f;
	}

}

void AGamejamHorrorPuzzleCharacter::ResetValueWalkSpeed() {

	if (GetCharacterMovement()->IsCrouching()) {
		return;
	} 
	else
	{
		GetCharacterMovement()->MaxWalkSpeed = NormalWalkSpeed;

		// Delay sound footstep
		FootStepInterval = 0.3f;

		// Set volume sound footstep
		ValuesVolumeFootStep = 1.0f;
	}

}

void AGamejamHorrorPuzzleCharacter::StartCrouch() {

	if (GetCharacterMovement()->IsCrouching())
	{
		UnCrouch();

		// Set volume sound footstep
		ValuesVolumeFootStep = 1.0f;
		UE_LOG(LogTemp, Warning, TEXT("Berdiri"));
	}
	else
	{
		Crouch();

		// Set volume sound footstep
		ValuesVolumeFootStep = 0.3f;
		UE_LOG(LogTemp, Warning, TEXT("Jongkok"));

	}

}

void AGamejamHorrorPuzzleCharacter::Interact() { 

	FVector Start = FirstPersonCameraComponent->GetComponentLocation();
	FVector End = Start + FirstPersonCameraComponent->GetForwardVector() * InteractDistance;

	FHitResult HitResult;

	if (PerformLineTrace(HitResult, Start, End, true)) {

		UE_LOG(LogTemp, Warning, TEXT("LineTrace Hit Something"));

		AItemBase* HitItem = Cast<AItemBase>(HitResult.GetActor());

		AActor* HitActor = HitResult.GetActor();

		if (HitItem && PlayerInventory) {

			PlayerInventory->AddItemToInventory(HitItem->ItemData);
			
			HitItem->OnPickedUp();

			UE_LOG(LogTemp, Warning, TEXT("Berhasil mengambil: %s"), *HitItem->ItemData.ItemName.ToString())
		}

		if (HitActor && HitActor->GetClass()->ImplementsInterface(UBPI_Interactable::StaticClass()))
		{
			IBPI_Interactable::Execute_ExecuteInteraction(HitActor, this);
		}

	}

}

bool AGamejamHorrorPuzzleCharacter::PerformLineTrace(FHitResult& HitResult, FVector Start, FVector End, bool DrawDebug)
{
	if (DrawDebug) {
		DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, 3.0f, 0, 3.0f);
	}

	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);

	return GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECollisionChannel::ECC_WorldStatic, Params);
}

void AGamejamHorrorPuzzleCharacter::ToggleInventory()
{

	if (CurrentInventoryWidget) {

		ESlateVisibility CurrentVisibility = CurrentInventoryWidget->GetVisibility();

		if (CurrentVisibility != ESlateVisibility::Visible) {
            CurrentInventoryWidget->SetVisibility(ESlateVisibility::Visible);

			APlayerController* PlayerControl = Cast<APlayerController>(GetController());

			PlayerControl->bShowMouseCursor = true;
			PlayerControl->SetInputMode(FInputModeGameAndUI());
		}
		else 
		{
			CurrentInventoryWidget->SetVisibility(ESlateVisibility::Collapsed);

			APlayerController* PlayerControl = Cast<APlayerController>(GetController());

			PlayerControl->bShowMouseCursor = false;
			PlayerControl->SetInputMode(FInputModeGameOnly());
		}

		PlayerInventory->OnInventoryUpdated.Broadcast();
	}

}

void AGamejamHorrorPuzzleCharacter::HoldItem(FItemDataStruct ItemData, int32 ClickedIndex)
{
	CurrentlyHeldItemIndex = ClickedIndex;

	if (HeldItemMesh) {
		HeldItemMesh->SetStaticMesh(ItemData.ItemMesh);

		UE_LOG(LogTemp, Warning, TEXT("Sekarang memegang: %s"), *ItemData.ItemName.ToString());
	}

	PlayerInventory->OnInventoryUpdated.Broadcast();
}

void AGamejamHorrorPuzzleCharacter::RemoveItemOnHolding() {

	CurrentlyHeldItemIndex = -1;

	if (HeldItemMesh) {

		HeldItemMesh->SetStaticMesh(nullptr);

	}

	PlayerInventory->OnInventoryUpdated.Broadcast();

}

