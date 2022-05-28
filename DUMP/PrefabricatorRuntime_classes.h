// Class PrefabricatorRuntime.PrefabActor
// Size: 0x240 (Inherited: 0x220)
struct APrefabActor : AActor {
	struct UPrefabComponent* PrefabComponent; // 0x220(0x08)
	struct FGuid LastUpdateID; // 0x228(0x10)
	int32_t Seed; // 0x238(0x04)
	char pad_23C[0x4]; // 0x23c(0x04)

	void SavePrefab(); // Function PrefabricatorRuntime.PrefabActor.SavePrefab // (Final|Native|Public|BlueprintCallable) // @ game+0xcd8f70
	void RandomizeSeed(struct FRandomStream& InRandom, bool bRecursive); // Function PrefabricatorRuntime.PrefabActor.RandomizeSeed // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xcd8ea0
	void LoadPrefab(); // Function PrefabricatorRuntime.PrefabActor.LoadPrefab // (Final|Native|Public|BlueprintCallable) // @ game+0xcd8cb0
	bool IsPrefabOutdated(); // Function PrefabricatorRuntime.PrefabActor.IsPrefabOutdated // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xcd8c80
	struct UPrefabricatorAsset* GetPrefabAsset(); // Function PrefabricatorRuntime.PrefabActor.GetPrefabAsset // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xcd8c50
};

// Class PrefabricatorRuntime.ReplicablePrefabActor
// Size: 0x240 (Inherited: 0x240)
struct AReplicablePrefabActor : APrefabActor {
};

// Class PrefabricatorRuntime.PrefabComponent
// Size: 0x220 (Inherited: 0x1f0)
struct UPrefabComponent : USceneComponent {
	struct TSoftObjectPtr<UPrefabricatorAssetInterface> PrefabAssetInterface; // 0x1f0(0x28)
	char pad_218[0x8]; // 0x218(0x08)
};

// Class PrefabricatorRuntime.PrefabDebugActor
// Size: 0x238 (Inherited: 0x220)
struct APrefabDebugActor : AActor {
	struct AActor* Actor; // 0x220(0x08)
	struct TArray<char> ActorData; // 0x228(0x10)
};

// Class PrefabricatorRuntime.PrefabRandomizer
// Size: 0x260 (Inherited: 0x220)
struct APrefabRandomizer : AActor {
	bool bRandomizeOnBeginPlay; // 0x220(0x01)
	char pad_221[0x3]; // 0x221(0x03)
	int32_t SeedOffset; // 0x224(0x04)
	float MaxBuildTimePerFrame; // 0x228(0x04)
	char pad_22C[0x4]; // 0x22c(0x04)
	struct FMulticastInlineDelegate OnRandomizationComplete; // 0x230(0x10)
	bool bFastSyncBuild; // 0x240(0x01)
	char pad_241[0x1f]; // 0x241(0x1f)

	void Randomize(int32_t InSeed); // Function PrefabricatorRuntime.PrefabRandomizer.Randomize // (Final|Native|Public|BlueprintCallable) // @ game+0xcd8d60
};

// Class PrefabricatorRuntime.PrefabricatorProperty
// Size: 0x70 (Inherited: 0x28)
struct UPrefabricatorProperty : UObject {
	struct FString PropertyName; // 0x28(0x10)
	struct FString ExportedValue; // 0x38(0x10)
	struct TArray<struct FPrefabricatorPropertyAssetMapping> AssetSoftReferenceMappings; // 0x48(0x10)
	bool bIsCrossReferencedActor; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	struct FGuid CrossReferencePrefabActorId; // 0x5c(0x10)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class PrefabricatorRuntime.PrefabricatorEventListener
// Size: 0x28 (Inherited: 0x28)
struct UPrefabricatorEventListener : UObject {

	void PostSpawn(struct APrefabActor* Prefab); // Function PrefabricatorRuntime.PrefabricatorEventListener.PostSpawn // (Native|Event|Public|BlueprintEvent) // @ game+0xcd8cd0
};

// Class PrefabricatorRuntime.PrefabricatorAssetInterface
// Size: 0x38 (Inherited: 0x28)
struct UPrefabricatorAssetInterface : UObject {
	struct UPrefabricatorEventListener* EventListener; // 0x28(0x08)
	bool bReplicates; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class PrefabricatorRuntime.PrefabricatorAsset
// Size: 0x70 (Inherited: 0x38)
struct UPrefabricatorAsset : UPrefabricatorAssetInterface {
	struct TArray<struct FPrefabricatorActorData> ActorData; // 0x38(0x10)
	enum class EComponentMobility PrefabMobility; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	struct FGuid LastUpdateID; // 0x4c(0x10)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct UThumbnailInfo* ThumbnailInfo; // 0x60(0x08)
	uint32_t Version; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class PrefabricatorRuntime.PrefabricatorAssetCollection
// Size: 0x50 (Inherited: 0x38)
struct UPrefabricatorAssetCollection : UPrefabricatorAssetInterface {
	struct TArray<struct FPrefabricatorAssetCollectionItem> Prefabs; // 0x38(0x10)
	uint32_t Version; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class PrefabricatorRuntime.PrefabricatorAssetUserData
// Size: 0x40 (Inherited: 0x28)
struct UPrefabricatorAssetUserData : UAssetUserData {
	struct TWeakObjectPtr<struct APrefabActor> PrefabActor; // 0x28(0x08)
	struct FGuid ItemId; // 0x30(0x10)
};

// Class PrefabricatorRuntime.PrefabricatorBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPrefabricatorBlueprintLibrary : UBlueprintFunctionLibrary {

	struct APrefabActor* SpawnPrefab(struct UObject* WorldContextObject, struct UPrefabricatorAssetInterface* Prefab, struct FTransform& Transform, int32_t Seed); // Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.SpawnPrefab // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xcd8f90
	void RandomizePrefab(struct APrefabActor* PrefabActor, struct FRandomStream& InRandom); // Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.RandomizePrefab // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xcd8de0
	void GetAllAttachedActors(struct AActor* Prefab, struct TArray<struct AActor*>& AttachedActors); // Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.GetAllAttachedActors // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xcd8b70
};

// Class PrefabricatorRuntime.PrefabricatorSettings
// Size: 0x48 (Inherited: 0x38)
struct UPrefabricatorSettings : UDeveloperSettings {
	enum class EPrefabricatorPivotPosition PivotPosition; // 0x38(0x01)
	bool bAllowDynamicUpdate; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	float DefaultThumbnailPitch; // 0x3c(0x04)
	float DefaultThumbnailYaw; // 0x40(0x04)
	float DefaultThumbnailZoom; // 0x44(0x04)
};

// Class PrefabricatorRuntime.PrefabSeedLinkerComponent
// Size: 0x1f0 (Inherited: 0x1f0)
struct UPrefabSeedLinkerComponent : USceneComponent {
};

// Class PrefabricatorRuntime.PrefabSeedLinker
// Size: 0x238 (Inherited: 0x220)
struct APrefabSeedLinker : AActor {
	struct TArray<struct TWeakObjectPtr<struct APrefabActor>> LinkedActors; // 0x220(0x10)
	struct UPrefabSeedLinkerComponent* SeedLinkerComponent; // 0x230(0x08)
};

