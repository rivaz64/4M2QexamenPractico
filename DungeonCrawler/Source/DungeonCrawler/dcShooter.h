// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "dcShooter.generated.h"

//spawns an actor witha velocity in the forward direction
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DUNGEONCRAWLER_API UdcShooter : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UdcShooter();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//spawns the actor
	UFUNCTION(BlueprintCallable)
  void Shoot();

	UFUNCTION()
	void ResetCooldown();

	//the actor to spawn
  UPROPERTY(EditAnywhere)
  TSubclassOf<AActor> m_bullet;

	UPROPERTY(EditAnywhere,meta = (ToolTip = "the minimum time beetwen shoots."))
	float m_coolDownTime;

	UPROPERTY(EditAnywhere,meta = (ToolTip = "the speed of the bullet."))
	float m_speed;

	FTimerHandle m_cooldownHandle;
  

private:
	//is the cooltime has passed
	bool m_canShoot;
};
