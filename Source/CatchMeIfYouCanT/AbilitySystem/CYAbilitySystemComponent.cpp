#include "CYAbilitySystemComponent.h"

UCYAbilitySystemComponent::UCYAbilitySystemComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

void UCYAbilitySystemComponent::InitAbilityActorInfo(AActor* InOwnerActor, AActor* InAvatarActor)
{
	FGameplayAbilityActorInfo* ActorInfo = AbilityActorInfo.Get();
	check(ActorInfo);
	check(InOwnerActor);

	const bool bHasNewPawnAvatar = Cast<APawn>(InAvatarActor) && (InAvatarActor != ActorInfo->AvatarActor);
	
	Super::InitAbilityActorInfo(InOwnerActor, InAvatarActor);

	// Avatar가 처음 할당되었을 경우, Avatar가 변경되었을 경우
	if (bHasNewPawnAvatar)
	{
		// TODO : 커스텀 AnimInstance의 FGameplayTagBlueprintPropertyMap타입 변수 초기화 진행
	}
}



