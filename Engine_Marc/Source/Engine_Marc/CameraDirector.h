// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CameraDirector.generated.h"

UCLASS()
class ENGINE_MARC_API ACameraDirector : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACameraDirector();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//UPROPERTY(EditAnyWhere)
	//AActor* CameraOne;
	//
	//UPROPERTY(EditAnyWhere)
	//AActor* CameraTwo;
	//
	//UPROPERTY(EditAnyWhere, meta = (ClampMin = "1", ClampMax = "20"))
	//float TimeToNextCameraChange;
};