#include "Actors/MtInteractableBase.h"
#include "Net/UnrealNetwork.h"


AMtInteractableBase::AMtInteractableBase()
{
	bReplicates = true;
	bAlwaysRelevant = true;
	bNetLoadOnClient = true;
}

void AMtInteractableBase::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AMtInteractableBase, IsActive);
}

void AMtInteractableBase::OnRep_IsActive()
{
	OnToggleActive(IsActive);
}

void AMtInteractableBase::ToggleActive()
{
	if (HasAuthority())
	{
		if (bShouldActivateOnce && GetIsActive()) { return; }
		
		IsActive = !IsActive;
		OnInteractableStateChanged.Broadcast(IsActive);
		OnRep_IsActive();
	}
}

void AMtInteractableBase::OnToggleActive_Implementation(bool Value){}