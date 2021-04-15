// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMEshComponent.h"
#include "ActorBaseGeometry.generated.h"

UCLASS()
class SANBOXGEOMETRY_API AActorBaseGeometry : public AActor{
	GENERATED_BODY()
		//Line skip 1
		//Line skip 2
public:	
	// Sets default values for this actor's properties
	AActorBaseGeometry();

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* BaseMesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float amplitude = 5.0f;
	
	UPROPERTY(EditAnywhere, Category = "Movement")
	float frequency = 6.0f;

	UPROPERTY(EditAnywhere, Category = "Weapon")
	int32 weaponsNum = 4;

	UPROPERTY(EditDefaultsOnly, Category = "Stat")
	int32 killNum = 7;

	UPROPERTY(EditInstanceOnly, Category = "Health")
	float health = 30.5f;

	UPROPERTY(EditAnywhere, Category = "Health")
	bool isDead = false;

	UPROPERTY(VisibleAnywhere, Category = "Weapon")
	bool hasWeapon = true;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	FVector initialLocation;
	void printTypes();
	void printStringTypes();
	void printTransform();
};
