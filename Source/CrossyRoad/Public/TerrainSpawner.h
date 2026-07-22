// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TerrainSpawner.generated.h"

UCLASS()
class CROSSYROAD_API ATerrainSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATerrainSpawner();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// *************** COMPONENTS ***************
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="SETTINGS|Meshes")
	UStaticMeshComponent* SpawnerMesh;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="SETTINGS|Spawner", 
	meta=(ToolTip="Value to multiply to set a given distance between spawned terrains."))
	int SpawnDistanceMultiplier = 100;
};
