// Copyright blackw 2015-2020

#pragma once

#include "EngineMinimal.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "TerrainRegionComponent.generated.h"


class ASandboxTerrainController;

/**
*
*/
UCLASS()
class UNREALSANDBOXTERRAIN_API UTerrainRegionComponent : public USceneComponent
{
	GENERATED_UCLASS_BODY()

public:

	UPROPERTY()
	UHierarchicalInstancedStaticMeshComponent* InstancedStaticMeshComponent;

public:

	ASandboxTerrainController* GetTerrainController() {
		return (ASandboxTerrainController*)GetAttachmentRootActor();
	};

	
};