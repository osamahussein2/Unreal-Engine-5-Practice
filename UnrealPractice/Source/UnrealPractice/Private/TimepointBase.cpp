// Fill out your copyright notice in the Description page of Project Settings.


#include "TimepointBase.h"

/*UTimepointBase* UTimepointBase::Interpolate(const UTimepointBase* other, float distance)
{
	return DuplicateObject(this, nullptr);
}*/

UTimepointBase* UTimepointBase::Interpolate_Implementation(const UTimepointBase* other, float distance) const
{
	return DuplicateObject(this, nullptr);
}
