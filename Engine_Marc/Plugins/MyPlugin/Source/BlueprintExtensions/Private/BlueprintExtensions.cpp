#include "BlueprintExtensions.h"
#include <BlueprintExtensionsPCH.h>

UBlueprintExtension_Test::UBlueprintExtension_Test(
	FObjectInitializer const &ObjectInitializer)
	: Super(ObjectInitializer)
{

}

float UBlueprintExtension_Test::TestBlueprintStaticCallable(float input)
{
	return 1337.4269;
}

void UBlueprintExtension_Test::SelectRandomColor(EBPExt_ColorChannel &outEnum)
{
	int32 number = FMath::RandRange(1, 3);
	switch (number)
	{
	case 1:
		outEnum = EBPExt_ColorChannel::Red;
		break;
	case 2:
		outEnum = EBPExt_ColorChannel::Green;
		break;
	case 3:
		outEnum = EBPExt_ColorChannel::Blue;
		break;
	}
}

void UBlueprintExtension_Test::SelectRandomColorExpanded(EBPExt_ColorChannel &outEnum, EBPExt_ColorChannel &outEnumUnexpanded)
{
	int32 number = FMath::RandRange(1, 3);
	switch (number)
	{
	case 1:
		outEnum = EBPExt_ColorChannel::Red;
		break;
	case 2:
		outEnum = EBPExt_ColorChannel::Green;
		break;
	case 3:
		outEnum = EBPExt_ColorChannel::Blue;
		break;
	}
	outEnumUnexpanded = outEnum;
}

float UBlueprintExtension_Test::Test_Pure(float Param)
{
	return 420.69;
}