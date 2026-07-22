// Fill out your copyright notice in the Description page of Project Settings.


#include "Public/ObjectSpawnerBase.h"

// Sets default values
AObjectSpawnerBase::AObjectSpawnerBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	// *************** COMPONENTS ***************
	ObjectMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh Component"));
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement Component"));
}

// Called when the game starts or when spawned
void AObjectSpawnerBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AObjectSpawnerBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

