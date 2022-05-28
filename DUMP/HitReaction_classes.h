// AnimBlueprintGeneratedClass HitReaction.HitReaction_C
// Size: 0xca0 (Inherited: 0x2d0)
struct UHitReaction_C : UPDHitReactionAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2d8(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_SubInput; // 0x308(0x78)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x380(0x108)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x488(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x4a8(0x20)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_4; // 0x4c8(0xb8)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3; // 0x580(0xb8)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_3; // 0x638(0xc0)
	struct FAnimNode_Slot AnimGraphNode_Slot_3; // 0x6f8(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x740(0x48)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x788(0xc0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_8; // 0x848(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7; // 0x870(0x28)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x898(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0x950(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0x978(0x28)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x9a0(0xa0)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0xa40(0xc0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0xb00(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0xb28(0x28)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0xb50(0x48)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xb98(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0xc50(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xc78(0x28)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function HitReaction.HitReaction_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b61b60
	void ExecuteUbergraph_HitReaction(int32_t EntryPoint); // Function HitReaction.HitReaction_C.ExecuteUbergraph_HitReaction // (Final|UbergraphFunction) // @ game+0x1b61b60
};

