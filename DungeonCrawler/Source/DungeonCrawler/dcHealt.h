// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "dcHealt.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDieDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDamageDelegate);

//used for giving an actor HP
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DUNGEONCRAWLER_API UdcHealth : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UdcHealth();

	

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//damage this actor, making it have less live
	UFUNCTION(BlueprintCallable)
	void Damage(float _damage);

	//gives more live to the actor
	UFUNCTION(BlueprintCallable)
	void Cure(float _cure);

	//gets the current live in form of percentage from the max live
	UFUNCTION(BlueprintCallable)
	float GetLivePercentage();

public:

	//what happens when the actor dies
	UPROPERTY(BlueprintAssignable, Category = "Event")
	FDieDelegate onDie;

	//what happens when the actor is damaged
	UPROPERTY(BlueprintAssignable, Category = "Event")
	FDamageDelegate onDamage;

private:
	//the max healt og the actor, also its initial health
	UPROPERTY(EditAnywhere,DisplayName = "max health")
	float m_maxHealth;

	//the current health of the actor
	float m_currentHealth; 
};
