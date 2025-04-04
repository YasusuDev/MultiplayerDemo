#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MtInteractableBase.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractableStateChanged, bool, bIsActive);

UCLASS()
class MULTIPLAYER_API AMtInteractableBase : public AActor
{
	GENERATED_BODY()

protected:
	AMtInteractableBase();
	
#pragma region OverrideVoids
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
#pragma endregion

#pragma region Properties
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = InteractableSettings, meta = (AllowPrivateAccess = "true"))
	bool bShouldActivateOnce = false;
	
	UPROPERTY(ReplicatedUsing = OnRep_IsActive)
	bool IsActive = false;
#pragma endregion

#pragma region Voids
	UFUNCTION()
	void OnRep_IsActive();
	
	UFUNCTION(BlueprintCallable, Category = "InteractableBase|Funtions")
	void ToggleActive();

	UFUNCTION(BlueprintNativeEvent, Category = InteractableBaseEvent)
	void OnToggleActive(bool Value);
#pragma endregion

public:
#pragma region Delegate
	FOnInteractableStateChanged OnInteractableStateChanged;
#pragma endregion
	
	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "Interactable|HelperFunctions")
	FORCEINLINE bool GetIsActive() const { return IsActive; }

	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "Interactable|HelperFunctions")
	bool GetCanInteract(AActor* OtherActor)	{ return OtherActor && OtherActor->ActorHasTag("Player"); }
};
