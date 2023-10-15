#pragma once

#include "AAAttributeSet.h"
#include "AADamageAttributeSet.generated.h"

UCLASS()

class ACTIONADVENTURE_API UAADamageAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
public:
	
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData Damage;
	ATTRIBUTE_ACCESSORS(UAADamageAttributeSet, Damage);
};
