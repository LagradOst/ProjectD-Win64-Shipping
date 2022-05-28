// Enum PDAnimRuntime.EPDCaptureSpace
enum class EPDCaptureSpace : uint8 {
	World = 0,
	Actor = 1,
	Component = 2,
	Target = 3,
	TargetComponent = 4,
	EPDCaptureSpace_MAX = 5
};

// Enum PDAnimRuntime.EPDIKTargetType
enum class EPDIKTargetType : uint8 {
	HandL = 0,
	HandR = 1,
	FootL = 2,
	FootR = 3,
	Max = 4
};

// Enum PDAnimRuntime.EPDCollisionShape
enum class EPDCollisionShape : uint8 {
	Line = 0,
	Box = 1,
	Sphere = 2,
	Capsule = 3,
	EPDCollisionShape_MAX = 4
};

// ScriptStruct PDAnimRuntime.IKAnimInstanceProxy
// Size: 0xab0 (Inherited: 0x6e0)
struct FIKAnimInstanceProxy : FAnimInstanceProxy {
	struct FIKTargetBoneArray IKTargetBones; // 0x6e0(0x10)
	char pad_6F0[0x3c0]; // 0x6f0(0x3c0)
};

// ScriptStruct PDAnimRuntime.IKTargetBoneArray
// Size: 0x10 (Inherited: 0x00)
struct FIKTargetBoneArray {
	struct TArray<struct FBoneReference> Array; // 0x00(0x10)
};

// ScriptStruct PDAnimRuntime.PDHandIKData
// Size: 0xa0 (Inherited: 0x00)
struct FPDHandIKData {
	char bEnableHandIK : 1; // 0x00(0x01)
	char bUseRightShoulder : 1; // 0x00(0x01)
	char bEnableTriggerHandOverride : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName HandleAttachedBone; // 0x04(0x08)
	struct FName MuzzleBone; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
	struct UMeshComponent* WeaponMeshComponent; // 0x18(0x08)
	struct FTransform TriggerHandOffset; // 0x20(0x30)
	struct FTransform TriggerHandOverride; // 0x50(0x30)
	struct FVector AimingTarget; // 0x80(0x0c)
	float HandleHandAlpha; // 0x8c(0x04)
	float TriggerHandAlpha; // 0x90(0x04)
	float StockAlpha; // 0x94(0x04)
	float MuzzleAlpha; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// ScriptStruct PDAnimRuntime.AnimNode_PDAssetPlayerBase
// Size: 0x48 (Inherited: 0x30)
struct FAnimNode_PDAssetPlayerBase : FAnimNode_AssetPlayerBase {
	float BlendTime; // 0x30(0x04)
	bool bResetOnActivated; // 0x34(0x01)
	bool bPrintDebug; // 0x35(0x01)
	char pad_36[0x12]; // 0x36(0x12)
};

// ScriptStruct PDAnimRuntime.AnimNode_PDBlendSpacePlayer
// Size: 0x2b8 (Inherited: 0x48)
struct FAnimNode_PDBlendSpacePlayer : FAnimNode_PDAssetPlayerBase {
	float X; // 0x48(0x04)
	float Y; // 0x4c(0x04)
	float Z; // 0x50(0x04)
	float PlayRate; // 0x54(0x04)
	bool bLoop; // 0x58(0x01)
	bool bResetPlayTimeWhenBlendSpaceChanges; // 0x59(0x01)
	char pad_5A[0x2]; // 0x5a(0x02)
	float StartPosition; // 0x5c(0x04)
	struct UBlendSpaceBase* BlendSpace; // 0x60(0x08)
	char pad_68[0x78]; // 0x68(0x78)
	struct UBlendSpaceBase* PreviousBlendSpace; // 0xe0(0x08)
	char pad_E8[0x1d0]; // 0xe8(0x1d0)
};

// ScriptStruct PDAnimRuntime.AnimNode_PDIK
// Size: 0x3b0 (Inherited: 0xc8)
struct FAnimNode_PDIK : FAnimNode_SkeletalControlBase {
	struct TArray<struct FName> PreHandleSlots; // 0xc8(0x10)
	char pad_D8[0x28]; // 0xd8(0x28)
	struct FPDHandIKData HandIKData; // 0x100(0xa0)
	float MaxArmStretchOffset; // 0x1a0(0x04)
	char pad_1A4[0x4]; // 0x1a4(0x04)
	struct FPoseLink StancePose; // 0x1a8(0x10)
	struct TArray<struct FPerBoneBlendWeight> PerBoneBlendWeights; // 0x1b8(0x10)
	char pad_1C8[0x4]; // 0x1c8(0x04)
	struct FGuid SkeletonGuid; // 0x1cc(0x10)
	struct FGuid VirtualBoneGuid; // 0x1dc(0x10)
	char pad_1EC[0x54]; // 0x1ec(0x54)
	struct FName IK_Handle_Off; // 0x240(0x08)
	struct FName IK_Handle_MustOff; // 0x248(0x08)
	struct FName IK_Weapon; // 0x250(0x08)
	bool bAimingIdleState; // 0x258(0x01)
	char pad_259[0x3]; // 0x259(0x03)
	struct FName IKProfileName; // 0x25c(0x08)
	char pad_264[0x4]; // 0x264(0x04)
	struct TMap<struct FName, struct FPDIKProfileData> IKProfiles; // 0x268(0x50)
	struct FBoneReference Hip; // 0x2b8(0x10)
	char pad_2C8[0xe8]; // 0x2c8(0xe8)
};

// ScriptStruct PDAnimRuntime.PDIKProfileData
// Size: 0x98 (Inherited: 0x00)
struct FPDIKProfileData {
	struct FBoneReference TriggerHand; // 0x00(0x10)
	struct FBoneReference HandleHand; // 0x10(0x10)
	struct FBoneReference RightShoulder; // 0x20(0x10)
	struct FBoneReference LeftShoulder; // 0x30(0x10)
	struct FBoneReference RightWeaponAttached; // 0x40(0x10)
	struct FBoneReference LeftWeaponAttached; // 0x50(0x10)
	struct FBoneReference HandleHandPalm; // 0x60(0x10)
	struct FBoneReference TriggerHandPalm; // 0x70(0x10)
	struct TArray<struct FPDLimbData> Limbs; // 0x80(0x10)
	float UpperTraceDistance; // 0x90(0x04)
	float LowerTraceDistance; // 0x94(0x04)
};

// ScriptStruct PDAnimRuntime.PDLimbData
// Size: 0x20 (Inherited: 0x00)
struct FPDLimbData {
	struct FBoneReference Bone; // 0x00(0x10)
	struct FPDCollisionShape Shape; // 0x10(0x10)
};

// ScriptStruct PDAnimRuntime.PDCollisionShape
// Size: 0x10 (Inherited: 0x00)
struct FPDCollisionShape {
	enum class EPDCollisionShape ShapeType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector Extent; // 0x04(0x0c)
};

// ScriptStruct PDAnimRuntime.AnimNode_PDSequenceEvaluator
// Size: 0x190 (Inherited: 0x48)
struct FAnimNode_PDSequenceEvaluator : FAnimNode_PDAssetPlayerBase {
	struct UAnimSequenceBase* Sequence; // 0x48(0x08)
	float ExplicitTime; // 0x50(0x04)
	bool bShouldLoop; // 0x54(0x01)
	bool bTeleportToExplicitTime; // 0x55(0x01)
	enum class ESequenceEvalReinit ReinitializationBehavior; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
	float StartPosition; // 0x58(0x04)
	char pad_5C[0x134]; // 0x5c(0x134)
};

// ScriptStruct PDAnimRuntime.AnimNode_PDSequencePlayer
// Size: 0x1c8 (Inherited: 0x48)
struct FAnimNode_PDSequencePlayer : FAnimNode_PDAssetPlayerBase {
	struct UAnimSequenceBase* Sequence; // 0x48(0x08)
	float PlayRateBasis; // 0x50(0x04)
	float PlayRate; // 0x54(0x04)
	struct FInputScaleBiasClamp PlayRateScaleBiasClamp; // 0x58(0x30)
	float StartPosition; // 0x88(0x04)
	bool bLoopAnimation; // 0x8c(0x01)
	char pad_8D[0x133]; // 0x8d(0x133)
	struct UAnimSequenceBase* PreviousSequence; // 0x1c0(0x08)
};

// ScriptStruct PDAnimRuntime.PDIKTargetData
// Size: 0xb0 (Inherited: 0x00)
struct FPDIKTargetData {
	struct UIKTargetGetter* IKTargetGetter; // 0x00(0x08)
	char bEnableTranslation : 1; // 0x08(0x01)
	char bEnableOrientation : 1; // 0x08(0x01)
	char bUseWorldOrientation : 1; // 0x08(0x01)
	char bCaptureTarget : 1; // 0x08(0x01)
	char pad_8_4 : 4; // 0x08(0x01)
	enum class EPDCaptureSpace CaptureSpace; // 0x09(0x01)
	char pad_A[0x56]; // 0x0a(0x56)
	struct FName CapturedSocketName; // 0x60(0x08)
	char pad_68[0x8]; // 0x68(0x08)
	struct FTransform TargetOffset; // 0x70(0x30)
	enum class EPDCaptureSpace OffsetSpace; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	struct FName OffsetSocketName; // 0xa4(0x08)
	float BlendTime; // 0xac(0x04)
};

