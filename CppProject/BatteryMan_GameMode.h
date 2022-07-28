// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BatteryMan_GameMode.generated.h"

/**
 * 
 */
UCLASS()
class CPPPROJECT_API ABatteryMan_GameMode : public AGameModeBase
{
	GENERATED_BODY()

	ABatteryMan_GameMode();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	float Spawn_Z = 500.0f;

	UPROPERTY(EditAnywhere)
		TSubclassOf<APawn> PlayerRecharge;

	UPROPERTY(EditAnywhere)
		float Spawn_X_Min;

	UPROPERTY(EditAnywhere)
		float Spawn_X_Max;

	UPROPERTY(EditAnywhere)
		float Spawn_Y_Min;

	UPROPERTY(EditAnywhere)
		float Spawn_Y_Max;

	UPROPERTY(EditAnywhere)
		float Spawn_Min_Range;

	UPROPERTY(EditAnywhere)
		float Spawn_Max_Range;


	void SpawnPlayerRecharge();

		
	
};
