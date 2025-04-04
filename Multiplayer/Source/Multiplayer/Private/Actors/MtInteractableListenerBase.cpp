#include "Actors/MtInteractableListenerBase.h"
#include "Actors/MtInteractableBase.h"
#include "Net/UnrealNetwork.h"

AMtInteractableListenerBase::AMtInteractableListenerBase()
{
	bReplicates = true;
	bAlwaysRelevant = true;
	bNetLoadOnClient = true;
}

void AMtInteractableListenerBase::BeginPlay()
{
	Super::BeginPlay();
	BindTriggers();
}

void AMtInteractableListenerBase::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AMtInteractableListenerBase, IsActive);
}

void AMtInteractableListenerBase::OnRep_IsActive()
{
	OnToggleActive(IsActive);
}

void AMtInteractableListenerBase::BindTriggers()
{
	check(!RequestedTriggers.IsEmpty())

	for (auto Trigger : RequestedTriggers)
	{
		Trigger->OnInteractableStateChanged.AddDynamic(this, &ThisClass::OnInteractableStateChanged);
	}
}

bool AMtInteractableListenerBase::CheckTriggers()
{
	check(!RequestedTriggers.IsEmpty())
	TArray<bool> ActiveTriggers;
	for (auto Trigger : RequestedTriggers)
	{
		if (Trigger->GetIsActive())
		{
			ActiveTriggers.Add(Trigger->GetIsActive());
		}
	}
	return ActiveTriggers.Num() == RequestedTriggers.Num();
}

void AMtInteractableListenerBase::OnInteractableStateChanged(bool CurrentState)
{
	ToggleActive(CheckTriggers());
}


void AMtInteractableListenerBase::ToggleActive(bool Value)
{
	if (HasAuthority())
	{
		if (bShouldActivateOnce && IsActive) {return;}
		
		IsActive = !IsActive;
		OnRep_IsActive();
	}
}

void AMtInteractableListenerBase::OnToggleActive_Implementation(bool Value){}