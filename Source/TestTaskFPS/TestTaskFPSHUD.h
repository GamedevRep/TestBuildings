// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TestTaskFPSHUD.generated.h"

UCLASS()
class ATestTaskFPSHUD : public AHUD
{
	GENERATED_BODY()

public:
	ATestTaskFPSHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

