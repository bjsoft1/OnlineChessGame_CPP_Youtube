// Fill out your copyright notice in the Description page of Project Settings.


#include "Chess/ChessGameActor.h"

// Sets default values
AChessGameActor::AChessGameActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AChessGameActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AChessGameActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

