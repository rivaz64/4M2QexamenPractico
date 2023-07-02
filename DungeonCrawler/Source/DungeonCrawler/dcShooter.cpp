// Fill out your copyright notice in the Description page of Project Settings.


#include "dcShooter.h"
#include "TimerManager.h"
#include "Components/PrimitiveComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
// Sets default values for this component's properties
UdcShooter::UdcShooter()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UdcShooter::BeginPlay()
{
	Super::BeginPlay();
	m_canShoot = true;
	// ...
	
}


// Called every frame
void UdcShooter::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UdcShooter::Shoot()
{
	if(m_canShoot && m_bullet)
	{
		AActor* SpawnedActor = GetWorld()->SpawnActor<AActor>(m_bullet, GetComponentLocation(), GetComponentRotation());

		auto component = SpawnedActor->FindComponentByClass<UProjectileMovementComponent>();//FindComponentByClass<UPrimitiveComponent>();
		//
		component->Velocity = GetForwardVector() * m_speed;
		m_canShoot = false;
		
		GetWorld()->GetTimerManager().SetTimer(m_cooldownHandle, this, &UdcShooter::ResetCooldown, m_coolDownTime, false);
	}
}

void UdcShooter::ResetCooldown()
{
	m_canShoot = true;
}

