// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "AttackType.generated.h"

UENUM(BlueprintType, meta = (Bitflags, UseEnumValuesAsMaskValuesInEditor = "true"))
enum class EAttackType : uint8
{
    None = 0 UMETA(Hidden),

    Slash = 1 << 0,
    Venom = 1 << 1,
    Fire = 1 << 2,
    Ice = 1 << 3,
    // Add more attack types as needed
};

/**
 * 
 */
UCLASS()
class DUNGEONCRAWLER_API UAttackType : public UUserDefinedEnum
{
	GENERATED_BODY()
	
};
