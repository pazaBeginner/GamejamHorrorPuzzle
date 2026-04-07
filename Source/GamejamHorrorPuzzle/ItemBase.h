// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemDataStruct.h"
#include "ItemBase.generated.h"

class UInventoryComponent;
class UStaticMeshComponent;

UCLASS()
class GAMEJAMHORRORPUZZLE_API AItemBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItemBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

protected:
	/**
	* Variables
	*/

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Mesh Item")
	UStaticMeshComponent* ItemMeshComp;


public:	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Setting")
	FItemDataStruct ItemData;
	
	UFUNCTION(BlueprintCallable, Category = "Item")
	void OnPickedUp();

};
