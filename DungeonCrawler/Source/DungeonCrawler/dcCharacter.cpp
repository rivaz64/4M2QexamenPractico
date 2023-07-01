// Fill out your copyright notice in the Description page of Project Settings.


#include "dcCharacter.h"
#include "dcUsable.h"
// Sets default values for this component's properties
UdcCharacter::UdcCharacter()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UdcCharacter::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UdcCharacter::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UdcCharacter::GrabItem(UdcUsable* _usable)
{
	m_currentItem = _usable;
	auto otherOwner = _usable->GetOwner();
	auto thisOwner = GetOwner();
	FAttachmentTransformRules rules(EAttachmentRule::KeepRelative,true);
	otherOwner->AttachToActor(thisOwner,rules);
}

void UdcCharacter::UseItem()
{
	if(m_currentItem)
	{
		m_currentItem->Use();
	}
}

