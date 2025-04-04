#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MtInteractableListenerBase.generated.h"

UCLASS()
class MULTIPLAYER_API AMtInteractableListenerBase : public AActor
{
	GENERATED_BODY()

protected:
	AMtInteractableListenerBase();
	
#pragma region OverrideVoids
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
#pragma endregion

#pragma region Properties
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ListenerSettings, meta = (AllowPrivateAccess = "true"))
	bool bShouldActivateOnce = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ListenerSettings, meta = (AllowPrivateAccess = "true"))
	TArray<class AMtInteractableBase*> RequestedTriggers;
	
	UPROPERTY(ReplicatedUsing= OnRep_IsActive)
	bool IsActive = false;
#pragma endregion

#pragma region Voids
	UFUNCTION()
	void OnRep_IsActive();
	
	void BindTriggers();
	bool CheckTriggers();

	UFUNCTION()
	void OnInteractableStateChanged(bool CurrentState);

	UFUNCTION(Blueprintable, Category = "Listener|Functions")
	void ToggleActive(bool Value);

	UFUNCTION(BlueprintNativeEvent, Category = ListenerEvent)
	void OnToggleActive(bool Value);
#pragma endregion

};
