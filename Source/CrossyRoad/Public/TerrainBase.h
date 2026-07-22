// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ObjectSpawnerBase.h"
#include "GameFramework/Actor.h"
#include "TerrainBase.generated.h"

UCLASS()
class CROSSYROAD_API ATerrainBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATerrainBase();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// *************** COMPONENTS ***************
	UPROPERTY(VisibleAnywhere, Category="SETTINGS|Mesh")
	UStaticMeshComponent* TerrainMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="SETTINGS|Spawner", 
	meta=(ToolTip="Starting point for the randomized spawn of terrain objects."))
	USceneComponent* SpawnerStartPoint;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="SETTINGS|Spawner", 
	meta=(ToolTip="Ending point for the randomized spawn of terrain objects."))
	USceneComponent* SpawnerEndPoint;
	
	// *************** VARIABLES ***************
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="SETTINGS|Spawner", 
	meta=(ToolTip="Starting location for the randomized spawn of terrain objects."))
	FVector SpawnerStartLocation;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="SETTINGS|Spawner", 
	meta=(ToolTip="Ending location for the randomized spawn of terrain objects."))
	FVector SpawnerEndLocation;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="SETTINGS|Spawner", 
	meta=(ToolTip="Value to divide the Start-End distance by."))
	float StartEndDistanceDivisor;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="SETTINGS|Spawner", 
	meta=(ToolTip="The class of the object spawned by the current terrain."))
	TSubclassOf<AObjectSpawnerBase> SpawnedActorClass;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="SETTINGS|Spawner", 
	meta=(ToolTip="Value to check against a random float to decide whether the spawner can spawn an object next (Grass)."))
	float SpawnIntervalCondition;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="SETTINGS|Spawner", 
	meta=(ToolTip="Value to multiply to set a given distance between spawned objects (Grass)."))
	int SpawnIntervalMultiplier;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="SETTINGS|Spawner", 
	meta=(ToolTip="Minimum time interval between spawned vehicles/logs (Road/Railroad/Water)."))
	float MinSpawnInterval;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="SETTINGS|Spawner", 
	meta=(ToolTip="Maximum time interval between spawned vehicles/logs (Road/Railroad/Water)."))
	float MaxSpawnInterval;
	UPROPERTY(BlueprintReadWrite, Category="SETTINGS|Spawner", 
	meta=(ToolTip="Whether the road/railroad terrain spawns from the SpawnerStartPoint or not; automatically randomized bool value."))
	bool bSpawnFromStart;
	
	// *************** FUNCTIONS ***************
/*	UFUNCTION(BlueprintImplementableEvent, Category="Spawner")
	void SpawnProjectileObjects();	*/
};
