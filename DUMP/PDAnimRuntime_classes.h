// Class PDAnimRuntime.IKTargetGetter
// Size: 0x30 (Inherited: 0x28)
struct UIKTargetGetter : UObject {
	char pad_28[0x8]; // 0x28(0x08)

	bool K2_GetTarget(struct USkeletalMeshComponent* SkeletalMesh, struct FTransform& TargetTransform, struct USceneComponent*& TargetComponent); // Function PDAnimRuntime.IKTargetGetter.K2_GetTarget // (Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const) // @ game+0x1b61b60
	struct FString GetName(); // Function PDAnimRuntime.IKTargetGetter.GetName // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x185bd40
};

// Class PDAnimRuntime.AnimNotify_SetIKTarget
// Size: 0xf0 (Inherited: 0x38)
struct UAnimNotify_SetIKTarget : UAnimNotify {
	enum class EPDIKTargetType IKTargetType; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FPDIKTargetData IKTargetData; // 0x40(0xb0)
};

// Class PDAnimRuntime.IKAnimInterface
// Size: 0x28 (Inherited: 0x28)
struct UIKAnimInterface : UInterface {
};

// Class PDAnimRuntime.PDIKAnimLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPDIKAnimLibrary : UBlueprintFunctionLibrary {
};

