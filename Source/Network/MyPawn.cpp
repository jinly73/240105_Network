// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawn.h"
#include "Network.h"

// Sets default values
AMyPawn::AMyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyPawn::BeginPlay()
{
	LogMessage(this, __FUNCTION__, __LINE__, TEXT("PawnBeginPlay 실행전"));

	Super::BeginPlay();

	LogMessage(this, __FUNCTION__, __LINE__, TEXT("PawnBeginPlay 실행전"));
}

// Called every frame
void AMyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


void AMyPawn::PostInitializeComponents()
{
	LogMessage(this, __FUNCTION__, __LINE__, TEXT("PostInitializeComponents 실행전"));

	Super::PostInitializeComponents(); // 액터가 준비 다 되면 해야 될일 하는곳

	LogMessage(this, __FUNCTION__, __LINE__, TEXT("PostInitializeComponents 실행후"));
}

void AMyPawn::PostNetInit()
{
	LogMessage(this, __FUNCTION__, __LINE__, TEXT("PostNetInit 실행전"));

	Super::PostNetInit(); // 리플리케이트 할때 실행 되는것 

	LogMessage(this, __FUNCTION__, __LINE__, TEXT("PostNetInit 실행후"));
}
