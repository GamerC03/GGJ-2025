// Fill out your copyright notice in the Description page of Project Settings.


#include "Paper2DCharacter.h"

// Sets default values
APaper2DCharacter::APaper2DCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APaper2DCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APaper2DCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APaper2DCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

