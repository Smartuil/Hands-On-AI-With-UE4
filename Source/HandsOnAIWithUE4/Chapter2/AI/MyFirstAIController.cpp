// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFirstAIController.h"
#include "../../HandsOnAIWithUE4Character.h"
#include "BehaviorTree/BehaviorTree.h"

void AMyFirstAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	AHandsOnAIWithUE4Character* InCharacter = Cast<AHandsOnAIWithUE4Character>(InPawn);
	if (InCharacter != nullptr)
	{
		UBehaviorTree* BehaviorTree = InCharacter->BehaviorTree;
		if (BehaviorTree != nullptr) {
			RunBehaviorTree(BehaviorTree);
		}
	}
}
