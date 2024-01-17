// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGM.h"
#include "MyPC.h"
#include "Network.h"


AMyGM::AMyGM()
{
	PlayerControllerClass = AMyPC::StaticClass();
}

void AMyGM::PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage)
{
	LogMessage(this, __FUNCTION__, __LINE__, TEXT("PreLoing 실행전"));

	Super::PreLogin(Options, Address, UniqueId, ErrorMessage);

	LogMessage(this, __FUNCTION__, __LINE__, TEXT("PreLoing 실행후"));

	//ErrorMessage = TEXT("입장금지");
}

APlayerController* AMyGM::Login(UPlayer* NewPlayer, ENetRole InRemoteRole, const FString& Portal, const FString& Options, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage)
{
	LogMessage(this, __FUNCTION__, __LINE__, TEXT("Login 실행전"));

	APlayerController* PC = Super::Login(NewPlayer, InRemoteRole, Portal, Options, UniqueId, ErrorMessage);

	LogMessage(this, __FUNCTION__, __LINE__, TEXT("Login 실행후"));


	return PC;
}

void AMyGM::PostLogin(APlayerController* NewPlayer)
{
	LogMessage(this, __FUNCTION__, __LINE__, TEXT("PostLogin 실행전"));

	Super::PostLogin(NewPlayer);

	LogMessage(this, __FUNCTION__, __LINE__, TEXT("PostLogin 실행후"));

}

void AMyGM::StartPlay()
{
	LogMessage(this, __FUNCTION__, __LINE__, TEXT("Start Play 실행 5초전"));

	Super::StartPlay();

	//FTimerManager& timerManager = GetWorld()->GetTimerManager();
	//FTimerHandle Timer;
	//timerManager.SetTimer(Timer, this, &AMyGM::CallParentStartPlay, 5.0f, false);
	
	//timerManager.ClearTimer(Timer); 타이머 지워주는 것

}

void AMyGM::CallParentStartPlay()
{
	LogMessage(this, __FUNCTION__, __LINE__, TEXT("StartPlay 실행전"));

	Super::StartPlay();

	LogMessage(this, __FUNCTION__, __LINE__, TEXT("StartPlay 실행후"));

}
