#pragma once

#include <Engine.h>
#include "BlueprintExtensions.generated.h"

UENUM(BlueprintType, Meta = (Category="GA.BlueprintExtensions"))
enum class EBPExt_ColorChannel
	: uint8
{
	Red,
	Green,
	Blue
};

USTRUCT(BlueprintType, Meta = (Category = "GA.BlueprintExtensions"))
struct FBPExt_ColorCollection
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (Category = "GA.BlueprintExtensions"))
	EBPExt_ColorChannel DefaultColorChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (Category = "GA.BlueprintExtensions"))
	float Factor;
};

UINTERFACE(Blueprintable)
class UIBPExtColorSelectable
	: public UInterface
{
	GENERATED_BODY()
};

class IIBPExtColorSelectable
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "Implementable Event"), Category = "GA.BlueprintExtensions")
	void ImplementableEventVoid(float Param);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, meta = (DisplayName = "Native Event"), Category = "GA.BlueprintExtensions")
	int ConvertEvent(float Param);

};

UCLASS()
class UBlueprintExtension_Test
	: public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Test Static Callable"), Category ="GA.BlueprintExtensions")
	static float TestBlueprintStaticCallable(float Input);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Select Random Color Channel"), Category = "GA.BlueprintExtensions")
	static void SelectRandomColor(EBPExt_ColorChannel &outEnum);

	UFUNCTION(BlueprintCallable, meta = (ExpandEnumAsExecs="outEnum",DisplayName = "Select Random Color Channel Expanded"), Category = "GA.BlueprintExtensions")
	static void SelectRandomColorExpanded(EBPExt_ColorChannel &outEnum, EBPExt_ColorChannel &outEnumUnexpanded);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Test Pure Function"), Category = "GA.BlueprintExtensions")
	static float Test_Pure(float Param);
};