// Class MirrorAnimationSystem.ExtCharacter
// Size: 0x4c0 (Inherited: 0x4c0)
struct AExtCharacter : ACharacter {

	void SetRootMotionMirrorAndFlipAxis(enum class EAxis MirrorAxis, enum class EAxis FlipAxis); // Function MirrorAnimationSystem.ExtCharacter.SetRootMotionMirrorAndFlipAxis // (Native|Public|BlueprintCallable) // @ game+0xd1c270
	void SetMirrorRootMotion(bool Mirror); // Function MirrorAnimationSystem.ExtCharacter.SetMirrorRootMotion // (Native|Public|BlueprintCallable) // @ game+0xd1c1e0
	void GetRootMotionMirrorAndFlipAxis(enum class EAxis& MirrorAxis, enum class EAxis& FlipAxis); // Function MirrorAnimationSystem.ExtCharacter.GetRootMotionMirrorAndFlipAxis // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xd1c100
	bool GetMirrorRootMotion(); // Function MirrorAnimationSystem.ExtCharacter.GetMirrorRootMotion // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xd1c0d0
};

// Class MirrorAnimationSystem.ExtCharacterMovementComponent
// Size: 0x620 (Inherited: 0x610)
struct UExtCharacterMovementComponent : UCharacterMovementComponent {
	bool MirrorRootMotion; // 0x610(0x01)
	enum class EAxis MirrorAxis; // 0x611(0x01)
	enum class EAxis FlipAxis; // 0x612(0x01)
	char pad_613[0xd]; // 0x613(0x0d)
};

// Class MirrorAnimationSystem.MirrorTable
// Size: 0x40 (Inherited: 0x30)
struct UMirrorTable : UDataAsset {
	struct TArray<struct FMirrorBone> MirrorBones; // 0x30(0x10)
};

