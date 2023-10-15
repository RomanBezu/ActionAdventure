#pragma once

#include "AAAttributeSet.h"
#include "AAHealthAttributeSet.generated.h"

UCLASS()

class ACTIONADVENTURE_API UAAHealtAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	
	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	virtual void PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue) override;

	
public:
	
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UAAHealtAttributeSet, Health);

	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UAAHealtAttributeSet, MaxHealth);

};


