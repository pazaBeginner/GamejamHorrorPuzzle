// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ItemDataStruct.h"
#include "GamejamHorrorPuzzleCharacter.generated.h"

class UInputComponent;
class USkeletalMeshComponent;
class USceneComponent;
class UCameraComponent;
class UStaticMeshComponent;
class UMotionControllerComponent;
class UAnimMontage;
class USoundBase;
class UInventoryComponent;
class UUserWidget;
class UWBP_Inventory;

UCLASS(config=Game)
class AGamejamHorrorPuzzleCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	USkeletalMeshComponent* Mesh1P;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FirstPersonCameraComponent;

public:
	AGamejamHorrorPuzzleCharacter();

protected:
	virtual void BeginPlay();

public:
	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

protected:

	/** Handles moving forward/backward */
	void MoveForward(float Val);

	/** Handles stafing movement, left and right */
	void MoveRight(float Val);

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	struct TouchData
	{
		TouchData() { bIsPressed = false;Location=FVector::ZeroVector;}
		bool bIsPressed;
		ETouchIndex::Type FingerIndex;
		FVector Location;
		bool bMoved;
	};

	TouchData	TouchItem;
	
protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	// End of APawn interface

public:
	/** Returns Mesh1P subobject **/
	USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
	/** Returns FirstPersonCameraComponent subobject **/
	UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

protected: 
	/**
	* Variables
	*/

	UPROPERTY(VisibleAnywhere, Category = "WalkSpeed")
	float NormalWalkSpeed;

	UPROPERTY(EditAnywhere, Category = "WalkSpeed")
	float ValuesToSprint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WalkSpeed")
	float FootStepInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WalkSpeed")
	float ValuesVolumeFootStep;

	UPROPERTY(EditAnywhere, Category = "Interact")
	float InteractDistance;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interact")
	UStaticMeshComponent* HeldItemMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Inventory")
    UInventoryComponent* PlayerInventory;

	UPROPERTY(EditAnywhere, Category = "UI Inventory")
	TSubclassOf<UUserWidget> InventoryWidgetClass;

	UPROPERTY(VisibleAnywhere, Category = "UI Inventory")
	UUserWidget* CurrentInventoryWidget;

protected:
	/**
	* Functions
	*/

    /** Increase walk speed **/
	void OnPlayerSprint();

	void ResetValueWalkSpeed();

	void StartCrouch();

	void Interact();

	bool PerformLineTrace(FHitResult& HitResult, FVector Start, FVector End, bool DrawDebug = false);

	void ToggleInventory();

	/** Play SFX Footstep **/
	UFUNCTION(BlueprintImplementableEvent)
	void OnPlayerMoveSound();

public:
	/**
	* Variables
	*/

	UPROPERTY(BlueprintReadWrite, Category = "Inventory")
	int32 CurrentlyHeldItemIndex = -1;
	
	/**
	* Functions
	*/

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void HoldItem(FItemDataStruct ItemData, int32 clickedIndex);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void RemoveItemOnHolding();



};

