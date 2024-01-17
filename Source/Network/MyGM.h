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
	
	// �α��� �ϴ� ��
	virtual void PreLogin(const FString& Options, const FString& Address,
		const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage) override;

	// �α����ؼ� ��Ʈ�ѷ� �������� ��
	virtual APlayerController* Login(UPlayer* NewPlayer, ENetRole InRemoteRole,
		const FString& Portal, const FString& Options, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage) override;

	// �α��������� �����ϴ� ��
	virtual void PostLogin(APlayerController* NewPlayer) override;

	//���� ������Ʈ�� ������ ����
	virtual void StartPlay();


	void CallParentStartPlay();


};
