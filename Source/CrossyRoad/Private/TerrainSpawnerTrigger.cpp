// Fill out your copyright notice in the Description page of Project Settings.


#include "TerrainSpawnerTrigger.h"

// Sets default values
ATerrainSpawnerTrigger::ATerrainSpawnerTrigger()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATerrainSpawnerTrigger::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATerrainSpawnerTrigger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

