// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemySpawner.h"

#include "Kismet/GameplayStatics.h"

// Sets default values
AEnemySpawner::AEnemySpawner()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AEnemySpawner::BeginPlay()
{
	Super::BeginPlay();
	AGameModeBase *GameMode = UGameplayStatics::GetGameMode(GetWorld());
	if (GameMode)
	{
		MyGameMode = Cast<ATopdownGameMode>(GameMode);
	}
	if (!Player)
	{
		AActor *PlayerAct = UGameplayStatics::GetActorOfClass(GetWorld(), ATopdownCharacter::StaticClass());
		if (PlayerAct)
		{
			Player = Cast<ATopdownCharacter>(PlayerAct);
			Player->PlayerDiedDelegate.AddDynamic(this,&AEnemySpawner::OnPlayerDied);
		}
	}

	StartSpawning();
}

// Called every frame
void AEnemySpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEnemySpawner::StartSpawning()
{
	GetWorldTimerManager().SetTimer(SpawnTimer, this, &AEnemySpawner::OnSpawnTimerTimeout, SpawnTime, true, SpawnTime);
}

void AEnemySpawner::StopSpawning()
{
	GetWorldTimerManager().ClearTimer(SpawnTimer);
}

void AEnemySpawner::OnSpawnTimerTimeout()
{
	SpawnEnemy();
}

void AEnemySpawner::SpawnEnemy()
{
	FVector2D RandomPosition = FVector2D(FMath::VRand());
	RandomPosition.Normalize();
	RandomPosition *= SpawnDistance;
	FVector EnemyLocation = GetActorLocation() + FVector(RandomPosition.X, 0, RandomPosition.Y);
	AEnemy *EnemySpawned = GetWorld()->SpawnActor<AEnemy>(EnemyActorToSpawn, EnemyLocation, FRotator::ZeroRotator);
	SetupEnemy(EnemySpawned);
	EnemiesSpawnedCounter++;
	if (EnemiesSpawnedCounter % DifficultySpikeInterval == 0)
	{
		if (SpawnTime > MaxDifficultyThreshold)
		{
			SpawnTime -= DecreaseSpawnTimerInterval;
			StopSpawning();
			StartSpawning();
		}
	}
}

void AEnemySpawner::SetupEnemy(AEnemy *Enemy)
{
	if (Enemy)
	{
		Enemy->Player = Player;
		Enemy->bCanFollow = true;
		Enemy->EnemyDiedDelegate.AddDynamic(this, &AEnemySpawner::OnEnemyDied);
	}
}

void AEnemySpawner::OnEnemyDied()
{
	MyGameMode->AddScore(MyGameMode->EnemyScoreValue);
}

void AEnemySpawner::OnPlayerDied()
{
	StopSpawning();

	TArray<AActor* > EnemyArray;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(),AEnemy::StaticClass(),EnemyArray );

	for(AActor* EnemyActor: EnemyArray){
		AEnemy* Enemy = Cast<AEnemy>(EnemyActor);
		if(Enemy && Enemy->bIsAlive){
			Enemy->bCanFollow = false;
		}
	}

	//STOP ENEMIES FROM MOVING
	MyGameMode->RestartGame();
}
