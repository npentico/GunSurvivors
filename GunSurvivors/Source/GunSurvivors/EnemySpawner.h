// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/TimerHandle.h"
#include "Enemy.h"
#include "TopdownCharacter.h"
#include "TopdownGameMode.h"




#include "EnemySpawner.generated.h"

UCLASS()
class GUNSURVIVORS_API AEnemySpawner : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AEnemySpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AEnemy> EnemyActorToSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpawnTime = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpawnDistance = 200.0f;

	FTimerHandle SpawnTimer;

	UPROPERTY(VisibleAnywhere)
	int EnemiesSpawnedCounter = 0;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float MaxDifficultyThreshold = 0.5f;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int DifficultySpikeInterval  = 10;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float DecreaseSpawnTimerInterval = 0.05f;

	ATopdownCharacter* Player;

	ATopdownGameMode* MyGameMode;

	

	void OnSpawnTimerTimeout();
	void StartSpawning();
	void StopSpawning();
	void SpawnEnemy();
	void SetupEnemy(AEnemy* Enemy);

	UFUNCTION()
	void OnEnemyDied();

	UFUNCTION()
	void OnPlayerDied();
	
};
