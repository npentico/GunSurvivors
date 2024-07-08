// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/CapsuleComponent.h"
#include "PaperFlipbookComponent.h"
#include "Components/SceneComponent.h"
#include "PaperSpriteComponent.h"
#include "Engine/TimerHandle.h"
#include "Bullet.h"

#include "TopdownCharacter.generated.h"

UCLASS()
class GUNSURVIVORS_API ATopdownCharacter : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATopdownCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent *PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UCapsuleComponent *CapsuleComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UPaperFlipbookComponent *FlipbookComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	USceneComponent *GunParent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	USceneComponent *BulletSpawnPoint;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UPaperSpriteComponent *GunSprite;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category = "PLAYER")
	TSubclassOf<ABullet> BulletActorToSpawn;


	UFUNCTION(BlueprintCallable)
	void MoveTriggered(FVector2D InputValue);

	UFUNCTION(BlueprintCallable)
	void MoveCompleted(FVector2D InputValue);

	UFUNCTION(BlueprintCallable)
	void Shoot();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PLAYER")
	float MovementSpeed = 100.0f;

	UPROPERTY(BlueprintReadWrite)
	FVector2D MovementDirection;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "PLAYER")
	bool bCanMove = true;

	void RotatePlayerSprite(float XInputValue);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "PLAYER")
	UPaperFlipbook *IdleFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "PLAYER")
	UPaperFlipbook *RunFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "PLAYER")
	FVector2D HorizontalLimit;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "PLAYER")
	FVector2D VerticalLimit;

	bool IsInMapBoundsHorizontal(float XPos);
	bool IsInMapBoundsVertical(float ZPos);

	APlayerController* PlayerController;

	UPROPERTY(VisibleAnywhere,BlueprintReadWrite)
	bool bCanShoot = true;

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PLAYER")
	float ShootCooldownSeconds = 0.3f;

	FTimerHandle ShootCooldownTimer;

	void OnShootCooldownTimerTimeout();





};
