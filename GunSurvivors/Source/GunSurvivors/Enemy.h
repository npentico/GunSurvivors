// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/CapsuleComponent.h"
#include "PaperFlipbookComponent.h"
#include "TopdownCharacter.h"
#include "Engine/TimerHandle.h"
#include "Sound/SoundBase.h"

#include "Enemy.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEnemyDiedDelegate);

UCLASS()
class GUNSURVIVORS_API AEnemy : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UCapsuleComponent *CapsuleComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UPaperFlipbookComponent *FlipbookComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	ATopdownCharacter *Player;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bIsAlive = true;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bCanFollow = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MovementSpeed = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UPaperFlipbook *DeadFlipbookAsset;

	FTimerHandle DeathTimer;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	USoundBase *DeathSound;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float StopDistance = 20.0f;

	void Die();

	void OnDestroyTimerTimeout();

	FEnemyDiedDelegate EnemyDiedDelegate;
};
