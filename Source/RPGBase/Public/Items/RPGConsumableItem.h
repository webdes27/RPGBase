#pragma once

#include "CoreMinimal.h"

#include "RPGItem.h"
#include "ConsumableInterface.h"
#include "UsableInterface.h"

#include "RPGConsumableItem.generated.h"

UCLASS(BlueprintType, Blueprintable)
class RPGBASE_API URPGConsumableItem
	: public URPGItem,
	public IUsableInterface,
	public IConsumableInterface
{
	GENERATED_BODY()

public:
	URPGConsumableItem();

	/* IUsableInterface */
	virtual bool CanUse_Implementation(AActor* TargetUser, FRPGItemInstance& ItemInstance) override;
	virtual void Use_Implementation(AActor* TargetUser, FRPGItemInstance& ItemInstance) override;
	virtual void PostUse_Implementation(FRPGItemInstance& ItemInstance) override;

	/* IConsumableInterface */
	virtual bool CanConsume_Implementation(AActor* TargetConsumer, FRPGItemInstance& ItemInstance) override;
	virtual void Consume_Implementation(AActor* TargetConsumer, FRPGItemInstance& ItemInstance) override;
};
