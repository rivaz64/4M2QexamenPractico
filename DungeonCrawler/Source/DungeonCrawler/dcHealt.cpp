// Fill out your copyright notice in the Description page of Project Settings.


#include "dcHealt.h"

// Sets default values for this component's properties
UdcHealt::UdcHealt()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UdcHealt::BeginPlay()
{
	Super::BeginPlay();

	m_currentHealth = m_maxHealth;
	
}


// Called every frame
void UdcHealt::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UdcHealt::Damage(float _damage)
{
	m_currentHealth -= _damage;
	if(m_currentHealth <= 0 && onDie.IsBound())
	{
		onDie.Broadcast();
		DestroyComponent();
	}
	else if(onDamage.IsBound())
	{
		onDamage.IsBound();
	}
}

void UdcHealt::Cure(float _cure)
{
	float newHealth = _cure+m_currentHealth;
	m_currentHealth = newHealth>m_maxHealth ? m_maxHealth : newHealth;
}

float UdcHealt::GetLivePercentage()
{
	return m_currentHealth/m_maxHealth;
}
