// Copyright Epic Games, Inc. All Rights Reserved.

#include "DungeonCrawlerCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/DecalComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Materials/Material.h"
#include "Engine/World.h"
#include "dcCharacter.h"
#include "dcHealt.h"
#include "Kismet/GameplayStatics.h"
#include "Components/AudioComponent.h"

ADungeonCrawlerCharacter::ADungeonCrawlerCharacter()
{
	// Set size for player capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate character to camera direction
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Rotate character to moving direction
	GetCharacterMovement()->RotationRate = FRotator(0.f, 640.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when character does
	CameraBoom->TargetArmLength = 800.f;
	CameraBoom->SetRelativeRotation(FRotator(-60.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...
	TopDownCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	TopDownCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	TopDownCameraComponent->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Activate ticking in order to update the cursor every frame.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	m_audioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio"));
	m_audioComponent->SetupAttachment(RootComponent);

	m_health = CreateDefaultSubobject<UdcHealth>(TEXT("Health"));
}

void ADungeonCrawlerCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	float vel = GetCharacterMovement()->Velocity.Size();
	if(vel > 0 && vel <= 700 && !m_isWalking){
		m_audioComponent->Play();
		m_isWalking = true;
	}
	else if(!(vel > 0 && vel <= 700) && m_isWalking)
	{
		m_audioComponent->Stop();
		m_isWalking = false;
	}
}

void ADungeonCrawlerCharacter::MoveForward(float _value)
{
	GetCharacterMovement()->AddInputVector(FVector::ForwardVector*_value);
}

void ADungeonCrawlerCharacter::MoveRight(float _value)
{
	GetCharacterMovement()->AddInputVector(FVector::RightVector*_value);
}

void ADungeonCrawlerCharacter::SetupPlayerInputComponent(UInputComponent* _inputComponent)
{
	Super::SetupPlayerInputComponent(_inputComponent);
	InputComponent->BindAxis("MoveForward", this, &ADungeonCrawlerCharacter::MoveForward);
  InputComponent->BindAxis("MoveRight", this, &ADungeonCrawlerCharacter::MoveRight);
}
