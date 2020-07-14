// Fill out your copyright notice in the Description page of Project Settings.


#include "HandTest.h"

// Sets default values
AHandTest::AHandTest()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHandTest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHandTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AHandTest::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	check(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AHandTest::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AHandTest::MoveRight);

}

void AHandTest::MoveForward(float value)
{
	AddMovementInput(FVector(1.0f, 0.0f, 0.0f), value);
}

void AHandTest::MoveRight(float value)
{
	AddMovementInput(FVector(0.0f, 1.0f, 0.0f), value);
}

