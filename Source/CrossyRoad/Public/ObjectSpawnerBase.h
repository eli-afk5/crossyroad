// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "ObjectSpawnerBase.generated.h"

UCLASS()
class CROSSYROAD_API AObjectSpawnerBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AObjectSpawnerBase();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// *************** COMPONENTS ***************
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="SETTINGS|Meshes", 
		meta=(ToolTip="Default Static Mesh of the current object; randomized by the spawner."))
	UStaticMeshComponent* ObjectMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="SETTINGS|Meshes", 
		meta=(ToolTip="(One of) the alternative Static Meshes for the current object."))
	UStaticMesh* AltObjectMesh1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="SETTINGS|Movement", 
		meta=(ToolTip="Projectile movement of the current object."))
	UProjectileMovementComponent* ProjectileMovement;
	
	// *************** VARIABLES ***************
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="SETTINGS|Meshes", 
		meta=(ToolTip="Number of the alternative Static Meshes for the current object."))
	int AltMeshes;
/*	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="SETTINGS|Movement", 
		meta=(ToolTip="The initial speed for the projectile movement (same as ObjectMaxSpeed)."))
	float ObjectInitialSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="SETTINGS|Movement", 
		meta=(ToolTip="The max speed for the projectile movement (same as ObjectInitialSpeed)."))
	float ObjectMaxSpeed;
*/
};
