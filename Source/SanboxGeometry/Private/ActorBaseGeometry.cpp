// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorBaseGeometry.h"
#include "Engine/Engine.h"
DEFINE_LOG_CATEGORY_STATIC(LogBaseGeometry, All, All)

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
	FString name = "Unknown";
	

	int weaponsNum = 4;
	float health = 30.5f;
	bool isDead = false;
	FString weponsNumStr = "Weapons number: " + FString::FromInt(weaponsNum);

	FString heathFloatStr = "Health: " + FString::SanitizeFloat(health);

	FString isDeadStr = "Is dead? " + FString(isDead? "true" : "false");

	FString Stat = FString::Printf(TEXT(" \n=== All Stat === \n %s \n %s \n %s"),*weponsNumStr, *heathFloatStr,*isDeadStr);
	UE_LOG(LogBaseGeometry, Display, TEXT("Name: %s"), *name);
	UE_LOG(LogBaseGeometry, Warning, TEXT("%s"),*Stat);

	GEngine->AddOnScreenDebugMessage(-1, 10.0f,FColor::Red, name);
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, Stat,true,FVector2D(1.5f, 1.5f));

	//printTypes();
}

// Called every frame
void AActorBaseGeometry::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AActorBaseGeometry::printTypes()
{
	
	//UE_LOG(LogTemp, Display, TEXT("Wepons number: %d, kills: num %i"), weaponsNum, killNum);
	//UE_LOG(LogTemp, Display, TEXT("Health: %.2F"), health);
	//UE_LOG(LogTemp, Display, TEXT("Is dead?: %d"), isDead);
	//UE_LOG(LogTemp, Display, TEXT("Has weapon?: %d"), static_cast<int>(hasWeapon));
}

