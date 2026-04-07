// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ItemDataStruct.generated.h"

class UStaticMesh;

/**
 * 
 */
USTRUCT(BlueprintType)
struct FItemDataStruct : public FTableRowBase
{
    GENERATED_BODY()

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName ItemID;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText ItemType;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText ItemName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText ItemDescription;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UTexture2D* ItemIcon;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UStaticMesh* ItemMesh;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bIsKeyItem;

};
