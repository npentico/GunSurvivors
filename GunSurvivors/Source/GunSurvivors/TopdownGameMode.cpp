// Fill out your copyright notice in the Description page of Project Settings.

#include "TopdownGameMode.h"
#include "Kismet/GameplayStatics.h"

ATopdownGameMode::ATopdownGameMode()
{
    PrimaryActorTick.bCanEverTick = true;
    SetScore(0);
}

void ATopdownGameMode::BeginPlay()
{
    Super::BeginPlay();
    SetScore(0);
}

void ATopdownGameMode::SetScore(int NewScore)
{
    if (NewScore >= 0)
    {
        Score = NewScore;
        ScoreChangedDelegate.Broadcast(Score);
    }
}

void ATopdownGameMode::AddScore(int AmountToAdd)
{
    int NewScore = Score + AmountToAdd;
    SetScore(NewScore);
}

void ATopdownGameMode::RestartGame()
{
    GetWorldTimerManager().SetTimer(RestartTimerHandle,this,&ATopdownGameMode::OnRestartGameTimerTimout,1.0f,false,TimeBeforeRestart);
}

void ATopdownGameMode::OnRestartGameTimerTimout()

{
    UGameplayStatics::OpenLevel(GetWorld(),FName("MainLevel"));
}
