// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameplayTagContainer.h"
#include <GameplayEffectTypes.h>
#include "AbilitySystemInterface.h"
#include "Paper2DCharacter.generated.h"

UCLASS()
class GGJ2025_API APaper2DCharacter : public ACharacter
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Abilities", meta = (AllowPrivateAccess = "true"))
	class UAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY()
	class UCharacterAttributeSet* Attributes;

public:
	// Sets default values for this character's properties
	APaper2DCharacter();

	UAbilitySystemComponent* GetAbilitySystemComponent() const;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "RPG")
	TSubclassOf <class UGameplayEffect> DefaultAttributeEffect;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "RPG")
	TArray<TSubclassOf <class UGameplayAbility>> DefaultAbilities;

};
