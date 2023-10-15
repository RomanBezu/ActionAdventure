#include "AAHealthAttributeSet.h"

void UAAHealtAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);

	if (Attribute == UAAHealtAttributeSet::GetHealthAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxHealth());
	}	
}

void UAAHealtAttributeSet::PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue)
{
	Super::PostAttributeChange(Attribute, OldValue, NewValue);

	if (Attribute == UAAHealtAttributeSet::GetMaxHealthAttribute() && NewValue>GetHealth())
	{
		SetHealth(NewValue);
	}
	
	
}
