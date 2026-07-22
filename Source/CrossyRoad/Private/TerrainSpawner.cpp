// Fill out your copyright notice in the Description page of Project Settings.


#include "TerrainSpawner.h"

// Sets default values
ATerrainSpawner::ATerrainSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// *************** COMPONENTS ***************
	SpawnerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Spawner Mesh"));
}

// Called when the game starts or when spawned
void ATerrainSpawner::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATerrainSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

