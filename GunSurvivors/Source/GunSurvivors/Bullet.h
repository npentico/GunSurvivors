// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "PaperSpriteComponent.h"
#include "Engine/TimerHandle.h"

#include "Bullet.generated.h"

UCLASS()
class GUNSURVIVORS_API ABullet : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABullet();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	USphereComponent *SphereComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UPaperSpriteComponent *BulletSprite;

	UPROPERTY(BlueprintReadWrite)
	FVector2D MovementDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MovementSpeed = 300.f;

	UPROPERTY(VisibleAnywhere)
	bool bIsLaunched = false;

	UPROPERTY(VisibleAnywhere)
	bool bIsDisabled = false;

	FTimerHandle DeleteTimer;

	void Launch(FVector2D Direction, float Speed);
	void Launch(FVector2D Direction);

	void OnDeleteTimerTimeout();

	UFUNCTION()
	void OverlapBegin(UPrimitiveComponent *OverlappedComponent, AActor *OtherActor, UPrimitiveComponent *OtherComp, int32 OtherBodyIndex, bool FromSweep, const FHitResult &SweepResult);

	void DisableBullet();
};
