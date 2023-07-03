// Fill out your copyright notice in the Description page of Project Settings.


#include "dcHealt.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
// Sets default values for this component's properties
UdcHealth::UdcHealth()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UdcHealth::BeginPlay()
{
	Super::BeginPlay();

	m_currentHealth = m_maxHealth;
	
}


// Called every frame
void UdcHealth::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UdcHealth::Damage(float _damage)
{
	m_currentHealth -= _damage;
	if(m_currentHealth <= 0 && onDie.IsBound())
	{
		onDie.Broadcast();
		DestroyComponent();
	}
	else
	{
		auto owner = GetOwner();
		auto character = Cast<ACharacter>(owner);
		
		if(character)
		{
			auto movement = character->GetCharacterMovement();
			movement->StopMovementImmediately();
			auto impulse = movement-> GetOwner()->GetActorForwardVector()*-6000.0f;
			movement->AddImpulse(impulse,true);
		}
		if(onDamage.IsBound())
		{
			onDamage.Broadcast();
		}
	}
		
}

void UdcHealth::Cure(float _cure)
{
	float newHealth = _cure+m_currentHealth;
	m_currentHealth = newHealth>m_maxHealth ? m_maxHealth : newHealth;
}

float UdcHealth::GetLivePercentage()
{
	return m_currentHealth/m_maxHealth;
}

