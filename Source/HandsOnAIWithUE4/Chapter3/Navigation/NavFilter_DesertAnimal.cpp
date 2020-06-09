// Fill out your copyright notice in the Description page of Project Settings.


#include "NavFilter_DesertAnimal.h"
#include "NavArea_Desert.h"

UNavFilter_DesertAnimal::UNavFilter_DesertAnimal() {
  //Create the Navigation Filter Area
  FNavigationFilterArea Desert = FNavigationFilterArea();
  //Set its parameters
  Desert.AreaClass = UNavArea_Desert::StaticClass();
  Desert.bOverrideEnteringCost = true;
  Desert.EnteringCostOverride = 0.f;
  Desert.bOverrideTravelCost = true;
  Desert.TravelCostOverride = 0.8f;
  //Add it to the the Array of Areas for the Filter.
  Areas.Add(Desert);
}
