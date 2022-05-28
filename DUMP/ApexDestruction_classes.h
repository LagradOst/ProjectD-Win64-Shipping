// Class ApexDestruction.DestructibleActor
// Size: 0x238 (Inherited: 0x220)
struct ADestructibleActor : AActor {
	struct UDestructibleComponent* DestructibleComponent; // 0x220(0x08)
	struct FMulticastInlineDelegate OnActorFracture; // 0x228(0x10)
};

// Class ApexDestruction.DestructibleComponent
// Size: 0x720 (Inherited: 0x640)
struct UDestructibleComponent : USkinnedMeshComponent {
	char bFractureEffectOverride : 1; // 0x640(0x01)
	char pad_640_1 : 7; // 0x640(0x01)
	char pad_641[0x7]; // 0x641(0x07)
	struct TArray<struct FFractureEffect> FractureEffects; // 0x648(0x10)
	bool bEnableHardSleeping; // 0x658(0x01)
	char pad_659[0x3]; // 0x659(0x03)
	float LargeChunkThreshold; // 0x65c(0x04)
	char pad_660[0x10]; // 0x660(0x10)
	struct FMulticastInlineDelegate OnComponentFracture; // 0x670(0x10)
	char pad_680[0xa0]; // 0x680(0xa0)

	void SetDestructibleMesh(struct UDestructibleMesh* NewMesh); // Function ApexDestruction.DestructibleComponent.SetDestructibleMesh // (Final|Native|Public|BlueprintCallable) // @ game+0xcf3e10
	struct UDestructibleMesh* GetDestructibleMesh(); // Function ApexDestruction.DestructibleComponent.GetDestructibleMesh // (Final|Native|Public|BlueprintCallable) // @ game+0xcf3de0
	void ApplyRadiusDamage(float BaseDamage, struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage); // Function ApexDestruction.DestructibleComponent.ApplyRadiusDamage // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xcf3c30
	void ApplyDamage(float DamageAmount, struct FVector& HitLocation, struct FVector& ImpulseDir, float ImpulseStrength); // Function ApexDestruction.DestructibleComponent.ApplyDamage // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xcf3ac0
};

// Class ApexDestruction.DestructibleFractureSettings
// Size: 0xb8 (Inherited: 0x28)
struct UDestructibleFractureSettings : UObject {
	int32_t CellSiteCount; // 0x28(0x04)
	struct FFractureMaterial FractureMaterialDesc; // 0x2c(0x24)
	int32_t RandomSeed; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct FVector> VoronoiSites; // 0x58(0x10)
	int32_t OriginalSubmeshCount; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct UMaterialInterface*> Materials; // 0x70(0x10)
	struct TArray<struct FDestructibleChunkParameters> ChunkParameters; // 0x80(0x10)
	char pad_90[0x28]; // 0x90(0x28)
};

// Class ApexDestruction.DestructibleMesh
// Size: 0x420 (Inherited: 0x380)
struct UDestructibleMesh : USkeletalMesh {
	struct FDestructibleParameters DefaultDestructibleParameters; // 0x380(0x88)
	struct TArray<struct FFractureEffect> FractureEffects; // 0x408(0x10)
	char pad_418[0x8]; // 0x418(0x08)
};

