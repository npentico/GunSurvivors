// Fill out your copyright notice in the Description page of Project Settings.

#include "Enemy.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AEnemy::AEnemy()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComp"));
	SetRootComponent(CapsuleComp);

	FlipbookComp = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("FlipbookComp"));
	FlipbookComp->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	if (!Player)
	{
		AActor *PlayerAct = UGameplayStatics::GetActorOfClass(GetWorld(), ATopdownCharacter::StaticClass());
		if (PlayerAct)
		{
			Player = Cast<ATopdownCharacter>(PlayerAct);
			bCanFollow = true;
		}
	}
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (bIsAlive && bCanFollow && Player)
	{
		FVector CurrentLocation = GetActorLocation();
		FVector PlayerLocation = Player->GetActorLocation();

		FVector DirectionToPlayer = PlayerLocation - CurrentLocation;
		float DistanceToPlayer = DirectionToPlayer.Length();

		if (DistanceToPlayer >= StopDistance)
		{
			DirectionToPlayer.Normalize();
			FVector NewLocation = CurrentLocation + (DirectionToPlayer * MovementSpeed * DeltaTime);
			SetActorLocation(NewLocation);
		}
		CurrentLocation = GetActorLocation();
		float FlipbookXScale = FlipbookComp->GetComponentScale().X;

		if (PlayerLocation.X - CurrentLocation.X > 0.0f)
		{
			if (FlipbookXScale < 0)
			{
				FlipbookComp->SetWorldScale3D(FVector(1, 1, 1));
			}
		}
		else
		{
			if (FlipbookXScale > 0)
			{
				FlipbookComp->SetWorldScale3D(FVector(-1, 1, 1));
			}
				}
	}
}

void AEnemy::Die()
{
	if(!bIsAlive)return;
	bIsAlive =false;
	bCanFollow = false;
	FlipbookComp->SetFlipbook(DeadFlipbookAsset);
	FlipbookComp->SetTranslucentSortPriority(-4);
	GetWorldTimerManager().SetTimer(DeathTimer, this, &AEnemy::OnDestroyTimerTimeout, 1.0f, false, 5.0f);

}

void AEnemy::OnDestroyTimerTimeout()
{
	Destroy();
}
