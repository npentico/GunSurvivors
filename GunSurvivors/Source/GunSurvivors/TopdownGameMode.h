// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"

#include "Engine/TimerHandle.h"

#include "TopdownGameMode.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FScoreChangedDelegate,int, NewScore);
UCLASS()
class GUNSURVIVORS_API ATopdownGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
	public:
		UPROPERTY(VisibleAnywhere,BlueprintReadWrite)
		int Score = 0;

		ATopdownGameMode();

		virtual void BeginPlay() override;

		void SetScore(int NewScore);
		void AddScore(int AmountToAdd);

		int EnemyScoreValue = 10;

		UPROPERTY(BlueprintAssignable)
		FScoreChangedDelegate ScoreChangedDelegate;

		UPROPERTY(EditAnywhere,BlueprintReadWrite)
		float TimeBeforeRestart = 5.0f;

		FTimerHandle RestartTimerHandle;

		void RestartGame();

		void OnRestartGameTimerTimout();
};
