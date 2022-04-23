// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "AnimInstanceBase.generated.h"

/**
 * 
 */
UCLASS()
class JUJUTSUKAISEN_API UAnimInstanceBase : public UAnimInstance
{
	GENERATED_BODY()
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "References")
	ACharacter* Character = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "References")
	UCharacterMovementComponent* MovementComponent = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "References")
	FVector Velocity = FVector::Zero();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "References")
	float GroundSpeed = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "References")
	bool bShouldMove = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "References")
	bool bIsFalling = false;

protected:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
};
