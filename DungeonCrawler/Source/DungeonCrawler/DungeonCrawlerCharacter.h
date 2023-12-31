// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DungeonCrawlerCharacter.generated.h"

UCLASS(Blueprintable)
class ADungeonCrawlerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ADungeonCrawlerCharacter();

	// Called every frame.
	virtual void Tick(float DeltaSeconds) override;

	/** Returns TopDownCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetTopDownCameraComponent() const { return TopDownCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	void MoveForward(float _value);

	void MoveRight(float _value);

	void SetupPlayerInputComponent(class UInputComponent* _inputComponent);

	//the number of enemies the player has killed
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite,DisplayName = "score")
	int m_score;

	UPROPERTY(EditAnywhere)
	USoundBase* m_walkSound;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	class UAudioComponent* m_audioComponent;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,DisplayName = "health")
	class UdcHealth* m_health;

private:
	/** Top down camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* TopDownCameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	bool m_isWalking;
	
};

