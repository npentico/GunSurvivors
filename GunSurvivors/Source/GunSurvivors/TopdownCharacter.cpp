// Fill out your copyright notice in the Description page of Project Settings.

#include "TopdownCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ATopdownCharacter::ATopdownCharacter()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComp"));
	SetRootComponent(CapsuleComp);

	FlipbookComp = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("FlipbookComp"));
	FlipbookComp->SetupAttachment(RootComponent);

	GunParent = CreateDefaultSubobject<USceneComponent>(TEXT("GunParentComp"));
	GunParent->SetupAttachment(RootComponent);

	GunSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("GunSprite"));
	GunSprite->SetupAttachment(GunParent);

	BulletSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("BulletSpawnPoint"));
	BulletSpawnPoint->SetupAttachment(GunSprite);
}

// Called when the game starts or when spawned
void ATopdownCharacter::BeginPlay()
{
	Super::BeginPlay();
	PlayerController = Cast<APlayerController>(Controller);
	if(PlayerController){
		PlayerController->SetShowMouseCursor(true);
	}
}

// Called every frame
void ATopdownCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (PlayerController)
	{
		FVector MouseWorldLocation;
		FVector MouseWorldDirection;
		PlayerController->DeprojectMousePositionToWorld(MouseWorldLocation, MouseWorldDirection);
		FVector CurrentLocation = GetActorLocation();
		FVector Start = FVector(CurrentLocation.X, 0, CurrentLocation.Z);
		FVector Target = FVector(MouseWorldLocation.X, 0, MouseWorldLocation.Z);
		FRotator ToLookAt = UKismetMathLibrary::FindLookAtRotation(Start, Target);
		GunParent->SetRelativeRotation(ToLookAt);
	}
}

// Called to bind functionality to input
void ATopdownCharacter::SetupPlayerInputComponent(UInputComponent *PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void ATopdownCharacter::MoveCompleted(FVector2D InputValue)
{
	MovementDirection = FVector2D::ZeroVector;
	if (IdleFlipbook)
	{
		FlipbookComp->SetFlipbook(IdleFlipbook);
	}
}

void ATopdownCharacter::Shoot()
{
	if (bCanShoot)
	{
		bCanShoot = false;
		ABullet *Bullet = GetWorld()->SpawnActor<ABullet>(BulletActorToSpawn, BulletSpawnPoint->GetComponentLocation(), FRotator::ZeroRotator);
		if (Bullet)
		{
		}
		if (PlayerController)
		{
			FVector MouseWorldLocation;
			FVector MouseWorldDirection;
			PlayerController->DeprojectMousePositionToWorld(MouseWorldLocation, MouseWorldDirection);

			FVector CurrentLocation = GetActorLocation();
			FVector2D BulletDirection = FVector2D(MouseWorldLocation.X - CurrentLocation.X, MouseWorldLocation.Z - CurrentLocation.Z);
			BulletDirection.Normalize();
			Bullet->Launch(BulletDirection);
		}

		GetWorldTimerManager().SetTimer(ShootCooldownTimer, this, &ATopdownCharacter::OnShootCooldownTimerTimeout, 1.0f, false, ShootCooldownSeconds);
	}
}

void ATopdownCharacter::MoveTriggered(FVector2D InputValue)
{
	FVector CurrentLocation = GetActorLocation();
	if (bCanMove)
	{
		MovementDirection = InputValue;
		RotatePlayerSprite(MovementDirection.X);
		if (RunFlipbook)
		{
			FlipbookComp->SetFlipbook(RunFlipbook);
		}
		if (MovementDirection.Length() > 1.0f)
		{
			MovementDirection.Normalize();
		}

		FVector2D DistanceToMove = MovementDirection * MovementSpeed * UGameplayStatics::GetWorldDeltaSeconds(GetWorld());

		FVector NewLocation = CurrentLocation + FVector(DistanceToMove.X, 0, 0);
		if (!IsInMapBoundsHorizontal(NewLocation.X))
		{
			NewLocation -= FVector(DistanceToMove.X, 0, 0);
		}
		NewLocation += FVector(0, 0, DistanceToMove.Y);

		if (!IsInMapBoundsVertical(NewLocation.Z))
		{
			NewLocation -= FVector(0, 0, DistanceToMove.Y);
		}

		SetActorLocation(NewLocation);
	}
}

void ATopdownCharacter::RotatePlayerSprite(float XInputValue)
{
	if (XInputValue < 0)
	{
		FlipbookComp->SetWorldScale3D(FVector(-1, 1, 1));
	}
	else if (XInputValue > 0)
	{
		FlipbookComp->SetWorldScale3D(FVector(1, 1, 1));
	}
}

bool ATopdownCharacter::IsInMapBoundsHorizontal(float XPos)
{
	bool bResult = true;
	bResult = (XPos > HorizontalLimit.X) && (XPos < HorizontalLimit.Y);
	return bResult;
}

bool ATopdownCharacter::IsInMapBoundsVertical(float ZPos)
{
	bool bResult = true;

	bResult = (ZPos > VerticalLimit.X) && (ZPos < VerticalLimit.Y);
	return bResult;
}

void ATopdownCharacter::OnShootCooldownTimerTimeout()
{
	bCanShoot = true;
}
