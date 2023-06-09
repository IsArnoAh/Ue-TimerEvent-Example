// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include"Components//TextRenderComponent.h"
#include "TimerActor.generated.h"

UCLASS()
class UECONTROLLEREXAMPLE_API ATimerActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATimerActor();
	//倒计时参数配置
	UPROPERTY(EditAnywhere)
	int32 CountTime;
	UTextRenderComponent* CountText;
	//定时器函数和参数声明
	void Timer();
	UFUNCTION(BlueprintNativeEvent)
	void TimerFinish();
	virtual void TimerFinish_Implementation();
	
	FTimerHandle TimerHandle;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
