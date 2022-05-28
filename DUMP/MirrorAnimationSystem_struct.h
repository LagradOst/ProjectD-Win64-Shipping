// ScriptStruct MirrorAnimationSystem.AnimNode_Mirror
// Size: 0x28 (Inherited: 0x10)
struct FAnimNode_Mirror : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x10(0x10)
	struct UMirrorTable* MirrorTable; // 0x20(0x08)
};

// ScriptStruct MirrorAnimationSystem.AnimNode_MirrorCS
// Size: 0x128 (Inherited: 0xc8)
struct FAnimNode_MirrorCS : FAnimNode_SkeletalControlBase {
	enum class EAxis MirrorAxis; // 0xc8(0x01)
	bool CompletlySymmetrical; // 0xc9(0x01)
	char pad_CA[0x6]; // 0xca(0x06)
	struct FString Substring_A; // 0xd0(0x10)
	struct FString Substring_B; // 0xe0(0x10)
	char pad_F0[0x38]; // 0xf0(0x38)
};

// ScriptStruct MirrorAnimationSystem.MirrorBone
// Size: 0x28 (Inherited: 0x00)
struct FMirrorBone {
	struct FName BoneName; // 0x00(0x08)
	enum class EAxis MirrorAxis; // 0x08(0x01)
	enum class EAxis FlipAxis; // 0x09(0x01)
	bool IsTwinBone; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	struct FName TwinBoneName; // 0x0c(0x08)
	bool MirrorTranslation; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FRotator RotationOffset; // 0x18(0x0c)
	bool InvertTwinRotationX; // 0x24(0x01)
	bool InvertTwinRotationY; // 0x25(0x01)
	bool InvertTwinRotationZ; // 0x26(0x01)
	char pad_27[0x1]; // 0x27(0x01)
};

