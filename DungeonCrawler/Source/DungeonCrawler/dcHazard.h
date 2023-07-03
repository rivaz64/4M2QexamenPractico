// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/ShapeComponent.h"
#include "AttackType.h"
#include "dcHazard.generated.h"


//damages the actor at contact
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DUNGEONCRAWLER_API UdcHazard : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UdcHazard();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//sets the collider for the hazard
	UFUNCTION(BlueprintCallable)
	void SetCollider(UShapeComponent* _collider);

	//damages the actor when touched the canvas
	UFUNCTION( )
	void MakeDamage(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
                                  int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UPROPERTY(EditAnywhere, BlueprintReadOnly,DisplayName = "type")
	EAttackType m_type;

private:

	UPROPERTY(EditAnywhere,DisplayName = "damage",meta = (ToolTip = "the damage this hazard makes when tounching an actor."))
	float m_damage;
		
};
