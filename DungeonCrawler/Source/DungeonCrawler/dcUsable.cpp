// Fill out your copyright notice in the Description page of Project Settings.


#include "dcUsable.h"

// Sets default values for this component's properties
UdcUsable::UdcUsable()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UdcUsable::BeginPlay()
{
	Super::BeginPlay();
	m_canUse = true;
	// ...
	
}


// Called every frame
void UdcUsable::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UdcUsable::Use()
{
	if(m_canUse && onUse.IsBound())
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Used"));
		onUse.Broadcast();
		m_canUse = false;
		GetWorld()->GetTimerManager().SetTimer(m_cooldownHandle, this, &UdcUsable::ResetCooldown, m_coolDownTime, false);
	}
}

void UdcUsable::ResetCooldown()
{
	m_canUse = true;
	if( onEndUse.IsBound())
	{
		onEndUse.Broadcast();
	}
}

