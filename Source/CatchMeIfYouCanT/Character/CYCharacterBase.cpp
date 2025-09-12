#include "CYCharacterBase.h"

#include "CatchMeIfYouCanT/AbilitySystem/CYAbilitySystemComponent.h"

ACYCharacterBase::ACYCharacterBase(const FObjectInitializer& ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = false;
}

UAbilitySystemComponent* ACYCharacterBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent.Get();
}

void ACYCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}


