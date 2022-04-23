// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstanceBase.h"

#include "GameFramework/Character.h"

void UAnimInstanceBase::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	Character = Cast<ACharacter>(GetOwningActor());
	MovementComponent = Character->GetCharacterMovement();
}

void UAnimInstanceBase::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	if(!IsValid(Character) || !IsValid(MovementComponent)) return;

	Velocity = MovementComponent->Velocity;
	GroundSpeed = Velocity.Size2D();
	
	//Set Should Move to true only if ground speed is above a small threshold
	//(to prevent incredibly small velocities from triggering animations)
	//and if there is currently acceleration (input) applied.
	bShouldMove = (GroundSpeed>3.f) && (MovementComponent->GetCurrentAcceleration() != FVector::Zero());

	bIsFalling = MovementComponent->IsFalling();
}


