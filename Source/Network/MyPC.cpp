// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPC.h"
#include "Network.h"
#include "Kismet/GameplayStatics.h"


void AMyPC::BeginPlay()
{
	LogMessage(this, __FUNCTION__, __LINE__, TEXT("BeginPlay 실행전"));

	Super::BeginPlay();

	LogMessage(this, __FUNCTION__, __LINE__, TEXT("BeginPlay 실행후"));
}

void AMyPC::PostInitializeComponents()
{
	LogMessage(this, __FUNCTION__, __LINE__, TEXT("PostInitializeComponents 실행전"));

	Super::PostInitializeComponents(); // 액터가 준비 다 되면 해야 될일 하는곳

	LogMessage(this, __FUNCTION__, __LINE__, TEXT("PostInitializeComponents 실행후"));
}

void AMyPC::PostNetInit()
{
	LogMessage(this, __FUNCTION__, __LINE__, TEXT("PostNetInit 실행전"));

	Super::PostNetInit(); // 리플리케이트 할때 실행 되는것 

	LogMessage(this, __FUNCTION__, __LINE__, TEXT("PostNetInit 실행후"));
}
