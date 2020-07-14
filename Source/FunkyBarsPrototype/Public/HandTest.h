// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "HandTest.generated.h"

UCLASS()
class FUNKYBARSPROTOTYPE_API AHandTest : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AHandTest();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/** Called for forwards/backward input */
	void MoveForward(float value);

	/** Called for side to side input */
	void MoveRight(float value);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
