// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorBaseGeometry.h"
DEFINE_LOG_CATEGORY_STATIC(LogBaseGeometry, Error, Error);

// Sets default values
AActorBaseGeometry::AActorBaseGeometry()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AActorBaseGeometry::BeginPlay()
{
	Super::BeginPlay();
	//printTypes();
}

// Called every frame
void AActorBaseGeometry::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AActorBaseGeometry::printTypes()
{
	int weaponsNum = 4;
	int killNum = 0;
	float health = 30.5f;
	bool isDead = false;
	bool hasWeapon = true;
	UE_LOG(LogTemp, Display, TEXT("Wepons number: %d, kills: num %i"), weaponsNum, killNum);
	UE_LOG(LogTemp, Display, TEXT("Health: %.2F"), health);
	UE_LOG(LogTemp, Display, TEXT("Is dead?: %d"), isDead);
	UE_LOG(LogTemp, Display, TEXT("Has weapon?: %d"), static_cast<int>(hasWeapon));
}

