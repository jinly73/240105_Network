// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyPC.generated.h"

/**
 * 
 */
UCLASS()
class NETWORK_API AMyPC : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

	virtual void PostInitializeComponents() override;

	virtual void PostNetInit() override;


	
};
