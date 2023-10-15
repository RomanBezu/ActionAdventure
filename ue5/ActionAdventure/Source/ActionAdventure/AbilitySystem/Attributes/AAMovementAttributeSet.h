#pragma once

#include "AAAttributeSet.h"
#include "AAMovementAttributeSet.generated.h"

UCLASS()

class ACTIONADVENTURE_API UAAMovementttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
public:
	
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData MovementSpeed;
	ATTRIBUTE_ACCESSORS(UAAMovementttributeSet, MovementSpeed);
};
