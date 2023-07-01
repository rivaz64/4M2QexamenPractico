// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "dcCharacter.generated.h"

class UdcUsable;

//functionality of both, playable and not playable characters
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DUNGEONCRAWLER_API UdcCharacter : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UdcCharacter();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void GrabItem(UdcUsable* _usable);

	UFUNCTION(BlueprintCallable)
	void UseItem();

private:

	UdcUsable* m_currentItem;

};
