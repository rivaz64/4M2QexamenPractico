// Fill out your copyright notice in the Description page of Project Settings.


#include "dcHazard.h"
#include "dcHealt.h"
// Sets default values for this component's properties
UdcHazard::UdcHazard()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	// ...
}


// Called when the game starts
void UdcHazard::BeginPlay()
{
	Super::BeginPlay();
	AActor* owner = GetOwner();
  if (owner)
  {
      // Get the collider component from the owner actor
      auto collider = owner->FindComponentByClass<UShapeComponent>();

      // Bind the OnComponentBeginOverlap event
      if (collider)
      {
          collider->OnComponentBeginOverlap.AddDynamic(this, &UdcHazard::MakeDamage);
      }
      else
      {
          UE_LOG(LogTemp, Warning, TEXT("Collider not found on owner actor!"));
      }
  }
	// ...
	
}


// Called every frame
void UdcHazard::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UdcHazard::MakeDamage(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult)
{
  auto health = _otherActor->FindComponentByClass<UdcHealt>();
  if(health)
  {
    health->Damage(m_damage);
  }
}

