// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/Character.h"
#include "CYCharacterBase.generated.h"

class UCYAbilitySystemComponent;

UCLASS()
class CATCHMEIFYOUCANT_API ACYCharacterBase : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	ACYCharacterBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	
protected:
	virtual void BeginPlay() override;

protected:
	TWeakObjectPtr<UCYAbilitySystemComponent> AbilitySystemComponent;

};
