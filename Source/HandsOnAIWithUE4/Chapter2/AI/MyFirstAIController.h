// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "MyFirstAIController.generated.h"

/**
 * 
 */
UCLASS()
class HANDSONAIWITHUE4_API AMyFirstAIController : public AAIController
{
	GENERATED_BODY()

protected:
	//** override the OnPossess function to run the behavior tree.
	virtual void OnPossess(APawn* InPawn) override;
	
};
