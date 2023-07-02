// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "dcUsable.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUseDelegate);

//for that the player or enemies can use this
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DUNGEONCRAWLER_API UdcUsable : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UdcUsable();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//uses this thing
	UFUNCTION(BlueprintCallable)
	void Use();

	UFUNCTION()
	void ResetCooldown();

public:

	//what happen when this is used
	UPROPERTY(BlueprintAssignable, Category = "Event")
	FUseDelegate onUse;

	UPROPERTY(BlueprintAssignable, Category = "Event")
	FUseDelegate onEndUse;

	UPROPERTY(EditAnywhere,meta = (ToolTip = "the minimum time beetwen shoots."))
	float m_coolDownTime;

	UPROPERTY(BlueprintReadOnly,DisplayName = "user")
	AActor* m_user;

	UPROPERTY(EditAnywhere)
	FName m_socket;

	FTimerHandle m_cooldownHandle;

	//is the cooltime has passed
	bool m_canUse;

};
