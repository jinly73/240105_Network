// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyGM.generated.h"

/**
 * 
 */
UCLASS()
class NETWORK_API AMyGM : public AGameModeBase
{
	GENERATED_BODY()

public:

	AMyGM();
	
	// 로그인 하는 것
	virtual void PreLogin(const FString& Options, const FString& Address,
		const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage) override;

	// 로그인해서 컨트롤러 가져오는 것
	virtual APlayerController* Login(UPlayer* NewPlayer, ENetRole InRemoteRole,
		const FString& Portal, const FString& Options, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage) override;

	// 로그인했을때 세팅하는 것
	virtual void PostLogin(APlayerController* NewPlayer) override;

	//게임 스테이트가 가지고 있음
	virtual void StartPlay();


	void CallParentStartPlay();


};
