// Class ProjectD.AnimNotify_PlayFacialMontage
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotify_PlayFacialMontage : UAnimNotify {
	struct FName Name; // 0x38(0x08)
};

// Class ProjectD.ExportCharacterSpawn
// Size: 0x230 (Inherited: 0x220)
struct AExportCharacterSpawn : AActor {
	struct UStaticMeshComponent* StaticMeshComp; // 0x220(0x08)
	enum class ECharacterSpawnGroup Grouptype; // 0x228(0x01)
	char pad_229[0x3]; // 0x229(0x03)
	int32_t Index; // 0x22c(0x04)
};

// Class ProjectD.ExportMissionScoreModeSpawnSystem
// Size: 0x268 (Inherited: 0x220)
struct AExportMissionScoreModeSpawnSystem : AActor {
	int32_t PcID; // 0x220(0x04)
	char pad_224[0x4]; // 0x224(0x04)
	struct UStaticMeshComponent* GroupComp; // 0x228(0x08)
	struct FGroupRangeInfo GroupRangeInfo; // 0x230(0x24)
	char pad_254[0x4]; // 0x254(0x04)
	struct UChildActorComponent* CCTV_ActorComp; // 0x258(0x08)
	bool bInGameDebugDraw; // 0x260(0x01)
	char pad_261[0x7]; // 0x261(0x07)
};

// Class ProjectD.ExportModeSpawnSystem
// Size: 0x280 (Inherited: 0x220)
struct AExportModeSpawnSystem : AActor {
	int32_t PcID; // 0x220(0x04)
	bool bInGameLineVisible; // 0x224(0x01)
	char pad_225[0x3]; // 0x225(0x03)
	struct UStaticMeshComponent* DefuseBombComp; // 0x228(0x08)
	struct UStaticMeshComponent* TeamAComp; // 0x230(0x08)
	struct UStaticMeshComponent* TeamBComp; // 0x238(0x08)
	struct UStaticMeshComponent* TeamAShopTrigger; // 0x240(0x08)
	struct UBoxComponent* TeamAShopBoxComp; // 0x248(0x08)
	struct UStaticMeshComponent* TeamBShopTrigger; // 0x250(0x08)
	struct UBoxComponent* TeamBShopBoxComp; // 0x258(0x08)
	struct UChildActorComponent* TeamA_CCTV_ActorComp; // 0x260(0x08)
	struct UChildActorComponent* TeamB_CCTV_ActorComp; // 0x268(0x08)
	struct UChildActorComponent* TeamA_IntroCam_ActorComp; // 0x270(0x08)
	struct UChildActorComponent* TeamB_IntroCam_ActorComp; // 0x278(0x08)
};

// Class ProjectD.ExportTeamModeSpawnSystem
// Size: 0x280 (Inherited: 0x220)
struct AExportTeamModeSpawnSystem : AActor {
	int32_t PcID; // 0x220(0x04)
	bool bInGameLineVisible; // 0x224(0x01)
	char pad_225[0x3]; // 0x225(0x03)
	struct UStaticMeshComponent* DefuseBombComp; // 0x228(0x08)
	struct UStaticMeshComponent* TeamAComp; // 0x230(0x08)
	struct UStaticMeshComponent* TeamBComp; // 0x238(0x08)
	struct UStaticMeshComponent* TeamAShopTrigger; // 0x240(0x08)
	struct UBoxComponent* TeamAShopBoxComp; // 0x248(0x08)
	struct UStaticMeshComponent* TeamBShopTrigger; // 0x250(0x08)
	struct UBoxComponent* TeamBShopBoxComp; // 0x258(0x08)
	struct UChildActorComponent* TeamA_CCTV_ActorComp; // 0x260(0x08)
	struct UChildActorComponent* TeamB_CCTV_ActorComp; // 0x268(0x08)
	struct UChildActorComponent* TeamA_IntroCam_ActorComp; // 0x270(0x08)
	struct UChildActorComponent* TeamB_IntroCam_ActorComp; // 0x278(0x08)
};

// Class ProjectD.ExportTriggerBox
// Size: 0x230 (Inherited: 0x228)
struct AExportTriggerBox : ATriggerBox {
	int32_t TargetType; // 0x228(0x04)
	bool EnableExport; // 0x22c(0x01)
	char pad_22D[0x3]; // 0x22d(0x03)
};

// Class ProjectD.ExportWorldItem
// Size: 0x240 (Inherited: 0x220)
struct AExportWorldItem : AActor {
	struct UStaticMeshComponent* StaticMeshComp; // 0x220(0x08)
	bool bUseItemSpawn; // 0x228(0x01)
	bool bRandomZRotation; // 0x229(0x01)
	char pad_22A[0x2]; // 0x22a(0x02)
	int32_t ModeItemIndex; // 0x22c(0x04)
	struct TArray<int32_t> ItemsGroupIndexList; // 0x230(0x10)
};

// Class ProjectD.IKTargetGetter_Climbing
// Size: 0x30 (Inherited: 0x30)
struct UIKTargetGetter_Climbing : UIKTargetGetter {
};

// Class ProjectD.IKTargetGetter_Parkour
// Size: 0x40 (Inherited: 0x30)
struct UIKTargetGetter_Parkour : UIKTargetGetter {
	struct UAnimNotify_SetIKTarget* IKTargetNotify; // 0x30(0x08)
	struct UAnimationAsset* Animation; // 0x38(0x08)
};

// Class ProjectD.IKTargetGetter_Weapon
// Size: 0x38 (Inherited: 0x30)
struct UIKTargetGetter_Weapon : UIKTargetGetter {
	struct FName SocketName; // 0x30(0x08)
};

// Class ProjectD.PDCharacterOptimizer
// Size: 0x28 (Inherited: 0x28)
struct UPDCharacterOptimizer : UInterface {
};

// Class ProjectD.LiveDataTable
// Size: 0xc8 (Inherited: 0xc8)
struct ULiveDataTable : UDataTable {
};

// Class ProjectD.LiveDataTableAsset
// Size: 0xd8 (Inherited: 0x30)
struct ULiveDataTableAsset : UDataAsset {
	struct FName Name; // 0x30(0x08)
	struct FFilePath SourcePath; // 0x38(0x10)
	struct UScriptStruct* DataClass; // 0x48(0x08)
	struct ULiveDataTable* Table; // 0x50(0x08)
	char pad_58[0x80]; // 0x58(0x80)
};

// Class ProjectD.PDUserWidget
// Size: 0x288 (Inherited: 0x230)
struct UPDUserWidget : UUserWidget {
	char pad_230[0x8]; // 0x230(0x08)
	struct TMap<struct FName, struct UWidgetAnimation*> AnimMap; // 0x238(0x50)
};

// Class ProjectD.PDIngameModeWidget
// Size: 0x290 (Inherited: 0x288)
struct UPDIngameModeWidget : UPDUserWidget {
	char pad_288[0x8]; // 0x288(0x08)
};

// Class ProjectD.PD3DIndicatorUI
// Size: 0x2e8 (Inherited: 0x290)
struct UPD3DIndicatorUI : UPDIngameModeWidget {
	struct UCanvasPanel* CP_3DIndicator; // 0x290(0x08)
	struct UPDImage* IMG_Arrow; // 0x298(0x08)
	struct UWidgetSwitcher* WS_IndicatorType; // 0x2a0(0x08)
	float SphereRadius; // 0x2a8(0x04)
	struct FVector2D MinScale; // 0x2ac(0x08)
	float RadiusX; // 0x2b4(0x04)
	float MinRadiusY; // 0x2b8(0x04)
	float MaxPingDistance; // 0x2bc(0x04)
	float CreateTime; // 0x2c0(0x04)
	float CreateTranslationRate; // 0x2c4(0x04)
	float CreateScaleRate; // 0x2c8(0x04)
	float HoldTime; // 0x2cc(0x04)
	float RemoveTime; // 0x2d0(0x04)
	float RemoveScaleRate; // 0x2d4(0x04)
	char pad_2D8[0x10]; // 0x2d8(0x10)
};

// Class ProjectD.PDAccountGameMode
// Size: 0x2c0 (Inherited: 0x2c0)
struct APDAccountGameMode : AGameModeBase {
};

// Class ProjectD.PDActionBase
// Size: 0x168 (Inherited: 0x28)
struct UPDActionBase : UObject {
	char pad_28[0x20]; // 0x28(0x20)
	struct UPDActionComponent* OwnerActionComponent; // 0x48(0x08)
	struct UPDMainPlayerActionComponent* OwnerMainPlayerActionComponent; // 0x50(0x08)
	struct UPDStateComponent* OwnerStateComponent; // 0x58(0x08)
	struct UPDMainPlayerStateComponent* OwnerMainPlayerStateComponent; // 0x60(0x08)
	struct APDPlayerCharacter* OwnerPlayerCharacter; // 0x68(0x08)
	struct APDMainPlayerCharacter* OwnerMainPlayerCharacter; // 0x70(0x08)
	struct UAnimMontage* CurrentPlayingMontage; // 0x78(0x08)
	char pad_80[0xe8]; // 0x80(0xe8)
};

// Class ProjectD.PDActionAFK
// Size: 0x168 (Inherited: 0x168)
struct UPDActionAFK : UPDActionBase {
};

// Class ProjectD.PDActionWeaponBase
// Size: 0x168 (Inherited: 0x168)
struct UPDActionWeaponBase : UPDActionBase {
};

// Class ProjectD.PDActionAimWeapon
// Size: 0x178 (Inherited: 0x168)
struct UPDActionAimWeapon : UPDActionWeaponBase {
	char pad_168[0x10]; // 0x168(0x10)
};

// Class ProjectD.PDAnimInstance
// Size: 0x280 (Inherited: 0x270)
struct UPDAnimInstance : UAnimInstance {
	enum class EPDAnimset AnimSet; // 0x268(0x01)
	struct APDPlayerCharacter* OwnerPlayerCharacter; // 0x270(0x08)
	struct UPDStateComponent* OwnerStateComponent; // 0x278(0x08)
};

// Class ProjectD.PDPlayerAnimInstance
// Size: 0x5f0 (Inherited: 0x280)
struct UPDPlayerAnimInstance : UPDAnimInstance {
	enum class EPDLocoType PrevLocoType; // 0x280(0x01)
	enum class EPDLocoType LocoType; // 0x281(0x01)
	enum class EPDLocoState LocoState; // 0x282(0x01)
	enum class EPDMovementState MovementState; // 0x283(0x01)
	enum class EPDLeanState LeanState; // 0x284(0x01)
	enum class EPDStanceState StanceState; // 0x285(0x01)
	enum class EPDClimbStanceState ClimbStanceState; // 0x286(0x01)
	enum class EPDThrowStanceState ThrowStanceState; // 0x287(0x01)
	enum class EPDSlideStanceState SlideStanceState; // 0x288(0x01)
	enum class EPDAimingState AimingState; // 0x289(0x01)
	enum class EPDAimingState PrevAimingState; // 0x28a(0x01)
	enum class EPDGaitsState GaitState; // 0x28b(0x01)
	float GaitStateValue; // 0x28c(0x04)
	float GaitValue; // 0x290(0x04)
	float Direction; // 0x294(0x04)
	float AimPitch; // 0x298(0x04)
	float AimYaw; // 0x29c(0x04)
	float FreeLookYaw; // 0x2a0(0x04)
	float AimInterpTime; // 0x2a4(0x04)
	float LeanFB; // 0x2a8(0x04)
	float LeanLR; // 0x2ac(0x04)
	char pad_2B0[0x20]; // 0x2b0(0x20)
	float AbsLeanFactor; // 0x2d0(0x04)
	float StartPosition; // 0x2d4(0x04)
	float PlayRate; // 0x2d8(0x04)
	bool WStanceIsValid; // 0x2dc(0x01)
	bool SWStanceIsValid; // 0x2dd(0x01)
	char pad_2DE[0x2]; // 0x2de(0x02)
	struct FPDPerSpecificWeaponAnimDatas PSpecificWeaponAnimDatas; // 0x2e0(0xc8)
	struct FPDPWUsingInABPAnimDatas PWAnimDatas; // 0x3a8(0x128)
	struct FPDPCUsingInABPAnimDatas PCAnimDatas; // 0x4d0(0x60)
	struct FPDIngameFacialAnimData IngameFacialAnimData; // 0x530(0x68)
	bool IsCharacterDead; // 0x598(0x01)
	bool bIsExhausted; // 0x599(0x01)
	bool bIsStealth; // 0x59a(0x01)
	bool MirrorFinalPose; // 0x59b(0x01)
	bool bWeaponN_To_WeaponL; // 0x59c(0x01)
	bool bOverrideUpper; // 0x59d(0x01)
	bool bOverrideLower; // 0x59e(0x01)
	bool bIsRagdoll; // 0x59f(0x01)
	bool bInSnapshot; // 0x5a0(0x01)
	char pad_5A1[0x7]; // 0x5a1(0x07)
	struct UCurveVector* YawOffset_FB; // 0x5a8(0x08)
	struct UCurveFloat* LeanCurve; // 0x5b0(0x08)
	struct FPDAnimGraphAimingValues AimingValues; // 0x5b8(0x0c)
	char pad_5C4[0x4]; // 0x5c4(0x04)
	struct UBlendSpace* CurFRAnim; // 0x5c8(0x08)
	struct UPDFireRecoilLevel* FRLevel; // 0x5d0(0x08)
	enum class EPD4DirType StartingDir; // 0x5d8(0x01)
	enum class EPD4DirType StoppingDir; // 0x5d9(0x01)
	char pad_5DA[0x2]; // 0x5da(0x02)
	float CrouchPoseStartRatio; // 0x5dc(0x04)
	float StandPoseStartRatio; // 0x5e0(0x04)
	char pad_5E4[0xc]; // 0x5e4(0x0c)
};

// Class ProjectD.PDActionAnimInstance
// Size: 0x5f0 (Inherited: 0x5f0)
struct UPDActionAnimInstance : UPDPlayerAnimInstance {
};

// Class ProjectD.PDActionAnimNotify
// Size: 0x40 (Inherited: 0x38)
struct UPDActionAnimNotify : UAnimNotify {
	struct FName EventName; // 0x38(0x08)
};

// Class ProjectD.PDActionAnimNotifyState
// Size: 0x68 (Inherited: 0x30)
struct UPDActionAnimNotifyState : UAnimNotifyState {
	struct FName BeginEventName; // 0x30(0x08)
	struct UCurveBase* BeginCurve; // 0x38(0x08)
	struct FVector BeginVector; // 0x40(0x0c)
	struct FName EndEventName; // 0x4c(0x08)
	struct FVector EndVector; // 0x54(0x0c)
	enum class ECameraMovementType CameraMovement; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class ProjectD.PDActionArmorPlateReplaceKit
// Size: 0x1a8 (Inherited: 0x168)
struct UPDActionArmorPlateReplaceKit : UPDActionBase {
	char pad_168[0x40]; // 0x168(0x40)
};

// Class ProjectD.PDActionBoltAction
// Size: 0x188 (Inherited: 0x168)
struct UPDActionBoltAction : UPDActionWeaponBase {
	char pad_168[0x20]; // 0x168(0x20)
};

// Class ProjectD.PDActionBurnReaction
// Size: 0x168 (Inherited: 0x168)
struct UPDActionBurnReaction : UPDActionBase {
};

// Class ProjectD.PDActionChangeStance
// Size: 0x170 (Inherited: 0x168)
struct UPDActionChangeStance : UPDActionBase {
	char pad_168[0x8]; // 0x168(0x08)
};

// Class ProjectD.PDActionChangeWeapon
// Size: 0x180 (Inherited: 0x168)
struct UPDActionChangeWeapon : UPDActionBase {
	char pad_168[0x18]; // 0x168(0x18)
};

// Class ProjectD.PDActionClimbBase
// Size: 0x168 (Inherited: 0x168)
struct UPDActionClimbBase : UPDActionBase {
};

// Class ProjectD.PDActionClimbEnterBase
// Size: 0x1f8 (Inherited: 0x168)
struct UPDActionClimbEnterBase : UPDActionClimbBase {
	char pad_168[0x90]; // 0x168(0x90)

	void PlayClimbEnter(); // Function ProjectD.PDActionClimbEnterBase.PlayClimbEnter // (Final|Native|Protected) // @ game+0x17efc50
	void ClimbMoveEnd(); // Function ProjectD.PDActionClimbEnterBase.ClimbMoveEnd // (Final|Native|Protected) // @ game+0x17efc30
};

// Class ProjectD.PDActionClimbEnterDownward
// Size: 0x1f8 (Inherited: 0x1f8)
struct UPDActionClimbEnterDownward : UPDActionClimbEnterBase {
};

// Class ProjectD.PDActionClimbEnterUpward
// Size: 0x200 (Inherited: 0x1f8)
struct UPDActionClimbEnterUpward : UPDActionClimbEnterBase {
	char pad_1F8[0x8]; // 0x1f8(0x08)
};

// Class ProjectD.PDActionClimbEnterVault
// Size: 0x1f8 (Inherited: 0x1f8)
struct UPDActionClimbEnterVault : UPDActionClimbEnterBase {
};

// Class ProjectD.PDActionClimbExit
// Size: 0x198 (Inherited: 0x168)
struct UPDActionClimbExit : UPDActionClimbBase {
	char pad_168[0x30]; // 0x168(0x30)
};

// Class ProjectD.PDActionClimbLedgeGrap
// Size: 0x218 (Inherited: 0x168)
struct UPDActionClimbLedgeGrap : UPDActionClimbBase {
	char pad_168[0xb0]; // 0x168(0xb0)
};

// Class ProjectD.PDActionClimbMove
// Size: 0x218 (Inherited: 0x168)
struct UPDActionClimbMove : UPDActionClimbBase {
	char pad_168[0xb0]; // 0x168(0xb0)
};

// Class ProjectD.PDActionCoinToss
// Size: 0x178 (Inherited: 0x168)
struct UPDActionCoinToss : UPDActionBase {
	char pad_168[0x10]; // 0x168(0x10)
};

// Class ProjectD.PDActionComponent
// Size: 0x118 (Inherited: 0xb0)
struct UPDActionComponent : UActorComponent {
	char pad_B0[0x18]; // 0xb0(0x18)
	struct TArray<struct UPDActionBase*> ActionList; // 0xc8(0x10)
	struct TArray<struct UPDActionBase*> ActionClassList; // 0xd8(0x10)
	char pad_E8[0x18]; // 0xe8(0x18)
	struct UDataTable* ClimbUpHandOffsets; // 0x100(0x08)
	struct UDataTable* VaultHandOffsets; // 0x108(0x08)
	struct UDataTable* LedgeGrapHandOffsets; // 0x110(0x08)
};

// Class ProjectD.PDActionDrinkBottle
// Size: 0x168 (Inherited: 0x168)
struct UPDActionDrinkBottle : UPDActionBase {
};

// Class ProjectD.PDActionDynamicShielding
// Size: 0x170 (Inherited: 0x168)
struct UPDActionDynamicShielding : UPDActionBase {
	char pad_168[0x8]; // 0x168(0x08)
};

// Class ProjectD.PDActionEatHotdog
// Size: 0x168 (Inherited: 0x168)
struct UPDActionEatHotdog : UPDActionBase {
};

// Class ProjectD.PDActionExoSuitDash
// Size: 0x190 (Inherited: 0x168)
struct UPDActionExoSuitDash : UPDActionBase {
	char pad_168[0x28]; // 0x168(0x28)
};

// Class ProjectD.PDActionExoSuitLauncher
// Size: 0x178 (Inherited: 0x168)
struct UPDActionExoSuitLauncher : UPDActionBase {
	char pad_168[0x10]; // 0x168(0x10)
};

// Class ProjectD.PDActionFallingObjectKnockBack
// Size: 0x168 (Inherited: 0x168)
struct UPDActionFallingObjectKnockBack : UPDActionBase {
};

// Class ProjectD.PDActionFireWeapon
// Size: 0x1a0 (Inherited: 0x168)
struct UPDActionFireWeapon : UPDActionWeaponBase {
	char pad_168[0x38]; // 0x168(0x38)
};

// Class ProjectD.PDActionGlassesScan
// Size: 0x168 (Inherited: 0x168)
struct UPDActionGlassesScan : UPDActionBase {
};

// Class ProjectD.PDActionGroggyEnter
// Size: 0x188 (Inherited: 0x168)
struct UPDActionGroggyEnter : UPDActionBase {
	char pad_168[0x20]; // 0x168(0x20)
};

// Class ProjectD.PDActionGroggyExit
// Size: 0x190 (Inherited: 0x168)
struct UPDActionGroggyExit : UPDActionBase {
	char pad_168[0x28]; // 0x168(0x28)
};

// Class ProjectD.PDActionGroggyRescue
// Size: 0x180 (Inherited: 0x168)
struct UPDActionGroggyRescue : UPDActionBase {
	char pad_168[0x18]; // 0x168(0x18)
};

// Class ProjectD.PDActionGuard
// Size: 0x178 (Inherited: 0x168)
struct UPDActionGuard : UPDActionBase {
	char pad_168[0x10]; // 0x168(0x10)
};

// Class ProjectD.PDActionHacking
// Size: 0x180 (Inherited: 0x168)
struct UPDActionHacking : UPDActionBase {
	char pad_168[0x18]; // 0x168(0x18)
};

// Class ProjectD.PDActionInstantThrowWeapon
// Size: 0x180 (Inherited: 0x168)
struct UPDActionInstantThrowWeapon : UPDActionBase {
	char pad_168[0x18]; // 0x168(0x18)
};

// Class ProjectD.PDActionInteractBomb
// Size: 0x188 (Inherited: 0x168)
struct UPDActionInteractBomb : UPDActionBase {
	char pad_168[0x20]; // 0x168(0x20)
};

// Class ProjectD.PDActionItemUse
// Size: 0x1a8 (Inherited: 0x168)
struct UPDActionItemUse : UPDActionBase {
	char pad_168[0x40]; // 0x168(0x40)
};

// Class ProjectD.PDActionJuggernautDash_Base
// Size: 0x170 (Inherited: 0x168)
struct UPDActionJuggernautDash_Base : UPDActionBase {
	char pad_168[0x8]; // 0x168(0x08)
};

// Class ProjectD.PDActionJuggernautDash_Start
// Size: 0x178 (Inherited: 0x170)
struct UPDActionJuggernautDash_Start : UPDActionJuggernautDash_Base {
	char pad_170[0x8]; // 0x170(0x08)
};

// Class ProjectD.PDActionJuggernautDash_End
// Size: 0x170 (Inherited: 0x170)
struct UPDActionJuggernautDash_End : UPDActionJuggernautDash_Base {
};

// Class ProjectD.PDActionJump
// Size: 0x198 (Inherited: 0x168)
struct UPDActionJump : UPDActionBase {
	char pad_168[0x30]; // 0x168(0x30)
};

// Class ProjectD.PDActionKnockBack
// Size: 0x178 (Inherited: 0x168)
struct UPDActionKnockBack : UPDActionBase {
	char pad_168[0x10]; // 0x168(0x10)
};

// Class ProjectD.PDActionLand
// Size: 0x1d0 (Inherited: 0x168)
struct UPDActionLand : UPDActionBase {
	char pad_168[0x68]; // 0x168(0x68)
};

// Class ProjectD.PDActionLean
// Size: 0x1a8 (Inherited: 0x168)
struct UPDActionLean : UPDActionBase {
	char pad_168[0x40]; // 0x168(0x40)
};

// Class ProjectD.PDActionLickKnife
// Size: 0x168 (Inherited: 0x168)
struct UPDActionLickKnife : UPDActionBase {
};

// Class ProjectD.PDActionLookMagnifier
// Size: 0x168 (Inherited: 0x168)
struct UPDActionLookMagnifier : UPDActionBase {
};

// Class ProjectD.PDActionMaintenance
// Size: 0x178 (Inherited: 0x168)
struct UPDActionMaintenance : UPDActionBase {
	char pad_168[0x10]; // 0x168(0x10)
};

// Class ProjectD.PDActionMeleeAttack
// Size: 0x210 (Inherited: 0x168)
struct UPDActionMeleeAttack : UPDActionBase {
	char pad_168[0xa8]; // 0x168(0xa8)
};

// Class ProjectD.PDActionOutCover
// Size: 0x180 (Inherited: 0x168)
struct UPDActionOutCover : UPDActionBase {
	char pad_168[0x18]; // 0x168(0x18)
};

// Class ProjectD.PDActionParkourBase
// Size: 0x1d0 (Inherited: 0x168)
struct UPDActionParkourBase : UPDActionBase {
	char pad_168[0x44]; // 0x168(0x44)
	bool bShowDebug; // 0x1ac(0x01)
	char pad_1AD[0x3]; // 0x1ad(0x03)
	float HandPointThreshold; // 0x1b0(0x04)
	float CapsuleHalfHeightThreshold; // 0x1b4(0x04)
	float HandPointGap; // 0x1b8(0x04)
	float ForwardOffset; // 0x1bc(0x04)
	float OverCapsuleHalfHeight; // 0x1c0(0x04)
	float OverCollisionThickness; // 0x1c4(0x04)
	float VaultHeightThreshold; // 0x1c8(0x04)
	char pad_1CC[0x4]; // 0x1cc(0x04)
};

// Class ProjectD.PDActionParkourClimbup
// Size: 0x298 (Inherited: 0x1d0)
struct UPDActionParkourClimbup : UPDActionParkourBase {
	char pad_1D0[0xc8]; // 0x1d0(0xc8)
};

// Class ProjectD.PDActionParkourLedgeGrap
// Size: 0x270 (Inherited: 0x1d0)
struct UPDActionParkourLedgeGrap : UPDActionParkourBase {
	char pad_1D0[0xa0]; // 0x1d0(0xa0)
};

// Class ProjectD.PDActionParkourVault
// Size: 0x290 (Inherited: 0x1d0)
struct UPDActionParkourVault : UPDActionParkourBase {
	char pad_1D0[0xc0]; // 0x1d0(0xc0)
};

// Class ProjectD.PDActionPickUpItem
// Size: 0x188 (Inherited: 0x168)
struct UPDActionPickUpItem : UPDActionBase {
	char pad_168[0x20]; // 0x168(0x20)
};

// Class ProjectD.PDActionReloadWeapon
// Size: 0x190 (Inherited: 0x168)
struct UPDActionReloadWeapon : UPDActionWeaponBase {
	char pad_168[0x28]; // 0x168(0x28)
};

// Class ProjectD.PDActionRevolverSpinning
// Size: 0x168 (Inherited: 0x168)
struct UPDActionRevolverSpinning : UPDActionBase {
};

// Class ProjectD.PDActionRoll
// Size: 0x1b0 (Inherited: 0x168)
struct UPDActionRoll : UPDActionBase {
	char pad_168[0x48]; // 0x168(0x48)
};

// Class ProjectD.PDActionRoundEnter
// Size: 0x170 (Inherited: 0x168)
struct UPDActionRoundEnter : UPDActionBase {
	char pad_168[0x8]; // 0x168(0x08)
};

// Class ProjectD.PDActionShootFlare
// Size: 0x178 (Inherited: 0x168)
struct UPDActionShootFlare : UPDActionBase {
	char pad_168[0x10]; // 0x168(0x10)
};

// Class ProjectD.PDActionSlideBase
// Size: 0x178 (Inherited: 0x168)
struct UPDActionSlideBase : UPDActionBase {
	char pad_168[0x10]; // 0x168(0x10)
};

// Class ProjectD.PDActionSlideEnter
// Size: 0x188 (Inherited: 0x178)
struct UPDActionSlideEnter : UPDActionSlideBase {
	char pad_178[0x10]; // 0x178(0x10)
};

// Class ProjectD.PDActionSlideExit
// Size: 0x1a0 (Inherited: 0x178)
struct UPDActionSlideExit : UPDActionSlideBase {
	char pad_178[0x28]; // 0x178(0x28)
};

// Class ProjectD.PDActionSprayMoney
// Size: 0x168 (Inherited: 0x168)
struct UPDActionSprayMoney : UPDActionBase {
};

// Class ProjectD.PDActionThrowWeapon
// Size: 0x1a0 (Inherited: 0x168)
struct UPDActionThrowWeapon : UPDActionBase {
	char pad_168[0x38]; // 0x168(0x38)
};

// Class ProjectD.PDActionTurnBack
// Size: 0x1a0 (Inherited: 0x168)
struct UPDActionTurnBack : UPDActionBase {
	char pad_168[0x38]; // 0x168(0x38)
};

// Class ProjectD.PDActionWarcry
// Size: 0x168 (Inherited: 0x168)
struct UPDActionWarcry : UPDActionBase {
};

// Class ProjectD.PDActionWearJuggernaut_Base
// Size: 0x180 (Inherited: 0x168)
struct UPDActionWearJuggernaut_Base : UPDActionBase {
	char pad_168[0x18]; // 0x168(0x18)
};

// Class ProjectD.PDActionWearJuggernaut_Start
// Size: 0x180 (Inherited: 0x180)
struct UPDActionWearJuggernaut_Start : UPDActionWearJuggernaut_Base {
};

// Class ProjectD.PDActionWearJuggernaut_End
// Size: 0x180 (Inherited: 0x180)
struct UPDActionWearJuggernaut_End : UPDActionWearJuggernaut_Base {
};

// Class ProjectD.PDActionWearExoSuit_Start
// Size: 0x180 (Inherited: 0x180)
struct UPDActionWearExoSuit_Start : UPDActionWearJuggernaut_Start {
};

// Class ProjectD.PDActionWearExoSuit_End
// Size: 0x180 (Inherited: 0x180)
struct UPDActionWearExoSuit_End : UPDActionWearJuggernaut_End {
};

// Class ProjectD.PDActionZipline
// Size: 0x1a0 (Inherited: 0x168)
struct UPDActionZipline : UPDActionBase {
	char pad_168[0x38]; // 0x168(0x38)
};

// Class ProjectD.PDADSZoomCameraActor
// Size: 0x7e0 (Inherited: 0x7b0)
struct APDADSZoomCameraActor : ACameraActor {
	char pad_7B0[0x30]; // 0x7b0(0x30)
};

// Class ProjectD.PDSceneBaseUI
// Size: 0x288 (Inherited: 0x288)
struct UPDSceneBaseUI : UPDUserWidget {
};

// Class ProjectD.PDAgentCreateUI
// Size: 0x340 (Inherited: 0x288)
struct UPDAgentCreateUI : UPDSceneBaseUI {
	struct UTileView* TV_AgentList; // 0x288(0x08)
	struct UPDTabButtonGroup* AgentTabBtnGroup; // 0x290(0x08)
	struct UPDButton* CreateBtn; // 0x298(0x08)
	struct UPDKeyButton* Btn_Back; // 0x2a0(0x08)
	struct UWidget* IMG_Movie; // 0x2a8(0x08)
	struct UPDTextBlock* T_Name; // 0x2b0(0x08)
	struct UPDTextBlock* T_Num; // 0x2b8(0x08)
	struct UPDTextBlock* T_Nationality; // 0x2c0(0x08)
	struct UImage* IMG_ProfileBg_Pic; // 0x2c8(0x08)
	struct UImage* IMG_ProfilePic; // 0x2d0(0x08)
	struct UImage* IMG_Sign; // 0x2d8(0x08)
	struct UImage* IMG_Icon_Lepton_01; // 0x2e0(0x08)
	struct UImage* IMG_Icon_Lepton_02; // 0x2e8(0x08)
	struct UImage* IMG_Icon_Signature; // 0x2f0(0x08)
	struct UPDTextBlock* T_Title_Lepton_01; // 0x2f8(0x08)
	struct UPDTextBlock* T_Desc_Lepton_01; // 0x300(0x08)
	struct UPDTextBlock* T_Title_Lepton_02; // 0x308(0x08)
	struct UPDTextBlock* T_Desc_Lepton_02; // 0x310(0x08)
	struct UPDTextBlock* T_Desc_Signature; // 0x318(0x08)
	struct UPDTextBlock* T_ProfileDesc_01; // 0x320(0x08)
	struct UPDTextBlock* T_ProfileDesc_02; // 0x328(0x08)
	struct UMediaPlayer* AgentMediaPlayer; // 0x330(0x08)
	char pad_338[0x8]; // 0x338(0x08)

	void SetAgentInfo(int32_t SkillIndex, struct FVector2D InfoAbsolutePos); // Function ProjectD.PDAgentCreateUI.SetAgentInfo // (Final|Native|Private|HasDefaults) // @ game+0x17f3ad0
	void OnMovieOpened(); // Function ProjectD.PDAgentCreateUI.OnMovieOpened // (Final|Native|Public|BlueprintCallable) // @ game+0xfb2530
	void OnMovieClosed(); // Function ProjectD.PDAgentCreateUI.OnMovieClosed // (Final|Native|Public|BlueprintCallable) // @ game+0xfb2530
	void OnInitMediaPlayer(); // Function ProjectD.PDAgentCreateUI.OnInitMediaPlayer // (Event|Public|BlueprintEvent) // @ game+0x1b61b60
	void OnCreateAgentClicked(); // Function ProjectD.PDAgentCreateUI.OnCreateAgentClicked // (Final|Native|Private) // @ game+0x17f3a30
	void OnConfirmCreate(int32_t AgentIndex); // Function ProjectD.PDAgentCreateUI.OnConfirmCreate // (Final|Native|Private) // @ game+0x17f39b0
	void OnBackClicked(); // Function ProjectD.PDAgentCreateUI.OnBackClicked // (Final|Native|Private) // @ game+0x17f3990
	void AgentSkillVisible(bool bShow); // Function ProjectD.PDAgentCreateUI.AgentSkillVisible // (Final|Native|Private) // @ game+0x17f37a0
};

// Class ProjectD.PDAgentInvenCustomTarget
// Size: 0x290 (Inherited: 0x288)
struct UPDAgentInvenCustomTarget : UPDUserWidget {
	struct UWidgetSwitcher* WS_SelectedState; // 0x288(0x08)
};

// Class ProjectD.PDAgentInvenPerkListItem
// Size: 0x2d8 (Inherited: 0x288)
struct UPDAgentInvenPerkListItem : UPDUserWidget {
	char pad_288[0x8]; // 0x288(0x08)
	struct UImage* Img_Bg; // 0x290(0x08)
	struct UImage* IMG_Item; // 0x298(0x08)
	struct UBorder* BD_ItemOutline; // 0x2a0(0x08)
	struct UPDButton* Btn_GoEquipPerk; // 0x2a8(0x08)
	char pad_2B0[0x28]; // 0x2b0(0x28)

	void GotoCharacterPerk(); // Function ProjectD.PDAgentInvenPerkListItem.GotoCharacterPerk // (Final|Native|Private) // @ game+0x17f3910
};

// Class ProjectD.PDAgentInventoryUI
// Size: 0x558 (Inherited: 0x288)
struct UPDAgentInventoryUI : UPDSceneBaseUI {
	struct UCanvasPanel* CP_AgentInventory; // 0x288(0x08)
	struct UVerticalBox* VB_CharacterSlots; // 0x290(0x08)
	struct UPDTabButtonGroup* AgentSlotTabBtnGroup; // 0x298(0x08)
	struct UImage* IMG_Siluet; // 0x2a0(0x08)
	struct UPDButton* Btn_GotoLobby; // 0x2a8(0x08)
	struct UPDTextBlock* T_ContractNum; // 0x2b0(0x08)
	struct UPDTextBlock* T_SelectedAgent_Name; // 0x2b8(0x08)
	struct UPDTextBlock* T_SelectedAgent_Nationality; // 0x2c0(0x08)
	struct UPDTextBlock* T_SelectedAgent_CodeName; // 0x2c8(0x08)
	struct UCanvasPanel* CP_AgentSign; // 0x2d0(0x08)
	struct UImage* IMG_AgentSign; // 0x2d8(0x08)
	struct UPDButton* Btn_QuickContract; // 0x2e0(0x08)
	struct UCanvasPanel* CP_PageInfo; // 0x2e8(0x08)
	struct UCanvasPanel* CP_SlotChanger_L; // 0x2f0(0x08)
	struct UCanvasPanel* CP_SlotChanger_R; // 0x2f8(0x08)
	struct UPDButton* Btn_SlotChanger_L; // 0x300(0x08)
	struct UPDButton* Btn_SlotChanger_R; // 0x308(0x08)
	struct UWidgetSwitcher* WS_SlotChanger_L; // 0x310(0x08)
	struct UWidgetSwitcher* WS_SlotChanger_R; // 0x318(0x08)
	struct UPDTextBlock* TB_CurPage; // 0x320(0x08)
	struct UPDTextBlock* TB_MaxPage; // 0x328(0x08)
	struct UCanvasPanel* CP_AgentPos; // 0x330(0x08)
	struct UCanvasPanel* CP_GamePos; // 0x338(0x08)
	struct UCanvasPanel* CP_WeaponPos; // 0x340(0x08)
	struct UPDAgentInvenCustomTarget* AICT_Agent; // 0x348(0x08)
	struct UPDAgentInvenCustomTarget* AICT_Game; // 0x350(0x08)
	struct UPDAgentInvenCustomTarget* AICT_Weapon; // 0x358(0x08)
	struct UCanvasPanel* CP_CustomAgent; // 0x360(0x08)
	struct UCanvasPanel* CP_CustomGame; // 0x368(0x08)
	struct UCanvasPanel* CP_CustomWeapon; // 0x370(0x08)
	struct UImage* IMG_New_Perk; // 0x378(0x08)
	struct UPDButton* Btn_CustomAgent_Perk; // 0x380(0x08)
	struct UImage* IMG_New_Look; // 0x388(0x08)
	struct UPDButton* Btn_CustomAgent_Look; // 0x390(0x08)
	struct UPDButton* Btn_CustomAgent_Voice; // 0x398(0x08)
	struct UPDButton* Btn_CustomGame; // 0x3a0(0x08)
	struct UPDButton* Btn_CustomWeapon; // 0x3a8(0x08)
	struct UCanvasPanel* CP_Rental_ToolTip; // 0x3b0(0x08)
	struct UCanvasPanel* CP_Title; // 0x3b8(0x08)
	struct UPDButton* Btn_Back; // 0x3c0(0x08)
	struct TMap<int32_t, struct FVector> CharacterMenuPositionMap; // 0x3c8(0x50)
	struct TMap<int32_t, struct FVector> GameMenuPositionMap; // 0x418(0x50)
	struct TMap<int32_t, struct FVector> WeaponMenuPositionMap; // 0x468(0x50)
	float RandomLineMin; // 0x4b8(0x04)
	float RandomLineMax; // 0x4bc(0x04)
	struct FLinearColor NormalLineColor; // 0x4c0(0x10)
	struct FLinearColor OverLineColor; // 0x4d0(0x10)
	struct UPDEquipPerkList* EquipPerkList; // 0x4e0(0x08)
	struct UCanvasPanel* CP_PerkList; // 0x4e8(0x08)
	char pad_4F0[0x68]; // 0x4f0(0x68)

	void SlotChangerRight(); // Function ProjectD.PDAgentInventoryUI.SlotChangerRight // (Final|Native|Private) // @ game+0x17f3bb0
	void SlotChangerLeft(); // Function ProjectD.PDAgentInventoryUI.SlotChangerLeft // (Final|Native|Private) // @ game+0x17f3b90
	void QuickContract(); // Function ProjectD.PDAgentInventoryUI.QuickContract // (Final|Native|Private) // @ game+0x17f3ab0
	void GotoLobby(); // Function ProjectD.PDAgentInventoryUI.GotoLobby // (Final|Native|Private) // @ game+0x17f3970
	void GotoGameDeco(); // Function ProjectD.PDAgentInventoryUI.GotoGameDeco // (Final|Native|Private) // @ game+0xfb2530
	void GotoCharacterWeapon(); // Function ProjectD.PDAgentInventoryUI.GotoCharacterWeapon // (Final|Native|Private) // @ game+0x17f3950
	void GotoCharacterVoice(); // Function ProjectD.PDAgentInventoryUI.GotoCharacterVoice // (Final|Native|Private) // @ game+0xfb2530
	void GotoCharacterPerk(); // Function ProjectD.PDAgentInventoryUI.GotoCharacterPerk // (Final|Native|Private) // @ game+0x17f3930
	void GotoCharacterDeco(); // Function ProjectD.PDAgentInventoryUI.GotoCharacterDeco // (Final|Native|Private) // @ game+0x17f38f0
	void CustomWeaponBtnOver(); // Function ProjectD.PDAgentInventoryUI.CustomWeaponBtnOver // (Final|Native|Private) // @ game+0x17f38d0
	void CustomWeaponBtnOut(); // Function ProjectD.PDAgentInventoryUI.CustomWeaponBtnOut // (Final|Native|Private) // @ game+0x17f38b0
	void CustomGameBtnOver(); // Function ProjectD.PDAgentInventoryUI.CustomGameBtnOver // (Final|Native|Private) // @ game+0x17f3890
	void CustomGameBtnOut(); // Function ProjectD.PDAgentInventoryUI.CustomGameBtnOut // (Final|Native|Private) // @ game+0x17f3870
	void CustomCharacterPerkBtnOver(); // Function ProjectD.PDAgentInventoryUI.CustomCharacterPerkBtnOver // (Final|Native|Private) // @ game+0x17f3850
	void CustomCharacterPerkBtnOut(); // Function ProjectD.PDAgentInventoryUI.CustomCharacterPerkBtnOut // (Final|Native|Private) // @ game+0x17f3830
};

// Class ProjectD.PDAgentLeptonInfo
// Size: 0x360 (Inherited: 0x290)
struct UPDAgentLeptonInfo : UPDIngameModeWidget {
	struct UImage* IMG_UniqueSlot_Perk1; // 0x290(0x08)
	struct UPDTextBlock* T_UniqueSlot_PerkName1; // 0x298(0x08)
	struct UPDTextBlock* T_UniqueSlot_PerkDesc1; // 0x2a0(0x08)
	struct UImage* IMG_UniqueSlot_Perk2; // 0x2a8(0x08)
	struct UPDTextBlock* T_UniqueSlot_PerkName2; // 0x2b0(0x08)
	struct UPDTextBlock* T_UniqueSlot_PerkDesc2; // 0x2b8(0x08)
	char pad_2C0[0x10]; // 0x2c0(0x10)
	struct UWidgetSwitcher* WS_EquipSlot1; // 0x2d0(0x08)
	struct UImage* IMG_EquipSlot_Perk1; // 0x2d8(0x08)
	struct UPDTextBlock* T_EquipSlot_PerkName1; // 0x2e0(0x08)
	struct UPDTextBlock* T_EquipSlot_PerkDesc1; // 0x2e8(0x08)
	struct UWidgetSwitcher* WS_EquipSlot2; // 0x2f0(0x08)
	struct UImage* IMG_EquipSlot_Perk2; // 0x2f8(0x08)
	struct UPDTextBlock* T_EquipSlot_PerkName2; // 0x300(0x08)
	struct UPDTextBlock* T_EquipSlot_PerkDesc2; // 0x308(0x08)
	struct UWidgetSwitcher* WS_EquipSlot3; // 0x310(0x08)
	struct UImage* IMG_EquipSlot_Perk3; // 0x318(0x08)
	struct UPDTextBlock* T_EquipSlot_PerkName3; // 0x320(0x08)
	struct UPDTextBlock* T_EquipSlot_PerkDesc3; // 0x328(0x08)
	char pad_330[0x10]; // 0x330(0x10)
	struct UImage* IMG_Signature; // 0x340(0x08)
	struct UPDTextBlock* T_Signature_Name; // 0x348(0x08)
	struct UPDTextBlock* T_Signature_Desc; // 0x350(0x08)
	struct UPDTextBlock* T_AgentName; // 0x358(0x08)
};

// Class ProjectD.PDAgentListItemData
// Size: 0x40 (Inherited: 0x28)
struct UPDAgentListItemData : UObject {
	char pad_28[0x18]; // 0x28(0x18)
};

// Class ProjectD.PDAgentListItemUI
// Size: 0x2d0 (Inherited: 0x288)
struct UPDAgentListItemUI : UPDUserWidget {
	char pad_288[0x8]; // 0x288(0x08)
	struct UImage* IMG_Face; // 0x290(0x08)
	struct UPDTextBlock* T_Name; // 0x298(0x08)
	struct UPDTextBlock* T_HoldingText; // 0x2a0(0x08)
	struct UPDTabButton* Btn_Select; // 0x2a8(0x08)
	struct UCanvasPanel* CP_Holding; // 0x2b0(0x08)
	struct UCanvasPanel* CP_Selected; // 0x2b8(0x08)
	struct UWidgetSwitcher* WS_LockState; // 0x2c0(0x08)
	char pad_2C8[0x8]; // 0x2c8(0x08)

	void OnUnSelectAgent(); // Function ProjectD.PDAgentListItemUI.OnUnSelectAgent // (Final|Native|Private) // @ game+0x17f3a90
	void OnUnHoverAgent(); // Function ProjectD.PDAgentListItemUI.OnUnHoverAgent // (Final|Native|Private) // @ game+0x17f3a70
	void OnSelectAgent(); // Function ProjectD.PDAgentListItemUI.OnSelectAgent // (Final|Native|Private) // @ game+0x17f3a50
	void OnHoverAgent(); // Function ProjectD.PDAgentListItemUI.OnHoverAgent // (Final|Native|Private) // @ game+0xfb2530
};

// Class ProjectD.PDAgentPresetListItemData
// Size: 0x48 (Inherited: 0x28)
struct UPDAgentPresetListItemData : UObject {
	char pad_28[0x20]; // 0x28(0x20)
};

// Class ProjectD.PDAgentPresetListItem
// Size: 0x2b8 (Inherited: 0x288)
struct UPDAgentPresetListItem : UPDUserWidget {
	char pad_288[0x8]; // 0x288(0x08)
	struct UBorder* BD_Normal; // 0x290(0x08)
	struct UBorder* BD_Hover; // 0x298(0x08)
	struct UBorder* BD_Select; // 0x2a0(0x08)
	struct UPDTextBlock* TB_Name; // 0x2a8(0x08)
	char pad_2B0[0x8]; // 0x2b0(0x08)
};

// Class ProjectD.PDAgentSkillListData
// Size: 0x60 (Inherited: 0x28)
struct UPDAgentSkillListData : UObject {
	char pad_28[0x38]; // 0x28(0x38)
};

// Class ProjectD.PDAgentSkillListUI
// Size: 0x2d8 (Inherited: 0x288)
struct UPDAgentSkillListUI : UPDUserWidget {
	char pad_288[0x8]; // 0x288(0x08)
	struct UImage* IMG_Icon; // 0x290(0x08)
	struct UPDButton* Btn_Skill; // 0x298(0x08)
	struct UPDTextBlock* TB_Name; // 0x2a0(0x08)
	struct UPDTextBlock* TB_Desc; // 0x2a8(0x08)
	char pad_2B0[0x28]; // 0x2b0(0x28)

	void OnUnHoverAgentSkill(); // Function ProjectD.PDAgentSkillListUI.OnUnHoverAgentSkill // (Final|Native|Private) // @ game+0xfb2530
	void OnHoverAgentSkill(); // Function ProjectD.PDAgentSkillListUI.OnHoverAgentSkill // (Final|Native|Private) // @ game+0xfb2530
};

// Class ProjectD.PDAgentSlotListItemUI
// Size: 0x318 (Inherited: 0x288)
struct UPDAgentSlotListItemUI : UPDUserWidget {
	char pad_288[0x8]; // 0x288(0x08)
	struct UImage* IMG_New; // 0x290(0x08)
	struct UWidgetSwitcher* WS_CharacterSlot; // 0x298(0x08)
	struct UWidgetSwitcher* WS_TagState; // 0x2a0(0x08)
	struct UPDButton* Btn_CreateButton; // 0x2a8(0x08)
	struct UPDButton* Btn_AgentSelectButton; // 0x2b0(0x08)
	struct UPDTextBlock* TB_CharacterName; // 0x2b8(0x08)
	struct UPDTextBlock* TB_CharacterAncestry; // 0x2c0(0x08)
	struct UPDTextBlock* TB_Level; // 0x2c8(0x08)
	struct UProgressBar* PB_Exp; // 0x2d0(0x08)
	struct UCanvasPanel* CP_CharacterSlot_OverSet; // 0x2d8(0x08)
	struct UCanvasPanel* CP_CharacterSlot_SelectedSet; // 0x2e0(0x08)
	struct UImage* IMG_CharacterSlot_Portrait; // 0x2e8(0x08)
	struct UCanvasPanel* CP_Empty_OverSet; // 0x2f0(0x08)
	struct UImage* IMG_Signature; // 0x2f8(0x08)
	struct UCanvasPanel* CP_OverDeco; // 0x300(0x08)
	struct UCanvasPanel* CP_ExpiredSet; // 0x308(0x08)
	char pad_310[0x8]; // 0x310(0x08)

	void OnUnHoverSelectAgent(); // Function ProjectD.PDAgentSlotListItemUI.OnUnHoverSelectAgent // (Final|Native|Private) // @ game+0x17f6b10
	void OnUnHoverCreateAgent(); // Function ProjectD.PDAgentSlotListItemUI.OnUnHoverCreateAgent // (Final|Native|Private) // @ game+0x17f6af0
	void OnHoverSelectAgent(); // Function ProjectD.PDAgentSlotListItemUI.OnHoverSelectAgent // (Final|Native|Private) // @ game+0x17f6ad0
	void OnHoverCreateAgent(); // Function ProjectD.PDAgentSlotListItemUI.OnHoverCreateAgent // (Final|Native|Private) // @ game+0x17f6ab0
	void OnClickSelectAgent(); // Function ProjectD.PDAgentSlotListItemUI.OnClickSelectAgent // (Final|Native|Private) // @ game+0x17f6a90
	void OnClickCreateAgent(); // Function ProjectD.PDAgentSlotListItemUI.OnClickCreateAgent // (Final|Native|Private) // @ game+0x17f6a70
};

// Class ProjectD.PDAimOffsetAnimInstance
// Size: 0x5f0 (Inherited: 0x5f0)
struct UPDAimOffsetAnimInstance : UPDPlayerAnimInstance {
};

// Class ProjectD.PDAkAmbientSound
// Size: 0x260 (Inherited: 0x260)
struct APDAkAmbientSound : AAkAmbientSound {
};

// Class ProjectD.PDAkEventAnimNotifyState
// Size: 0x50 (Inherited: 0x30)
struct UPDAkEventAnimNotifyState : UAnimNotifyState {
	bool bAutoStopBeginEventPlayingOnEnd; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UAkAudioEvent* EventOnBegin; // 0x38(0x08)
	struct UAkAudioEvent* EventOnEnd; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)
};

// Class ProjectD.PDAkEventLoadList
// Size: 0x38 (Inherited: 0x28)
struct UPDAkEventLoadList : UObject {
	struct TArray<struct UAkAudioEvent*> EventsToLoad; // 0x28(0x10)
};

// Class ProjectD.PDAkEventTriggerVolume
// Size: 0x2b8 (Inherited: 0x258)
struct APDAkEventTriggerVolume : ATriggerVolume {
	struct UPDAkComponent* PDAkComponent; // 0x258(0x08)
	struct TArray<struct UAkAudioEvent*> BeginOverlapAkEvents; // 0x260(0x10)
	struct TArray<struct UAkAudioEvent*> EndOverlapAkEvents; // 0x270(0x10)
	struct TArray<struct FPDAudioSwitch> Switches; // 0x280(0x10)
	struct FString StateGroup; // 0x290(0x10)
	struct FString State; // 0x2a0(0x10)
	bool StopWhenOwnerIsDestroyed; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
};

// Class ProjectD.PDAkReactor
// Size: 0x2d8 (Inherited: 0x220)
struct APDAkReactor : AActor {
	char pad_220[0xa8]; // 0x220(0xa8)
	struct USphereComponent* SphereComponent; // 0x2c8(0x08)
	struct UPDAkComponent* PDAkComponent; // 0x2d0(0x08)
};

// Class ProjectD.PDAnimDynamicsInstBase
// Size: 0x2b0 (Inherited: 0x280)
struct UPDAnimDynamicsInstBase : UPDAnimInstance {
	struct FVector WindVelocity; // 0x280(0x0c)
	bool UseAnimDynamics; // 0x28c(0x01)
	bool UseWind; // 0x28d(0x01)
	char pad_28E[0x2]; // 0x28e(0x02)
	float WindInterval; // 0x290(0x04)
	float MinWindForce; // 0x294(0x04)
	float MaxWindForce; // 0x298(0x04)
	char pad_29C[0x14]; // 0x29c(0x14)
};

// Class ProjectD.PDAnimNotifyState
// Size: 0xa0 (Inherited: 0x30)
struct UPDAnimNotifyState : UAnimNotifyState {
	struct FActionNotifyData BeginNotifyData; // 0x30(0x38)
	struct FActionNotifyData EndNotifyData; // 0x68(0x38)
};

// Class ProjectD.PDArmorGauge
// Size: 0x4d0 (Inherited: 0x288)
struct UPDArmorGauge : UPDUserWidget {
	struct FSlateBrush ArmorDisableBrush; // 0x288(0x88)
	struct FSlateBrush ArmorBackgroundBrush; // 0x310(0x88)
	struct FSlateBrush ArmorFillBrush; // 0x398(0x88)
	struct FSlateBrush ArmorMaxBrush; // 0x420(0x88)
	struct UCanvasPanel* CP_Normal; // 0x4a8(0x08)
	struct UHorizontalBox* HB_NormalBar; // 0x4b0(0x08)
	struct UCanvasPanel* CP_Juggernaut; // 0x4b8(0x08)
	struct UProgressBar* PB_Juggernaut; // 0x4c0(0x08)
	char pad_4C8[0x8]; // 0x4c8(0x08)
};

// Class ProjectD.PDArmorGaugeDetail
// Size: 0x580 (Inherited: 0x4d0)
struct UPDArmorGaugeDetail : UPDArmorGauge {
	struct UHorizontalBox* HB_NormalText; // 0x4d0(0x08)
	struct UPDMaskedText* MT_Juggernaut; // 0x4d8(0x08)
	struct FSlateBrush ArmorRecoverBrush; // 0x4e0(0x88)
	char pad_568[0x8]; // 0x568(0x08)
	struct UPDMaskedText* NormalTextClass; // 0x570(0x08)
	float Width; // 0x578(0x04)
	char pad_57C[0x4]; // 0x57c(0x04)
};

// Class ProjectD.PDAssetManager
// Size: 0x438 (Inherited: 0x438)
struct UPDAssetManager : UAssetManager {
};

// Class ProjectD.PDAsyncMeshActor
// Size: 0x230 (Inherited: 0x220)
struct APDAsyncMeshActor : AActor {
	struct UBoxComponent* BoxComponent; // 0x220(0x08)
	struct UPDAsyncMeshComponent* AsyncMeshComponent; // 0x228(0x08)
};

// Class ProjectD.PDAsyncMeshComponent
// Size: 0x4d0 (Inherited: 0x4a0)
struct UPDAsyncMeshComponent : UStaticMeshComponent {
	char pad_4A0[0x30]; // 0x4a0(0x30)

	void OnBeginOverlapEvent(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function ProjectD.PDAsyncMeshComponent.OnBeginOverlapEvent // (Final|Native|Private|HasOutParms) // @ game+0x17f6880
};

// Class ProjectD.PDHUDIconBaseUI
// Size: 0x2a0 (Inherited: 0x288)
struct UPDHUDIconBaseUI : UPDUserWidget {
	char pad_288[0x18]; // 0x288(0x18)
};

// Class ProjectD.PDAttackDamageIndicatorUI
// Size: 0x3d0 (Inherited: 0x2a0)
struct UPDAttackDamageIndicatorUI : UPDHUDIconBaseUI {
	struct UBorder* BD_OutArrow; // 0x2a0(0x08)
	struct UOverlay* O_Damage; // 0x2a8(0x08)
	struct UPDTextBlock* TB_TotalDamage; // 0x2b0(0x08)
	struct UPDTextBlock* TB_TotalArmorDamage; // 0x2b8(0x08)
	struct UPDTextBlock* TB_TotalGroggyDamage; // 0x2c0(0x08)
	struct FSlateColor WeakDamageColor; // 0x2c8(0x28)
	struct FSlateColor MediumDamageColor; // 0x2f0(0x28)
	struct FSlateColor StrongDamageColor; // 0x318(0x28)
	int32_t NormalDamageFontSize; // 0x340(0x04)
	char pad_344[0x4]; // 0x344(0x04)
	struct FSlateColor ArmorDamageColor; // 0x348(0x28)
	int32_t ArmorDamageFontSize; // 0x370(0x04)
	char pad_374[0x4]; // 0x374(0x04)
	struct FSlateColor GroggyDamageColor; // 0x378(0x28)
	int32_t GroggyDamageFontSize; // 0x3a0(0x04)
	struct FVector2D DamageRandBoxSize; // 0x3a4(0x08)
	struct FVector2D DamageOffsetSize; // 0x3ac(0x08)
	float DamageShowTime; // 0x3b4(0x04)
	char pad_3B8[0x18]; // 0x3b8(0x18)
};

// Class ProjectD.OcclusionTraceWorkObject
// Size: 0x90 (Inherited: 0x28)
struct UOcclusionTraceWorkObject : UObject {
	char pad_28[0x68]; // 0x28(0x68)
};

// Class ProjectD.PDBaseAnimNotify
// Size: 0x48 (Inherited: 0x38)
struct UPDBaseAnimNotify : UAnimNotify {
	char pad_38[0x10]; // 0x38(0x10)
};

// Class ProjectD.PDBaseModeUI
// Size: 0x430 (Inherited: 0x288)
struct UPDBaseModeUI : UPDUserWidget {
	struct UCanvasPanel* CP_GameModeLayer; // 0x288(0x08)
	struct TMap<enum class EGameModeWidget, struct UPDIngameModeWidget*> ModeWidgetMap; // 0x290(0x50)
	struct UPDPlayerInfoUI* PlayerInfo; // 0x2e0(0x08)
	struct UPDPerkUI* PerkUI; // 0x2e8(0x08)
	struct UPDPerkNotifyUI* PerkNotifyUI; // 0x2f0(0x08)
	struct UPDCoinInfoUI* CoinInfo; // 0x2f8(0x08)
	struct UPDCrossHairUI* CrossHair; // 0x300(0x08)
	struct UPDInteractionInfoUI* InteractionInfo; // 0x308(0x08)
	struct UPDDamageScreenIndicatorUI* DamageScreenIndicator; // 0x310(0x08)
	struct UPD3DIndicatorUI* ThreeDIndicator; // 0x318(0x08)
	struct UPDTargetScreenUI* TargetScreen; // 0x320(0x08)
	struct UPDGameTimeUI* GameTime; // 0x328(0x08)
	struct UPDIngameMapUI* IngameMap; // 0x330(0x08)
	struct UPDWorldMessageUI* WorldMessage; // 0x338(0x08)
	struct UPDBattleLogUI* BattleLog; // 0x340(0x08)
	struct UPDKillLogUI* KillLog; // 0x348(0x08)
	struct UPDPingLog* PingLog; // 0x350(0x08)
	struct UPDUnKnownMarket* UnKnownMarket; // 0x358(0x08)
	struct UPDTutorialQuestListUI* TutorialQuest; // 0x360(0x08)
	struct UPDSpectatorUI* SpectatorUI; // 0x368(0x08)
	struct UPDRingCommandUI* RingCommand; // 0x370(0x08)
	struct UPDMarkerGuide* MarkerGuide; // 0x378(0x08)
	struct UPDStateGaugeUI* StateGauge; // 0x380(0x08)
	struct UPDAgentLeptonInfo* AgentLeptonInfo; // 0x388(0x08)
	struct UPDPersonalMissionUI* PersonalMissionUI; // 0x390(0x08)
	struct UPDChattingUI* Chatting; // 0x398(0x08)
	struct UCanvasPanel* CP_ChatLayer; // 0x3a0(0x08)
	struct UCanvasPanel* CP_CCTVLayer; // 0x3a8(0x08)
	struct UCanvasPanel* CP_IntroCinemaLayer; // 0x3b0(0x08)
	struct UCanvasPanel* CP_SubtitleLayer; // 0x3b8(0x08)
	struct UPDIngameVideoUI* IngameVideo; // 0x3c0(0x08)
	struct UPDSubtitleUI* SubtitleUI; // 0x3c8(0x08)
	struct UCanvasPanel* CP_EscMenu; // 0x3d0(0x08)
	struct UPDEscMenuUI* EscMenu; // 0x3d8(0x08)
	struct UCanvasPanel* CP_BreakIntoLayer; // 0x3e0(0x08)
	struct UPDBreakIntoUI* BreakInto; // 0x3e8(0x08)
	struct UPDRoundWaitUI* RoundWait; // 0x3f0(0x08)
	struct UPDPlayerSettingUI* PlayerSetting; // 0x3f8(0x08)
	char pad_400[0x30]; // 0x400(0x30)
};

// Class ProjectD.PDBaseUI
// Size: 0x410 (Inherited: 0x288)
struct UPDBaseUI : UPDUserWidget {
	struct UCanvasPanel* CP_SceneLayer; // 0x288(0x08)
	struct UCanvasPanel* CP_PopupLayer; // 0x290(0x08)
	struct UCanvasPanel* CP_GlobalPopupLayer; // 0x298(0x08)
	struct UCanvasPanel* CP_TopLayer; // 0x2a0(0x08)
	struct UCanvasPanel* CP_Blind; // 0x2a8(0x08)
	struct UImage* IMG_Blind; // 0x2b0(0x08)
	struct UCanvasPanel* CP_DevLayer; // 0x2b8(0x08)
	struct UPDMatchingUI* MatchingUI; // 0x2c0(0x08)
	struct UPDOutGameTopMenu* OutGameTopMenu; // 0x2c8(0x08)
	struct UPDCustomRoomUI* CustomRoom; // 0x2d0(0x08)
	struct UPDChattingUI* ChattingUI; // 0x2d8(0x08)
	struct TMap<enum class EUIName, struct UObject*> UIClassMap; // 0x2e0(0x50)
	struct TMap<enum class EUIName, struct UPDSceneBaseUI*> SceneUIWidgetMap; // 0x330(0x50)
	struct UPDSystemMessageUI* SystemMessageUIWidget; // 0x380(0x08)
	struct UPDSceneBaseUI* MatchSceneUI; // 0x388(0x08)
	char pad_390[0x8]; // 0x390(0x08)
	struct TArray<struct UPDPopupBaseUI*> PopupUIStack; // 0x398(0x10)
	struct TArray<struct UPDPopupBaseUI*> GlobalPopupUIStack; // 0x3a8(0x10)
	struct UPDTextBlock* Dev_Text; // 0x3b8(0x08)
	struct UPDTextBlock* Connect_State_Text; // 0x3c0(0x08)
	struct UPDTextBlock* TB_FPS; // 0x3c8(0x08)
	struct UPDTextBlock* TB_BuildInfo; // 0x3d0(0x08)
	struct UPDTextBlock* TB_ConnectInfo; // 0x3d8(0x08)
	struct UPDTextBlock* TB_MatchID; // 0x3e0(0x08)
	struct UPDTextBlock* TB_Ping; // 0x3e8(0x08)
	struct UImage* IMG_Connect; // 0x3f0(0x08)
	struct UPDTextBlock* TB_Graphics; // 0x3f8(0x08)
	char pad_400[0x10]; // 0x400(0x10)
};

// Class ProjectD.PDBattleLogModule
// Size: 0x2a8 (Inherited: 0x288)
struct UPDBattleLogModule : UPDUserWidget {
	struct UPDTextBlock* TB_Log; // 0x288(0x08)
	struct UBorder* BD_Bg; // 0x290(0x08)
	char pad_298[0x10]; // 0x298(0x10)
};

// Class ProjectD.PDBattleLogUI
// Size: 0x300 (Inherited: 0x290)
struct UPDBattleLogUI : UPDIngameModeWidget {
	char pad_290[0x8]; // 0x290(0x08)
	struct UVerticalBox* VB_EventLog; // 0x298(0x08)
	enum class EHorizontalAlignment LogHAlign; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	struct FMargin LogPadding; // 0x2a4(0x10)
	bool InvertToAdd; // 0x2b4(0x01)
	char pad_2B5[0x3]; // 0x2b5(0x03)
	int32_t MaxLogCount; // 0x2b8(0x04)
	float DefaultDuration; // 0x2bc(0x04)
	bool AutoRemove; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct UVerticalBox* VB_WarningList; // 0x2c8(0x08)
	struct UVerticalBox* VB_FeedbackLog; // 0x2d0(0x08)
	enum class EHorizontalAlignment FeedbackHAlign; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	struct FMargin FeedbackPadding; // 0x2dc(0x10)
	int32_t MaxFeedbackCount; // 0x2ec(0x04)
	float DefaultFeedbackDuration; // 0x2f0(0x04)
	bool bAutoRemoveFeedback; // 0x2f4(0x01)
	bool bReverseToAddFeedback; // 0x2f5(0x01)
	char pad_2F6[0x2]; // 0x2f6(0x02)
	struct UPDNotificationAlert* AlertWidget; // 0x2f8(0x08)
};

// Class ProjectD.PDBreakableObject
// Size: 0x388 (Inherited: 0x220)
struct APDBreakableObject : AActor {
	char pad_220[0x68]; // 0x220(0x68)
	struct UChildActorComponent* SwitchActor; // 0x288(0x08)
	struct USkeletalMeshComponent* AnimMesh; // 0x290(0x08)
	struct TArray<enum class EDamageType> EffectiveDamages; // 0x298(0x10)
	int32_t StartHP; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct FString Start_BaseSocket; // 0x2b0(0x10)
	int32_t Start_BaseEffectID; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct FString DestructSound; // 0x2c8(0x10)
	float Middle_Time; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct FString Middle_ResultSocket; // 0x2e0(0x10)
	int32_t Middle_ResultEffectID; // 0x2f0(0x04)
	float Middle_Damage; // 0x2f4(0x04)
	float End_Time; // 0x2f8(0x04)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct UStaticMeshComponent* BaseMesh; // 0x300(0x08)
	struct UStaticMeshComponent* ResultMesh; // 0x308(0x08)
	struct USphereComponent* DamageArea; // 0x310(0x08)
	char pad_318[0x70]; // 0x318(0x70)
};

// Class ProjectD.PDBreakIntoPlayerItem
// Size: 0x2b8 (Inherited: 0x288)
struct UPDBreakIntoPlayerItem : UPDUserWidget {
	struct UImage* IMG_PlayerPic; // 0x288(0x08)
	struct UImage* IMG_SlotBg_L; // 0x290(0x08)
	struct UImage* IMG_SlotBg_R; // 0x298(0x08)
	struct UImage* IMG_Divider; // 0x2a0(0x08)
	struct UImage* IMG_SlotOutline; // 0x2a8(0x08)
	struct UPDTextBlock* T_PlayerName; // 0x2b0(0x08)
};

// Class ProjectD.PDBreakIntoUI
// Size: 0x380 (Inherited: 0x290)
struct UPDBreakIntoUI : UPDIngameModeWidget {
	struct UPDTextBlock* TB_PlayTimeMin; // 0x290(0x08)
	struct UPDTextBlock* TB_PlayTimeSec; // 0x298(0x08)
	struct UPDTextBlock* TB_Round; // 0x2a0(0x08)
	struct UPDGameMapModule* GameMap; // 0x2a8(0x08)
	struct UImage* IMG_TeamBG_Ally; // 0x2b0(0x08)
	struct UPDTextBlock* TB_TeamName_Ally; // 0x2b8(0x08)
	struct UImage* IMG_TeamBG_Enemy; // 0x2c0(0x08)
	struct UPDTextBlock* TB_TeamName_Enemy; // 0x2c8(0x08)
	struct UPDBreakIntoPlayerItem* AllyPlayer_01; // 0x2d0(0x08)
	struct UPDBreakIntoPlayerItem* AllyPlayer_02; // 0x2d8(0x08)
	struct UPDBreakIntoPlayerItem* AllyPlayer_03; // 0x2e0(0x08)
	struct UPDBreakIntoPlayerItem* AllyPlayer_04; // 0x2e8(0x08)
	struct UPDBreakIntoPlayerItem* AllyPlayer_05; // 0x2f0(0x08)
	struct UPDBreakIntoPlayerItem* EnemyPlayer_01; // 0x2f8(0x08)
	struct UPDBreakIntoPlayerItem* EnemyPlayer_02; // 0x300(0x08)
	struct UPDBreakIntoPlayerItem* EnemyPlayer_03; // 0x308(0x08)
	struct UPDBreakIntoPlayerItem* EnemyPlayer_04; // 0x310(0x08)
	struct UPDBreakIntoPlayerItem* EnemyPlayer_05; // 0x318(0x08)
	struct UPDStatusBoardRoundResultItem* RoundResultItem_2; // 0x320(0x08)
	struct UPDStatusBoardRoundResultItem* RoundResultItem_3; // 0x328(0x08)
	struct UPDStatusBoardRoundResultItem* RoundResultItem_4; // 0x330(0x08)
	struct UPDStatusBoardRoundResultItem* RoundResultItem_5; // 0x338(0x08)
	struct UPDStatusBoardRoundResultItem* RoundResultItem_6; // 0x340(0x08)
	struct UPDStatusBoardRoundResultItem* RoundResultItem_7; // 0x348(0x08)
	struct UPDStatusBoardRoundResultItem* RoundResultItem_8; // 0x350(0x08)
	struct UPDStatusBoardRoundResultItem* RoundResultItem_9; // 0x358(0x08)
	struct UPDStatusBoardRoundResultItem* RoundResultItem_10; // 0x360(0x08)
	struct TArray<struct UPDStatusBoardRoundResultItem*> RoundResultList; // 0x368(0x10)
	char pad_378[0x8]; // 0x378(0x08)
};

// Class ProjectD.PDBrickListItemData
// Size: 0x58 (Inherited: 0x28)
struct UPDBrickListItemData : UObject {
	char pad_28[0x30]; // 0x28(0x30)
};

// Class ProjectD.PDBrickListItem
// Size: 0x2b8 (Inherited: 0x288)
struct UPDBrickListItem : UPDUserWidget {
	char pad_288[0x8]; // 0x288(0x08)
	struct UImage* IMG_Brick; // 0x290(0x08)
	struct UPDTextBlock* TB_Title; // 0x298(0x08)
	struct UBorder* BD_ItemOutline; // 0x2a0(0x08)
	struct UBorder* BD_ItemOverOutline; // 0x2a8(0x08)
	struct UBorder* BD_ItemSelOutline; // 0x2b0(0x08)
};

// Class ProjectD.PDButton
// Size: 0xc50 (Inherited: 0x288)
struct UPDButton : UPDUserWidget {
	struct UPDCustomButton* Button; // 0x288(0x08)
	struct UPDTextBlock* Text; // 0x290(0x08)
	struct UBorder* BD_Outline; // 0x298(0x08)
	struct UWidgetSwitcher* WS_IMGState; // 0x2a0(0x08)
	struct UImage* IMG_Normal; // 0x2a8(0x08)
	struct UImage* IMG_Hover; // 0x2b0(0x08)
	struct UImage* IMG_Press; // 0x2b8(0x08)
	struct UImage* IMG_Disable; // 0x2c0(0x08)
	struct UImage* IMG_Ani1; // 0x2c8(0x08)
	struct UImage* IMG_Ani2; // 0x2d0(0x08)
	struct TArray<struct UImage*> AniImages; // 0x2d8(0x10)
	struct FButtonStyle ButtonStyle; // 0x2e8(0x278)
	struct FText InText; // 0x560(0x18)
	struct FSlateFontInfo Font; // 0x578(0x50)
	struct FMargin TextMargin; // 0x5c8(0x10)
	enum class ETextJustify TextJustfication; // 0x5d8(0x01)
	char pad_5D9[0x7]; // 0x5d9(0x07)
	struct FString NormalAniName; // 0x5e0(0x10)
	bool IsLoopNormalAni; // 0x5f0(0x01)
	char pad_5F1[0x7]; // 0x5f1(0x07)
	struct FString HoverAniName; // 0x5f8(0x10)
	bool IsLoopHoverAni; // 0x608(0x01)
	char pad_609[0x7]; // 0x609(0x07)
	struct TArray<struct FSlateBrush> AniImageBrushs; // 0x610(0x10)
	struct UAkAudioEvent* HoverSound; // 0x620(0x08)
	struct UAkAudioEvent* ClickSound; // 0x628(0x08)
	char pad_630[0x8]; // 0x630(0x08)
	struct FSlateBrush ButtonNormalStyle; // 0x638(0x88)
	struct FSlateBrush ButtonHoverStyle; // 0x6c0(0x88)
	struct FSlateBrush ButtonPressStyle; // 0x748(0x88)
	struct FSlateBrush ButtonDisableStyle; // 0x7d0(0x88)
	bool UseNormalOutline; // 0x858(0x01)
	bool UseHoverOutline; // 0x859(0x01)
	bool UseClickOutline; // 0x85a(0x01)
	bool UseDisableOutline; // 0x85b(0x01)
	char pad_85C[0x4]; // 0x85c(0x04)
	struct FPDButtonOutLine NormalOutLineStyle; // 0x860(0xc8)
	struct FPDButtonOutLine HoverOutLineStyle; // 0x928(0xc8)
	struct FPDButtonOutLine ClickOutLineStyle; // 0x9f0(0xc8)
	struct FPDButtonOutLine DisableOutLineStyle; // 0xab8(0xc8)
	struct FSlateColor NormalTextColor; // 0xb80(0x28)
	struct FSlateColor HoverTextColor; // 0xba8(0x28)
	struct FSlateColor PressTextColor; // 0xbd0(0x28)
	struct FSlateColor DisableTextColor; // 0xbf8(0x28)
	char pad_C20[0x30]; // 0xc20(0x30)

	void OnUnHovered(); // Function ProjectD.PDButton.OnUnHovered // (Native|Public) // @ game+0x17fc150
	void OnReleased(); // Function ProjectD.PDButton.OnReleased // (Native|Public) // @ game+0x17fc130
	void OnHovered(); // Function ProjectD.PDButton.OnHovered // (Native|Public) // @ game+0x17fc110
	void OnClicked(); // Function ProjectD.PDButton.OnClicked // (Native|Public) // @ game+0x17fc0f0
};

// Class ProjectD.PDCameraShakeNormal
// Size: 0x160 (Inherited: 0x160)
struct UPDCameraShakeNormal : UCameraShake {
};

// Class ProjectD.PDCamSpline
// Size: 0x250 (Inherited: 0x220)
struct APDCamSpline : AActor {
	struct UPDSplineComponent* SplineComp; // 0x220(0x08)
	int32_t SplineID; // 0x228(0x04)
	int32_t FOVStart; // 0x22c(0x04)
	int32_t FOVEnd; // 0x230(0x04)
	bool ApplyRotation; // 0x234(0x01)
	char pad_235[0x3]; // 0x235(0x03)
	struct FRotator TargetRotation; // 0x238(0x0c)
	char pad_244[0x4]; // 0x244(0x04)
	struct AActor* LookAtTarget; // 0x248(0x08)
};

// Class ProjectD.PDCCTVUI
// Size: 0x2a8 (Inherited: 0x288)
struct UPDCCTVUI : UPDUserWidget {
	struct UPDTextBlock* T_Desc_01; // 0x288(0x08)
	struct UPDTextBlock* T_Desc_02; // 0x290(0x08)
	struct UPDTextBlock* T_Desc_03; // 0x298(0x08)
	struct UPDTextBlock* T_Desc_04; // 0x2a0(0x08)
};

// Class ProjectD.PDChangeLocoTypeAnimNotifyState
// Size: 0x30 (Inherited: 0x30)
struct UPDChangeLocoTypeAnimNotifyState : UAnimNotifyState {
};

// Class ProjectD.PDCharacterEntity
// Size: 0x7f0 (Inherited: 0x4c0)
struct APDCharacterEntity : ACharacter {
	char pad_4C0[0x330]; // 0x4c0(0x330)
};

// Class ProjectD.PDTimelineBaseComponent
// Size: 0xb0 (Inherited: 0xb0)
struct UPDTimelineBaseComponent : UActorComponent {
};

// Class ProjectD.PDCharacterTimelineComponent
// Size: 0xb0 (Inherited: 0xb0)
struct UPDCharacterTimelineComponent : UPDTimelineBaseComponent {
};

// Class ProjectD.PDChattingUI
// Size: 0x350 (Inherited: 0x288)
struct UPDChattingUI : UPDUserWidget {
	struct UImage* IMG_ChatBg; // 0x288(0x08)
	struct UScrollBox* SB_Chatting; // 0x290(0x08)
	struct UBorder* BD_BlockArea; // 0x298(0x08)
	struct UCanvasPanel* CP_ChatArea; // 0x2a0(0x08)
	struct UCanvasPanel* CP_InputType; // 0x2a8(0x08)
	struct UCanvasPanel* CP_ChatImg; // 0x2b0(0x08)
	struct URichTextBlock* RTB_ChatType; // 0x2b8(0x08)
	struct UEditableText* ET_Chatting; // 0x2c0(0x08)
	struct URichTextBlock* RTB_CopyTextBlock; // 0x2c8(0x08)
	struct UCanvasPanel* CP_ChattingHelp; // 0x2d0(0x08)
	struct UPDButton* Btn_WhisperChat; // 0x2d8(0x08)
	struct UPDButton* Btn_ReplyChat; // 0x2e0(0x08)
	struct UPDButton* Btn_TeamChat; // 0x2e8(0x08)
	struct UPDButton* Btn_SquadChat; // 0x2f0(0x08)
	struct UPDButton* Btn_ClanChat; // 0x2f8(0x08)
	struct UPDButton* Btn_Hide; // 0x300(0x08)
	struct UPDCustomSlider* SD_Slider; // 0x308(0x08)
	char pad_310[0x40]; // 0x310(0x40)

	void SendChatMessage(struct FText& Text, enum class ETextCommit CommitMethod); // Function ProjectD.PDChattingUI.SendChatMessage // (Final|Native|Public|HasOutParms) // @ game+0x1801050
	void OnValueChanged(float InValue); // Function ProjectD.PDChattingUI.OnValueChanged // (Final|Native|Private) // @ game+0x1800820
	void OnClickWhisperChatBtn(); // Function ProjectD.PDChattingUI.OnClickWhisperChatBtn // (Final|Native|Private) // @ game+0x17ffe40
	void OnClickTeamChatBtn(); // Function ProjectD.PDChattingUI.OnClickTeamChatBtn // (Final|Native|Private) // @ game+0x17ffe40
	void OnClickSquadChatBtn(); // Function ProjectD.PDChattingUI.OnClickSquadChatBtn // (Final|Native|Private) // @ game+0x17ffe40
	void OnClickReplyChatBtn(); // Function ProjectD.PDChattingUI.OnClickReplyChatBtn // (Final|Native|Private) // @ game+0x17ffe40
	void OnClickHideBtn(); // Function ProjectD.PDChattingUI.OnClickHideBtn // (Final|Native|Private) // @ game+0x17ffe40
	void OnClickClanChatBtn(); // Function ProjectD.PDChattingUI.OnClickClanChatBtn // (Final|Native|Private) // @ game+0x17ffe40
	void ChangeText(struct FText& InText); // Function ProjectD.PDChattingUI.ChangeText // (Final|Native|Public|HasOutParms) // @ game+0x17ff2d0
};

// Class ProjectD.PDCheatManager
// Size: 0x90 (Inherited: 0x78)
struct UPDCheatManager : UCheatManager {
	char pad_78[0x18]; // 0x78(0x18)

	void WeaponSocketTest(); // Function ProjectD.PDCheatManager.WeaponSocketTest // (Final|Exec|Native|Public) // @ game+0xfb2530
	void TestCameraShakeAnim(int32_t ShakeIndex, float ShakeScale); // Function ProjectD.PDCheatManager.TestCameraShakeAnim // (Final|Exec|Native|Public) // @ game+0x1801b90
	void TestCameraShake(int32_t ShakeIndex, float ShakeScale, float TimerValue); // Function ProjectD.PDCheatManager.TestCameraShake // (Final|Exec|Native|Public) // @ game+0x1801a90
	void TeleportCharacter(float fPosY); // Function ProjectD.PDCheatManager.TeleportCharacter // (Final|Exec|Native|Public) // @ game+0x1801a10
	void SunFlower(); // Function ProjectD.PDCheatManager.SunFlower // (Final|Exec|Native|Public) // @ game+0x18019f0
	void SuicideHit(); // Function ProjectD.PDCheatManager.SuicideHit // (Final|Exec|Native|Public) // @ game+0x18019d0
	void StopLoopSound(); // Function ProjectD.PDCheatManager.StopLoopSound // (Final|Exec|Native|Public) // @ game+0x18019b0
	void SpawnItemAll(); // Function ProjectD.PDCheatManager.SpawnItemAll // (Final|Exec|Native|Public) // @ game+0xfb2530
	void SpawnItem(uint32_t ItemDBIndex, int32_t ItemCount); // Function ProjectD.PDCheatManager.SpawnItem // (Final|Exec|Native|Public) // @ game+0x18018f0
	void ShowSlopeAngle(); // Function ProjectD.PDCheatManager.ShowSlopeAngle // (Final|Exec|Native|Public) // @ game+0x18018d0
	void ShowRoundCoinRewardBoard(int32_t AddCoinValue, bool bShow); // Function ProjectD.PDCheatManager.ShowRoundCoinRewardBoard // (Final|Exec|Native|Public) // @ game+0x1801810
	void ShowOcclusionDebugLine(bool bShow); // Function ProjectD.PDCheatManager.ShowOcclusionDebugLine // (Final|Exec|Native|Public) // @ game+0x1801780
	void ShowMOA(); // Function ProjectD.PDCheatManager.ShowMOA // (Final|Exec|Native|Public) // @ game+0x1801760
	void ShowIngameWidget(int32_t WidgetCode, bool bShow); // Function ProjectD.PDCheatManager.ShowIngameWidget // (Final|Exec|Native|Public) // @ game+0x18016a0
	void ShowEffect(int32_t Index, float Distance); // Function ProjectD.PDCheatManager.ShowEffect // (Final|Exec|Native|Public) // @ game+0x18015d0
	void ShowDecal(int32_t Index); // Function ProjectD.PDCheatManager.ShowDecal // (Final|Exec|Native|Public) // @ game+0x1801550
	void ShowDebugClimb(); // Function ProjectD.PDCheatManager.ShowDebugClimb // (Final|Exec|Native|Public) // @ game+0x1801530
	void ShowDebugAudio(bool bShow); // Function ProjectD.PDCheatManager.ShowDebugAudio // (Final|Exec|Native|Public) // @ game+0x18014a0
	void ShowAllIngameWidget(bool bShow); // Function ProjectD.PDCheatManager.ShowAllIngameWidget // (Final|Exec|Native|Public) // @ game+0x1801410
	void SetIngameUIScale(float InScale); // Function ProjectD.PDCheatManager.SetIngameUIScale // (Final|Exec|Native|Public) // @ game+0x1801390
	void SetCharacterURODists(float D1, float D2, float D3); // Function ProjectD.PDCheatManager.SetCharacterURODists // (Final|Exec|Native|Public) // @ game+0x1801280
	void SetAiming(struct FString AimingType); // Function ProjectD.PDCheatManager.SetAiming // (Final|Exec|Native|Public) // @ game+0x1801180
	void RequestPing(); // Function ProjectD.PDCheatManager.RequestPing // (Final|Exec|Native|Public) // @ game+0xfb2530
	void ReloadScript(); // Function ProjectD.PDCheatManager.ReloadScript // (Final|Exec|Native|Public) // @ game+0x1801030
	void ReloadCameraSettings(); // Function ProjectD.PDCheatManager.ReloadCameraSettings // (Final|Exec|Native|Public) // @ game+0x1801010
	void ProjectileCollisionCheck(); // Function ProjectD.PDCheatManager.ProjectileCollisionCheck // (Final|Exec|Native|Public) // @ game+0x1800ff0
	void ProfileClient10Sec(); // Function ProjectD.PDCheatManager.ProfileClient10Sec // (Final|Exec|Native|Public) // @ game+0xfb2530
	void PlaySound(struct FString soundText, float Distance); // Function ProjectD.PDCheatManager.PlaySound // (Final|Exec|Native|Public) // @ game+0x1800ec0
	void PlayLoopSound(struct FString soundText); // Function ProjectD.PDCheatManager.PlayLoopSound // (Final|Exec|Native|Public) // @ game+0x1800dc0
	void PlayIntro(int32_t PcID, float Time, int32_t InSpawnIndex); // Function ProjectD.PDCheatManager.PlayIntro // (Final|Exec|Native|Public) // @ game+0x1800cc0
	void PlayDestroy(); // Function ProjectD.PDCheatManager.PlayDestroy // (Final|Exec|Native|Public) // @ game+0x1800ca0
	void PlayCCTV(int32_t PcID, float Time, int32_t TeamType); // Function ProjectD.PDCheatManager.PlayCCTV // (Final|Exec|Native|Public) // @ game+0x1800ba0
	void PDUnloadSubLevel(struct FString SubLevelName); // Function ProjectD.PDCheatManager.PDUnloadSubLevel // (Final|Exec|Native|Public) // @ game+0x1800aa0
	void PDNextViewTarget(); // Function ProjectD.PDCheatManager.PDNextViewTarget // (Final|Exec|Native|Public) // @ game+0x1800a80
	void PDLoadSubLevel(struct FString SubLevelName); // Function ProjectD.PDCheatManager.PDLoadSubLevel // (Final|Exec|Native|Public) // @ game+0x1800980
	void PDDrawLine(struct FVector Start, struct FVector End); // Function ProjectD.PDCheatManager.PDDrawLine // (Final|Exec|Native|Public|HasDefaults) // @ game+0x18008a0
	void OnDeathMyPlayer(); // Function ProjectD.PDCheatManager.OnDeathMyPlayer // (Final|Exec|Native|Public) // @ game+0xfb2530
	void OccDebugLine(bool bOn); // Function ProjectD.PDCheatManager.OccDebugLine // (Final|Exec|Native|Public) // @ game+0x17ffbb0
	void MakeCrash(); // Function ProjectD.PDCheatManager.MakeCrash // (Final|Exec|Native|Public) // @ game+0x17ffb90
	void IndefiniteStamina(bool bEnable); // Function ProjectD.PDCheatManager.IndefiniteStamina // (Final|Exec|Native|Public) // @ game+0x17ffb00
	void HitTest(struct FString Hit, struct FString Type, struct FString Direction); // Function ProjectD.PDCheatManager.HitTest // (Final|Exec|Native|Public) // @ game+0x17ff8d0
	void GrazeTest(struct FString GrazeType, int32_t Index); // Function ProjectD.PDCheatManager.GrazeTest // (Final|Exec|Native|Public) // @ game+0x17ff7a0
	void GetHitParts(); // Function ProjectD.PDCheatManager.GetHitParts // (Final|Exec|Native|Public) // @ game+0x17ff780
	void GetCollider(); // Function ProjectD.PDCheatManager.GetCollider // (Final|Exec|Native|Public) // @ game+0x17ff760
	void FenceShow(); // Function ProjectD.PDCheatManager.FenceShow // (Final|Exec|Native|Public) // @ game+0xfb2530
	void DrawDebugSkillZone(bool bDraw); // Function ProjectD.PDCheatManager.DrawDebugSkillZone // (Final|Exec|Native|Public) // @ game+0x17f37a0
	void DebugParkour(struct FString ParkourType, bool bEnable); // Function ProjectD.PDCheatManager.DebugParkour // (Final|Exec|Native|Public) // @ game+0x17ff620
	void DebugMeleeDraw(int32_t DrawMode); // Function ProjectD.PDCheatManager.DebugMeleeDraw // (Final|Exec|Native|Public) // @ game+0x17ff3b0
	void DebugMeleeClear(); // Function ProjectD.PDCheatManager.DebugMeleeClear // (Final|Exec|Native|Public) // @ game+0xfb2530
	void DebugMeleeAttack(int32_t AttackType); // Function ProjectD.PDCheatManager.DebugMeleeAttack // (Final|Exec|Native|Public) // @ game+0x17ff3b0
	void DebugExec(int32_t AnimIndex); // Function ProjectD.PDCheatManager.DebugExec // (Final|Exec|Native|Public) // @ game+0x17ff5a0
	void DebugCameraEvent(bool bControllerRecoil, bool bAnimRecoil, bool bCameraShake, bool bCameraFOV); // Function ProjectD.PDCheatManager.DebugCameraEvent // (Final|Exec|Native|Public) // @ game+0x17ff430
	void CompleteUnloadSubLevel(int32_t LinkID); // Function ProjectD.PDCheatManager.CompleteUnloadSubLevel // (Final|Native|Public) // @ game+0x17ff3b0
	void CompleteLoadSubLevel(int32_t LinkID); // Function ProjectD.PDCheatManager.CompleteLoadSubLevel // (Final|Native|Public) // @ game+0x17ff3b0
	void ChangeMuzzleEffect(int32_t Index, float FireRate); // Function ProjectD.PDCheatManager.ChangeMuzzleEffect // (Final|Exec|Native|Public) // @ game+0x17ff200
	void ChangeListener(); // Function ProjectD.PDCheatManager.ChangeListener // (Final|Exec|Native|Public) // @ game+0x17ff1e0
	void ChamberBullet(); // Function ProjectD.PDCheatManager.ChamberBullet // (Final|Exec|Native|Public) // @ game+0xfb2530
	void BuyJuggernaut(); // Function ProjectD.PDCheatManager.BuyJuggernaut // (Final|Exec|Native|Public) // @ game+0x17ff1c0
	void BombInstallStart(); // Function ProjectD.PDCheatManager.BombInstallStart // (Final|Exec|Native|Public) // @ game+0x17ff1a0
	void BombInstallFail(); // Function ProjectD.PDCheatManager.BombInstallFail // (Final|Exec|Native|Public) // @ game+0x17ff180
	void BombInstallEndSuccess(); // Function ProjectD.PDCheatManager.BombInstallEndSuccess // (Final|Exec|Native|Public) // @ game+0x17ff160
	void BombDeActiveStart(); // Function ProjectD.PDCheatManager.BombDeActiveStart // (Final|Exec|Native|Public) // @ game+0x17ff140
	void BombDeActiveFail(); // Function ProjectD.PDCheatManager.BombDeActiveFail // (Final|Exec|Native|Public) // @ game+0x17ff120
	void BombDeActiveEndSuccess(); // Function ProjectD.PDCheatManager.BombDeActiveEndSuccess // (Final|Exec|Native|Public) // @ game+0x17ff100
	void AutoMove(struct FString MoveType, bool bMove); // Function ProjectD.PDCheatManager.AutoMove // (Final|Exec|Native|Public) // @ game+0x17fefc0
	void ArrowShot(); // Function ProjectD.PDCheatManager.ArrowShot // (Final|Exec|Native|Public) // @ game+0x17fefa0
	void AllPlayerSuicideHit(int32_t weaponEntityId); // Function ProjectD.PDCheatManager.AllPlayerSuicideHit // (Final|Exec|Native|Public) // @ game+0x17fef20
	void AddCoinList(int32_t ChangeType, int32_t ChagneValue); // Function ProjectD.PDCheatManager.AddCoinList // (Final|Exec|Native|Public) // @ game+0x17fee60
	void AddAttack(); // Function ProjectD.PDCheatManager.AddAttack // (Final|Exec|Native|Public) // @ game+0x17fee40
};

// Class ProjectD.PDCheckBox
// Size: 0x298 (Inherited: 0x288)
struct UPDCheckBox : UPDUserWidget {
	struct UCheckBox* CheckBox; // 0x288(0x08)
	struct UAkAudioEvent* HoverSound; // 0x290(0x08)
};

// Class ProjectD.PDCheerMarkFx
// Size: 0x298 (Inherited: 0x288)
struct UPDCheerMarkFx : UPDUserWidget {
	struct UWidgetSwitcher* WS_Cheer; // 0x288(0x08)
	char pad_290[0x8]; // 0x290(0x08)
};

// Class ProjectD.PDChunkInfo
// Size: 0x30 (Inherited: 0x30)
struct UPDChunkInfo : UPrimaryDataAsset {
};

// Class ProjectD.PDCircleProgress
// Size: 0x318 (Inherited: 0x288)
struct UPDCircleProgress : UPDUserWidget {
	struct UImage* Img_Bg; // 0x288(0x08)
	struct UImage* IMG_Gauge; // 0x290(0x08)
	struct UImage* IMG_Glow; // 0x298(0x08)
	struct UObject* BGTexture; // 0x2a0(0x08)
	struct FLinearColor BGColor; // 0x2a8(0x10)
	struct UObject* GaugeTexture; // 0x2b8(0x08)
	struct FLinearColor GaugeColor; // 0x2c0(0x10)
	bool UseGlow; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct UObject* GlowTexture; // 0x2d8(0x08)
	struct FLinearColor GlowColor; // 0x2e0(0x10)
	float DefaultPercent; // 0x2f0(0x04)
	char pad_2F4[0x24]; // 0x2f4(0x24)
};

// Class ProjectD.PDCircleProgressModule
// Size: 0x2f8 (Inherited: 0x288)
struct UPDCircleProgressModule : UPDUserWidget {
	struct UImage* IMG_CircleProgress; // 0x288(0x08)
	struct UPDTextBlock* TB_ProgressTime; // 0x290(0x08)
	bool IsInverse; // 0x298(0x01)
	bool IsClockWise; // 0x299(0x01)
	bool IsDivide; // 0x29a(0x01)
	char pad_29B[0x1]; // 0x29b(0x01)
	int32_t DivideNum; // 0x29c(0x04)
	float DivideAntiAliasing; // 0x2a0(0x04)
	float DivideGapSize; // 0x2a4(0x04)
	float StartPos; // 0x2a8(0x04)
	float CompleteRange; // 0x2ac(0x04)
	float AntiAliasing; // 0x2b0(0x04)
	float CircleSize; // 0x2b4(0x04)
	bool IsColorTexture; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
	struct UTexture* ColorTexture; // 0x2c0(0x08)
	bool IsMaskTexture; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct UTexture* MaskTexture; // 0x2d0(0x08)
	char pad_2D8[0x10]; // 0x2d8(0x10)
	struct FDelegate GetProgressPerDelegate; // 0x2e8(0x10)

	void OnSynchronizeProperties(); // Function ProjectD.PDCircleProgressModule.OnSynchronizeProperties // (Native|Event|Public|BlueprintEvent) // @ game+0x1800000
};

// Class ProjectD.PDClanApplicantListItemData
// Size: 0x30 (Inherited: 0x28)
struct UPDClanApplicantListItemData : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class ProjectD.PDClanApplicantListItemUI
// Size: 0x2d8 (Inherited: 0x288)
struct UPDClanApplicantListItemUI : UPDUserWidget {
	char pad_288[0x8]; // 0x288(0x08)
	struct UPDTextBlock* TB_Nickname; // 0x290(0x08)
	struct UPDTextBlock* TB_PassedTime; // 0x298(0x08)
	struct UCanvasPanel* CP_Normal; // 0x2a0(0x08)
	struct UPDButton* BTN_Accept; // 0x2a8(0x08)
	struct UPDButton* BTN_Decline; // 0x2b0(0x08)
	struct UCanvasPanel* CP_Wait; // 0x2b8(0x08)
	struct UPDButton* BTN_CancelReqJoin; // 0x2c0(0x08)
	struct UBorder* BD_Outline; // 0x2c8(0x08)
	char pad_2D0[0x8]; // 0x2d0(0x08)

	void OnClickDecline(); // Function ProjectD.PDClanApplicantListItemUI.OnClickDecline // (Final|Native|Protected) // @ game+0x17ffdc0
	void OnClickCancelReqJoin(); // Function ProjectD.PDClanApplicantListItemUI.OnClickCancelReqJoin // (Final|Native|Protected) // @ game+0x17ffdc0
	void OnClickAccept(); // Function ProjectD.PDClanApplicantListItemUI.OnClickAccept // (Final|Native|Protected) // @ game+0x17ffd80
};

// Class ProjectD.PDClanCreateUI
// Size: 0x350 (Inherited: 0x288)
struct UPDClanCreateUI : UPDSceneBaseUI {
	struct UEditableTextBox* ET_ClanName; // 0x288(0x08)
	struct UPDButton* BTN_CheckInUse; // 0x290(0x08)
	struct UPDTextBlock* T_ClanName_Msg; // 0x298(0x08)
	struct UPDTabButtonGroup* TabGroupMembership; // 0x2a0(0x08)
	struct UPDTabButton* TAB_FreeJoin; // 0x2a8(0x08)
	struct UPDTabButton* TAB_SignUp; // 0x2b0(0x08)
	struct UPDTabButtonGroup* TabGroupClanStyle; // 0x2b8(0x08)
	struct UPDTabButton* TAB_Social; // 0x2c0(0x08)
	struct UPDTabButton* TAB_Normal; // 0x2c8(0x08)
	struct UPDTabButton* TAB_Competition; // 0x2d0(0x08)
	struct UEditableTextBox* ET_ClanTagInput1; // 0x2d8(0x08)
	struct UEditableTextBox* ET_ClanTagInput2; // 0x2e0(0x08)
	struct UEditableTextBox* ET_ClanTagInput3; // 0x2e8(0x08)
	struct UPDButton* BTN_CreateClan; // 0x2f0(0x08)
	struct UPDTextBlock* T_CreateClan_Msg; // 0x2f8(0x08)
	struct UImage* IMG_ClanMarkBG; // 0x300(0x08)
	struct UImage* IMG_ClanMarkFG; // 0x308(0x08)
	struct UPDButton* BTN_RandomMark; // 0x310(0x08)
	struct UMultiLineEditableText* MET_ClanDesc; // 0x318(0x08)
	char pad_320[0x30]; // 0x320(0x30)

	void OnTextChangedClanTag3(struct FText& InText); // Function ProjectD.PDClanCreateUI.OnTextChangedClanTag3 // (Final|Native|Protected|HasOutParms) // @ game+0x1800640
	void OnTextChangedClanTag2(struct FText& InText); // Function ProjectD.PDClanCreateUI.OnTextChangedClanTag2 // (Final|Native|Protected|HasOutParms) // @ game+0x1800480
	void OnTextChangedClanTag1(struct FText& InText); // Function ProjectD.PDClanCreateUI.OnTextChangedClanTag1 // (Final|Native|Protected|HasOutParms) // @ game+0x18002c0
	void OnTextChangedClanDesc(struct FText& Text); // Function ProjectD.PDClanCreateUI.OnTextChangedClanDesc // (Final|Native|Protected|HasOutParms) // @ game+0x1800020
	void OnCreateConfirm(); // Function ProjectD.PDClanCreateUI.OnCreateConfirm // (Final|Native|Protected) // @ game+0x17fffa0
	void OnClickSocialTab(); // Function ProjectD.PDClanCreateUI.OnClickSocialTab // (Final|Native|Protected) // @ game+0xfb2530
	void OnClickSingUpTab(); // Function ProjectD.PDClanCreateUI.OnClickSingUpTab // (Final|Native|Protected) // @ game+0xfb2530
	void OnClickRandomMark(); // Function ProjectD.PDClanCreateUI.OnClickRandomMark // (Final|Native|Protected) // @ game+0x17fff40
	void OnClickNormalTab(); // Function ProjectD.PDClanCreateUI.OnClickNormalTab // (Final|Native|Protected) // @ game+0xfb2530
	void OnClickFreeJoinTab(); // Function ProjectD.PDClanCreateUI.OnClickFreeJoinTab // (Final|Native|Protected) // @ game+0xfb2530
	void OnClickCreateClan(); // Function ProjectD.PDClanCreateUI.OnClickCreateClan // (Final|Native|Protected) // @ game+0x17ffea0
	void OnClickCompetitionTab(); // Function ProjectD.PDClanCreateUI.OnClickCompetitionTab // (Final|Native|Protected) // @ game+0xfb2530
	void OnClickCheckInUse(); // Function ProjectD.PDClanCreateUI.OnClickCheckInUse // (Final|Native|Protected) // @ game+0x17ffe00
	void OnClanNameTextChanged(struct FText& InText); // Function ProjectD.PDClanCreateUI.OnClanNameTextChanged // (Final|Native|Protected|HasOutParms) // @ game+0x17ffca0
};

// Class ProjectD.PDPopupBaseUI
// Size: 0x2b8 (Inherited: 0x288)
struct UPDPopupBaseUI : UPDUserWidget {
	char pad_288[0x30]; // 0x288(0x30)

	void OnClickOKBtn(); // Function ProjectD.PDPopupBaseUI.OnClickOKBtn // (Native|Protected) // @ game+0x17fc150
	void OnClickCancelBtn(); // Function ProjectD.PDPopupBaseUI.OnClickCancelBtn // (Native|Protected) // @ game+0x17fc0f0
};

// Class ProjectD.PDOKPopupUI
// Size: 0x2d0 (Inherited: 0x2b8)
struct UPDOKPopupUI : UPDPopupBaseUI {
	struct UPDTextBlock* Desc; // 0x2b8(0x08)
	struct UPDButton* OKBtn; // 0x2c0(0x08)
	char pad_2C8[0x8]; // 0x2c8(0x08)
};

// Class ProjectD.PDClanInfoPopupUI
// Size: 0x328 (Inherited: 0x2d0)
struct UPDClanInfoPopupUI : UPDOKPopupUI {
	struct UPDTextBlock* T_ClanName; // 0x2d0(0x08)
	struct UPDTextBlock* T_Public; // 0x2d8(0x08)
	struct UWidgetSwitcher* WS_ClanTrend; // 0x2e0(0x08)
	struct UPDTextBlock* T_ClanTag; // 0x2e8(0x08)
	struct UImage* IMG_ClanMarkBG; // 0x2f0(0x08)
	struct UImage* IMG_ClanMarkFG; // 0x2f8(0x08)
	struct UPDTextBlock* T_ClanDesc; // 0x300(0x08)
	struct UMultiLineEditableText* ET_ClanDesc; // 0x308(0x08)
	struct UPDTextBlock* T_ClanMaster; // 0x310(0x08)
	struct UPDTextBlock* T_ClanMemberNum; // 0x318(0x08)
	struct UPDTextBlock* T_ClanCreateDate; // 0x320(0x08)
};

// Class ProjectD.PDClanInfoUI
// Size: 0x3f0 (Inherited: 0x288)
struct UPDClanInfoUI : UPDSceneBaseUI {
	struct UPDButton* BTN_ShowClanInfo; // 0x288(0x08)
	struct UWidgetSwitcher* WS_Info; // 0x290(0x08)
	struct UPDTextBlock* TB_ClanMsg; // 0x298(0x08)
	struct UPDTextBlock* T_ClanName; // 0x2a0(0x08)
	struct UImage* IMG_Info_Hover; // 0x2a8(0x08)
	struct UCanvasPanel* CP_None; // 0x2b0(0x08)
	struct UCanvasPanel* CP_Info; // 0x2b8(0x08)
	struct UCanvasPanel* CP_Member; // 0x2c0(0x08)
	struct UCanvasPanel* CP_Applicant; // 0x2c8(0x08)
	struct UCanvasPanel* CP_Manage; // 0x2d0(0x08)
	struct UPDButton* BTN_Leave; // 0x2d8(0x08)
	struct UPDTabButtonGroup* TabGroupMenu; // 0x2e0(0x08)
	struct UPDTabButton* TAB_Member; // 0x2e8(0x08)
	struct UPDTabButtonGroup* TabGroupMenu_Right; // 0x2f0(0x08)
	struct UPDTabButton* TAB_Applicant; // 0x2f8(0x08)
	struct UPDTabButton* TAB_ClanManage; // 0x300(0x08)
	struct UPDTabButton* TAB_BreakClan; // 0x308(0x08)
	struct UListView* LV_MemberList; // 0x310(0x08)
	struct UListView* LV_ApplicantList; // 0x318(0x08)
	struct UPDButton* BTN_Create; // 0x320(0x08)
	struct UPDButton* BTN_Search; // 0x328(0x08)
	struct UPDButton* BTN_ForceClanBreak; // 0x330(0x08)
	struct UEditableTextBox* ET_ClanName; // 0x338(0x08)
	struct UPDButton* BTN_CheckInUse; // 0x340(0x08)
	struct UPDTabButtonGroup* TabGroupMembership; // 0x348(0x08)
	struct UPDTabButton* TAB_FreeJoin; // 0x350(0x08)
	struct UPDTabButton* TAB_SignUp; // 0x358(0x08)
	struct UPDTabButtonGroup* TabGroupClanStyle; // 0x360(0x08)
	struct UPDTabButton* TAB_Social; // 0x368(0x08)
	struct UPDTabButton* TAB_Normal; // 0x370(0x08)
	struct UPDTabButton* TAB_Competition; // 0x378(0x08)
	struct UEditableTextBox* ET_ClanTagInput1; // 0x380(0x08)
	struct UEditableTextBox* ET_ClanTagInput2; // 0x388(0x08)
	struct UEditableTextBox* ET_ClanTagInput3; // 0x390(0x08)
	struct UPDButton* BTN_ManageChange; // 0x398(0x08)
	struct UImage* IMG_ClanMarkBG; // 0x3a0(0x08)
	struct UImage* IMG_ClanMarkFG; // 0x3a8(0x08)
	struct UPDButton* BTN_ChangeMark; // 0x3b0(0x08)
	struct UMultiLineEditableText* MET_ClanDesc; // 0x3b8(0x08)
	char pad_3C0[0x30]; // 0x3c0(0x30)

	void OnUnhoveredShowClanInfo(); // Function ProjectD.PDClanInfoUI.OnUnhoveredShowClanInfo // (Final|Native|Protected) // @ game+0x1800800
	void OnTextChangedClanTag3(struct FText& InText); // Function ProjectD.PDClanInfoUI.OnTextChangedClanTag3 // (Final|Native|Protected|HasOutParms) // @ game+0x1800720
	void OnTextChangedClanTag2(struct FText& InText); // Function ProjectD.PDClanInfoUI.OnTextChangedClanTag2 // (Final|Native|Protected|HasOutParms) // @ game+0x1800560
	void OnTextChangedClanTag1(struct FText& InText); // Function ProjectD.PDClanInfoUI.OnTextChangedClanTag1 // (Final|Native|Protected|HasOutParms) // @ game+0x18003a0
	void OnTextChangedClanName(struct FText& Text); // Function ProjectD.PDClanInfoUI.OnTextChangedClanName // (Final|Native|Protected|HasOutParms) // @ game+0x18001e0
	void OnTextChangedClanDesc(struct FText& Text); // Function ProjectD.PDClanInfoUI.OnTextChangedClanDesc // (Final|Native|Protected|HasOutParms) // @ game+0x1800100
	void OnLeaveConfirm(); // Function ProjectD.PDClanInfoUI.OnLeaveConfirm // (Final|Native|Protected) // @ game+0x17fffe0
	void OnHoveredShowClanInfo(); // Function ProjectD.PDClanInfoUI.OnHoveredShowClanInfo // (Final|Native|Protected) // @ game+0x17fffc0
	void OnForceClanBreakButton(); // Function ProjectD.PDClanInfoUI.OnForceClanBreakButton // (Final|Native|Protected) // @ game+0x17ffc80
	void OnClickSocialTab(); // Function ProjectD.PDClanInfoUI.OnClickSocialTab // (Final|Native|Protected) // @ game+0xfb2530
	void OnClickSingUpTab(); // Function ProjectD.PDClanInfoUI.OnClickSingUpTab // (Final|Native|Protected) // @ game+0xfb2530
	void OnClickShowClanInfo(); // Function ProjectD.PDClanInfoUI.OnClickShowClanInfo // (Final|Native|Protected) // @ game+0x17fff80
	void OnClickSearch(); // Function ProjectD.PDClanInfoUI.OnClickSearch // (Final|Native|Protected) // @ game+0x17fff60
	void OnClickNormalTab(); // Function ProjectD.PDClanInfoUI.OnClickNormalTab // (Final|Native|Protected) // @ game+0xfb2530
	void OnClickMemberTab(); // Function ProjectD.PDClanInfoUI.OnClickMemberTab // (Final|Native|Protected) // @ game+0x17fff20
	void OnClickManageChange(); // Function ProjectD.PDClanInfoUI.OnClickManageChange // (Final|Native|Protected) // @ game+0x17fff00
	void OnClickLeave(); // Function ProjectD.PDClanInfoUI.OnClickLeave // (Final|Native|Protected) // @ game+0x17ffee0
	void OnClickFreeJoinTab(); // Function ProjectD.PDClanInfoUI.OnClickFreeJoinTab // (Final|Native|Protected) // @ game+0xfb2530
	void OnClickDisband(); // Function ProjectD.PDClanInfoUI.OnClickDisband // (Final|Native|Protected) // @ game+0x17ffec0
	void OnClickCreate(); // Function ProjectD.PDClanInfoUI.OnClickCreate // (Final|Native|Protected) // @ game+0x17ffe80
	void OnClickCompetitionTab(); // Function ProjectD.PDClanInfoUI.OnClickCompetitionTab // (Final|Native|Protected) // @ game+0xfb2530
	void OnClickClanManageTab(); // Function ProjectD.PDClanInfoUI.OnClickClanManageTab // (Final|Native|Protected) // @ game+0x17ffe60
	void OnClickCheckInUse(); // Function ProjectD.PDClanInfoUI.OnClickCheckInUse // (Final|Native|Protected) // @ game+0x17ffe20
	void OnClickChangeMark(); // Function ProjectD.PDClanInfoUI.OnClickChangeMark // (Final|Native|Protected) // @ game+0x17ffde0
	void OnClickApplicantTab(); // Function ProjectD.PDClanInfoUI.OnClickApplicantTab // (Final|Native|Protected) // @ game+0x17ffda0
	void OnBreakClanConfirmButton(); // Function ProjectD.PDClanInfoUI.OnBreakClanConfirmButton // (Final|Native|Protected) // @ game+0x17ffc80
	void OnBreakClanCancelButton(); // Function ProjectD.PDClanInfoUI.OnBreakClanCancelButton // (Final|Native|Protected) // @ game+0x17ffc60
	void OnBreakClanButton(); // Function ProjectD.PDClanInfoUI.OnBreakClanButton // (Final|Native|Protected) // @ game+0x17ffc40
};

// Class ProjectD.PDClanListUI
// Size: 0x2c0 (Inherited: 0x288)
struct UPDClanListUI : UPDSceneBaseUI {
	struct UPDComboBox* CBO_ClanStyle2; // 0x288(0x08)
	struct UListView* LV_ClanList; // 0x290(0x08)
	struct UEditableTextBox* ET_Search; // 0x298(0x08)
	struct UPDButton* BTN_Search; // 0x2a0(0x08)
	struct UCanvasPanel* CP_ClanListContext; // 0x2a8(0x08)
	struct UPDButton* BTN_ClanInfo; // 0x2b0(0x08)
	char pad_2B8[0x8]; // 0x2b8(0x08)

	void OnEnterSearch(struct FText& Text, enum class ETextCommit CommitMethod); // Function ProjectD.PDClanListUI.OnEnterSearch // (Final|Native|Protected|HasOutParms) // @ game+0x18053b0
	void OnClickSeach(); // Function ProjectD.PDClanListUI.OnClickSeach // (Final|Native|Protected) // @ game+0x18050f0
	void OnClickClanInfo(); // Function ProjectD.PDClanListUI.OnClickClanInfo // (Final|Native|Protected) // @ game+0x1804e50
	void OnClanStyleSelectionChanged(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function ProjectD.PDClanListUI.OnClanStyleSelectionChanged // (Final|Native|Protected) // @ game+0x1804cc0
	void OnChangeSearchText(struct FText& InText); // Function ProjectD.PDClanListUI.OnChangeSearchText // (Final|Native|Protected|HasOutParms) // @ game+0x1804bc0
};

// Class ProjectD.PDClanMainUI
// Size: 0x300 (Inherited: 0x288)
struct UPDClanMainUI : UPDSceneBaseUI {
	struct UPDButton* Btn_GotoLobby; // 0x288(0x08)
	struct UPDTabButtonGroup* MenuTabGroup; // 0x290(0x08)
	struct UPDTabButton* TAB_ClanInfo; // 0x298(0x08)
	struct UPDTabButton* TAB_ClanList; // 0x2a0(0x08)
	struct UPDTabButton* TAB_ClanCreate; // 0x2a8(0x08)
	struct TMap<char, struct UPDTabButton*> ClanTabs; // 0x2b0(0x50)

	void OnClickTabClanList(); // Function ProjectD.PDClanMainUI.OnClickTabClanList // (Final|Native|Protected) // @ game+0x18051d0
	void OnClickTabClanInfo(); // Function ProjectD.PDClanMainUI.OnClickTabClanInfo // (Final|Native|Protected) // @ game+0x18051b0
	void OnClickTabClanCreate(); // Function ProjectD.PDClanMainUI.OnClickTabClanCreate // (Final|Native|Protected) // @ game+0x1805190
	void OnClickBtnGotoLobby(); // Function ProjectD.PDClanMainUI.OnClickBtnGotoLobby // (Final|Native|Protected) // @ game+0x1804e30
};

// Class ProjectD.PDClanMemberListItemData
// Size: 0x30 (Inherited: 0x28)
struct UPDClanMemberListItemData : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class ProjectD.PDClanMemberListItemUI
// Size: 0x2d8 (Inherited: 0x288)
struct UPDClanMemberListItemUI : UPDUserWidget {
	char pad_288[0x8]; // 0x288(0x08)
	struct UPDTextBlock* TB_Nickname; // 0x290(0x08)
	struct UImage* IMG_Agent; // 0x298(0x08)
	struct UImage* IMG_Master; // 0x2a0(0x08)
	struct UPDTextBlock* TB_ConnectState; // 0x2a8(0x08)
	struct UPDButton* BTN_Kick; // 0x2b0(0x08)
	struct UBorder* BD_Outline; // 0x2b8(0x08)
	char pad_2C0[0x18]; // 0x2c0(0x18)

	void OnKickConfirm(); // Function ProjectD.PDClanMemberListItemUI.OnKickConfirm // (Final|Native|Protected) // @ game+0x1805620
	void OnClickKick(); // Function ProjectD.PDClanMemberListItemUI.OnClickKick // (Final|Native|Protected) // @ game+0x1804fd0
};

// Class ProjectD.PDClanOtherListItemData
// Size: 0x48 (Inherited: 0x28)
struct UPDClanOtherListItemData : UObject {
	char pad_28[0x20]; // 0x28(0x20)
};

// Class ProjectD.PDClanOtherListItemUI
// Size: 0x320 (Inherited: 0x288)
struct UPDClanOtherListItemUI : UPDUserWidget {
	char pad_288[0x8]; // 0x288(0x08)
	struct UImage* IMG_ClanMarkBG; // 0x290(0x08)
	struct UImage* IMG_ClanMarkFG; // 0x298(0x08)
	struct UPDTextBlock* TB_ClanName; // 0x2a0(0x08)
	struct UPDTextBlock* TB_MemberCount; // 0x2a8(0x08)
	struct UImage* IMG_ActivityIndex; // 0x2b0(0x08)
	struct UWidgetSwitcher* WS_ClanTrend; // 0x2b8(0x08)
	struct UPDTextBlock* TB_ClanTag; // 0x2c0(0x08)
	struct UWidgetSwitcher* WS_Membership_Case; // 0x2c8(0x08)
	struct UPDImageButton* Btn_Bg; // 0x2d0(0x08)
	struct UPDButton* BTN_Join; // 0x2d8(0x08)
	struct UPDButton* BTN_Full; // 0x2e0(0x08)
	struct UBorder* BD_Outline; // 0x2e8(0x08)
	char pad_2F0[0x30]; // 0x2f0(0x30)

	void OnDblClicked(); // Function ProjectD.PDClanOtherListItemUI.OnDblClicked // (Final|Native|Protected) // @ game+0x1805390
	void OnClickJoin(); // Function ProjectD.PDClanOtherListItemUI.OnClickJoin // (Final|Native|Protected) // @ game+0x1804fb0
};

// Class ProjectD.PDCommPage
// Size: 0x290 (Inherited: 0x288)
struct UPDCommPage : UPDUserWidget {
	struct UTreeView* TV_Display; // 0x288(0x08)
};

// Class ProjectD.PDClanPage
// Size: 0x290 (Inherited: 0x290)
struct UPDClanPage : UPDCommPage {
};

// Class ProjectD.PDClimbNodeActor
// Size: 0x270 (Inherited: 0x220)
struct APDClimbNodeActor : AActor {
	struct USphereComponent* Sphere; // 0x220(0x08)
	struct UArrowComponent* Arrow; // 0x228(0x08)
	struct FNeighborInfo NeighborInfo; // 0x230(0x40)
};

// Class ProjectD.PDClimbableActor
// Size: 0x2d8 (Inherited: 0x220)
struct APDClimbableActor : AActor {
	char pad_220[0x10]; // 0x220(0x10)
	struct UBoxComponent* Box; // 0x230(0x08)
	char pad_238[0x18]; // 0x238(0x18)
	bool bDataOverridden; // 0x250(0x01)
	bool bBidirectional; // 0x251(0x01)
	char pad_252[0x6]; // 0x252(0x06)
	struct APDClimbableActor* OppositeDirectionActor; // 0x258(0x08)
	struct FNeighborInfoArray NeighborInfos; // 0x260(0x48)
	struct TArray<struct APDClimbableActor*> IgnoreActorsOnBuild; // 0x2a8(0x10)
	char pad_2B8[0x20]; // 0x2b8(0x20)
};

// Class ProjectD.PDClimbableActorGroup
// Size: 0x260 (Inherited: 0x220)
struct APDClimbableActorGroup : AActor {
	char pad_220[0x40]; // 0x220(0x40)
};

// Class ProjectD.PDCoinInfoListItemUI
// Size: 0x2b0 (Inherited: 0x288)
struct UPDCoinInfoListItemUI : UPDUserWidget {
	struct UCanvasPanel* CP_Coin; // 0x288(0x08)
	struct UPDTextBlock* TB_HoldingCoin; // 0x290(0x08)
	struct UPDTextBlock* TB_GetCoin; // 0x298(0x08)
	struct UPDTextBlock* TB_GetCoin_Back; // 0x2a0(0x08)
	float TotalShowTime; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
};

// Class ProjectD.PDCoinInfoUI
// Size: 0x2c0 (Inherited: 0x290)
struct UPDCoinInfoUI : UPDIngameModeWidget {
	char pad_290[0x8]; // 0x290(0x08)
	struct UCanvasPanel* CP_RoundCoinBoard; // 0x298(0x08)
	struct UVerticalBox* VB_CoinList; // 0x2a0(0x08)
	struct UPDTextBlock* TB_TotalCoin; // 0x2a8(0x08)
	float ShowDuration; // 0x2b0(0x04)
	int32_t MaxListNum; // 0x2b4(0x04)
	char pad_2B8[0x8]; // 0x2b8(0x08)
};

// Class ProjectD.PDComboBox
// Size: 0xf50 (Inherited: 0x288)
struct UPDComboBox : UPDUserWidget {
	struct UComboBoxString* ComboBox; // 0x288(0x08)
	struct FSlateFontInfo ComboFontInfo; // 0x290(0x50)
	struct FMargin ComboTextMargin; // 0x2e0(0x10)
	struct FComboBoxStyle ComboBoxWidgetStyle; // 0x2f0(0x3f0)
	struct FTableRowStyle ComboBoxItemStyle; // 0x6e0(0x7c8)
	float ItemHeight; // 0xea8(0x04)
	char pad_EAC[0x4]; // 0xeac(0x04)
	struct TMap<struct FString, struct USizeBox*> ItemBlocks; // 0xeb0(0x50)
	struct TMap<struct FString, struct UPDTextBlock*> ItemTexts; // 0xf00(0x50)

	struct UWidget* OnComboBoxGenerateWidget(struct FString Item); // Function ProjectD.PDComboBox.OnComboBoxGenerateWidget // (Final|Native|Private) // @ game+0x1805270
};

// Class ProjectD.PDCommunityPopupUI
// Size: 0x3a8 (Inherited: 0x2b8)
struct UPDCommunityPopupUI : UPDPopupBaseUI {
	struct UPDTextBlock* T_CCU; // 0x2b8(0x08)
	struct UPDImageButton* IMG_Btn_Bg; // 0x2c0(0x08)
	struct UPDTabButton* Btn_FriendTab; // 0x2c8(0x08)
	struct UPDTabButton* Btn_ClanTab; // 0x2d0(0x08)
	struct UPDTabButton* Btn_FriendAddTab; // 0x2d8(0x08)
	struct UPDTabButtonGroup* TabGroup; // 0x2e0(0x08)
	struct UPDButton* Btn_FriendAdd; // 0x2e8(0x08)
	struct UPDButton* Btn_FriendRemove; // 0x2f0(0x08)
	struct UPDButton* Btn_FavoriteAdd; // 0x2f8(0x08)
	struct UPDButton* Btn_UnFavorite; // 0x300(0x08)
	struct UPDButton* Btn_PartyInvite; // 0x308(0x08)
	struct UPDButton* Btn_Whisper; // 0x310(0x08)
	struct UPDButton* Btn_CustomInvite; // 0x318(0x08)
	struct UPDButton* BTN_ClanInfo; // 0x320(0x08)
	struct UPDButton* Btn_WIC; // 0x328(0x08)
	struct UPDButton* Btn_Close; // 0x330(0x08)
	struct UCanvasPanel* CP_ContextMenu; // 0x338(0x08)
	struct UWidgetSwitcher* PageSwitcher; // 0x340(0x08)
	struct UPDFriendPage* FriendPage; // 0x348(0x08)
	struct UPDClanPage* ClanPage; // 0x350(0x08)
	struct UPDFriendAddPage* FriendAddPage; // 0x358(0x08)
	struct UPDFindPartyPageUI* FindPartyPage; // 0x360(0x08)
	struct UPDButton* Btn_FindParty; // 0x368(0x08)
	struct UCanvasPanel* CP_ToolTip; // 0x370(0x08)
	struct UPDTextBlock* TB_DataName; // 0x378(0x08)
	struct UPDTextBlock* TB_DataValue; // 0x380(0x08)
	char pad_388[0x20]; // 0x388(0x20)

	void OnWICClicked(); // Function ProjectD.PDCommunityPopupUI.OnWICClicked // (Final|Native|Protected) // @ game+0x1805680
	void OnWhisperClicked(); // Function ProjectD.PDCommunityPopupUI.OnWhisperClicked // (Final|Native|Protected) // @ game+0x18056a0
	void OnUnFavoriteClicked(); // Function ProjectD.PDCommunityPopupUI.OnUnFavoriteClicked // (Final|Native|Protected) // @ game+0x1805660
	void OnPartyInviteClicked(); // Function ProjectD.PDCommunityPopupUI.OnPartyInviteClicked // (Final|Native|Protected) // @ game+0x1805640
	void OnFriendTabClicked(); // Function ProjectD.PDCommunityPopupUI.OnFriendTabClicked // (Final|Native|Protected) // @ game+0x1805580
	void OnFriendRemoveClicked(); // Function ProjectD.PDCommunityPopupUI.OnFriendRemoveClicked // (Final|Native|Protected) // @ game+0x1805560
	void OnFriendAddTabClicked(); // Function ProjectD.PDCommunityPopupUI.OnFriendAddTabClicked // (Final|Native|Protected) // @ game+0x1805540
	void OnFriendAddClicked(); // Function ProjectD.PDCommunityPopupUI.OnFriendAddClicked // (Final|Native|Protected) // @ game+0x1805520
	void OnFindPartyClicked(); // Function ProjectD.PDCommunityPopupUI.OnFindPartyClicked // (Final|Native|Protected) // @ game+0x1805500
	void OnFavoriteAddClicked(); // Function ProjectD.PDCommunityPopupUI.OnFavoriteAddClicked // (Final|Native|Protected) // @ game+0x18054e0
	void OnCustomInviteClicked(); // Function ProjectD.PDCommunityPopupUI.OnCustomInviteClicked // (Final|Native|Protected) // @ game+0x1805370
	void OnClanTabClicked(); // Function ProjectD.PDCommunityPopupUI.OnClanTabClicked // (Final|Native|Protected) // @ game+0x1804df0
	void OnClanInfoClicked(); // Function ProjectD.PDCommunityPopupUI.OnClanInfoClicked // (Final|Native|Protected) // @ game+0x1804ca0
};

// Class ProjectD.PDOptionUIBase
// Size: 0x338 (Inherited: 0x288)
struct UPDOptionUIBase : UPDUserWidget {
	struct UPDTabButtonGroup* MiddleOptionTabBtnGroup; // 0x288(0x08)
	struct FSlateFontInfo CategoryFont; // 0x290(0x50)
	struct TMap<struct FString, struct UPDOptionContent*> MapOptionContents; // 0x2e0(0x50)
	char pad_330[0x8]; // 0x330(0x08)
};

// Class ProjectD.PDControlOptionUI
// Size: 0x370 (Inherited: 0x338)
struct UPDControlOptionUI : UPDOptionUIBase {
	struct UPDTabButton* MoveSettingBtn; // 0x338(0x08)
	struct UPDTabButton* ActionSettingBtn; // 0x340(0x08)
	struct UPDTabButton* CommunicationSettingBtn; // 0x348(0x08)
	struct UPDTabButton* InterfaceSettingBtn; // 0x350(0x08)
	struct UPDTabButton* ObserverSettingBtn; // 0x358(0x08)
	struct UScrollBox* SB_Controls; // 0x360(0x08)
	char pad_368[0x8]; // 0x368(0x08)

	void OnInputKeySelected(struct UPDOptionContent* Content); // Function ProjectD.PDControlOptionUI.OnInputKeySelected // (Final|Native|Private) // @ game+0x18055a0
	void OnClickZoom2ToggleButton(); // Function ProjectD.PDControlOptionUI.OnClickZoom2ToggleButton // (Final|Native|Private) // @ game+0x1805250
	void OnClickZoom2DefaultButton(); // Function ProjectD.PDControlOptionUI.OnClickZoom2DefaultButton // (Final|Native|Private) // @ game+0x1805230
	void OnClickZoom1ToggleButton(); // Function ProjectD.PDControlOptionUI.OnClickZoom1ToggleButton // (Final|Native|Private) // @ game+0x1805210
	void OnClickZoom1DefaultButton(); // Function ProjectD.PDControlOptionUI.OnClickZoom1DefaultButton // (Final|Native|Private) // @ game+0x18051f0
	void OnClickShootingRightButton(); // Function ProjectD.PDControlOptionUI.OnClickShootingRightButton // (Final|Native|Private) // @ game+0x1805170
	void OnClickShootingLeftButton(); // Function ProjectD.PDControlOptionUI.OnClickShootingLeftButton // (Final|Native|Private) // @ game+0x1805150
	void OnClickSetToggleButton(); // Function ProjectD.PDControlOptionUI.OnClickSetToggleButton // (Final|Native|Private) // @ game+0x1805130
	void OnClickSetDefaultButton(); // Function ProjectD.PDControlOptionUI.OnClickSetDefaultButton // (Final|Native|Private) // @ game+0x1805110
	void OnClickScoreBoardToggleButton(); // Function ProjectD.PDControlOptionUI.OnClickScoreBoardToggleButton // (Final|Native|Private) // @ game+0x18050d0
	void OnClickScoreBoardHoldeButton(); // Function ProjectD.PDControlOptionUI.OnClickScoreBoardHoldeButton // (Final|Native|Private) // @ game+0x18050b0
	void OnClickScope2ToggleButton(); // Function ProjectD.PDControlOptionUI.OnClickScope2ToggleButton // (Final|Native|Private) // @ game+0x1805090
	void OnClickScope2DefaultButton(); // Function ProjectD.PDControlOptionUI.OnClickScope2DefaultButton // (Final|Native|Private) // @ game+0x1805070
	void OnClickObserverSettingButton(); // Function ProjectD.PDControlOptionUI.OnClickObserverSettingButton // (Final|Native|Private) // @ game+0x1805050
	void OnClickMoveSettingButton(); // Function ProjectD.PDControlOptionUI.OnClickMoveSettingButton // (Final|Native|Private) // @ game+0x1805030
	void OnClickLeanToggleButton(); // Function ProjectD.PDControlOptionUI.OnClickLeanToggleButton // (Final|Native|Private) // @ game+0x1805010
	void OnClickLeanHoldButton(); // Function ProjectD.PDControlOptionUI.OnClickLeanHoldButton // (Final|Native|Private) // @ game+0x1804ff0
	void OnClickInterfaceSettingButton(); // Function ProjectD.PDControlOptionUI.OnClickInterfaceSettingButton // (Final|Native|Private) // @ game+0x1804f90
	void OnClickIngameMapSizeToggleButton(); // Function ProjectD.PDControlOptionUI.OnClickIngameMapSizeToggleButton // (Final|Native|Private) // @ game+0x1804f70
	void OnClickIngameMapSizeHoldeButton(); // Function ProjectD.PDControlOptionUI.OnClickIngameMapSizeHoldeButton // (Final|Native|Private) // @ game+0x1804f50
	void OnClickEnableWeaponChange2Button(); // Function ProjectD.PDControlOptionUI.OnClickEnableWeaponChange2Button // (Final|Native|Private) // @ game+0x1804f30
	void OnClickEnableWeaponChange1Button(); // Function ProjectD.PDControlOptionUI.OnClickEnableWeaponChange1Button // (Final|Native|Private) // @ game+0x1804f10
	void OnClickDisableWeaponChange2Button(); // Function ProjectD.PDControlOptionUI.OnClickDisableWeaponChange2Button // (Final|Native|Private) // @ game+0x1804ef0
	void OnClickDisableWeaponChange1Button(); // Function ProjectD.PDControlOptionUI.OnClickDisableWeaponChange1Button // (Final|Native|Private) // @ game+0x1804ed0
	void OnClickCrouchToggleButton(); // Function ProjectD.PDControlOptionUI.OnClickCrouchToggleButton // (Final|Native|Private) // @ game+0x1804eb0
	void OnClickCrouchHoldButton(); // Function ProjectD.PDControlOptionUI.OnClickCrouchHoldButton // (Final|Native|Private) // @ game+0x1804e90
	void OnClickCommunicationSettingButton(); // Function ProjectD.PDControlOptionUI.OnClickCommunicationSettingButton // (Final|Native|Private) // @ game+0x1804e70
	void OnClickActionSettingButton(); // Function ProjectD.PDControlOptionUI.OnClickActionSettingButton // (Final|Native|Private) // @ game+0x1804e10
	void OnChangePing1DblClickType(struct FString Item, enum class ESelectInfo SelType); // Function ProjectD.PDControlOptionUI.OnChangePing1DblClickType // (Final|Native|Private) // @ game+0x1804a90
	void OnChangePing1ClickType(struct FString Item, enum class ESelectInfo SelType); // Function ProjectD.PDControlOptionUI.OnChangePing1ClickType // (Final|Native|Private) // @ game+0x1804960
	void OnAutoReloadEnabled(); // Function ProjectD.PDControlOptionUI.OnAutoReloadEnabled // (Final|Native|Private) // @ game+0x1804940
	void OnAutoReloadDisabled(); // Function ProjectD.PDControlOptionUI.OnAutoReloadDisabled // (Final|Native|Private) // @ game+0x1804920
};

// Class ProjectD.PDCrossHairUI
// Size: 0x7b8 (Inherited: 0x290)
struct UPDCrossHairUI : UPDIngameModeWidget {
	struct UWidgetSwitcher* WS_FireIndicator; // 0x290(0x08)
	struct UPanelWidget* CP_Aim; // 0x298(0x08)
	struct UPanelWidget* CP_Aim_Offset; // 0x2a0(0x08)
	struct UPanelWidget* CP_Aim_Crosshair; // 0x2a8(0x08)
	struct UPanelWidget* CP_Crosshair_Default; // 0x2b0(0x08)
	struct UPanelWidget* CP_Crosshair_SG; // 0x2b8(0x08)
	struct UBorder* BD_Kill; // 0x2c0(0x08)
	struct UPanelWidget* CP_Ammo; // 0x2c8(0x08)
	struct UPDCircleProgressModule* CPM_Ammo; // 0x2d0(0x08)
	struct UPDCircleProgressModule* CPM_AmmoBG; // 0x2d8(0x08)
	struct UBorder* BD_AmmoInfo; // 0x2e0(0x08)
	struct USizeBox* SB_Key; // 0x2e8(0x08)
	struct UPDTextBlock* TB_Key; // 0x2f0(0x08)
	struct UPDTextBlock* TB_AmmoInfo; // 0x2f8(0x08)
	struct UImage* IMG_CrossHairSight; // 0x300(0x08)
	struct UImage* IMG_CrossHairC; // 0x308(0x08)
	struct UImage* IMG_CrossHairL; // 0x310(0x08)
	struct UImage* IMG_CrossHairR; // 0x318(0x08)
	struct UImage* IMG_CrossHairT; // 0x320(0x08)
	struct UImage* IMG_CrossHairB; // 0x328(0x08)
	struct UImage* IMG_CrossHairC_L; // 0x330(0x08)
	struct UImage* IMG_CrossHairC_R; // 0x338(0x08)
	struct UImage* IMG_CrossHairC_T; // 0x340(0x08)
	struct UImage* IMG_CrossHairC_B; // 0x348(0x08)
	struct UImage* IMG_CrossHairC_C; // 0x350(0x08)
	struct UPanelWidget* CP_RedDot; // 0x358(0x08)
	struct UImage* IMG_RedDot; // 0x360(0x08)
	struct UImage* IMG_RedDotActive; // 0x368(0x08)
	struct UImage* IMG_RedDotLine; // 0x370(0x08)
	struct UImage* IMG_AimWarning; // 0x378(0x08)
	struct UPanelWidget* CP_Melee; // 0x380(0x08)
	struct UImage* IMG_CrossHairMelee; // 0x388(0x08)
	struct UImage* IMG_ReloadIcon; // 0x390(0x08)
	struct UBorder* BD_Hit; // 0x398(0x08)
	struct UImage* IMG_Hit_L; // 0x3a0(0x08)
	struct UImage* IMG_Hit_R; // 0x3a8(0x08)
	struct UImage* IMG_Hit_T; // 0x3b0(0x08)
	struct UImage* IMG_Hit_D; // 0x3b8(0x08)
	struct UPDHitFeedBackUI* HitFeedback_Armor; // 0x3c0(0x08)
	struct UPDHitFeedBackUI* HitFeedback_kill; // 0x3c8(0x08)
	bool bEnableCrosshairLineAlpha; // 0x3d0(0x01)
	char pad_3D1[0x7]; // 0x3d1(0x07)
	struct UCurveFloat* CrosshairFireCurve; // 0x3d8(0x08)
	char pad_3E0[0x80]; // 0x3e0(0x80)
	struct TArray<struct UImage*> HitLines; // 0x460(0x10)
	struct FSlateBrush CenterDotBrush; // 0x470(0x88)
	struct FSlateBrush CrossHairBrush; // 0x4f8(0x88)
	struct FSlateBrush HitLineBrush; // 0x580(0x88)
	struct FSlateBrush KillLineBrush; // 0x608(0x88)
	struct FSlateBrush RedDotBrush; // 0x690(0x88)
	struct FSlateBrush OutlineBrush; // 0x718(0x88)
	float DefaultOutlineThickness; // 0x7a0(0x04)
	enum class ECrossHairDrawStyle DrawStyle; // 0x7a4(0x04)
	char pad_7A8[0x10]; // 0x7a8(0x10)
};

// Class ProjectD.PDCursorWidget
// Size: 0x240 (Inherited: 0x230)
struct UPDCursorWidget : UUserWidget {
	struct UCanvasPanel* CP_Parent; // 0x230(0x08)
	struct UImage* IMG_Cursor; // 0x238(0x08)

	void SetSize(); // Function ProjectD.PDCursorWidget.SetSize // (Final|Native|Protected) // @ game+0x18097f0
};

// Class ProjectD.PDCustomButton
// Size: 0x428 (Inherited: 0x428)
struct UPDCustomButton : UButton {
};

// Class ProjectD.PDCustomCategoryListItemData
// Size: 0x38 (Inherited: 0x28)
struct UPDCustomCategoryListItemData : UObject {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class ProjectD.PDCustomCategoryListItem
// Size: 0x2b8 (Inherited: 0x288)
struct UPDCustomCategoryListItem : UPDUserWidget {
	char pad_288[0x8]; // 0x288(0x08)
	struct UBorder* BD_ItemOutline; // 0x290(0x08)
	struct UBorder* BD_Back; // 0x298(0x08)
	struct UPDTextBlock* TB_Category; // 0x2a0(0x08)
	struct UImage* IMG_New; // 0x2a8(0x08)
	char pad_2B0[0x8]; // 0x2b0(0x08)
};

// Class ProjectD.PDCustomCharacterDecoUI
// Size: 0x300 (Inherited: 0x288)
struct UPDCustomCharacterDecoUI : UPDSceneBaseUI {
	struct UTileView* TV_ClosetCategory; // 0x288(0x08)
	struct UTileView* TV_ClosetItemList; // 0x290(0x08)
	struct UPDButton* Btn_Restore; // 0x298(0x08)
	struct UPDButton* Btn_Save; // 0x2a0(0x08)
	struct UBorder* BD_Cover; // 0x2a8(0x08)
	struct UPDButton* Btn_Buy; // 0x2b0(0x08)
	struct UPDCheckBox* CB_AllSkin; // 0x2b8(0x08)
	struct UPDCheckBox* CB_HasSkin; // 0x2c0(0x08)
	struct UPDCheckBox* CB_AllHasSkin; // 0x2c8(0x08)
	struct UPDKeyButton* Btn_GotoBack; // 0x2d0(0x08)
	struct UPDButton* Btn_LeftTurn; // 0x2d8(0x08)
	struct UPDButton* Btn_Zoom; // 0x2e0(0x08)
	struct UPDButton* Btn_RightTurn; // 0x2e8(0x08)
	struct UPDTextBlock* TB_AllHasSkin; // 0x2f0(0x08)
	char pad_2F8[0x8]; // 0x2f8(0x08)

	void OnZoomReleased(); // Function ProjectD.PDCustomCharacterDecoUI.OnZoomReleased // (Final|Native|Private) // @ game+0x18096b0
	void OnZoomPressed(); // Function ProjectD.PDCustomCharacterDecoUI.OnZoomPressed // (Final|Native|Private) // @ game+0x1809670
	void OnSelectedCustomItem(struct UPDCustomListItemData* InListItemData); // Function ProjectD.PDCustomCharacterDecoUI.OnSelectedCustomItem // (Final|Native|Private) // @ game+0x1809410
	void OnSelectedCategoryItem(struct UPDCustomCategoryListItemData* InListItemData); // Function ProjectD.PDCustomCharacterDecoUI.OnSelectedCategoryItem // (Final|Native|Private) // @ game+0x1809310
	void OnSaveAndLeave(); // Function ProjectD.PDCustomCharacterDecoUI.OnSaveAndLeave // (Final|Native|Private) // @ game+0x18092b0
	void OnRightTurnReleased(); // Function ProjectD.PDCustomCharacterDecoUI.OnRightTurnReleased // (Final|Native|Private) // @ game+0x1808bd0
	void OnRightTurnPressed(); // Function ProjectD.PDCustomCharacterDecoUI.OnRightTurnPressed // (Final|Native|Private) // @ game+0x1809140
	void OnRestore(); // Function ProjectD.PDCustomCharacterDecoUI.OnRestore // (Final|Native|Private) // @ game+0x1809120
	void OnMenuCoverMouseDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function ProjectD.PDCustomCharacterDecoUI.OnMenuCoverMouseDown // (Final|Native|Private|HasOutParms) // @ game+0x1808d40
	void OnLeftTurnReleased(); // Function ProjectD.PDCustomCharacterDecoUI.OnLeftTurnReleased // (Final|Native|Private) // @ game+0x1808bd0
	void OnLeftTurnPressed(); // Function ProjectD.PDCustomCharacterDecoUI.OnLeftTurnPressed // (Final|Native|Private) // @ game+0x1808b90
	void OnHasSkinCheckBoxChanged(bool InIsChecked); // Function ProjectD.PDCustomCharacterDecoUI.OnHasSkinCheckBoxChanged // (Final|Native|Private) // @ game+0x18089f0
	void OnBuyItem(); // Function ProjectD.PDCustomCharacterDecoUI.OnBuyItem // (Final|Native|Private) // @ game+0x1808770
	void OnAllSkinCheckBoxChanged(bool InIsChecked); // Function ProjectD.PDCustomCharacterDecoUI.OnAllSkinCheckBoxChanged // (Final|Native|Private) // @ game+0x1808630
	void GotoBack(); // Function ProjectD.PDCustomCharacterDecoUI.GotoBack // (Final|Native|Private) // @ game+0x1808540
};

// Class ProjectD.PDCustomCharacterPerkUI
// Size: 0x410 (Inherited: 0x288)
struct UPDCustomCharacterPerkUI : UPDSceneBaseUI {
	char pad_288[0x10]; // 0x288(0x10)
	struct UTileView* TV_UniqueLeptonList; // 0x298(0x08)
	struct UTileView* TV_ProgressLeptonList; // 0x2a0(0x08)
	struct UTileView* TV_OwnLeptonList; // 0x2a8(0x08)
	struct UTileView* TV_EquipLeptonList; // 0x2b0(0x08)
	struct UImage* IMG_CostBg1; // 0x2b8(0x08)
	struct UImage* IMG_Cost1; // 0x2c0(0x08)
	struct UImage* IMG_CostBg2; // 0x2c8(0x08)
	struct UImage* IMG_Cost2; // 0x2d0(0x08)
	struct UImage* IMG_CostBg3; // 0x2d8(0x08)
	struct UImage* IMG_Cost3; // 0x2e0(0x08)
	struct UImage* IMG_CostBg4; // 0x2e8(0x08)
	struct UImage* IMG_Cost4; // 0x2f0(0x08)
	struct UImage* IMG_CostBg5; // 0x2f8(0x08)
	struct UImage* IMG_Cost5; // 0x300(0x08)
	struct TArray<struct UImage*> IMG_CostBgs; // 0x308(0x10)
	struct TArray<struct UImage*> IMG_Costs; // 0x318(0x10)
	struct UPDTextBlock* TB_Level; // 0x328(0x08)
	struct UPDTextBlock* TB_Name; // 0x330(0x08)
	struct UCanvasPanel* CP_SkillToolTip; // 0x338(0x08)
	struct UImage* IMG_PerkPreview; // 0x340(0x08)
	struct UImage* IMG_DescIcon; // 0x348(0x08)
	struct UPDTextBlock* TB_PerkName; // 0x350(0x08)
	struct UPDTextBlock* TB_PerkDesc; // 0x358(0x08)
	struct UPDTextBlock* TB_PerkStory; // 0x360(0x08)
	struct UPDKeyButton* Btn_GotoBack; // 0x368(0x08)
	struct UCanvasPanel* CP_Loading; // 0x370(0x08)
	struct UPDTabButton* TBtn_Preset01; // 0x378(0x08)
	struct UPDTabButton* TBtn_Preset02; // 0x380(0x08)
	struct UPDTabButton* TBtn_Preset03; // 0x388(0x08)
	struct UPDButton* Btn_List01; // 0x390(0x08)
	struct UPDButton* Btn_List02; // 0x398(0x08)
	struct UPDButton* Btn_List03; // 0x3a0(0x08)
	struct UImage* IMG_List01; // 0x3a8(0x08)
	struct UImage* IMG_List02; // 0x3b0(0x08)
	struct UImage* IMG_List03; // 0x3b8(0x08)
	struct UCanvasPanel* CP_PresetList; // 0x3c0(0x08)
	struct UListView* LV_PresetList; // 0x3c8(0x08)
	struct UPDButton* Btn_ResetPreset; // 0x3d0(0x08)
	struct UPDTabButtonGroup* PresetCategoryGroup; // 0x3d8(0x08)
	char pad_3E0[0x30]; // 0x3e0(0x30)

	void SeLeptonInfo(int32_t SkillIndex, struct FVector2D InfoAbsolutePos, int32_t IconWidth); // Function ProjectD.PDCustomCharacterPerkUI.SeLeptonInfo // (Final|Native|Protected|HasDefaults) // @ game+0x18096f0
	void OnSelectedPresetNameList(struct UPDAgentPresetListItemData* InListItemData); // Function ProjectD.PDCustomCharacterPerkUI.OnSelectedPresetNameList // (Final|Native|Protected) // @ game+0x1809510
	void OnSaveAndLeaveCustomCharacterLepton(); // Function ProjectD.PDCustomCharacterPerkUI.OnSaveAndLeaveCustomCharacterLepton // (Final|Native|Protected) // @ game+0x18092f0
	void OnLeaveCustomCharacterLepton(); // Function ProjectD.PDCustomCharacterPerkUI.OnLeaveCustomCharacterLepton // (Final|Native|Protected) // @ game+0x1808b70
	void OnClickResetPreset(); // Function ProjectD.PDCustomCharacterPerkUI.OnClickResetPreset // (Final|Native|Protected) // @ game+0x1808970
	void OnClickPresetThird(); // Function ProjectD.PDCustomCharacterPerkUI.OnClickPresetThird // (Final|Native|Protected) // @ game+0x1808950
	void OnClickPresetSecond(); // Function ProjectD.PDCustomCharacterPerkUI.OnClickPresetSecond // (Final|Native|Protected) // @ game+0x1808930
	void OnClickPresetFirst(); // Function ProjectD.PDCustomCharacterPerkUI.OnClickPresetFirst // (Final|Native|Protected) // @ game+0x1808910
	void OnClickNameList(); // Function ProjectD.PDCustomCharacterPerkUI.OnClickNameList // (Final|Native|Protected) // @ game+0x18088f0
	void LeptonTooltipVisible(bool bShow); // Function ProjectD.PDCustomCharacterPerkUI.LeptonTooltipVisible // (Final|Native|Protected) // @ game+0x1808580
	void GotoBack(); // Function ProjectD.PDCustomCharacterPerkUI.GotoBack // (Final|Native|Protected) // @ game+0x1808560
};

// Class ProjectD.PDCustomJoinPopupUI
// Size: 0x2d8 (Inherited: 0x2b8)
struct UPDCustomJoinPopupUI : UPDPopupBaseUI {
	struct UPDButton* Btn_Show; // 0x2b8(0x08)
	struct UPDButton* Btn_Hide; // 0x2c0(0x08)
	struct UPDButton* Btn_Ok; // 0x2c8(0x08)
	struct UEditableTextBox* ET_Code; // 0x2d0(0x08)

	void OnClickShowBtn(); // Function ProjectD.PDCustomJoinPopupUI.OnClickShowBtn // (Final|Native|Protected) // @ game+0x1808990
	void OnClickHideBtn(); // Function ProjectD.PDCustomJoinPopupUI.OnClickHideBtn // (Final|Native|Protected) // @ game+0x18088d0
	void OnChangeText(struct FText& InText); // Function ProjectD.PDCustomJoinPopupUI.OnChangeText // (Final|Native|Protected|HasOutParms) // @ game+0x18087b0
};

// Class ProjectD.PDCustomListItemData
// Size: 0x88 (Inherited: 0x28)
struct UPDCustomListItemData : UObject {
	char pad_28[0x60]; // 0x28(0x60)
};

// Class ProjectD.PDCustomListItem
// Size: 0x300 (Inherited: 0x288)
struct UPDCustomListItem : UPDUserWidget {
	char pad_288[0x8]; // 0x288(0x08)
	struct UAkAudioEvent* HoverSound; // 0x290(0x08)
	struct UAkAudioEvent* ClickSound; // 0x298(0x08)
	struct UImage* Img_Bg; // 0x2a0(0x08)
	struct UImage* IMG_Item; // 0x2a8(0x08)
	struct UImage* IMG_Lock; // 0x2b0(0x08)
	struct UImage* IMG_New; // 0x2b8(0x08)
	struct UImage* IMG_Equip; // 0x2c0(0x08)
	struct UPDTextBlock* TB_Name; // 0x2c8(0x08)
	struct UPDTextBlock* TB_Count; // 0x2d0(0x08)
	struct UBorder* BD_ItemOutline; // 0x2d8(0x08)
	struct UBorder* BD_ItemSelOutline; // 0x2e0(0x08)
	char pad_2E8[0x18]; // 0x2e8(0x18)
};

// Class ProjectD.PDCustomMatchCharItemData
// Size: 0x38 (Inherited: 0x28)
struct UPDCustomMatchCharItemData : UObject {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class ProjectD.PDCustomMatchCharItem
// Size: 0x2b8 (Inherited: 0x288)
struct UPDCustomMatchCharItem : UPDUserWidget {
	char pad_288[0x8]; // 0x288(0x08)
	struct UImage* Img_Bg; // 0x290(0x08)
	struct UImage* IMG_Item; // 0x298(0x08)
	struct UBorder* BD_ItemOutline; // 0x2a0(0x08)
	char pad_2A8[0x10]; // 0x2a8(0x10)
};

// Class ProjectD.PDCustomMatchListItemData
// Size: 0x80 (Inherited: 0x28)
struct UPDCustomMatchListItemData : UObject {
	char pad_28[0x58]; // 0x28(0x58)
};

// Class ProjectD.PDCustomMatchListItem
// Size: 0x360 (Inherited: 0x288)
struct UPDCustomMatchListItem : UPDUserWidget {
	char pad_288[0x8]; // 0x288(0x08)
	struct UCanvasPanel* CP_Normal; // 0x290(0x08)
	struct UCanvasPanel* CP_Add; // 0x298(0x08)
	struct UCanvasPanel* CP_Join; // 0x2a0(0x08)
	struct UCanvasPanel* CP_Empty; // 0x2a8(0x08)
	struct UBorder* Background; // 0x2b0(0x08)
	struct UImage* IMG_Face; // 0x2b8(0x08)
	struct UImage* IMG_ClanMarkBG; // 0x2c0(0x08)
	struct UImage* IMG_ClanMarkFG; // 0x2c8(0x08)
	struct UPDTextBlock* TB_ClanName; // 0x2d0(0x08)
	struct UCanvasPanel* CP_ClanMark; // 0x2d8(0x08)
	struct UPDButton* Btn_Perk; // 0x2e0(0x08)
	struct UImage* IMG_Leader; // 0x2e8(0x08)
	struct UPDTextBlock* TB_NickName3; // 0x2f0(0x08)
	struct UPDButton* Btn_CharChange; // 0x2f8(0x08)
	struct UPDButton* BTN_Join; // 0x300(0x08)
	char pad_308[0x58]; // 0x308(0x58)

	void OnPerkUnHovered(); // Function ProjectD.PDCustomMatchListItem.OnPerkUnHovered // (Final|Native|Private) // @ game+0x1809100
	void OnPerkHovered(); // Function ProjectD.PDCustomMatchListItem.OnPerkHovered // (Final|Native|Private) // @ game+0x18090e0
	void OnJoinClicked(); // Function ProjectD.PDCustomMatchListItem.OnJoinClicked // (Final|Native|Private) // @ game+0x1808b30
	void OnCharChangeClicked(); // Function ProjectD.PDCustomMatchListItem.OnCharChangeClicked // (Final|Native|Private) // @ game+0x18088b0
};

// Class ProjectD.PDCustomMatchTooltip
// Size: 0x298 (Inherited: 0x288)
struct UPDCustomMatchTooltip : UPDUserWidget {
	struct UListView* LV_Perks; // 0x288(0x08)
	struct UImage* Img_Bg; // 0x290(0x08)
};

// Class ProjectD.PDCustomPerkListItemData
// Size: 0x88 (Inherited: 0x28)
struct UPDCustomPerkListItemData : UObject {
	char pad_28[0x60]; // 0x28(0x60)
};

// Class ProjectD.PDCustomPerkListItem
// Size: 0x308 (Inherited: 0x288)
struct UPDCustomPerkListItem : UPDUserWidget {
	char pad_288[0x8]; // 0x288(0x08)
	struct UImage* Img_SignatureBg; // 0x290(0x08)
	struct UImage* Img_Bg; // 0x298(0x08)
	struct UImage* IMG_Item; // 0x2a0(0x08)
	struct UImage* IMG_Lock; // 0x2a8(0x08)
	struct UPDTextBlock* TB_Name; // 0x2b0(0x08)
	struct UPDTextBlock* TB_Activate; // 0x2b8(0x08)
	struct UBorder* BD_ItemOutline; // 0x2c0(0x08)
	struct UBorder* BD_SignatureItemOutline; // 0x2c8(0x08)
	struct UDragDropOperation* DragDropOperation; // 0x2d0(0x08)
	char pad_2D8[0x30]; // 0x2d8(0x30)
};

// Class ProjectD.PDCustomRoomUI
// Size: 0x3b0 (Inherited: 0x288)
struct UPDCustomRoomUI : UPDUserWidget {
	struct UPDTextBlock* T_Code; // 0x288(0x08)
	struct UPDButton* Btn_Hide; // 0x290(0x08)
	struct UPDButton* Btn_Copy; // 0x298(0x08)
	struct UCanvasPanel* CP_CharChange; // 0x2a0(0x08)
	struct UPDCustomMatchTooltip* CustomMatchTooltip; // 0x2a8(0x08)
	struct UListView* LV_Characters; // 0x2b0(0x08)
	struct UCanvasPanel* CP_ContextMenu; // 0x2b8(0x08)
	struct UPDButton* Btn_FriendAdd; // 0x2c0(0x08)
	struct UPDButton* Btn_Whisper; // 0x2c8(0x08)
	struct UPDButton* Btn_KickUser; // 0x2d0(0x08)
	struct UPDButton* Btn_TransferMaster; // 0x2d8(0x08)
	struct UListView* LV_ATeam; // 0x2e0(0x08)
	struct UListView* LV_BTeam; // 0x2e8(0x08)
	struct UListView* LV_NTeam; // 0x2f0(0x08)
	struct UPDButton* Btn_Back; // 0x2f8(0x08)
	struct UPDButton* Btn_Option; // 0x300(0x08)
	struct UPDButton* Btn_Comm; // 0x308(0x08)
	struct UPDButton* Btn_Start; // 0x310(0x08)
	struct UPDComboBox* CB_Mode; // 0x318(0x08)
	struct UPDComboBox* CB_Round; // 0x320(0x08)
	struct UImage* IMG_Disabled; // 0x328(0x08)
	struct URichTextBlock* RT_StartDesc; // 0x330(0x08)
	char pad_338[0x78]; // 0x338(0x78)

	void OnWhisperUserClicked(); // Function ProjectD.PDCustomRoomUI.OnWhisperUserClicked // (Final|Native|Private) // @ game+0x1809650
	void OnTransferMasterClicked(); // Function ProjectD.PDCustomRoomUI.OnTransferMasterClicked // (Final|Native|Private) // @ game+0x1809630
	void OnStartClicked(); // Function ProjectD.PDCustomRoomUI.OnStartClicked // (Final|Native|Private) // @ game+0x1809610
	void OnRoundSelectedChanged(struct FString sItem, enum class ESelectInfo SelType); // Function ProjectD.PDCustomRoomUI.OnRoundSelectedChanged // (Final|Native|Private) // @ game+0x1809180
	void OnOptionClicked(); // Function ProjectD.PDCustomRoomUI.OnOptionClicked // (Final|Native|Private) // @ game+0x18090c0
	void OnMapSelectedChanged(struct FString sItem, enum class ESelectInfo SelType); // Function ProjectD.PDCustomRoomUI.OnMapSelectedChanged // (Final|Native|Private) // @ game+0x1808c10
	void OnKickUserClicked(); // Function ProjectD.PDCustomRoomUI.OnKickUserClicked // (Final|Native|Private) // @ game+0x1808b50
	void OnHideClicked(); // Function ProjectD.PDCustomRoomUI.OnHideClicked // (Final|Native|Private) // @ game+0x1808b10
	void OnCopyClicked(); // Function ProjectD.PDCustomRoomUI.OnCopyClicked // (Final|Native|Private) // @ game+0x18089d0
	void OnCommClicked(); // Function ProjectD.PDCustomRoomUI.OnCommClicked // (Final|Native|Private) // @ game+0x18089b0
	void OnBackClicked(); // Function ProjectD.PDCustomRoomUI.OnBackClicked // (Final|Native|Private) // @ game+0x1808750
	void OnAddFriendClicked(); // Function ProjectD.PDCustomRoomUI.OnAddFriendClicked // (Final|Native|Private) // @ game+0x1808610
};

// Class ProjectD.PDCustomSlider
// Size: 0x4f8 (Inherited: 0x4f8)
struct UPDCustomSlider : USlider {
};

// Class ProjectD.PDCustomWeaponAttribute
// Size: 0x2b8 (Inherited: 0x288)
struct UPDCustomWeaponAttribute : UPDUserWidget {
	struct UPDTextBlock* T_StatName; // 0x288(0x08)
	struct UPDTextBlock* T_Stat_Value; // 0x290(0x08)
	struct UProgressBar* PB_Stat_Src; // 0x298(0x08)
	struct FText InStatName; // 0x2a0(0x18)
};

// Class ProjectD.PDCustomWeaponListItemData
// Size: 0x78 (Inherited: 0x28)
struct UPDCustomWeaponListItemData : UObject {
	char pad_28[0x50]; // 0x28(0x50)
};

// Class ProjectD.PDCustomWeaponListItem
// Size: 0x2d0 (Inherited: 0x288)
struct UPDCustomWeaponListItem : UPDUserWidget {
	char pad_288[0x8]; // 0x288(0x08)
	struct UImage* Img_Bg; // 0x290(0x08)
	struct UImage* IMG_Item; // 0x298(0x08)
	struct UImage* IMG_Lock; // 0x2a0(0x08)
	struct UImage* IMG_Equip; // 0x2a8(0x08)
	struct UPDTextBlock* TB_Name; // 0x2b0(0x08)
	struct UPDTextBlock* TB_Count; // 0x2b8(0x08)
	struct UBorder* BD_ItemOutline; // 0x2c0(0x08)
	char pad_2C8[0x8]; // 0x2c8(0x08)
};

// Class ProjectD.PDCustomWeaponUI
// Size: 0x380 (Inherited: 0x288)
struct UPDCustomWeaponUI : UPDSceneBaseUI {
	struct UTileView* TV_WeaponCategory; // 0x288(0x08)
	struct UTileView* TV_WeaponItemList; // 0x290(0x08)
	struct UTileView* TV_ItemSkinList; // 0x298(0x08)
	struct UCanvasPanel* CP_Inventory; // 0x2a0(0x08)
	struct UPDButton* Btn_Restore; // 0x2a8(0x08)
	struct UPDButton* Btn_Buy; // 0x2b0(0x08)
	struct UPDButton* Btn_LoadOut; // 0x2b8(0x08)
	struct UPDButton* Btn_SaveAndOut; // 0x2c0(0x08)
	struct UPDButton* Btn_ChangeView; // 0x2c8(0x08)
	struct UBorder* BD_Cover; // 0x2d0(0x08)
	struct UPDTextBlock* T_FireModeInfo; // 0x2d8(0x08)
	struct UPDTextBlock* T_BulletInfo; // 0x2e0(0x08)
	struct UImage* IMG_Info_Bullet; // 0x2e8(0x08)
	struct UPDCustomWeaponAttribute* WeaponStat1; // 0x2f0(0x08)
	struct UPDCustomWeaponAttribute* WeaponStat2; // 0x2f8(0x08)
	struct UPDCustomWeaponAttribute* WeaponStat3; // 0x300(0x08)
	struct UPDCustomWeaponAttribute* WeaponStat4; // 0x308(0x08)
	struct UPDCustomWeaponAttribute* WeaponStat5; // 0x310(0x08)
	struct UPDCustomWeaponAttribute* WeaponStat6; // 0x318(0x08)
	struct UPDCheckBox* CB_AllSkin; // 0x320(0x08)
	struct UPDCheckBox* CB_HasSkin; // 0x328(0x08)
	struct UPDButton* Btn_LeftTurn; // 0x330(0x08)
	struct UPDButton* Btn_Zoom; // 0x338(0x08)
	struct UPDButton* Btn_RightTurn; // 0x340(0x08)
	struct UPDKeyButton* Btn_GotoBack; // 0x348(0x08)
	struct UImage* IMG_Zoom; // 0x350(0x08)
	struct TArray<struct UPDCustomWeaponListItemData*> WeaponSkinListItems; // 0x358(0x10)
	struct FVector WeaponPivot; // 0x368(0x0c)
	char pad_374[0xc]; // 0x374(0x0c)

	void OnZoomReleased(); // Function ProjectD.PDCustomWeaponUI.OnZoomReleased // (Final|Native|Private) // @ game+0x18096d0
	void OnZoomPressed(); // Function ProjectD.PDCustomWeaponUI.OnZoomPressed // (Final|Native|Private) // @ game+0x1809690
	void OnSelectedSkinListItem(struct UPDCustomWeaponListItemData* InListItemData); // Function ProjectD.PDCustomWeaponUI.OnSelectedSkinListItem // (Final|Native|Private) // @ game+0x1809590
	void OnSelectedItemListItem(struct UPDCustomWeaponListItemData* InListItemData); // Function ProjectD.PDCustomWeaponUI.OnSelectedItemListItem // (Final|Native|Private) // @ game+0x1809490
	void OnSelectedCategoryItem(struct UPDCustomCategoryListItemData* InListItemData); // Function ProjectD.PDCustomWeaponUI.OnSelectedCategoryItem // (Final|Native|Private) // @ game+0x1809390
	void OnSaveAndLeave(); // Function ProjectD.PDCustomWeaponUI.OnSaveAndLeave // (Final|Native|Private) // @ game+0x18092d0
	void OnRightTurnReleased(); // Function ProjectD.PDCustomWeaponUI.OnRightTurnReleased // (Final|Native|Private) // @ game+0x1808bf0
	void OnRightTurnPressed(); // Function ProjectD.PDCustomWeaponUI.OnRightTurnPressed // (Final|Native|Private) // @ game+0x1809160
	void OnRestore(); // Function ProjectD.PDCustomWeaponUI.OnRestore // (Final|Native|Private) // @ game+0xfb2530
	void OnMenuCoverMouseDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function ProjectD.PDCustomWeaponUI.OnMenuCoverMouseDown // (Final|Native|Private|HasOutParms) // @ game+0x1808f00
	void OnLoadOut(); // Function ProjectD.PDCustomWeaponUI.OnLoadOut // (Final|Native|Private) // @ game+0xfb2530
	void OnLeftTurnReleased(); // Function ProjectD.PDCustomWeaponUI.OnLeftTurnReleased // (Final|Native|Private) // @ game+0x1808bf0
	void OnLeftTurnPressed(); // Function ProjectD.PDCustomWeaponUI.OnLeftTurnPressed // (Final|Native|Private) // @ game+0x1808bb0
	void OnHasSkinCheckBoxChanged(bool InIsChecked); // Function ProjectD.PDCustomWeaponUI.OnHasSkinCheckBoxChanged // (Final|Native|Private) // @ game+0x1808a80
	void OnChangeView(); // Function ProjectD.PDCustomWeaponUI.OnChangeView // (Final|Native|Private) // @ game+0x1808890
	void OnBuyItem(); // Function ProjectD.PDCustomWeaponUI.OnBuyItem // (Final|Native|Private) // @ game+0x1808790
	void OnAllSkinCheckBoxChanged(bool InIsChecked); // Function ProjectD.PDCustomWeaponUI.OnAllSkinCheckBoxChanged // (Final|Native|Private) // @ game+0x18086c0
	void GotoBack(); // Function ProjectD.PDCustomWeaponUI.GotoBack // (Final|Native|Private) // @ game+0x1808540
};

// Class ProjectD.PDDamageIndicatorUI
// Size: 0x2a8 (Inherited: 0x288)
struct UPDDamageIndicatorUI : UPDUserWidget {
	struct UBorder* BD_Rotator; // 0x288(0x08)
	struct UImage* IMG_DamageIndicator; // 0x290(0x08)
	char pad_298[0x10]; // 0x298(0x10)
};

// Class ProjectD.PDDamageScreenIndicatorUI
// Size: 0x328 (Inherited: 0x290)
struct UPDDamageScreenIndicatorUI : UPDIngameModeWidget {
	struct UImage* IMG_LeftUp; // 0x290(0x08)
	struct UImage* IMG_Up; // 0x298(0x08)
	struct UImage* IMG_RightUp; // 0x2a0(0x08)
	struct UImage* IMG_Right; // 0x2a8(0x08)
	struct UImage* IMG_RightDown; // 0x2b0(0x08)
	struct UImage* IMG_Down; // 0x2b8(0x08)
	struct UImage* IMG_LeftDown; // 0x2c0(0x08)
	struct UImage* IMG_Left; // 0x2c8(0x08)
	struct UCanvasPanel* CP_Impact; // 0x2d0(0x08)
	char pad_2D8[0x50]; // 0x2d8(0x50)
};

// Class ProjectD.PDDeathMatchModeUI
// Size: 0x430 (Inherited: 0x430)
struct UPDDeathMatchModeUI : UPDBaseModeUI {
};

// Class ProjectD.PDDebugLogUI
// Size: 0x388 (Inherited: 0x288)
struct UPDDebugLogUI : UPDSceneBaseUI {
	char pad_288[0x30]; // 0x288(0x30)
	struct UPDButton* Btn_GotoLobby; // 0x2b8(0x08)
	struct UButton* BTN_FP_Left; // 0x2c0(0x08)
	struct UButton* BTN_FP_Right; // 0x2c8(0x08)
	struct UMultiLineEditableTextBox* MTXT_Content; // 0x2d0(0x08)
	struct UTextBlock* TXT_FP_Page; // 0x2d8(0x08)
	struct TArray<struct UPDButton*> FileNameButtonList; // 0x2e0(0x10)
	struct UPDButton* Filename_1; // 0x2f0(0x08)
	struct UPDButton* Filename_2; // 0x2f8(0x08)
	struct UPDButton* Filename_3; // 0x300(0x08)
	struct UPDButton* Filename_4; // 0x308(0x08)
	struct UPDButton* Filename_5; // 0x310(0x08)
	struct UPDButton* Filename_6; // 0x318(0x08)
	struct UPDButton* Filename_7; // 0x320(0x08)
	struct UPDButton* Filename_8; // 0x328(0x08)
	struct UPDButton* Filename_9; // 0x330(0x08)
	struct UPDButton* Filename_10; // 0x338(0x08)
	struct UPDButton* Filename_11; // 0x340(0x08)
	struct UPDButton* Filename_12; // 0x348(0x08)
	struct UPDButton* Filename_13; // 0x350(0x08)
	struct UPDButton* Filename_14; // 0x358(0x08)
	struct UPDButton* Filename_15; // 0x360(0x08)
	struct UPDButton* Filename_16; // 0x368(0x08)
	struct UPDButton* Filename_17; // 0x370(0x08)
	struct UPDButton* Filename_18; // 0x378(0x08)
	struct UPDButton* Filename_19; // 0x380(0x08)

	void OnClickBtnGotoLobby(); // Function ProjectD.PDDebugLogUI.OnClickBtnGotoLobby // (Final|Native|Protected) // @ game+0x1804e30
	void OnClickBtnFPRight(); // Function ProjectD.PDDebugLogUI.OnClickBtnFPRight // (Final|Native|Protected) // @ game+0x180c420
	void OnClickBtnFPLeft(); // Function ProjectD.PDDebugLogUI.OnClickBtnFPLeft // (Final|Native|Protected) // @ game+0x180c400
	void OnClickBtnFileName_10(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_10 // (Final|Native|Protected) // @ game+0x180c680
	void OnClickBtnFileName_9(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_9 // (Final|Native|Protected) // @ game+0x180c660
	void OnClickBtnFileName_8(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_8 // (Final|Native|Protected) // @ game+0x180c640
	void OnClickBtnFileName_7(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_7 // (Final|Native|Protected) // @ game+0x180c620
	void OnClickBtnFileName_6(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_6 // (Final|Native|Protected) // @ game+0x180c600
	void OnClickBtnFileName_5(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_5 // (Final|Native|Protected) // @ game+0x180c5e0
	void OnClickBtnFileName_4(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_4 // (Final|Native|Protected) // @ game+0x180c5c0
	void OnClickBtnFileName_3(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_3 // (Final|Native|Protected) // @ game+0x180c5a0
	void OnClickBtnFileName_19(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_19 // (Final|Native|Protected) // @ game+0x180c560
	void OnClickBtnFileName_18(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_18 // (Final|Native|Protected) // @ game+0x180c540
	void OnClickBtnFileName_17(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_17 // (Final|Native|Protected) // @ game+0x180c520
	void OnClickBtnFileName_16(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_16 // (Final|Native|Protected) // @ game+0x180c500
	void OnClickBtnFileName_15(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_15 // (Final|Native|Protected) // @ game+0x180c4e0
	void OnClickBtnFileName_14(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_14 // (Final|Native|Protected) // @ game+0x180c4c0
	void OnClickBtnFileName_13(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_13 // (Final|Native|Protected) // @ game+0x180c4a0
	void OnClickBtnFileName_12(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_12 // (Final|Native|Protected) // @ game+0x180c480
	void OnClickBtnFileName_11(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_11 // (Final|Native|Protected) // @ game+0x180c460
	void OnClickBtnFileName_2(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_2 // (Final|Native|Protected) // @ game+0x180c580
	void OnClickBtnFileName_1(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_1 // (Final|Native|Protected) // @ game+0x180c440
};

// Class ProjectD.PDDefuseBombModeUI
// Size: 0x498 (Inherited: 0x430)
struct UPDDefuseBombModeUI : UPDBaseModeUI {
	char pad_430[0x28]; // 0x430(0x28)
	struct UPDCCTVUI* CCTV; // 0x458(0x08)
	struct UPDSkyViewUI* SkyView; // 0x460(0x08)
	struct UPDIngameStatusBoardUI* IngameStatusBoard; // 0x468(0x08)
	struct UPDRoundInfoUI* RoundInfo; // 0x470(0x08)
	struct UPDRoundResult* RoundResult; // 0x478(0x08)
	struct UPDKillMessage* KillMessage; // 0x480(0x08)
	struct UPDRoundReplayer* RoundReplayer; // 0x488(0x08)
	struct UPDReportPopupUI* ReportPopup; // 0x490(0x08)
};

// Class ProjectD.PDDisplayOptionUI
// Size: 0x438 (Inherited: 0x338)
struct UPDDisplayOptionUI : UPDOptionUIBase {
	struct UPDTabButton* DisplaySettingBtn; // 0x338(0x08)
	struct UPDTabButton* GraphicSettingBtn; // 0x340(0x08)
	struct UPDTabButton* SystemSettingBtn; // 0x348(0x08)
	struct UScrollBox* SB_Display; // 0x350(0x08)
	char pad_358[0x58]; // 0x358(0x58)
	struct UEnum* EDisplayModePtr; // 0x3b0(0x08)
	struct UEnum* EFrameRateModePtr; // 0x3b8(0x08)
	struct UEnum* EGraphicsQualityPtr; // 0x3c0(0x08)
	struct UEnum* EBlockTypePtr; // 0x3c8(0x08)
	char pad_3D0[0x68]; // 0x3d0(0x68)

	void OnWhisperBlockChanged(struct FString sItem, enum class ESelectInfo SelType); // Function ProjectD.PDDisplayOptionUI.OnWhisperBlockChanged // (Final|Native|Private) // @ game+0x180d680
	void OnViewDistanceQualityChanged(float Value); // Function ProjectD.PDDisplayOptionUI.OnViewDistanceQualityChanged // (Final|Native|Private) // @ game+0x180d600
	void OnUseVSyncChanged(bool bIsChecked); // Function ProjectD.PDDisplayOptionUI.OnUseVSyncChanged // (Final|Native|Private) // @ game+0x180d570
	void OnUseAdditionalPostProcessesChanged(bool Value); // Function ProjectD.PDDisplayOptionUI.OnUseAdditionalPostProcessesChanged // (Final|Native|Private) // @ game+0x180d4e0
	void OnTextureQualityChanged(float Value); // Function ProjectD.PDDisplayOptionUI.OnTextureQualityChanged // (Final|Native|Private) // @ game+0x180d460
	void OnShadowQualityChanged(float Value); // Function ProjectD.PDDisplayOptionUI.OnShadowQualityChanged // (Final|Native|Private) // @ game+0x180d3e0
	void OnScreenPercentageChanged(float Value); // Function ProjectD.PDDisplayOptionUI.OnScreenPercentageChanged // (Final|Native|Private) // @ game+0x180d360
	void OnResolutionChanged(struct FString sItem, enum class ESelectInfo SelType); // Function ProjectD.PDDisplayOptionUI.OnResolutionChanged // (Final|Native|Private) // @ game+0x180d230
	void OnPostProcessQualityChanged(float Value); // Function ProjectD.PDDisplayOptionUI.OnPostProcessQualityChanged // (Final|Native|Private) // @ game+0x180d1b0
	void OnPostProcessAAQualityChanged(float Value); // Function ProjectD.PDDisplayOptionUI.OnPostProcessAAQualityChanged // (Final|Native|Private) // @ game+0x180d130
	void OnPartyInviteBlockChanged(struct FString sItem, enum class ESelectInfo SelType); // Function ProjectD.PDDisplayOptionUI.OnPartyInviteBlockChanged // (Final|Native|Private) // @ game+0x180d000
	void OnOutGameBrightnessVolumeChanged(float Value); // Function ProjectD.PDDisplayOptionUI.OnOutGameBrightnessVolumeChanged // (Final|Native|Private) // @ game+0x180cf80
	void OnMaxAnisotropyChanged(float Value); // Function ProjectD.PDDisplayOptionUI.OnMaxAnisotropyChanged // (Final|Native|Private) // @ game+0x180cf00
	void OnLightShaftChanged(bool Value); // Function ProjectD.PDDisplayOptionUI.OnLightShaftChanged // (Final|Native|Private) // @ game+0x180ce70
	void OnLanguageChanged(struct FString sItem, enum class ESelectInfo SelType); // Function ProjectD.PDDisplayOptionUI.OnLanguageChanged // (Final|Native|Private) // @ game+0x180cd40
	void OnInGameBrightnessVolumeChanged(float Value); // Function ProjectD.PDDisplayOptionUI.OnInGameBrightnessVolumeChanged // (Final|Native|Private) // @ game+0x180ccc0
	void OnFullScreenModeChanged(struct FString sItem, enum class ESelectInfo SelType); // Function ProjectD.PDDisplayOptionUI.OnFullScreenModeChanged // (Final|Native|Private) // @ game+0x180cb90
	void OnFrameRateModeChanged(struct FString sItem, enum class ESelectInfo SelType); // Function ProjectD.PDDisplayOptionUI.OnFrameRateModeChanged // (Final|Native|Private) // @ game+0x180ca60
	void OnFrameRateLimitChanged(float Value); // Function ProjectD.PDDisplayOptionUI.OnFrameRateLimitChanged // (Final|Native|Private) // @ game+0x180c9e0
	void OnFoliageQualityChanged(float Value); // Function ProjectD.PDDisplayOptionUI.OnFoliageQualityChanged // (Final|Native|Private) // @ game+0x180c960
	void OnEffectsQualityChanged(float Value); // Function ProjectD.PDDisplayOptionUI.OnEffectsQualityChanged // (Final|Native|Private) // @ game+0x180c7a0
	void OnClickSystemSettingButton(); // Function ProjectD.PDDisplayOptionUI.OnClickSystemSettingButton // (Final|Native|Private) // @ game+0x180c780
	void OnClickMidiumGraphicButton(); // Function ProjectD.PDDisplayOptionUI.OnClickMidiumGraphicButton // (Final|Native|Private) // @ game+0x180c760
	void OnClickLowGraphicButton(); // Function ProjectD.PDDisplayOptionUI.OnClickLowGraphicButton // (Final|Native|Private) // @ game+0x180c740
	void OnClickHighGraphicButton(); // Function ProjectD.PDDisplayOptionUI.OnClickHighGraphicButton // (Final|Native|Private) // @ game+0x180c720
	void OnClickGraphicSettingButton(); // Function ProjectD.PDDisplayOptionUI.OnClickGraphicSettingButton // (Final|Native|Private) // @ game+0x180c700
	void OnClickEpicGraphicButton(); // Function ProjectD.PDDisplayOptionUI.OnClickEpicGraphicButton // (Final|Native|Private) // @ game+0x180c6e0
	void OnClickDisplaySettingButton(); // Function ProjectD.PDDisplayOptionUI.OnClickDisplaySettingButton // (Final|Native|Private) // @ game+0x180c6c0
	void OnClickCustomGraphicButton(); // Function ProjectD.PDDisplayOptionUI.OnClickCustomGraphicButton // (Final|Native|Private) // @ game+0x180c6a0
	void OnBackGroundQualityChanged(float Value); // Function ProjectD.PDDisplayOptionUI.OnBackGroundQualityChanged // (Final|Native|Private) // @ game+0x180c190
	void OnAddFriendBlockChanged(struct FString sItem, enum class ESelectInfo SelType); // Function ProjectD.PDDisplayOptionUI.OnAddFriendBlockChanged // (Final|Native|Private) // @ game+0x180c060
};

// Class ProjectD.PDDPICustomScalingRule
// Size: 0x28 (Inherited: 0x28)
struct UPDDPICustomScalingRule : UDPICustomScalingRule {
};

// Class ProjectD.PDDroneSpringArmComponent
// Size: 0x2a0 (Inherited: 0x280)
struct UPDDroneSpringArmComponent : USpringArmComponent {
	float CrouchTargetOffsetLagSpeed; // 0x280(0x04)
	char pad_284[0x1c]; // 0x284(0x1c)
};

// Class ProjectD.PDDynamicActorEntity
// Size: 0x230 (Inherited: 0x220)
struct APDDynamicActorEntity : AActor {
	char pad_220[0x10]; // 0x220(0x10)
};

// Class ProjectD.PDDynamicObjectEvent
// Size: 0x420 (Inherited: 0x220)
struct APDDynamicObjectEvent : AActor {
	char pad_220[0x20]; // 0x220(0x20)
	int32_t DBID; // 0x240(0x04)
	bool UseCollisionBox; // 0x244(0x01)
	char pad_245[0x1db]; // 0x245(0x1db)

	void OnActorEndOverlapEvent(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function ProjectD.PDDynamicObjectEvent.OnActorEndOverlapEvent // (Final|Native|Protected) // @ game+0x180bfa0
	void OnActorBeginOverlapEvent(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function ProjectD.PDDynamicObjectEvent.OnActorBeginOverlapEvent // (Final|Native|Protected) // @ game+0x180bee0
};

// Class ProjectD.PDDynamicObject
// Size: 0x6c0 (Inherited: 0x420)
struct APDDynamicObject : APDDynamicObjectEvent {
	enum class EDYNAMICOBJECTSTATE DefaultState; // 0x420(0x01)
	bool ReverseDirection; // 0x421(0x01)
	char pad_422[0x29e]; // 0x422(0x29e)
};

// Class ProjectD.PDDynamicObjectPoint
// Size: 0x430 (Inherited: 0x430)
struct UPDDynamicObjectPoint : USphereComponent {
};

// Class ProjectD.PDDynamicObjectSwitchComponent
// Size: 0x570 (Inherited: 0x4a0)
struct UPDDynamicObjectSwitchComponent : UStaticMeshComponent {
	struct UArrowComponent* InteractionArrow; // 0x498(0x08)
	struct UBoxComponent* SwitchExtentBox; // 0x4a0(0x08)
	struct TSet<struct FString> ReactNames; // 0x4a8(0x50)
	struct TMap<int32_t, struct UMaterialInstance*> ActiveMaterial; // 0x4f8(0x50)
	char pad_550[0x20]; // 0x550(0x20)

	void OnEndTriggerOverlap(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function ProjectD.PDDynamicObjectSwitchComponent.OnEndTriggerOverlap // (Final|Native|Public) // @ game+0x180c820
	void OnBeginTriggerOverlap(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function ProjectD.PDDynamicObjectSwitchComponent.OnBeginTriggerOverlap // (Final|Native|Public|HasOutParms) // @ game+0x180c210
};

// Class ProjectD.PDEndAnimNotifyState
// Size: 0x38 (Inherited: 0x30)
struct UPDEndAnimNotifyState : UAnimNotifyState {
	enum class EPDEndAnimationType EndAnimationType; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class ProjectD.PDSolidInfoBase
// Size: 0x28 (Inherited: 0x28)
struct UPDSolidInfoBase : UInterface {
};

// Class ProjectD.PDEnvEffect
// Size: 0x528 (Inherited: 0x220)
struct APDEnvEffect : AActor {
	enum class EPDEnvEffectClientType EffectType; // 0x220(0x01)
	char pad_221[0x7]; // 0x221(0x07)
	struct UArrowComponent* MovingObjectSoundHelper; // 0x228(0x08)
	struct UArrowComponent* CameraMountedHelper; // 0x230(0x08)
	struct UArrowComponent* FrontOutdoor; // 0x238(0x08)
	struct UMaterialParameterCollection* MPC; // 0x240(0x08)
	struct UCurveLinearColor* SandStormCurve; // 0x248(0x08)
	struct UCurveLinearColor* SandStormCurve2; // 0x250(0x08)
	struct FEnvSetting OrgSetting; // 0x258(0x64)
	struct FEnvSetting TargetSetting; // 0x2bc(0x64)
	float TransitionDistance; // 0x320(0x04)
	float EnteringDistance; // 0x324(0x04)
	float CameraImpactDistance; // 0x328(0x04)
	float IntensityFactor; // 0x32c(0x04)
	float OutdoornessTransitionTime; // 0x330(0x04)
	float VisibilityToggleDistance; // 0x334(0x04)
	char pad_338[0x4]; // 0x338(0x04)
	struct TWeakObjectPtr<struct UExponentialHeightFogComponent> GlobalFog; // 0x33c(0x08)
	struct TWeakObjectPtr<struct UDirectionalLightComponent> GlobalDirectionalLightComponent; // 0x344(0x08)
	struct TWeakObjectPtr<struct USkyLightComponent> GlobalSkyLightComponent; // 0x34c(0x08)
	char pad_354[0x14c]; // 0x354(0x14c)
	struct FVector MovingObjectInitPosition; // 0x4a0(0x0c)
	struct FVector MovingObjectTargetPosition; // 0x4ac(0x0c)
	struct TWeakObjectPtr<struct UMaterialParameterCollectionInstance> MPCI; // 0x4b8(0x08)
	struct TWeakObjectPtr<struct UParticleSystemComponent> MovingEffect; // 0x4c0(0x08)
	struct TArray<struct TWeakObjectPtr<struct UParticleSystemComponent>> Particles; // 0x4c8(0x10)
	struct TArray<struct TWeakObjectPtr<struct UParticleSystemComponent>> SolidParticles; // 0x4d8(0x10)
	struct TArray<struct TWeakObjectPtr<struct UParticleSystemComponent>> SwitchableParticles; // 0x4e8(0x10)
	struct TWeakObjectPtr<struct UPostProcessComponent> PostProcessRef; // 0x4f8(0x08)
	struct TWeakObjectPtr<struct APDIndoorVolume> IndoorVolume; // 0x500(0x08)
	struct TArray<struct TWeakObjectPtr<struct AActor>> ActorsForVisibilityToggleByDistance; // 0x508(0x10)
	char pad_518[0x10]; // 0x518(0x10)
};

// Class ProjectD.PEquipLeptonListItemData
// Size: 0x78 (Inherited: 0x28)
struct UPEquipLeptonListItemData : UObject {
	char pad_28[0x50]; // 0x28(0x50)
};

// Class ProjectD.PDEquipLeptonListItem
// Size: 0x318 (Inherited: 0x288)
struct UPDEquipLeptonListItem : UPDUserWidget {
	char pad_288[0x8]; // 0x288(0x08)
	struct UWidgetSwitcher* WS_EquipLepton; // 0x290(0x08)
	struct UImage* IMG_Item; // 0x298(0x08)
	struct UPDTextBlock* TB_Name; // 0x2a0(0x08)
	struct UImage* IMG_Cost1; // 0x2a8(0x08)
	struct UImage* IMG_Cost2; // 0x2b0(0x08)
	struct UImage* IMG_Cost3; // 0x2b8(0x08)
	struct UImage* IMG_Cost4; // 0x2c0(0x08)
	struct UImage* IMG_Cost5; // 0x2c8(0x08)
	struct UBorder* BD_Outline; // 0x2d0(0x08)
	struct UDragDropOperation* DragDropOperation; // 0x2d8(0x08)
	char pad_2E0[0x28]; // 0x2e0(0x28)
	struct TArray<struct UImage*> CostImgArr; // 0x308(0x10)
};

// Class ProjectD.PDEquipPerkList
// Size: 0x328 (Inherited: 0x288)
struct UPDEquipPerkList : UPDUserWidget {
	char pad_288[0x18]; // 0x288(0x18)
	struct UTileView* TV_PerkSignatureList; // 0x2a0(0x08)
	struct UTileView* TV_PerkSocketList; // 0x2a8(0x08)
	struct UTileView* TV_PerkPassiveList; // 0x2b0(0x08)
	struct UCanvasPanel* CP_SkillToolTip; // 0x2b8(0x08)
	struct UBorder* B_SkillToolTip; // 0x2c0(0x08)
	struct UImage* IMG_DescIcon; // 0x2c8(0x08)
	struct UPDTextBlock* TB_PerkName; // 0x2d0(0x08)
	struct UPDTextBlock* TB_PerkDesc; // 0x2d8(0x08)
	struct UPDTextBlock* TB_PerkStory; // 0x2e0(0x08)
	struct UCanvasPanel* CP_AlertEquipPerk; // 0x2e8(0x08)
	struct UPDButton* Btn_GoEquipPerk; // 0x2f0(0x08)
	struct UCanvasPanel* CP_Perk_Alert; // 0x2f8(0x08)
	struct UHorizontalBox* HP_PerkList; // 0x300(0x08)
	char pad_308[0x20]; // 0x308(0x20)

	void SetSkillToolTipVisible(bool bShow); // Function ProjectD.PDEquipPerkList.SetSkillToolTipVisible // (Final|Native|Private) // @ game+0x1811920
	void SetSkillInfo(int32_t SkillIndex, struct FVector2D InfoAbsolutePos, int32_t IconWidth); // Function ProjectD.PDEquipPerkList.SetSkillInfo // (Final|Native|Private|HasDefaults) // @ game+0x1811820
	void SetSignatureInfo(int32_t SignatureIndex, struct FVector2D InfoAbsolutePos, int32_t IconWidth); // Function ProjectD.PDEquipPerkList.SetSignatureInfo // (Final|Native|Private|HasDefaults) // @ game+0x1811720
	void OnListClickItem(struct UPDCustomPerkListItemData* InListItemData); // Function ProjectD.PDEquipPerkList.OnListClickItem // (Final|Native|Private) // @ game+0x1811540
};

// Class ProjectD.PDEscMenuUI
// Size: 0x2a8 (Inherited: 0x288)
struct UPDEscMenuUI : UPDUserWidget {
	struct UPDButton* ResumeBtn; // 0x288(0x08)
	struct UPDButton* LeaveGameBtn; // 0x290(0x08)
	struct UPDButton* QuitBtn; // 0x298(0x08)
	struct UPDButton* OptionBtn; // 0x2a0(0x08)

	void OnClickResumeBtn(); // Function ProjectD.PDEscMenuUI.OnClickResumeBtn // (Final|Native|Private) // @ game+0x1810f50
	void OnClickQuitBtn(); // Function ProjectD.PDEscMenuUI.OnClickQuitBtn // (Final|Native|Private) // @ game+0x1810ef0
	void OnClickOptionBtn(); // Function ProjectD.PDEscMenuUI.OnClickOptionBtn // (Final|Native|Private) // @ game+0x1810ed0
	void OnClickLeaveGameBtn(); // Function ProjectD.PDEscMenuUI.OnClickLeaveGameBtn // (Final|Native|Private) // @ game+0x1810eb0
};

// Class ProjectD.PDExportSafeZoneInitialVertices
// Size: 0x288 (Inherited: 0x220)
struct APDExportSafeZoneInitialVertices : AActor {
	char GroupID; // 0x220(0x01)
	char UsageVertexNum; // 0x221(0x01)
	char pad_222[0x6]; // 0x222(0x06)
	struct UStaticMeshComponent* Origin; // 0x228(0x08)
	struct UPDExportSafeZoneVertexComponent* Vertex_00; // 0x230(0x08)
	struct UPDExportSafeZoneVertexComponent* Vertex_01; // 0x238(0x08)
	struct UPDExportSafeZoneVertexComponent* Vertex_02; // 0x240(0x08)
	struct UPDExportSafeZoneVertexComponent* Vertex_03; // 0x248(0x08)
	struct UPDExportSafeZoneVertexComponent* Vertex_04; // 0x250(0x08)
	struct UPDExportSafeZoneVertexComponent* Vertex_05; // 0x258(0x08)
	struct UPDExportSafeZoneVertexComponent* Vertex_06; // 0x260(0x08)
	struct UPDExportSafeZoneVertexComponent* Vertex_07; // 0x268(0x08)
	struct UPDExportSafeZoneVertexComponent* Vertex_08; // 0x270(0x08)
	struct UPDExportSafeZoneVertexComponent* Vertex_09; // 0x278(0x08)
	struct UPDExportSafeZoneVertexComponent* Vertex_11; // 0x280(0x08)
};

// Class ProjectD.PDExportSafeZoneSelectPoint
// Size: 0x278 (Inherited: 0x220)
struct APDExportSafeZoneSelectPoint : AActor {
	struct UStaticMeshComponent* Mesh; // 0x220(0x08)
	struct TSet<char> UsagePhaseGroupIDs; // 0x228(0x50)
};

// Class ProjectD.PDExportSafeZoneVertexComponent
// Size: 0x4a0 (Inherited: 0x4a0)
struct UPDExportSafeZoneVertexComponent : UStaticMeshComponent {
	char Index; // 0x498(0x01)
};

// Class ProjectD.PDExportSeedArea
// Size: 0x260 (Inherited: 0x220)
struct APDExportSeedArea : AActor {
	int32_t SeedAreaID; // 0x220(0x04)
	char pad_224[0x4]; // 0x224(0x04)
	struct UStaticMeshComponent* SeedAComp; // 0x228(0x08)
	struct UStaticMeshComponent* SeedBComp; // 0x230(0x08)
	char pad_238[0x28]; // 0x238(0x28)

	void OnEndSeedBBoxOverlap(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function ProjectD.PDExportSeedArea.OnEndSeedBBoxOverlap // (Final|Native|Protected) // @ game+0x18113e0
	void OnEndSeedABoxOverlap(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function ProjectD.PDExportSeedArea.OnEndSeedABoxOverlap // (Final|Native|Protected) // @ game+0x18112a0
	void OnBeginSeedBBoxOverlap(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function ProjectD.PDExportSeedArea.OnBeginSeedBBoxOverlap // (Final|Native|Protected|HasOutParms) // @ game+0x1810ba0
	void OnBeginSeedABoxOverlap(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function ProjectD.PDExportSeedArea.OnBeginSeedABoxOverlap // (Final|Native|Protected|HasOutParms) // @ game+0x18109b0
};

// Class ProjectD.PDFindPartyListItemData
// Size: 0x88 (Inherited: 0x28)
struct UPDFindPartyListItemData : UObject {
	char pad_28[0x60]; // 0x28(0x60)
};

// Class ProjectD.PDFindPartyListItem
// Size: 0x3c0 (Inherited: 0x288)
struct UPDFindPartyListItem : UPDUserWidget {
	char pad_288[0x8]; // 0x288(0x08)
	struct UBorder* BD_Background; // 0x290(0x08)
	struct UWidgetSwitcher* WS_State; // 0x298(0x08)
	struct UImage* IMG_Face; // 0x2a0(0x08)
	struct UCanvasPanel* CP_ClanMarkInfo; // 0x2a8(0x08)
	struct UImage* IMG_ClanMarkBG; // 0x2b0(0x08)
	struct UImage* IMG_ClanMarkFG; // 0x2b8(0x08)
	struct UPDTextBlock* TB_ClanName; // 0x2c0(0x08)
	struct UPDTextBlock* TB_Nickname; // 0x2c8(0x08)
	struct UWidgetSwitcher* WS_UserInfo; // 0x2d0(0x08)
	struct UPDTextBlock* TB_KD; // 0x2d8(0x08)
	struct UPDTextBlock* TB_ADR; // 0x2e0(0x08)
	struct UWidgetSwitcher* WS_BtnState; // 0x2e8(0x08)
	struct UPDButton* Btn_Recruit; // 0x2f0(0x08)
	struct UHorizontalBox* HB_UserData; // 0x2f8(0x08)
	struct UImage* IMG_Manner; // 0x300(0x08)
	struct UImage* IMG_Medal1; // 0x308(0x08)
	struct UImage* IMG_Medal2; // 0x310(0x08)
	struct UImage* IMG_Medal3; // 0x318(0x08)
	struct UPDTextBlock* TB_Medal1; // 0x320(0x08)
	struct UPDTextBlock* TB_Medal2; // 0x328(0x08)
	struct UPDTextBlock* TB_Medal3; // 0x330(0x08)
	struct UImage* IMG_Ping_01; // 0x338(0x08)
	struct UImage* IMG_Ping_02; // 0x340(0x08)
	struct UImage* IMG_Ping_03; // 0x348(0x08)
	struct UImage* IMG_Ping_04; // 0x350(0x08)
	struct UImage* IMG_Ping_05; // 0x358(0x08)
	struct TArray<struct UImage*> PingImgList; // 0x360(0x10)
	char pad_370[0x50]; // 0x370(0x50)

	struct FEventReply OnDoubleClickItem(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function ProjectD.PDFindPartyListItem.OnDoubleClickItem // (Final|Native|Private|HasOutParms) // @ game+0x18110c0
	void OnClickRecruitButton(); // Function ProjectD.PDFindPartyListItem.OnClickRecruitButton // (Final|Native|Private) // @ game+0x1810f10
};

// Class ProjectD.PDFindPartyPageUI
// Size: 0x2f8 (Inherited: 0x288)
struct UPDFindPartyPageUI : UPDUserWidget {
	struct UPDButton* Btn_FindParty; // 0x288(0x08)
	struct UPDButton* BTN_RegisterMercenary; // 0x290(0x08)
	struct UPDButton* Btn_ResetBrick; // 0x298(0x08)
	struct UWidgetSwitcher* WS_FindParty; // 0x2a0(0x08)
	struct UWidgetSwitcher* WS_RegisterMercenary; // 0x2a8(0x08)
	struct UWidgetSwitcher* WS_Content; // 0x2b0(0x08)
	struct UPDTextBlock* TB_Title; // 0x2b8(0x08)
	struct UTileView* TV_Team; // 0x2c0(0x08)
	struct UTileView* TV_Person; // 0x2c8(0x08)
	struct UHorizontalBox* HB_Alert; // 0x2d0(0x08)
	struct UPDButton* BTN_FindPartyHome; // 0x2d8(0x08)
	struct UCanvasPanel* CP_BackFindParty; // 0x2e0(0x08)
	struct UListView* LV_PartyList; // 0x2e8(0x08)
	struct UListView* LV_RecruitList; // 0x2f0(0x08)

	void OnSelectedTeamBrick(struct UPDBrickListItemData* InListItemData); // Function ProjectD.PDFindPartyPageUI.OnSelectedTeamBrick // (Final|Native|Protected) // @ game+0x1811680
	void OnSelectedPersonBrick(struct UPDBrickListItemData* InListItemData); // Function ProjectD.PDFindPartyPageUI.OnSelectedPersonBrick // (Final|Native|Protected) // @ game+0x1811600
	void OnResetBrickClicked(); // Function ProjectD.PDFindPartyPageUI.OnResetBrickClicked // (Final|Native|Protected) // @ game+0x18115c0
	void OnClickRegisterMercenaryButton(); // Function ProjectD.PDFindPartyPageUI.OnClickRegisterMercenaryButton // (Final|Native|Public) // @ game+0x1810f30
	void OnClickFindPartyHomeButton(); // Function ProjectD.PDFindPartyPageUI.OnClickFindPartyHomeButton // (Final|Native|Protected) // @ game+0x1810e90
	void OnClickFindPartyButton(); // Function ProjectD.PDFindPartyPageUI.OnClickFindPartyButton // (Final|Native|Protected) // @ game+0x1810e70
};

// Class ProjectD.PDFireAnimNotify
// Size: 0x48 (Inherited: 0x48)
struct UPDFireAnimNotify : UPDBaseAnimNotify {
};

// Class ProjectD.PDFireRecoilAnimInstance
// Size: 0x600 (Inherited: 0x5f0)
struct UPDFireRecoilAnimInstance : UPDPlayerAnimInstance {
	struct UBlendSpace* CurrentAnim; // 0x5e8(0x08)
	struct UPDFireRecoilLevel* FireRecoilLevel; // 0x5f0(0x08)
};

// Class ProjectD.PDFireRecoilLevelData
// Size: 0x70 (Inherited: 0x30)
struct UPDFireRecoilLevelData : UDataAsset {
	struct UCurveFloat* RecoilCurve; // 0x30(0x08)
	struct UCurveFloat* FractalCurve; // 0x38(0x08)
	float PushingForce; // 0x40(0x04)
	float PushingTime; // 0x44(0x04)
	float RecoveryForce; // 0x48(0x04)
	float RecoveryDelay; // 0x4c(0x04)
	float ZoomRateOnFire; // 0x50(0x04)
	float ZoomDelayOnFire; // 0x54(0x04)
	float ZoomDelayOnReleaseFire; // 0x58(0x04)
	float ZoomInterpTimeOnFire; // 0x5c(0x04)
	float ZoomInterpTimeOnReleaseFire; // 0x60(0x04)
	float MinX; // 0x64(0x04)
	float MaxX; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class ProjectD.PDFireRecoilLevel
// Size: 0x60 (Inherited: 0x28)
struct UPDFireRecoilLevel : UObject {
	struct UPDFireRecoilLevelData* RecoilData; // 0x28(0x08)
	struct UPDFireRecoilLevelData* OldRecoilData; // 0x30(0x08)
	struct FVector2D Level; // 0x38(0x08)
	char pad_40[0x20]; // 0x40(0x20)
};

// Class ProjectD.PDFPPCamera
// Size: 0x238 (Inherited: 0x220)
struct APDFPPCamera : AActor {
	struct UCameraComponent* Cam; // 0x220(0x08)
	struct USkeletalMeshComponent* CameraMesh; // 0x228(0x08)
	char pad_230[0x8]; // 0x230(0x08)
};

// Class ProjectD.PDFPWeapon
// Size: 0x228 (Inherited: 0x220)
struct APDFPWeapon : AActor {
	struct USceneComponent* MoveControlComp; // 0x220(0x08)
};

// Class ProjectD.PDFriendAddItemData
// Size: 0x88 (Inherited: 0x28)
struct UPDFriendAddItemData : UObject {
	char pad_28[0x50]; // 0x28(0x50)
	struct TArray<struct UPDFriendAddItemData*> TreeChildren; // 0x78(0x10)
};

// Class ProjectD.PDFriendAddItem
// Size: 0x340 (Inherited: 0x288)
struct UPDFriendAddItem : UPDUserWidget {
	char pad_288[0x8]; // 0x288(0x08)
	struct UCanvasPanel* CP_User; // 0x290(0x08)
	struct UCanvasPanel* CP_Category; // 0x298(0x08)
	struct UBorder* Background; // 0x2a0(0x08)
	struct UImage* IMG_Face; // 0x2a8(0x08)
	struct UPDTextBlock* TB_Nickname; // 0x2b0(0x08)
	struct UImage* IMG_ClanMarkBG; // 0x2b8(0x08)
	struct UImage* IMG_ClanMarkFG; // 0x2c0(0x08)
	struct UPDTextBlock* TB_ClanName; // 0x2c8(0x08)
	struct UCanvasPanel* CP_ClanMark; // 0x2d0(0x08)
	struct UPDTextBlock* TB_Category; // 0x2d8(0x08)
	struct UPDButton* BTN_Accept; // 0x2e0(0x08)
	struct UPDButton* BTN_Decline; // 0x2e8(0x08)
	char pad_2F0[0x50]; // 0x2f0(0x50)

	void OnDeclineClicked(); // Function ProjectD.PDFriendAddItem.OnDeclineClicked // (Final|Native|Protected) // @ game+0x18110a0
	void OnAcceptClicked(); // Function ProjectD.PDFriendAddItem.OnAcceptClicked // (Final|Native|Protected) // @ game+0x1810990
};

// Class ProjectD.PDFriendAddPage
// Size: 0x2a0 (Inherited: 0x290)
struct UPDFriendAddPage : UPDCommPage {
	struct UEditableTextBox* ET_NickName; // 0x290(0x08)
	struct UPDButton* BTN_Search; // 0x298(0x08)

	void OnSearchNickClicked(); // Function ProjectD.PDFriendAddPage.OnSearchNickClicked // (Final|Native|Protected) // @ game+0x18115e0
	void OnCommitSearchNick(struct FText& Text, enum class ETextCommit CommitMethod); // Function ProjectD.PDFriendAddPage.OnCommitSearchNick // (Final|Native|Protected|HasOutParms) // @ game+0x1810f70
	void OnChangeText(struct FText& InText); // Function ProjectD.PDFriendAddPage.OnChangeText // (Final|Native|Protected|HasOutParms) // @ game+0x1810d90
};

// Class ProjectD.PDFriendClanItemData
// Size: 0x78 (Inherited: 0x28)
struct UPDFriendClanItemData : UObject {
	char pad_28[0x40]; // 0x28(0x40)
	struct TArray<struct UPDFriendClanItemData*> TreeChildren; // 0x68(0x10)
};

// Class ProjectD.PDFriendClanItem
// Size: 0x378 (Inherited: 0x288)
struct UPDFriendClanItem : UPDUserWidget {
	char pad_288[0x8]; // 0x288(0x08)
	struct UCanvasPanel* CP_User; // 0x290(0x08)
	struct UCanvasPanel* CP_Category; // 0x298(0x08)
	struct UBorder* Background; // 0x2a0(0x08)
	struct UImage* IMG_Face; // 0x2a8(0x08)
	struct UImage* IMG_ClanMarkBG; // 0x2b0(0x08)
	struct UImage* IMG_ClanMarkFG; // 0x2b8(0x08)
	struct UPDTextBlock* TB_ClanName; // 0x2c0(0x08)
	struct UPDTextBlock* TB_Nickname; // 0x2c8(0x08)
	struct UPDTextBlock* TB_State; // 0x2d0(0x08)
	struct UPDTextBlock* TB_Category; // 0x2d8(0x08)
	struct UHorizontalBox* HB_UserData; // 0x2e0(0x08)
	struct UImage* IMG_Manner; // 0x2e8(0x08)
	struct UImage* IMG_Medal1; // 0x2f0(0x08)
	struct UImage* IMG_Medal2; // 0x2f8(0x08)
	struct UImage* IMG_Medal3; // 0x300(0x08)
	struct UCanvasPanel* CP_GradeNone; // 0x308(0x08)
	struct UPDButton* BTN_GradeNone; // 0x310(0x08)
	struct UImage* IMG_GradeNone; // 0x318(0x08)
	struct UCanvasPanel* CP_ToolTip; // 0x320(0x08)
	char pad_328[0x50]; // 0x328(0x50)

	void OnUnHoveredGradeNoneBtn(); // Function ProjectD.PDFriendClanItem.OnUnHoveredGradeNoneBtn // (Final|Native|Private) // @ game+0x1811700
	void OnHoveredGradeNoneBtn(); // Function ProjectD.PDFriendClanItem.OnHoveredGradeNoneBtn // (Final|Native|Private) // @ game+0x1811520
};

// Class ProjectD.PDFriendListItemData
// Size: 0xa0 (Inherited: 0x28)
struct UPDFriendListItemData : UObject {
	char pad_28[0x68]; // 0x28(0x68)
	struct TArray<struct UPDFriendListItemData*> TreeChildren; // 0x90(0x10)
};

// Class ProjectD.PDFriendListItem
// Size: 0x3a0 (Inherited: 0x288)
struct UPDFriendListItem : UPDUserWidget {
	char pad_288[0x8]; // 0x288(0x08)
	struct UCanvasPanel* CP_User; // 0x290(0x08)
	struct UCanvasPanel* CP_Category; // 0x298(0x08)
	struct UBorder* Background; // 0x2a0(0x08)
	struct UImage* IMG_Face; // 0x2a8(0x08)
	struct UPDTextBlock* TB_Nickname; // 0x2b0(0x08)
	struct UImage* IMG_ClanMarkBG; // 0x2b8(0x08)
	struct UImage* IMG_ClanMarkFG; // 0x2c0(0x08)
	struct UPDTextBlock* TB_ClanName; // 0x2c8(0x08)
	struct UPDTextBlock* TB_State; // 0x2d0(0x08)
	struct UPDTextBlock* TB_Category; // 0x2d8(0x08)
	struct UHorizontalBox* HB_UserData; // 0x2e0(0x08)
	struct UImage* IMG_Manner; // 0x2e8(0x08)
	struct UImage* IMG_Medal1; // 0x2f0(0x08)
	struct UImage* IMG_Medal2; // 0x2f8(0x08)
	struct UImage* IMG_Medal3; // 0x300(0x08)
	struct UCanvasPanel* CP_GradeNone; // 0x308(0x08)
	struct UPDButton* BTN_GradeNone; // 0x310(0x08)
	struct UImage* IMG_GradeNone; // 0x318(0x08)
	struct UCanvasPanel* CP_ToolTip; // 0x320(0x08)
	char pad_328[0x78]; // 0x328(0x78)

	void OnUnHoveredGradeNoneBtn(); // Function ProjectD.PDFriendListItem.OnUnHoveredGradeNoneBtn // (Final|Native|Private) // @ game+0x1811700
	void OnHoveredGradeNoneBtn(); // Function ProjectD.PDFriendListItem.OnHoveredGradeNoneBtn // (Final|Native|Private) // @ game+0x1811520
};

// Class ProjectD.PDFriendPage
// Size: 0x290 (Inherited: 0x290)
struct UPDFriendPage : UPDCommPage {
};

// Class ProjectD.PDGameBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPDGameBlueprintLibrary : UBlueprintFunctionLibrary {

	struct UPDGameInstance* GetPDGameInstance(struct UObject* WorldContextObject); // Function ProjectD.PDGameBlueprintLibrary.GetPDGameInstance // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1810910
	struct APlayerController* GetLocalPlayerController(struct UObject* WorldContextObject); // Function ProjectD.PDGameBlueprintLibrary.GetLocalPlayerController // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1810890
	struct AGameStateBase* GetCoreGameState(struct UObject* WorldContextObject); // Function ProjectD.PDGameBlueprintLibrary.GetCoreGameState // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1810810
	struct AGameModeBase* GetCoreGameMode(struct UObject* WorldContextObject); // Function ProjectD.PDGameBlueprintLibrary.GetCoreGameMode // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1810790
};

// Class ProjectD.PDGameInstance
// Size: 0x1b8 (Inherited: 0x198)
struct UPDGameInstance : UGameInstance {
	char pad_198[0x20]; // 0x198(0x20)
};

// Class ProjectD.PDGameMapIconModule
// Size: 0x2a0 (Inherited: 0x288)
struct UPDGameMapIconModule : UPDUserWidget {
	struct UImage* IMG_Icon; // 0x288(0x08)
	struct UPDTextBlock* TB_Label; // 0x290(0x08)
	char pad_298[0x8]; // 0x298(0x08)
};

// Class ProjectD.PDGameMapIconCamp
// Size: 0x2d0 (Inherited: 0x2a0)
struct UPDGameMapIconCamp : UPDGameMapIconModule {
	struct UImage* IMG_Area; // 0x2a0(0x08)
	struct UImage* IMG_Shop; // 0x2a8(0x08)
	struct UCanvasPanel* CP_Info; // 0x2b0(0x08)
	struct UPDGameMapIconCampDrawer* CampDrawer; // 0x2b8(0x08)
	char pad_2C0[0x10]; // 0x2c0(0x10)
};

// Class ProjectD.PDGameMapIconCampDrawer
// Size: 0x340 (Inherited: 0x288)
struct UPDGameMapIconCampDrawer : UPDUserWidget {
	char pad_288[0x30]; // 0x288(0x30)
	struct FSlateBrush AreaBrush; // 0x2b8(0x88)
};

// Class ProjectD.PDGameMapIconDemolition
// Size: 0x2e8 (Inherited: 0x2a0)
struct UPDGameMapIconDemolition : UPDGameMapIconModule {
	struct UCanvasPanel* CP_Reply; // 0x2a0(0x08)
	struct UPDPingReplyUI* Reply01; // 0x2a8(0x08)
	struct UPDPingReplyUI* Reply02; // 0x2b0(0x08)
	struct UPDPingReplyUI* Reply03; // 0x2b8(0x08)
	struct UPDPingReplyUI* Reply04; // 0x2c0(0x08)
	struct UPDPingReplyUI* Reply05; // 0x2c8(0x08)
	struct TArray<struct UPDPingReplyUI*> ReplyList; // 0x2d0(0x10)
	char pad_2E0[0x8]; // 0x2e0(0x08)
};

// Class ProjectD.PDGameMapIconFireSoundUI
// Size: 0x2a8 (Inherited: 0x2a0)
struct UPDGameMapIconFireSoundUI : UPDGameMapIconModule {
	struct USizeBox* SB_Icon; // 0x2a0(0x08)
};

// Class ProjectD.PDGameMapIconFxUI
// Size: 0x2a0 (Inherited: 0x2a0)
struct UPDGameMapIconFxUI : UPDGameMapIconModule {
};

// Class ProjectD.PDGameMapIconPing
// Size: 0x2f0 (Inherited: 0x2a0)
struct UPDGameMapIconPing : UPDGameMapIconModule {
	struct UCanvasPanel* CP_Normal; // 0x2a0(0x08)
	struct UImage* IMG_IconFx; // 0x2a8(0x08)
	struct UCanvasPanel* CP_Item; // 0x2b0(0x08)
	struct UImage* IMG_Item; // 0x2b8(0x08)
	struct UScaleBox* SB_Weapon; // 0x2c0(0x08)
	struct UImage* IMG_Weapon; // 0x2c8(0x08)
	struct UCanvasPanel* CP_Info; // 0x2d0(0x08)
	struct UBorder* BD_UserColor; // 0x2d8(0x08)
	struct UPDTextBlock* TB_UserNum; // 0x2e0(0x08)
	char pad_2E8[0x8]; // 0x2e8(0x08)
};

// Class ProjectD.PDGameMapIconPlayerDrawing
// Size: 0x2c0 (Inherited: 0x2a0)
struct UPDGameMapIconPlayerDrawing : UPDGameMapIconModule {
	char pad_2A0[0x20]; // 0x2a0(0x20)
};

// Class ProjectD.PDGameMapIconPlayerUI
// Size: 0x330 (Inherited: 0x2a0)
struct UPDGameMapIconPlayerUI : UPDGameMapIconModule {
	struct UCanvasPanel* CP_Direction; // 0x2a0(0x08)
	struct UCanvasPanel* CP_Normal; // 0x2a8(0x08)
	struct UBorder* BD_Arrow; // 0x2b0(0x08)
	struct UBorder* BD_View; // 0x2b8(0x08)
	struct UWidgetSwitcher* WS_State; // 0x2c0(0x08)
	struct UProgressBar* PB_Groggy; // 0x2c8(0x08)
	struct UPDTextBlock* TB_Name; // 0x2d0(0x08)
	struct UBorder* BD_Fire; // 0x2d8(0x08)
	struct UImage* IMG_Speaking_Normal; // 0x2e0(0x08)
	struct UImage* IMG_Speaking_Groggy; // 0x2e8(0x08)
	struct UImage* IMG_Item; // 0x2f0(0x08)
	struct UImage* IMG_HasSeed; // 0x2f8(0x08)
	struct UPaperSprite* IMG_Rescue; // 0x300(0x08)
	struct UPaperSprite* IMG_ItemUse_Bandage; // 0x308(0x08)
	struct UPaperSprite* IMG_ItemUse_Astrapi; // 0x310(0x08)
	struct UPaperSprite* IMG_ItemUse_ArmorKit; // 0x318(0x08)
	char pad_320[0x10]; // 0x320(0x10)
};

// Class ProjectD.PDGameMapIconSafeZoneDrawer
// Size: 0x2c8 (Inherited: 0x288)
struct UPDGameMapIconSafeZoneDrawer : UPDUserWidget {
	enum class ESafeZoneDrawType DrawType; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct TArray<struct FSafeZoneDrawing> Drawings; // 0x290(0x10)
	bool DrawLineAntialias; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	float DrawLineTickness; // 0x2a4(0x04)
	bool bEdgeRounding; // 0x2a8(0x01)
	char pad_2A9[0x3]; // 0x2a9(0x03)
	float EdgeRoundingLen; // 0x2ac(0x04)
	int32_t EdgeRoundingSegment; // 0x2b0(0x04)
	char pad_2B4[0x14]; // 0x2b4(0x14)
};

// Class ProjectD.PDGameMapIconSafeZoneModule
// Size: 0x2d8 (Inherited: 0x2a0)
struct UPDGameMapIconSafeZoneModule : UPDGameMapIconModule {
	struct URetainerBox* RB_Mask; // 0x2a0(0x08)
	struct UCanvasPanel* CP_Mask; // 0x2a8(0x08)
	struct UImage* IMG_Area; // 0x2b0(0x08)
	struct UPDGameMapIconSafeZoneDrawer* DrawerCurrent; // 0x2b8(0x08)
	struct UPDGameMapIconSafeZoneDrawer* DrawerNext; // 0x2c0(0x08)
	char pad_2C8[0x10]; // 0x2c8(0x10)
};

// Class ProjectD.PDGameMapModule
// Size: 0x3c0 (Inherited: 0x288)
struct UPDGameMapModule : UPDUserWidget {
	struct UImage* IMG_Map; // 0x288(0x08)
	struct UCanvasPanel* CP_Map; // 0x290(0x08)
	struct UCanvasPanel* CP_Restriction; // 0x298(0x08)
	enum class EMapShape MapShape; // 0x2a0(0x01)
	enum class EWidgetClipping AreaClipping; // 0x2a1(0x01)
	char pad_2A2[0x6]; // 0x2a2(0x06)
	struct UPDGameMapIconModule* IconClassDefault; // 0x2a8(0x08)
	struct TMap<enum class EMapObjectType, struct UPDGameMapIconModule*> IconClassMap; // 0x2b0(0x50)
	char pad_300[0xc0]; // 0x300(0xc0)
};

// Class ProjectD.PDGameModeSelectItemUI
// Size: 0x2b8 (Inherited: 0x288)
struct UPDGameModeSelectItemUI : UPDUserWidget {
	char pad_288[0x18]; // 0x288(0x18)
	struct UImage* IMG_Mode; // 0x2a0(0x08)
	struct UPDButton* GameModeButton; // 0x2a8(0x08)
	char pad_2B0[0x8]; // 0x2b0(0x08)

	void OnClick(); // Function ProjectD.PDGameModeSelectItemUI.OnClick // (Final|Native|Private) // @ game+0x1814c10
};

// Class ProjectD.PDGameModeSelectUI
// Size: 0x298 (Inherited: 0x288)
struct UPDGameModeSelectUI : UPDSceneBaseUI {
	struct UTileView* TV_GameModeList; // 0x288(0x08)
	struct UPDButton* Btn_GotoLobby; // 0x290(0x08)

	void GotoLobby(); // Function ProjectD.PDGameModeSelectUI.GotoLobby // (Final|Native|Private) // @ game+0x1804e30
	void GameModeSelect(int32_t SelectModeID); // Function ProjectD.PDGameModeSelectUI.GameModeSelect // (Final|Native|Private) // @ game+0x1814af0
};

// Class ProjectD.PDGameplayOptionUI
// Size: 0x380 (Inherited: 0x338)
struct UPDGameplayOptionUI : UPDOptionUIBase {
	struct UScrollBox* SB_Gameplay; // 0x338(0x08)
	struct UPDTabButton* MouseSettingBtn; // 0x340(0x08)
	struct UPDTabButton* FireSettingBtn; // 0x348(0x08)
	struct UPDTabButton* UISettingBtn; // 0x350(0x08)
	char pad_358[0x28]; // 0x358(0x28)

	void Onx80ZoomScopeChanged(float Value); // Function ProjectD.PDGameplayOptionUI.Onx80ZoomScopeChanged // (Final|Native|Private) // @ game+0x1815780
	void Onx40ZoomScopeChanged(float Value); // Function ProjectD.PDGameplayOptionUI.Onx40ZoomScopeChanged // (Final|Native|Private) // @ game+0x1815700
	void Onx20ZoomScopeChanged(float Value); // Function ProjectD.PDGameplayOptionUI.Onx20ZoomScopeChanged // (Final|Native|Private) // @ game+0x1815680
	void Onx160ZoomScopeChanged(float Value); // Function ProjectD.PDGameplayOptionUI.Onx160ZoomScopeChanged // (Final|Native|Private) // @ game+0x1815600
	void OnSubtitleUseChanged(bool Value); // Function ProjectD.PDGameplayOptionUI.OnSubtitleUseChanged // (Final|Native|Private) // @ game+0x1815570
	void OnSubtitlePlayerNumberUseChanged(bool Value); // Function ProjectD.PDGameplayOptionUI.OnSubtitlePlayerNumberUseChanged // (Final|Native|Private) // @ game+0x18154e0
	void OnSubtitleBGAlphaChanged(float Value); // Function ProjectD.PDGameplayOptionUI.OnSubtitleBGAlphaChanged // (Final|Native|Private) // @ game+0x1815460
	void OnPingAutoHipFire(); // Function ProjectD.PDGameplayOptionUI.OnPingAutoHipFire // (Final|Native|Private) // @ game+0x1815440
	void OnPingAutoEnabled(); // Function ProjectD.PDGameplayOptionUI.OnPingAutoEnabled // (Final|Native|Private) // @ game+0x1815420
	void OnPingAutoDisabled(); // Function ProjectD.PDGameplayOptionUI.OnPingAutoDisabled // (Final|Native|Private) // @ game+0x1815400
	void OnPingAutoAll(); // Function ProjectD.PDGameplayOptionUI.OnPingAutoAll // (Final|Native|Private) // @ game+0x18153e0
	void OnPingAutoAim(); // Function ProjectD.PDGameplayOptionUI.OnPingAutoAim // (Final|Native|Private) // @ game+0x18153c0
	void OnParkourVisibilityChanged(bool Value); // Function ProjectD.PDGameplayOptionUI.OnParkourVisibilityChanged // (Final|Native|Private) // @ game+0x1815330
	void OnNormalSensitivityChanged(float Value); // Function ProjectD.PDGameplayOptionUI.OnNormalSensitivityChanged // (Final|Native|Private) // @ game+0x18152b0
	void OnMouseSmoothingChanged(bool Value); // Function ProjectD.PDGameplayOptionUI.OnMouseSmoothingChanged // (Final|Native|Private) // @ game+0x1815220
	void OnMouseSensitivityYChanged(float Value); // Function ProjectD.PDGameplayOptionUI.OnMouseSensitivityYChanged // (Final|Native|Private) // @ game+0x18151a0
	void OnMouseSensitivityXChanged(float Value); // Function ProjectD.PDGameplayOptionUI.OnMouseSensitivityXChanged // (Final|Native|Private) // @ game+0x1815120
	void OnMinimapRotationEnabled(); // Function ProjectD.PDGameplayOptionUI.OnMinimapRotationEnabled // (Final|Native|Private) // @ game+0x1815100
	void OnMinimapRotationDisabled(); // Function ProjectD.PDGameplayOptionUI.OnMinimapRotationDisabled // (Final|Native|Private) // @ game+0x18150e0
	void OnIronsightSensitivityChanged(float Value); // Function ProjectD.PDGameplayOptionUI.OnIronsightSensitivityChanged // (Final|Native|Private) // @ game+0x1814fe0
	void OnIngameMapBGAlphaChanged(float Value); // Function ProjectD.PDGameplayOptionUI.OnIngameMapBGAlphaChanged // (Final|Native|Private) // @ game+0x1814f60
	void OnHUDScaleChanged(float Value); // Function ProjectD.PDGameplayOptionUI.OnHUDScaleChanged // (Final|Native|Private) // @ game+0x1814e80
	void OnHitIndicatorChangedBoth(); // Function ProjectD.PDGameplayOptionUI.OnHitIndicatorChangedBoth // (Final|Native|Private) // @ game+0x1814f40
	void OnHitIndicatorChanged3D(); // Function ProjectD.PDGameplayOptionUI.OnHitIndicatorChanged3D // (Final|Native|Private) // @ game+0x1814f20
	void OnHitIndicatorChanged2D(); // Function ProjectD.PDGameplayOptionUI.OnHitIndicatorChanged2D // (Final|Native|Private) // @ game+0x1814f00
	void OnDamageSumView(); // Function ProjectD.PDGameplayOptionUI.OnDamageSumView // (Final|Native|Private) // @ game+0x1814e60
	void OnDamageIndividualView(); // Function ProjectD.PDGameplayOptionUI.OnDamageIndividualView // (Final|Native|Private) // @ game+0x1814e40
	void OnCrossHairColorChanged(struct FString sItem, enum class ESelectInfo SelType); // Function ProjectD.PDGameplayOptionUI.OnCrossHairColorChanged // (Final|Native|Private) // @ game+0x1814d10
	void OnClickUISettingButton(); // Function ProjectD.PDGameplayOptionUI.OnClickUISettingButton // (Final|Native|Private) // @ game+0x1814cf0
	void OnClickMouseSettingButton(); // Function ProjectD.PDGameplayOptionUI.OnClickMouseSettingButton // (Final|Native|Private) // @ game+0x1814c70
	void OnClickFireSettingButton(); // Function ProjectD.PDGameplayOptionUI.OnClickFireSettingButton // (Final|Native|Private) // @ game+0x1814c50
	void OnAimingSensitivityChanged(float Value); // Function ProjectD.PDGameplayOptionUI.OnAimingSensitivityChanged // (Final|Native|Private) // @ game+0x1814b70
};

// Class ProjectD.PDGameResultUI
// Size: 0x618 (Inherited: 0x288)
struct UPDGameResultUI : UPDSceneBaseUI {
	struct UPDTabButtonGroup* MenuCategoryGroup; // 0x288(0x08)
	struct UPDTabButton* TBtn_TabMenu_01; // 0x290(0x08)
	struct UPDTabButton* TBtn_TabMenu_02; // 0x298(0x08)
	struct UPDTabButton* TBtn_TabMenu_03; // 0x2a0(0x08)
	struct UCanvasPanel* CP_Match; // 0x2a8(0x08)
	struct UPDTextBlock* TB_MatchMessage; // 0x2b0(0x08)
	struct UPDTextBlock* TB_MatchMessage_Fx_01; // 0x2b8(0x08)
	struct UPDTextBlock* TB_MatchMessage_Team; // 0x2c0(0x08)
	struct UPDTextBlock* TB_MatchMessage_Result; // 0x2c8(0x08)
	struct UHorizontalBox* HB_MatchRoundRoot; // 0x2d0(0x08)
	struct UCanvasPanel* CP_MatchTeam; // 0x2d8(0x08)
	struct UCanvasPanel* CP_MatchSolo; // 0x2e0(0x08)
	struct UPDTextBlock* TB_MatchScore_Rank; // 0x2e8(0x08)
	float MatchRoundPadding; // 0x2f0(0x04)
	float UserExpDetailPadding; // 0x2f4(0x04)
	struct UWidgetSwitcher* WS_ExpCase; // 0x2f8(0x08)
	struct UWidgetSwitcher* WS_StepType; // 0x300(0x08)
	struct URichTextBlock* RTB_GuideMessage; // 0x308(0x08)
	struct UPDKeyButton* KBtn_Close; // 0x310(0x08)
	struct UPDKeyButton* KBtn_Next; // 0x318(0x08)
	struct UProgressBar* PB_PrevExp; // 0x320(0x08)
	struct UProgressBar* PB_CurrentExp; // 0x328(0x08)
	struct UPDTextBlock* T_Level; // 0x330(0x08)
	struct UPDTextBlock* T_LevelUp; // 0x338(0x08)
	struct UPDTextBlock* T_Personal_CurrentLevel; // 0x340(0x08)
	struct UPDTextBlock* T_Personal_NextLevel; // 0x348(0x08)
	struct UCanvasPanel* CP_CurrentExp; // 0x350(0x08)
	struct UCanvasPanel* CP_PrevExp; // 0x358(0x08)
	struct UPDTextBlock* T_CurrentExp; // 0x360(0x08)
	struct UPDTextBlock* T_MaxExp; // 0x368(0x08)
	struct UPDTextBlock* T_CurrentExp1; // 0x370(0x08)
	struct UHorizontalBox* HB_Exp; // 0x378(0x08)
	struct UPDResultTitleItem* TitleItem0; // 0x380(0x08)
	struct UPDResultTitleItem* TitleItem1; // 0x388(0x08)
	struct UPDResultTitleItem* TitleItem2; // 0x390(0x08)
	struct UPDResultTitleItem* TitleItem3; // 0x398(0x08)
	struct UPDResultTitleItem* TitleItem4; // 0x3a0(0x08)
	struct UPDResultRoundMenuItem* RMI_MenuAll; // 0x3a8(0x08)
	struct UPDResultRoundMenuItem* RMI_Menu1; // 0x3b0(0x08)
	struct UPDResultRoundMenuItem* RMI_Menu2; // 0x3b8(0x08)
	struct UPDResultRoundMenuItem* RMI_Menu3; // 0x3c0(0x08)
	struct UPDResultRoundMenuItem* RMI_Menu4; // 0x3c8(0x08)
	struct UPDResultRoundMenuItem* RMI_Menu5; // 0x3d0(0x08)
	struct UPDResultRoundMenuItem* RMI_Menu6; // 0x3d8(0x08)
	struct UPDResultRoundMenuItem* RMI_Menu7; // 0x3e0(0x08)
	struct UPDResultRoundMenuItem* RMI_Menu8; // 0x3e8(0x08)
	struct UPDResultRoundMenuItem* RMI_Menu9; // 0x3f0(0x08)
	struct UPDResultTeamScore* RTS_List1; // 0x3f8(0x08)
	struct UPDResultTeamScore* RTS_List2; // 0x400(0x08)
	struct UPDResultRankScore* RankScore; // 0x408(0x08)
	struct UPDRoundReplayer* RoundReplayer; // 0x410(0x08)
	struct UWidgetSwitcher* WS_Summary_ResultCase; // 0x418(0x08)
	struct UImage* IMG_ScoreBoard_MatchResult; // 0x420(0x08)
	struct UPDTextBlock* T_MatchInfo_Mode; // 0x428(0x08)
	struct UPDTextBlock* T_MatchInfo_Match; // 0x430(0x08)
	struct UPDTextBlock* T_MatchInfo_Level; // 0x438(0x08)
	struct UPDTextBlock* T_MatchInfo_Time; // 0x440(0x08)
	struct UCanvasPanel* CP_ScoreBoard_MatchTeam; // 0x448(0x08)
	struct UPDTextBlock* T_ScoreBoard_MatchScore_Ally; // 0x450(0x08)
	struct UPDTextBlock* T_ScoreBoard_MatchScore_Enemy; // 0x458(0x08)
	struct UCanvasPanel* CP_ScoreBoard_MatchSolo; // 0x460(0x08)
	struct UPDTextBlock* T_ScoreBoard_MatchScore_Rank; // 0x468(0x08)
	struct UCanvasPanel* CP_ScoreList; // 0x470(0x08)
	struct UPDResultRoundPlayerList* RRP_List1; // 0x478(0x08)
	struct UPDResultRoundPlayerList* RRP_List2; // 0x480(0x08)
	struct UPDResultRewardItem* RRI_Lepton1; // 0x488(0x08)
	struct UPDResultRewardItem* RRI_Lepton2; // 0x490(0x08)
	struct TArray<struct UPDResultRoundMenuItem*> RoundMenuItems; // 0x498(0x10)
	struct TArray<struct UPDResultTitleItem*> TitleItems; // 0x4a8(0x10)
	struct UImage* IMG_FX_TitleBg_Wings; // 0x4b8(0x08)
	struct UImage* IMG_FX_TitleBg_LWing_01; // 0x4c0(0x08)
	struct UImage* IMG_FX_TitleBg_LWing_02; // 0x4c8(0x08)
	struct UImage* IMG_FX_TitleBg_RWing_01; // 0x4d0(0x08)
	struct UImage* IMG_FX_TitleBg_RWing_02; // 0x4d8(0x08)
	struct UPDTextBlock* TB_MatchScore_Ally; // 0x4e0(0x08)
	struct UPDTextBlock* TB_MatchScore_Enemy; // 0x4e8(0x08)
	struct UWidgetSwitcher* WS_ScoreBoard_MatchResult; // 0x4f0(0x08)
	struct UCanvasPanel* CP_ToolTip; // 0x4f8(0x08)
	struct UPDTextBlock* TB_DataName; // 0x500(0x08)
	struct UPDTextBlock* TB_DataValue; // 0x508(0x08)
	char pad_510[0x108]; // 0x510(0x108)

	void OnMenuItemClicked(int32_t InMenuIndex); // Function ProjectD.PDGameResultUI.OnMenuItemClicked // (Final|Native|Protected) // @ game+0x1815060
	void OnClickTitle(); // Function ProjectD.PDGameResultUI.OnClickTitle // (Final|Native|Protected) // @ game+0x1814cd0
	void OnClickScoreBoard(); // Function ProjectD.PDGameResultUI.OnClickScoreBoard // (Final|Native|Protected) // @ game+0x1814cb0
	void OnClickProgress(); // Function ProjectD.PDGameResultUI.OnClickProgress // (Final|Native|Protected) // @ game+0x1814c90
	void OnClickEsc(); // Function ProjectD.PDGameResultUI.OnClickEsc // (Final|Native|Protected) // @ game+0x1814c30
	void OnChangeNextStep(); // Function ProjectD.PDGameResultUI.OnChangeNextStep // (Final|Native|Protected) // @ game+0x1814bf0
};

// Class ProjectD.PDGameTimeUI
// Size: 0x308 (Inherited: 0x290)
struct UPDGameTimeUI : UPDIngameModeWidget {
	struct UCanvasPanel* CP_PlayTime; // 0x290(0x08)
	struct UPanelWidget* PW_PlayTimeNum; // 0x298(0x08)
	struct UPDTextBlock* TB_PlayTimeMin; // 0x2a0(0x08)
	struct UPDTextBlock* TB_PlayTimeSec; // 0x2a8(0x08)
	struct UPDTextBlock* TB_PlayTimeComma; // 0x2b0(0x08)
	struct FLinearColor NormalTimeColor; // 0x2b8(0x10)
	struct FLinearColor WarningTimeColor1; // 0x2c8(0x10)
	struct FLinearColor WarningTimeColor2; // 0x2d8(0x10)
	int32_t WarningPlayTime; // 0x2e8(0x04)
	int32_t EmergencyPlayTime; // 0x2ec(0x04)
	char pad_2F0[0x18]; // 0x2f0(0x18)
};

// Class ProjectD.PDGameViewportClient
// Size: 0x368 (Inherited: 0x330)
struct UPDGameViewportClient : UGameViewportClient {
	char pad_330[0x38]; // 0x330(0x38)
};

// Class ProjectD.PDGBOChildActorComponent
// Size: 0x240 (Inherited: 0x220)
struct UPDGBOChildActorComponent : UChildActorComponent {
	bool RootNode; // 0x220(0x01)
	char pad_221[0x1f]; // 0x221(0x1f)
};

// Class ProjectD.PDGoRagdollAnimNotify
// Size: 0x48 (Inherited: 0x48)
struct UPDGoRagdollAnimNotify : UPDBaseAnimNotify {
};

// Class ProjectD.PDGoRagdollAnimNotifyState
// Size: 0x30 (Inherited: 0x30)
struct UPDGoRagdollAnimNotifyState : UAnimNotifyState {
};

// Class ProjectD.PDGrenadeIndicatorUI
// Size: 0x2b0 (Inherited: 0x2a0)
struct UPDGrenadeIndicatorUI : UPDHUDIconBaseUI {
	struct UBorder* BD_OutArrow; // 0x2a0(0x08)
	char pad_2A8[0x8]; // 0x2a8(0x08)
};

// Class ProjectD.PDGroupBreakableObject
// Size: 0x2b0 (Inherited: 0x220)
struct APDGroupBreakableObject : AActor {
	char pad_220[0x10]; // 0x220(0x10)
	struct TArray<struct UPDGBOChildActorComponent*> ChildActorList; // 0x230(0x10)
	struct TArray<struct UStaticMeshComponent*> StepMeshList; // 0x240(0x10)
	enum class GBOStep EditStep; // 0x250(0x01)
	char pad_251[0x5f]; // 0x251(0x5f)
};

// Class ProjectD.PDGroupBreakableObject10
// Size: 0x2b0 (Inherited: 0x2b0)
struct APDGroupBreakableObject10 : APDGroupBreakableObject {
};

// Class ProjectD.PDGroupBreakableObject2x2
// Size: 0x2b0 (Inherited: 0x2b0)
struct APDGroupBreakableObject2x2 : APDGroupBreakableObject {
};

// Class ProjectD.PDGroupBreakableObject3x3
// Size: 0x2b0 (Inherited: 0x2b0)
struct APDGroupBreakableObject3x3 : APDGroupBreakableObject {
};

// Class ProjectD.PDHideWeaponAnimNotify
// Size: 0x50 (Inherited: 0x48)
struct UPDHideWeaponAnimNotify : UPDBaseAnimNotify {
	enum class EInventorySlot TargetSlot; // 0x48(0x01)
	bool Hidden; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// Class ProjectD.PDHitFeedBackUI
// Size: 0x2f0 (Inherited: 0x288)
struct UPDHitFeedBackUI : UPDUserWidget {
	struct USizeBox* SB_FeedBackIcon; // 0x288(0x08)
	struct UImage* IMG_FeedBackIcon; // 0x290(0x08)
	struct TMap<enum class EPDHitFeedBackType, struct FHitFeedbackIcon> IconMap; // 0x298(0x50)
	char pad_2E8[0x8]; // 0x2e8(0x08)
};

// Class ProjectD.PDHitReactionAnimInstance
// Size: 0x2d0 (Inherited: 0x280)
struct UPDHitReactionAnimInstance : UPDAnimInstance {
	enum class EPDAimingState AimingState; // 0x280(0x01)
	enum class EPDStanceState StanceState; // 0x281(0x01)
	enum class EPDLocoType LocoType; // 0x282(0x01)
	bool bOverrideUpper; // 0x283(0x01)
	enum class EPDHitReactionAnimType HitReactionAnimType; // 0x284(0x01)
	char pad_285[0x3]; // 0x285(0x03)
	struct FRotator HitReactionRotation; // 0x288(0x0c)
	char pad_294[0x4]; // 0x294(0x04)
	struct UAnimMontage* CurrentPlayingHitMontage; // 0x298(0x08)
	char pad_2A0[0x30]; // 0x2a0(0x30)
};

// Class ProjectD.PDHitReactionNotifyState
// Size: 0x40 (Inherited: 0x30)
struct UPDHitReactionNotifyState : UAnimNotifyState {
	struct FName BeginEventName; // 0x30(0x08)
	struct FName EndEventName; // 0x38(0x08)
};

// Class ProjectD.PDIKAnimInstance
// Size: 0x1070 (Inherited: 0x280)
struct UPDIKAnimInstance : UPDAnimInstance {
	char pad_280[0x8]; // 0x280(0x08)
	struct FPDPWUsingInABPAnimDatas PWAnimDatas; // 0x288(0x128)
	bool WStanceIsValid; // 0x3b0(0x01)
	bool SWStanceIsValid; // 0x3b1(0x01)
	char pad_3B2[0x6]; // 0x3b2(0x06)
	struct FPDPerSpecificWeaponAnimDatas PSpecificWeaponAnimDatas; // 0x3b8(0xc8)
	bool MirrorFinalPose; // 0x480(0x01)
	char pad_481[0x3]; // 0x481(0x03)
	float AimInterpTime; // 0x484(0x04)
	bool bAimingIdleState; // 0x488(0x01)
	char pad_489[0x3]; // 0x489(0x03)
	float IKInterpSpeed; // 0x48c(0x04)
	float MaxLookAtDistance; // 0x490(0x04)
	float MinLookAtDistance; // 0x494(0x04)
	enum class ECollisionChannel LookAtTraceChannel; // 0x498(0x01)
	char pad_499[0x17]; // 0x499(0x17)
	struct UMeshComponent* WeaponMeshComponent; // 0x4b0(0x08)
	char pad_4B8[0x8]; // 0x4b8(0x08)
	struct FPDIKAnimInstanceProxy Proxy; // 0x4c0(0xba0)
	char pad_1060[0x10]; // 0x1060(0x10)
};

// Class ProjectD.PDImage
// Size: 0x218 (Inherited: 0x210)
struct UPDImage : UImage {
	bool bPixelSnapping; // 0x210(0x01)
	char pad_211[0x7]; // 0x211(0x07)

	void SetPixelSnapping(bool bInPixelSnapping); // Function ProjectD.PDImage.SetPixelSnapping // (Final|Native|Public|BlueprintCallable) // @ game+0x18197f0
};

// Class ProjectD.PDImageButton
// Size: 0x2b0 (Inherited: 0x288)
struct UPDImageButton : UPDUserWidget {
	struct UImage* IMG_Button; // 0x288(0x08)
	char pad_290[0x20]; // 0x290(0x20)
};

// Class ProjectD.PDIndoorReactor
// Size: 0x28 (Inherited: 0x28)
struct UPDIndoorReactor : UInterface {
};

// Class ProjectD.PDIndoorVolume
// Size: 0x258 (Inherited: 0x258)
struct APDIndoorVolume : ATriggerVolume {
};

// Class ProjectD.PDIngameLaptonPresetTab
// Size: 0x2c0 (Inherited: 0x288)
struct UPDIngameLaptonPresetTab : UPDUserWidget {
	char pad_288[0x10]; // 0x288(0x10)
	struct UPDTabButton* Tab_Preset; // 0x298(0x08)
	char pad_2A0[0x20]; // 0x2a0(0x20)

	void OnSelectPreset(); // Function ProjectD.PDIngameLaptonPresetTab.OnSelectPreset // (Final|Native|Private) // @ game+0x1819720
};

// Class ProjectD.PDIngameMapModule
// Size: 0x4b8 (Inherited: 0x3c0)
struct UPDIngameMapModule : UPDGameMapModule {
	struct UCanvasPanel* CP_Area; // 0x3c0(0x08)
	struct UCanvasPanel* PaintZone; // 0x3c8(0x08)
	struct UBorder* BD_BackColor; // 0x3d0(0x08)
	struct UImage* IMG_Sight; // 0x3d8(0x08)
	float ZoomStepScale; // 0x3e0(0x04)
	int32_t ZoomStepCount; // 0x3e4(0x04)
	float ZoomInterval; // 0x3e8(0x04)
	float ZoomRate; // 0x3ec(0x04)
	float PlayerIconSightRadius; // 0x3f0(0x04)
	char pad_3F4[0xc4]; // 0x3f4(0xc4)
};

// Class ProjectD.PDIngameMapUI
// Size: 0x4a0 (Inherited: 0x290)
struct UPDIngameMapUI : UPDIngameModeWidget {
	struct UPDIngameMapModule* GameMap; // 0x290(0x08)
	struct UCanvasPanel* CP_MapBox; // 0x298(0x08)
	struct UCanvasPanel* CP_Map; // 0x2a0(0x08)
	struct UCanvasPanel* CP_GameMap; // 0x2a8(0x08)
	struct UPDTextBlock* TB_Time; // 0x2b0(0x08)
	struct UPDTextBlock* TB_Coordinates; // 0x2b8(0x08)
	struct UImage* IMG_Weather; // 0x2c0(0x08)
	struct UHorizontalBox* HB_Weather; // 0x2c8(0x08)
	struct UWidgetSwitcher* WS_Menu; // 0x2d0(0x08)
	struct UCanvasPanel* CP_Guide; // 0x2d8(0x08)
	struct UBorder* BD_Menu; // 0x2e0(0x08)
	struct UImage* IMG_MapShadow; // 0x2e8(0x08)
	struct UCanvasPanel* CP_NewBadge; // 0x2f0(0x08)
	struct UCanvasPanel* CP_MouseGuideLine; // 0x2f8(0x08)
	struct UImage* IMG_MouseX; // 0x300(0x08)
	struct UImage* IMG_MouseY; // 0x308(0x08)
	struct UCheckBox* CB_ToggleBoard; // 0x310(0x08)
	struct UPDButton* Btn_DeleteAllLine; // 0x318(0x08)
	struct UPDTextBlock* TB_Key_Scale; // 0x320(0x08)
	struct UPDTextBlock* TB_Key_DeletePing; // 0x328(0x08)
	bool DefaultLarge; // 0x330(0x01)
	char pad_331[0x3]; // 0x331(0x03)
	float LargeMapOffset; // 0x334(0x04)
	struct FVector2D NormalMapSize; // 0x338(0x08)
	struct FVector2D NormalGameMapSize; // 0x340(0x08)
	struct FVector2D NormalMapBoxPos; // 0x348(0x08)
	struct FVector2D NormalMenuPos; // 0x350(0x08)
	struct FVector2D NormalMenuSize; // 0x358(0x08)
	struct FVector2D NormalShadowPos; // 0x360(0x08)
	struct FVector2D NormalShadowSize; // 0x368(0x08)
	struct FVector2D MediumMapSize; // 0x370(0x08)
	struct FVector2D MediumGameMapSize; // 0x378(0x08)
	struct FVector2D MediumMapBoxPos; // 0x380(0x08)
	struct FVector2D MediumMenuPos; // 0x388(0x08)
	struct FVector2D MediumMenuSize; // 0x390(0x08)
	struct FVector2D MediumShadowPos; // 0x398(0x08)
	struct FVector2D MediumShadowSize; // 0x3a0(0x08)
	struct FVector2D LargeMapSize; // 0x3a8(0x08)
	struct FVector2D LargeGameMapSize; // 0x3b0(0x08)
	struct FVector2D LargeMapBoxPos; // 0x3b8(0x08)
	struct FVector2D LargeMenuPos; // 0x3c0(0x08)
	struct FVector2D LargeMenuSize; // 0x3c8(0x08)
	struct FVector2D LargeShadowPos; // 0x3d0(0x08)
	struct FVector2D LargeShadowSize; // 0x3d8(0x08)
	struct FPDIngameMapPos StatusBoardPos; // 0x3e0(0x28)
	struct FPDIngameMapPos BasePos; // 0x408(0x28)
	char pad_430[0x70]; // 0x430(0x70)

	void OnToggleBoardCheckBoxChanged(bool Val); // Function ProjectD.PDIngameMapUI.OnToggleBoardCheckBoxChanged // (Final|Native|Protected) // @ game+0x1819760
	void OnClickDeleteAllLines(); // Function ProjectD.PDIngameMapUI.OnClickDeleteAllLines // (Final|Native|Protected) // @ game+0x1819540
};

// Class ProjectD.PDInGameMode
// Size: 0x2c0 (Inherited: 0x2c0)
struct APDInGameMode : AGameModeBase {
};

// Class ProjectD.PDIngameMyCharListItemData
// Size: 0x48 (Inherited: 0x28)
struct UPDIngameMyCharListItemData : UObject {
	char pad_28[0x20]; // 0x28(0x20)
};

// Class ProjectD.PDIngameMyCharListItem
// Size: 0x2c8 (Inherited: 0x288)
struct UPDIngameMyCharListItem : UPDUserWidget {
	char pad_288[0x18]; // 0x288(0x18)
	struct UPDTabButton* Btn_Select; // 0x2a0(0x08)
	struct UWidgetSwitcher* WS_State; // 0x2a8(0x08)
	struct UImage* IMG_Face; // 0x2b0(0x08)
	struct UImage* IMG_NotOwnedFace; // 0x2b8(0x08)
	char pad_2C0[0x8]; // 0x2c0(0x08)

	void OnSelectChar(); // Function ProjectD.PDIngameMyCharListItem.OnSelectChar // (Final|Native|Private) // @ game+0x1819700
};

// Class ProjectD.PDInputBuffer
// Size: 0x100 (Inherited: 0x28)
struct UPDInputBuffer : UObject {
	char pad_28[0xd8]; // 0x28(0xd8)
};

// Class ProjectD.PDPlayerController
// Size: 0x570 (Inherited: 0x570)
struct APDPlayerController : APlayerController {
};

// Class ProjectD.PDIngamePlayerController
// Size: 0x638 (Inherited: 0x570)
struct APDIngamePlayerController : APDPlayerController {
	char pad_570[0x30]; // 0x570(0x30)
	bool bUseViewTargetWithBlend; // 0x5a0(0x01)
	char pad_5A1[0x87]; // 0x5a1(0x87)
	struct UPDInputBuffer* InputBuffer; // 0x628(0x08)
	char pad_630[0x8]; // 0x630(0x08)
};

// Class ProjectD.PDIngameStatusBoardUI
// Size: 0x538 (Inherited: 0x290)
struct UPDIngameStatusBoardUI : UPDIngameModeWidget {
	struct UPDKeyButton* KBtn_Close; // 0x290(0x08)
	struct UPDStatusBoardRoundResultItem* RoundResultItem_2; // 0x298(0x08)
	struct UPDStatusBoardRoundResultItem* RoundResultItem_3; // 0x2a0(0x08)
	struct UPDStatusBoardRoundResultItem* RoundResultItem_4; // 0x2a8(0x08)
	struct UPDStatusBoardRoundResultItem* RoundResultItem_5; // 0x2b0(0x08)
	struct UPDStatusBoardRoundResultItem* RoundResultItem_6; // 0x2b8(0x08)
	struct UPDStatusBoardRoundResultItem* RoundResultItem_7; // 0x2c0(0x08)
	struct UPDStatusBoardRoundResultItem* RoundResultItem_8; // 0x2c8(0x08)
	struct UPDStatusBoardRoundResultItem* RoundResultItem_9; // 0x2d0(0x08)
	struct UPDStatusBoardRoundResultItem* RoundResultItem_10; // 0x2d8(0x08)
	struct TArray<struct UPDStatusBoardRoundResultItem*> RoundResultList; // 0x2e0(0x10)
	struct UPDTextBlock* TB_TeamName_Ally; // 0x2f0(0x08)
	struct UPDTextBlock* TB_TeamName_Enemy; // 0x2f8(0x08)
	struct UImage* IMG_InfoBoardBg_Ally; // 0x300(0x08)
	struct UImage* IMG_InfoBoardTLine_Ally; // 0x308(0x08)
	struct UImage* IMG_InfoBoardBLine_Ally; // 0x310(0x08)
	struct UImage* IMG_InfoBoardBg_Enemy; // 0x318(0x08)
	struct UImage* IMG_InfoBoardTLine_Enemy; // 0x320(0x08)
	struct UImage* IMG_InfoBoardBLine_Enemy; // 0x328(0x08)
	struct UPDStatusBoardPlayerInfo_Ally* PlayerInfo_Ally_01; // 0x330(0x08)
	struct UPDStatusBoardPlayerInfo_Ally* PlayerInfo_Ally_02; // 0x338(0x08)
	struct UPDStatusBoardPlayerInfo_Ally* PlayerInfo_Ally_03; // 0x340(0x08)
	struct UPDStatusBoardPlayerInfo_Ally* PlayerInfo_Ally_04; // 0x348(0x08)
	struct UPDStatusBoardPlayerInfo_Ally* PlayerInfo_Ally_05; // 0x350(0x08)
	struct TArray<struct UPDStatusBoardPlayerInfo_Ally*> MyTeamPlayerInfoList; // 0x358(0x10)
	struct UPDStatusBoardPlayerInfo_Enemy* PlayerInfo_Enemy_01; // 0x368(0x08)
	struct UPDStatusBoardPlayerInfo_Enemy* PlayerInfo_Enemy_02; // 0x370(0x08)
	struct UPDStatusBoardPlayerInfo_Enemy* PlayerInfo_Enemy_03; // 0x378(0x08)
	struct UPDStatusBoardPlayerInfo_Enemy* PlayerInfo_Enemy_04; // 0x380(0x08)
	struct UPDStatusBoardPlayerInfo_Enemy* PlayerInfo_Enemy_05; // 0x388(0x08)
	struct TArray<struct UPDStatusBoardPlayerInfo_Enemy*> EnemyTeamPlayerInfoList; // 0x390(0x10)
	struct UPDTextBlock* T_AllyTeamCoin; // 0x3a0(0x08)
	struct UPDTextBlock* T_EnemyTeamCoin; // 0x3a8(0x08)
	struct UPDUnKnownMarketUpgradeSlot* Upgrade_Armory_Ally; // 0x3b0(0x08)
	struct UPDUnKnownMarketUpgradeSlot* Upgrade_Ordnance_Ally; // 0x3b8(0x08)
	struct UPDUnKnownMarketUpgradeSlot* Upgrade_Tactical_Ally; // 0x3c0(0x08)
	char pad_3C8[0x50]; // 0x3c8(0x50)
	struct UPDUnKnownMarketUpgradeSlot* Upgrade_Armory_Enemy; // 0x418(0x08)
	struct UPDUnKnownMarketUpgradeSlot* Upgrade_Ordnance_Enemy; // 0x420(0x08)
	struct UPDUnKnownMarketUpgradeSlot* Upgrade_Tactical_Enemy; // 0x428(0x08)
	char pad_430[0x50]; // 0x430(0x50)
	struct UPDUnKnownMarketUpgradeTooltip* StatusBoardUpgradeTooltip; // 0x480(0x08)
	struct UPDButton* Btn_Replay; // 0x488(0x08)
	struct UPDButton* Btn_Replay_Close; // 0x490(0x08)
	struct FVector2D AllyUpgradeTooltipPos; // 0x498(0x08)
	struct FVector2D AllyUpgradeTooltipAlignment; // 0x4a0(0x08)
	struct FVector2D EnemyUpgradeTooltipPos; // 0x4a8(0x08)
	struct FVector2D EnemyUpgradeTooltipAlignment; // 0x4b0(0x08)
	char pad_4B8[0x80]; // 0x4b8(0x80)

	void OnClickReplayClose(); // Function ProjectD.PDIngameStatusBoardUI.OnClickReplayClose // (Final|Native|Protected) // @ game+0x1819580
	void OnClickReplay(); // Function ProjectD.PDIngameStatusBoardUI.OnClickReplay // (Final|Native|Protected) // @ game+0x1819560
	void OnClickCloseBtn(); // Function ProjectD.PDIngameStatusBoardUI.OnClickCloseBtn // (Final|Native|Private) // @ game+0xfb2530
};

// Class ProjectD.PDIngameUI
// Size: 0x2f8 (Inherited: 0x288)
struct UPDIngameUI : UPDSceneBaseUI {
	struct UCanvasPanel* CP_GameMode; // 0x288(0x08)
	struct UPDBaseModeUI* ModeUI; // 0x290(0x08)
	char pad_298[0x30]; // 0x298(0x30)
	struct UScaleBox* IngameUIScale; // 0x2c8(0x08)
	char pad_2D0[0x8]; // 0x2d0(0x08)
	struct TArray<struct UPDTextBlock*> KeyTextBlockList; // 0x2d8(0x10)
	struct TArray<struct UPDKeyButton*> KeyButtonList; // 0x2e8(0x10)

	void OnTimerRingCommand(); // Function ProjectD.PDIngameUI.OnTimerRingCommand // (Final|Native|Private) // @ game+0x1819740
};

// Class ProjectD.PDIngameVideoUI
// Size: 0x318 (Inherited: 0x288)
struct UPDIngameVideoUI : UPDUserWidget {
	struct UMediaPlayer* MediaPlayer; // 0x288(0x08)
	struct UMediaPlayer* MediaPlayerDestroy; // 0x290(0x08)
	struct UPDTextBlock* TB_IntroTitle; // 0x298(0x08)
	struct UPDTextBlock* TB_IntroDesc01; // 0x2a0(0x08)
	struct UPDTextBlock* TB_IntroDesc02; // 0x2a8(0x08)
	struct UProgressBar* PB_Skip; // 0x2b0(0x08)
	struct UCanvasPanel* CP_MovieInfo; // 0x2b8(0x08)
	struct UCanvasPanel* CP_Skip; // 0x2c0(0x08)
	struct UImage* IMG_MovieInfo_Divider_01; // 0x2c8(0x08)
	struct UImage* IMG_Movie; // 0x2d0(0x08)
	struct UImage* IMG_Blind; // 0x2d8(0x08)
	float FirstDelay; // 0x2e0(0x04)
	float CharInterval; // 0x2e4(0x04)
	float LineInterval; // 0x2e8(0x04)
	char pad_2EC[0x2c]; // 0x2ec(0x2c)

	void OnMovieOpened(); // Function ProjectD.PDIngameVideoUI.OnMovieOpened // (Final|Native|Public|BlueprintCallable) // @ game+0x18196e0
	void OnInitMediaPlayer(); // Function ProjectD.PDIngameVideoUI.OnInitMediaPlayer // (Event|Public|BlueprintEvent) // @ game+0x1b61b60
};

// Class ProjectD.PDInputKeySelector
// Size: 0x298 (Inherited: 0x288)
struct UPDInputKeySelector : UPDUserWidget {
	struct UInputKeySelector* IKS_Control; // 0x288(0x08)
	char IsPressed : 1; // 0x290(0x01)
	char pad_290_1 : 7; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)

	void OnInputSelectingKeyChanged(); // Function ProjectD.PDInputKeySelector.OnInputSelectingKeyChanged // (Final|Native|Protected) // @ game+0x18196c0
	void OnInputKeySelected(struct FInputChord InInputChord); // Function ProjectD.PDInputKeySelector.OnInputKeySelected // (Final|Native|Protected) // @ game+0x18195a0
};

// Class ProjectD.PDInteractionInfoUI
// Size: 0x388 (Inherited: 0x290)
struct UPDInteractionInfoUI : UPDIngameModeWidget {
	struct UCanvasPanel* CP_Progress; // 0x290(0x08)
	struct UImage* IMG_Icon; // 0x298(0x08)
	struct UPDCircleProgressModule* CPM_Progress; // 0x2a0(0x08)
	struct UCanvasPanel* CP_SeedProgress; // 0x2a8(0x08)
	struct UPDSeedProgressModule* SSM_Progress; // 0x2b0(0x08)
	struct UHorizontalBox* HB_Info; // 0x2b8(0x08)
	struct UPDTextBlock* TB_Key; // 0x2c0(0x08)
	struct UPDTextBlock* TB_Desc; // 0x2c8(0x08)
	struct USizeBox* SB_ItemInfo; // 0x2d0(0x08)
	struct UPDTextBlock* TB_Key_3; // 0x2d8(0x08)
	struct UPDTextBlock* TB_Desc_3; // 0x2e0(0x08)
	struct UImage* IMG_ItemIcon; // 0x2e8(0x08)
	struct USizeBox* SB_ItemCount; // 0x2f0(0x08)
	struct UPDTextBlock* TB_ItemCount; // 0x2f8(0x08)
	struct UPDTextBlock* TB_ItemName; // 0x300(0x08)
	struct UPDTextBlock* TB_ItemType; // 0x308(0x08)
	struct UImage* IMG_BulletType; // 0x310(0x08)
	struct UHorizontalBox* HB_KeyGuide; // 0x318(0x08)
	struct UPDTextBlock* TB_Guide_Key; // 0x320(0x08)
	struct UPDTextBlock* TB_Guide_Desc; // 0x328(0x08)
	struct USizeBox* SB_KeyGuide; // 0x330(0x08)
	struct UImage* IMG_GuideMouseLeft; // 0x338(0x08)
	char pad_340[0x8]; // 0x340(0x08)
	struct UHorizontalBox* HB_Mode_Info; // 0x348(0x08)
	struct UPDTextBlock* TB_Mode_Key; // 0x350(0x08)
	struct UPDTextBlock* TB_Mode_Desc; // 0x358(0x08)
	struct UHorizontalBox* HB_Info_2; // 0x360(0x08)
	struct UPDTextBlock* TB_Key_2; // 0x368(0x08)
	struct UPDTextBlock* TB_Desc_2; // 0x370(0x08)
	struct UHorizontalBox* HB_Tip; // 0x378(0x08)
	struct UPDTextBlock* TB_Desc_Tip; // 0x380(0x08)
};

// Class ProjectD.PDIntroUI
// Size: 0x2e8 (Inherited: 0x288)
struct UPDIntroUI : UPDSceneBaseUI {
	struct UBorder* B_MovieBG; // 0x288(0x08)
	struct UWidget* IMG_Movie; // 0x290(0x08)
	struct UProgressBar* PB_Skip; // 0x298(0x08)
	struct UCanvasPanel* CP_Skip; // 0x2a0(0x08)
	struct UMediaPlayer* LoginMediaPlayer; // 0x2a8(0x08)
	bool DoorMoviePlay; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	float DelayTime; // 0x2b4(0x04)
	struct FKey HoldKey; // 0x2b8(0x18)
	char pad_2D0[0x18]; // 0x2d0(0x18)

	void OnMovieOpened(); // Function ProjectD.PDIntroUI.OnMovieOpened // (Final|Native|Public|BlueprintCallable) // @ game+0x181ccd0
	void OnMovieClosed(); // Function ProjectD.PDIntroUI.OnMovieClosed // (Final|Native|Public|BlueprintCallable) // @ game+0x181ccb0
	void OnInitMediaPlayer(); // Function ProjectD.PDIntroUI.OnInitMediaPlayer // (Event|Public|BlueprintEvent) // @ game+0x1b61b60
};

// Class ProjectD.PDInvenDivide
// Size: 0x2d8 (Inherited: 0x288)
struct UPDInvenDivide : UPDUserWidget {
	struct UPDTextBlock* TB_Title; // 0x288(0x08)
	struct UImage* IMG_BeforeItem; // 0x290(0x08)
	struct UPDTextBlock* TB_BeforeCount; // 0x298(0x08)
	struct UImage* IMG_AfterItem; // 0x2a0(0x08)
	struct UEditableText* ETxt_DividCnt; // 0x2a8(0x08)
	struct USlider* SD_Count; // 0x2b0(0x08)
	struct UPDButton* PDBTN_Split; // 0x2b8(0x08)
	struct UPDButton* PDBTN_Cancel; // 0x2c0(0x08)
	char pad_2C8[0x10]; // 0x2c8(0x10)

	void OnDividTextInput(struct FText& InText); // Function ProjectD.PDInvenDivide.OnDividTextInput // (Final|Native|Private|HasOutParms) // @ game+0x181cbb0
	void OnDividTextChanged(struct FText& InText, enum class ETextCommit CommitMethod); // Function ProjectD.PDInvenDivide.OnDividTextChanged // (Final|Native|Private|HasOutParms) // @ game+0x181ca80
	void OnClickSplitBtn(); // Function ProjectD.PDInvenDivide.OnClickSplitBtn // (Final|Native|Private) // @ game+0x181ca20
	void OnClickCancelBtn(); // Function ProjectD.PDInvenDivide.OnClickCancelBtn // (Final|Native|Private) // @ game+0x181c9a0
	void ChangeVolume(float InVolume); // Function ProjectD.PDInvenDivide.ChangeVolume // (Final|Native|Private) // @ game+0x181c730
};

// Class ProjectD.PDInvenDrag
// Size: 0x2b0 (Inherited: 0x288)
struct UPDInvenDrag : UPDUserWidget {
	struct UImage* IMG_ItemImg; // 0x288(0x08)
	struct UBorder* BD_DivideDesc; // 0x290(0x08)
	struct UTextBlock* TB_DivideDesc; // 0x298(0x08)
	struct UBorder* BD_ItemBg; // 0x2a0(0x08)
	struct UVerticalBox* VB_DragItem; // 0x2a8(0x08)
};

// Class ProjectD.PDInvenListData
// Size: 0x50 (Inherited: 0x28)
struct UPDInvenListData : UObject {
	char pad_28[0x28]; // 0x28(0x28)
};

// Class ProjectD.PDInvenListItem
// Size: 0x3d0 (Inherited: 0x288)
struct UPDInvenListItem : UPDUserWidget {
	char pad_288[0x8]; // 0x288(0x08)
	struct UDragDropOperation* DragDropOperation; // 0x290(0x08)
	struct UWidgetSwitcher* WS_ListItem; // 0x298(0x08)
	struct UImage* IMG_ItemImg; // 0x2a0(0x08)
	struct UPDTextBlock* TB_ItemName; // 0x2a8(0x08)
	struct UPDTextBlock* TB_ItemNum; // 0x2b0(0x08)
	struct UPDTextBlock* TB_Title; // 0x2b8(0x08)
	struct UPDTextBlock* TB_Property; // 0x2c0(0x08)
	struct UCanvasPanel* CP_Progress; // 0x2c8(0x08)
	struct UProgressBar* PB_ItemProgress; // 0x2d0(0x08)
	struct UBorder* BD_ProgressTXT; // 0x2d8(0x08)
	struct UImage* IMG_Unusable; // 0x2e0(0x08)
	struct UImage* IMG_Equipped; // 0x2e8(0x08)
	struct UBorder* BD_Item_Bg; // 0x2f0(0x08)
	struct UCanvasPanel* CP_Dragable; // 0x2f8(0x08)
	struct UCanvasPanel* CP_Refund; // 0x300(0x08)
	struct UPDButton* Btn_Refund; // 0x308(0x08)
	struct UImage* IMG_Highlight_Tutorial; // 0x310(0x08)
	char pad_318[0x10]; // 0x318(0x10)
	struct UBorder* BD_TitleBg; // 0x328(0x08)
	struct FLinearColor BasicBGColor; // 0x330(0x10)
	struct FLinearColor HoverBGColor; // 0x340(0x10)
	struct FLinearColor NormalBunchColor; // 0x350(0x10)
	struct FLinearColor MaxBunchColor; // 0x360(0x10)
	char pad_370[0x60]; // 0x370(0x60)

	void RefundItem(); // Function ProjectD.PDInvenListItem.RefundItem // (Final|Native|Protected) // @ game+0x181cd50
};

// Class ProjectD.PDInvenListItemData
// Size: 0x78 (Inherited: 0x28)
struct UPDInvenListItemData : UObject {
	char pad_28[0x50]; // 0x28(0x50)
};

// Class ProjectD.PDInvenToolTipModule
// Size: 0x2f0 (Inherited: 0x288)
struct UPDInvenToolTipModule : UPDUserWidget {
	struct UWidgetSwitcher* WS_ToolTip; // 0x288(0x08)
	struct UTextBlock* TB_ItemName; // 0x290(0x08)
	struct UTextBlock* TB_Type; // 0x298(0x08)
	struct UImage* IMG_Type; // 0x2a0(0x08)
	struct UTextBlock* TB_ItemDesc; // 0x2a8(0x08)
	struct UProgressBar* PB_Damage; // 0x2b0(0x08)
	struct UProgressBar* PB_Range; // 0x2b8(0x08)
	struct UProgressBar* PB_Precision; // 0x2c0(0x08)
	struct UProgressBar* PB_Recoil; // 0x2c8(0x08)
	struct UProgressBar* PB_Firearms; // 0x2d0(0x08)
	struct UProgressBar* PB_AimingSpeed; // 0x2d8(0x08)
	struct UTextBlock* TB_Ammo; // 0x2e0(0x08)
	struct UTextBlock* TB_Magazine; // 0x2e8(0x08)
};

// Class ProjectD.PDOKCancelPopupUI
// Size: 0x2f8 (Inherited: 0x2b8)
struct UPDOKCancelPopupUI : UPDPopupBaseUI {
	struct UPDTextBlock* Desc; // 0x2b8(0x08)
	struct UPDTextBlock* Desc2; // 0x2c0(0x08)
	struct UPDButton* OKBtn; // 0x2c8(0x08)
	struct UPDButton* CancelBtn; // 0x2d0(0x08)
	char pad_2D8[0x20]; // 0x2d8(0x20)
};

// Class ProjectD.PDInvitePartyPopupUI
// Size: 0x310 (Inherited: 0x2f8)
struct UPDInvitePartyPopupUI : UPDOKCancelPopupUI {
	char pad_2F8[0x18]; // 0x2f8(0x18)
};

// Class ProjectD.PDItemModel
// Size: 0x2e0 (Inherited: 0x220)
struct APDItemModel : AActor {
	struct TArray<struct UMaterialInstanceDynamic*> ItemBaseMaterials; // 0x220(0x10)
	char pad_230[0x50]; // 0x230(0x50)
	struct USceneComponent* EmptySceneComp; // 0x280(0x08)
	struct UStaticMeshComponent* StaticMeshComp; // 0x288(0x08)
	struct UPDSkeletalMeshComponent* SkeletalMeshComp; // 0x290(0x08)
	char pad_298[0x48]; // 0x298(0x48)

	void OnBeginOverlapAssistant(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function ProjectD.PDItemModel.OnBeginOverlapAssistant // (Final|Native|Public|HasOutParms) // @ game+0x181c7b0
};

// Class ProjectD.ModelOwner
// Size: 0x28 (Inherited: 0x28)
struct UModelOwner : UObject {
};

// Class ProjectD.PDKeyButton
// Size: 0xdb8 (Inherited: 0xc50)
struct UPDKeyButton : UPDButton {
	struct UPDTextBlock* T_SubText; // 0xc50(0x08)
	struct USizeBox* SB_Btn; // 0xc58(0x08)
	struct FText ControlName; // 0xc60(0x18)
	struct FText InSubText; // 0xc78(0x18)
	struct FSlateFontInfo SubTextFont; // 0xc90(0x50)
	struct FSlateColor NormalSubTextColor; // 0xce0(0x28)
	struct FSlateColor HoverSubTextColor; // 0xd08(0x28)
	struct FSlateColor PressSubTextColor; // 0xd30(0x28)
	struct FSlateColor DisableSubTextColor; // 0xd58(0x28)
	struct FMargin SubTextMargin; // 0xd80(0x10)
	char bOverride_WidthOverride : 1; // 0xd90(0x01)
	char bOverride_HeightOverride : 1; // 0xd90(0x01)
	char bOverride_MinDesiredWidth : 1; // 0xd90(0x01)
	char bOverride_MinDesiredHeight : 1; // 0xd90(0x01)
	char bOverride_MaxDesiredWidth : 1; // 0xd90(0x01)
	char bOverride_MaxDesiredHeight : 1; // 0xd90(0x01)
	char bOverride_MinAspectRatio : 1; // 0xd90(0x01)
	char bOverride_MaxAspectRatio : 1; // 0xd90(0x01)
	char pad_D91[0x3]; // 0xd91(0x03)
	float WidthOverride; // 0xd94(0x04)
	float HeightOverride; // 0xd98(0x04)
	float MinDesiredWidth; // 0xd9c(0x04)
	float MinDesiredHeight; // 0xda0(0x04)
	float MaxDesiredWidth; // 0xda4(0x04)
	float MaxDesiredHeight; // 0xda8(0x04)
	float MinAspectRatio; // 0xdac(0x04)
	float MaxAspectRatio; // 0xdb0(0x04)
	char pad_DB4[0x4]; // 0xdb4(0x04)
};

// Class ProjectD.PDKillLogModule
// Size: 0x318 (Inherited: 0x288)
struct UPDKillLogModule : UPDUserWidget {
	char pad_288[0x8]; // 0x288(0x08)
	struct UPDTextBlock* TB_Attacker; // 0x290(0x08)
	struct UPDTextBlock* TB_Victim; // 0x298(0x08)
	struct UBorder* BD_Attacker; // 0x2a0(0x08)
	struct UImage* IMG_Attacker; // 0x2a8(0x08)
	struct UImage* IMG_Victim; // 0x2b0(0x08)
	struct UBorder* BD_Victim; // 0x2b8(0x08)
	struct UPDTextBlock* T_Dist; // 0x2c0(0x08)
	struct UImage* IMG_Cause; // 0x2c8(0x08)
	struct USizeBox* SB_Cause; // 0x2d0(0x08)
	struct UImage* IMG_HeadShot; // 0x2d8(0x08)
	struct UImage* IMG_Groggy; // 0x2e0(0x08)
	struct UImage* IMG_Death; // 0x2e8(0x08)
	struct UImage* IMG_Assist; // 0x2f0(0x08)
	struct UBorder* BD_Background; // 0x2f8(0x08)
	struct UBorder* BD_PlayerLine; // 0x300(0x08)
	struct UImage* IMG_MainPlayerBG; // 0x308(0x08)
	char pad_310[0x8]; // 0x310(0x08)

	void AdjustCauseRatio(); // Function ProjectD.PDKillLogModule.AdjustCauseRatio // (Final|Native|Protected) // @ game+0x181c710
};

// Class ProjectD.PDKillLogUI
// Size: 0x2a0 (Inherited: 0x290)
struct UPDKillLogUI : UPDIngameModeWidget {
	struct UVerticalBox* VB_LogList; // 0x290(0x08)
	int32_t MaxLogCount; // 0x298(0x04)
	float LogDuration; // 0x29c(0x04)
};

// Class ProjectD.PDKillMessage
// Size: 0x2f8 (Inherited: 0x290)
struct UPDKillMessage : UPDIngameModeWidget {
	char pad_290[0x8]; // 0x290(0x08)
	struct UPDTextBlock* TB_KillType; // 0x298(0x08)
	struct UPDTextBlock* TB_UserName; // 0x2a0(0x08)
	struct UImage* IMG_Portrait; // 0x2a8(0x08)
	struct UBorder* BD_TeamColor; // 0x2b0(0x08)
	struct UImage* IMG_Light_BackTop; // 0x2b8(0x08)
	struct UImage* IMG_Light_BackUnder; // 0x2c0(0x08)
	struct UImage* IMG_Light_Front; // 0x2c8(0x08)
	struct UGridPanel* GP_DoubleKill; // 0x2d0(0x08)
	struct UGridPanel* GP_TripleKill; // 0x2d8(0x08)
	struct UGridPanel* GP_QuadraKill; // 0x2e0(0x08)
	struct UGridPanel* GP_PentaKill; // 0x2e8(0x08)
	float KillDefaultDuration; // 0x2f0(0x04)
	char pad_2F4[0x4]; // 0x2f4(0x04)
};

// Class ProjectD.PDLeanAnimInstance
// Size: 0x280 (Inherited: 0x280)
struct UPDLeanAnimInstance : UPDAnimInstance {
};

// Class ProjectD.PDLevelStreamingVolume
// Size: 0x290 (Inherited: 0x258)
struct APDLevelStreamingVolume : AVolume {
	struct TArray<struct FString> HiddenLevelNames; // 0x258(0x10)
	struct TArray<struct FString> BeginOverlapConsoleCommands; // 0x268(0x10)
	struct TArray<struct FString> EndOverlapConsoleCommands; // 0x278(0x10)
	char pad_288[0x8]; // 0x288(0x08)
};

// Class ProjectD.PDLineItemModel
// Size: 0x300 (Inherited: 0x2e0)
struct APDLineItemModel : APDItemModel {
	struct USplineComponent* Spline; // 0x2e0(0x08)
	char pad_2E8[0x18]; // 0x2e8(0x18)
};

// Class ProjectD.PDLoadingUI
// Size: 0x290 (Inherited: 0x288)
struct UPDLoadingUI : UPDSceneBaseUI {
	struct UPDTextBlock* Loading_Text; // 0x288(0x08)
};

// Class ProjectD.PDLobbyAnimInstance
// Size: 0x360 (Inherited: 0x280)
struct UPDLobbyAnimInstance : UPDAnimInstance {
	struct FPDLobbyAnimData LobbyAnimData; // 0x280(0xd0)
	enum class EPDLobbyAnimStatus LobbyAnimStatus; // 0x350(0x01)
	char pad_351[0x3]; // 0x351(0x03)
	int32_t LobbyAnimPlayIndex; // 0x354(0x04)
	int32_t LobbyIdleAnimIndex; // 0x358(0x04)
	enum class EPDLobbyAnimStatus ReserveLobbyAnimStatus; // 0x35c(0x01)
	char pad_35D[0x3]; // 0x35d(0x03)
};

// Class ProjectD.PDLobbyAnimNotify
// Size: 0x50 (Inherited: 0x48)
struct UPDLobbyAnimNotify : UPDBaseAnimNotify {
	enum class EPDLobbyAnimStatus LobbyAnimStatus; // 0x48(0x01)
	bool Hair; // 0x49(0x01)
	bool ChangeIdleAnim; // 0x4a(0x01)
	char pad_4B[0x5]; // 0x4b(0x05)
};

// Class ProjectD.PDLobbySceneEventActor
// Size: 0x238 (Inherited: 0x220)
struct APDLobbySceneEventActor : AActor {
	enum class ESceneName TargetSceneName; // 0x220(0x01)
	char pad_221[0x3]; // 0x221(0x03)
	int32_t TargetAgentIndex; // 0x224(0x04)
	struct TArray<struct FLobbySceneEventData> EventDataArray; // 0x228(0x10)
};

// Class ProjectD.PDLobbyTimelineActor
// Size: 0x238 (Inherited: 0x220)
struct APDLobbyTimelineActor : AActor {
	struct UPDSplineCameraTimelineComponent* SplineCameraTimeline; // 0x220(0x08)
	int32_t TargetCamSplineID; // 0x228(0x04)
	int32_t TargetAgentIndex; // 0x22c(0x04)
	enum class ESceneName TargetSceneName; // 0x230(0x01)
	enum class EPDLobbyAnimStatus TargetAnimStatus; // 0x231(0x01)
	bool TestMode; // 0x232(0x01)
	char pad_233[0x5]; // 0x233(0x05)
};

// Class ProjectD.PDLobbyUI
// Size: 0x378 (Inherited: 0x288)
struct UPDLobbyUI : UPDSceneBaseUI {
	struct UPDButton* Btn_DebugLog; // 0x288(0x08)
	struct UPDTabButton* Btn_StartPlay; // 0x290(0x08)
	struct UPDTextBlock* T_NickName; // 0x298(0x08)
	struct UCanvasPanel* CP_MainMenu; // 0x2a0(0x08)
	struct UPDMatchListUI* MatchIDList; // 0x2a8(0x08)
	struct UBorder* BD_MouseEventCover; // 0x2b0(0x08)
	struct UWidgetSwitcher* WS_PlayMatching; // 0x2b8(0x08)
	struct UWidgetSwitcher* WS_PlayBtn; // 0x2c0(0x08)
	struct UPDButton* Btn_Matching_ForceStart; // 0x2c8(0x08)
	struct UPDButton* Btn_Matching_Cancel; // 0x2d0(0x08)
	struct UCanvasPanel* CP_MatchForceStart; // 0x2d8(0x08)
	struct UPDEquipPerkList* EquipPerkList; // 0x2e0(0x08)
	struct UCanvasPanel* CP_PerkList; // 0x2e8(0x08)
	struct UBorder* BD_PerkEventCover; // 0x2f0(0x08)
	struct UCanvasPanel* CP_AddItemMsg; // 0x2f8(0x08)
	struct UPDTextBlock* TB_AddItem; // 0x300(0x08)
	struct UCanvasPanel* CP_Disabled_Reason; // 0x308(0x08)
	struct UPDTextBlock* TB_PlayDisabled; // 0x310(0x08)
	struct UPDButton* Btn_News; // 0x318(0x08)
	struct UPDButton* Btn_Event; // 0x320(0x08)
	struct UPDTextBlock* T_Desc_Cancel; // 0x328(0x08)
	struct UCanvasPanel* CP_MatchIDList; // 0x330(0x08)
	struct UPDMatchModeList* MatchModeList; // 0x338(0x08)
	struct UPDButton* Btn_Training; // 0x340(0x08)
	struct UPDButton* Btn_GameGuide; // 0x348(0x08)
	char pad_350[0x28]; // 0x350(0x28)

	void PlayOpenSurvey(); // Function ProjectD.PDLobbyUI.PlayOpenSurvey // (Final|Native|Private) // @ game+0x181cd30
	void OnUnHoveredStartPlayBtn(); // Function ProjectD.PDLobbyUI.OnUnHoveredStartPlayBtn // (Final|Native|Private) // @ game+0x181cd10
	void OnPlayerStatsClosed(); // Function ProjectD.PDLobbyUI.OnPlayerStatsClosed // (Final|Native|Private) // @ game+0x181ccf0
	void OnHoveredStartPlayBtn(); // Function ProjectD.PDLobbyUI.OnHoveredStartPlayBtn // (Final|Native|Private) // @ game+0x181cc90
	void OnClickTrainingBtn(); // Function ProjectD.PDLobbyUI.OnClickTrainingBtn // (Final|Native|Private) // @ game+0x181ca60
	void OnClickStartPlayBtn(); // Function ProjectD.PDLobbyUI.OnClickStartPlayBtn // (Final|Native|Private) // @ game+0x181ca40
	void OnClickPlayerStats(); // Function ProjectD.PDLobbyUI.OnClickPlayerStats // (Final|Native|Private) // @ game+0xfb2530
	void OnClickMachingCancel(); // Function ProjectD.PDLobbyUI.OnClickMachingCancel // (Final|Native|Private) // @ game+0x181ca00
	void OnClickForcePlay(); // Function ProjectD.PDLobbyUI.OnClickForcePlay // (Final|Native|Private) // @ game+0x181c9c0
	void OnClickDebugLogBtn(); // Function ProjectD.PDLobbyUI.OnClickDebugLogBtn // (Final|Native|Private) // @ game+0xfb2530
};

// Class ProjectD.PDLocoClimbAnimInstance
// Size: 0x5f0 (Inherited: 0x5f0)
struct UPDLocoClimbAnimInstance : UPDPlayerAnimInstance {
};

// Class ProjectD.PDLocoDefaultAnimInstance
// Size: 0x5f0 (Inherited: 0x5f0)
struct UPDLocoDefaultAnimInstance : UPDPlayerAnimInstance {
	enum class EPDStartingType StartingType; // 0x5e8(0x01)
	enum class EPDStoppingType StoppingType; // 0x5e9(0x01)
};

// Class ProjectD.PDLoginUI
// Size: 0x320 (Inherited: 0x288)
struct UPDLoginUI : UPDSceneBaseUI {
	char pad_288[0x18]; // 0x288(0x18)
	struct UWidget* IMG_Movie; // 0x2a0(0x08)
	struct UCanvasPanel* CP_LoginUI; // 0x2a8(0x08)
	struct UPDButton* Btn_Login; // 0x2b0(0x08)
	struct UEditableTextBox* ET_ID; // 0x2b8(0x08)
	struct UEditableTextBox* ET_PW; // 0x2c0(0x08)
	struct UPDCheckBox* Check_SaveID; // 0x2c8(0x08)
	struct UImage* IMG_SaveID_Bg; // 0x2d0(0x08)
	struct UBorder* BD_Alert; // 0x2d8(0x08)
	struct UPDTextBlock* TB_Alert; // 0x2e0(0x08)
	struct UWidget* WB_PatchNote; // 0x2e8(0x08)
	struct UImage* IMG_BtnDeco; // 0x2f0(0x08)
	struct UCanvasPanel* CP_SaveID; // 0x2f8(0x08)
	struct UMediaPlayer* LoginMediaPlayer; // 0x300(0x08)
	struct FString BgFilePath; // 0x308(0x10)
	float MediaStartDelay; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)

	void OnSplashMovieClosed(); // Function ProjectD.PDLoginUI.OnSplashMovieClosed // (Final|Native|Public|BlueprintCallable) // @ game+0xfb2530
	void OnInitMediaPlayer(); // Function ProjectD.PDLoginUI.OnInitMediaPlayer // (Event|Public|BlueprintEvent) // @ game+0x1b61b60
	void OnClickGameLoginBtn(); // Function ProjectD.PDLoginUI.OnClickGameLoginBtn // (Final|Native|Public) // @ game+0x181c9e0
};

// Class ProjectD.PDMailBoxListItemData
// Size: 0x30 (Inherited: 0x28)
struct UPDMailBoxListItemData : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class ProjectD.PDMailBoxListItemUI
// Size: 0x2b8 (Inherited: 0x288)
struct UPDMailBoxListItemUI : UPDUserWidget {
	char pad_288[0x8]; // 0x288(0x08)
	struct UPDTextBlock* TB_MailTitle; // 0x290(0x08)
	struct UPDTextBlock* TB_MailContent; // 0x298(0x08)
	struct UPDTextBlock* TB_ReceivedDate; // 0x2a0(0x08)
	struct UImage* IMG_MailIcon; // 0x2a8(0x08)
	char pad_2B0[0x8]; // 0x2b0(0x08)
};

// Class ProjectD.PDMailItemListSlotUI
// Size: 0x2a0 (Inherited: 0x288)
struct UPDMailItemListSlotUI : UPDUserWidget {
	struct UPDTextBlock* TB_Name; // 0x288(0x08)
	struct UImage* IMG_Item; // 0x290(0x08)
	struct UPDButton* Btn_ItemSlot; // 0x298(0x08)

	void OnUnhoveredItemSlot(); // Function ProjectD.PDMailItemListSlotUI.OnUnhoveredItemSlot // (Final|Native|Protected) // @ game+0x1820030
	void OnHoveredItemSlot(); // Function ProjectD.PDMailItemListSlotUI.OnHoveredItemSlot // (Final|Native|Protected) // @ game+0x181fe90
};

// Class ProjectD.PDMailNotificationSlotUI
// Size: 0x2a0 (Inherited: 0x288)
struct UPDMailNotificationSlotUI : UPDUserWidget {
	struct UPDTextBlock* TB_MailContent; // 0x288(0x08)
	struct UPDButton* Btn_NotificationSlot; // 0x290(0x08)
	char pad_298[0x8]; // 0x298(0x08)

	void OnClickNotificationSlot(); // Function ProjectD.PDMailNotificationSlotUI.OnClickNotificationSlot // (Final|Native|Protected) // @ game+0x181fdd0
};

// Class ProjectD.PDMailNotificationUI
// Size: 0x298 (Inherited: 0x288)
struct UPDMailNotificationUI : UPDUserWidget {
	struct UVerticalBox* VB_MailNotificationList; // 0x288(0x08)
	int32_t MaxNotiCount; // 0x290(0x04)
	float NotiDuration; // 0x294(0x04)
};

// Class ProjectD.PDMailPopupUI
// Size: 0x2e8 (Inherited: 0x2b8)
struct UPDMailPopupUI : UPDPopupBaseUI {
	struct UCanvasPanel* CP_MailBox; // 0x2b8(0x08)
	struct UPDButton* Btn_MailBoxClose; // 0x2c0(0x08)
	struct UListView* LV_MailList; // 0x2c8(0x08)
	struct UPDImageButton* IMG_Btn_Bg; // 0x2d0(0x08)
	struct UPDMailUI* MailUI; // 0x2d8(0x08)
	char pad_2E0[0x8]; // 0x2e0(0x08)

	void OnSelectedMailListItem(struct UPDMailBoxListItemData* InListDataData); // Function ProjectD.PDMailPopupUI.OnSelectedMailListItem // (Final|Native|Protected) // @ game+0x181ff90
	void OnScrolledMailListItem(float ItemOffset, float DistanceRemaining); // Function ProjectD.PDMailPopupUI.OnScrolledMailListItem // (Final|Native|Protected) // @ game+0x181fed0
	void OnClickMailBoxCloseBtn(); // Function ProjectD.PDMailPopupUI.OnClickMailBoxCloseBtn // (Final|Native|Protected) // @ game+0x181fd30
};

// Class ProjectD.PDMailUI
// Size: 0x2e8 (Inherited: 0x288)
struct UPDMailUI : UPDUserWidget {
	struct UCanvasPanel* CP_Popup; // 0x288(0x08)
	struct UPDTextBlock* TB_MailTitle; // 0x290(0x08)
	struct UPDTextBlock* TB_MailContent; // 0x298(0x08)
	struct UPDButton* Btn_MailClose; // 0x2a0(0x08)
	struct UPDButton* Btn_ReceiveItem; // 0x2a8(0x08)
	struct UPDButton* Btn_DeleteMail; // 0x2b0(0x08)
	struct UImage* IMG_MailIcon; // 0x2b8(0x08)
	struct UHorizontalBox* HB_MailItemList; // 0x2c0(0x08)
	struct UPDTextBlock* TB_ReceivedDate; // 0x2c8(0x08)
	struct UPDTextBlock* TB_ExpireDate; // 0x2d0(0x08)
	struct UScrollBox* SB_MsgScroll; // 0x2d8(0x08)
	char pad_2E0[0x8]; // 0x2e0(0x08)

	void OnClickReceiveItemBtn(); // Function ProjectD.PDMailUI.OnClickReceiveItemBtn // (Final|Native|Protected) // @ game+0x181fdf0
	void OnClickMailCloseBtn(); // Function ProjectD.PDMailUI.OnClickMailCloseBtn // (Final|Native|Protected) // @ game+0x181fd50
	void OnClickDeleteMailBtn(); // Function ProjectD.PDMailUI.OnClickDeleteMailBtn // (Final|Native|Protected) // @ game+0x181fd10
	void DeleteMail(int64_t MailSN); // Function ProjectD.PDMailUI.DeleteMail // (Final|Native|Protected) // @ game+0x181fa30
};

// Class ProjectD.PDMainPlayerActionComponent
// Size: 0x138 (Inherited: 0x118)
struct UPDMainPlayerActionComponent : UPDActionComponent {
	char pad_118[0x20]; // 0x118(0x20)

	bool TryCanActivateAction(enum class EPDCharacterActionType Action, struct FName Event, int64_t Param, enum class EActionReserveOption ReserveOption); // Function ProjectD.PDMainPlayerActionComponent.TryCanActivateAction // (Final|Native|Public|BlueprintCallable) // @ game+0x1820570
	bool TryAction(enum class EPDCharacterActionType Action, struct FName Event, int64_t Param, enum class EActionReserveOption ReserveOption); // Function ProjectD.PDMainPlayerActionComponent.TryAction // (Final|Native|Public|BlueprintCallable) // @ game+0x1820420
	void ReserveAction(struct FPDActionExecutionInfo& ExecutionInfo); // Function ProjectD.PDMainPlayerActionComponent.ReserveAction // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1820380
	void EndAction(enum class EPDCharacterActionType Action); // Function ProjectD.PDMainPlayerActionComponent.EndAction // (Final|Native|Public|BlueprintCallable) // @ game+0x181fab0
	void CancelAction(enum class EPDCharacterActionType Action, struct FName CancelContext); // Function ProjectD.PDMainPlayerActionComponent.CancelAction // (Final|Native|Public|BlueprintCallable) // @ game+0x181f970
	bool CanActivateAction(enum class EPDCharacterActionType Action, struct FName Event, int64_t Param, bool bBlokingCheck); // Function ProjectD.PDMainPlayerActionComponent.CanActivateAction // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x181f820
};

// Class ProjectD.PDPlayerCharacter
// Size: 0xb120 (Inherited: 0x7f0)
struct APDPlayerCharacter : APDCharacterEntity {
	char pad_7F0[0xc8]; // 0x7f0(0xc8)
	struct FPDPlayerAnimDatas PlayerAnimDatas; // 0x8b8(0x50b8)
	struct FPDLobbyCharacterAnimData LobbyCharacterAnimData; // 0x5970(0xd8)
	struct FPDPlayerAnimDatas JuggernautAnimDatas; // 0x5a48(0x50b8)
	struct FPDFacialAnimData FacialAnimData; // 0xab00(0x3b0)
	struct UStaticMeshComponent* CullCheckerComponent; // 0xaeb0(0x08)
	struct UPDActionComponent* PDActionComponent; // 0xaeb8(0x08)
	struct UPDStateComponent* PDStateComponent; // 0xaec0(0x08)
	struct UPDWeaponControlComponent* PDWeaponCtrlComponent; // 0xaec8(0x08)
	struct UPhysicalAnimationComponent* PhysicalAnimation; // 0xaed0(0x08)
	struct UStaticMeshComponent* AttachedPropComponent; // 0xaed8(0x08)
	enum class EPDLobbyAnimStatus LobbyAnimStatus; // 0xaee0(0x01)
	char pad_AEE1[0x3]; // 0xaee1(0x03)
	int32_t LobbyIdleAnimIndex; // 0xaee4(0x04)
	char pad_AEE8[0x80]; // 0xaee8(0x80)
	struct UPDPlayerAnimInstance* BaseAnimInstance; // 0xaf68(0x08)
	struct UPDLocoClimbAnimInstance* LocoClimbSubAnimInstance; // 0xaf70(0x08)
	struct UCapsuleComponent* Bodyfence; // 0xaf78(0x08)
	float AFKChangeTime; // 0xaf80(0x04)
	char pad_AF84[0x24]; // 0xaf84(0x24)
	struct UPDPlayerSpringArmComponent* PDPlayerSpringArmComponent; // 0xafa8(0x08)
	struct UCameraComponent* DefaultCamera; // 0xafb0(0x08)
	bool TEST_NoDeathPhysicalAnimation; // 0xafb8(0x01)
	char pad_AFB9[0x1]; // 0xafb9(0x01)
	bool TEST_NoGroggy; // 0xafba(0x01)
	char pad_AFBB[0x5]; // 0xafbb(0x05)
	struct TArray<struct FPDFootstepInfo> Footsteps; // 0xafc0(0x10)
	char pad_AFD0[0x128]; // 0xafd0(0x128)
	struct TArray<struct UPDDroneSpringArmComponent*> DroneSpringArmList; // 0xb0f8(0x10)
	char pad_B108[0x18]; // 0xb108(0x18)

	void ToggleRagdoll(); // Function ProjectD.PDPlayerCharacter.ToggleRagdoll // (Final|Native|Public|BlueprintCallable) // @ game+0xfb2530
	void PlayHitAnim(); // Function ProjectD.PDPlayerCharacter.PlayHitAnim // (Final|Native|Public|BlueprintCallable) // @ game+0x1829610
	enum class EPDSpecificWeaponAnimset GetCurrentSpecificWeaponAnimset(); // Function ProjectD.PDPlayerCharacter.GetCurrentSpecificWeaponAnimset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x18294e0
	enum class EPDAnimset GetCurrentAnimset(); // Function ProjectD.PDPlayerCharacter.GetCurrentAnimset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x18294b0
};

// Class ProjectD.PDMainPlayerCharacter
// Size: 0xb410 (Inherited: 0xb120)
struct APDMainPlayerCharacter : APDPlayerCharacter {
	char pad_B120[0x8]; // 0xb120(0x08)
	struct UPDMainPlayerMovementComponent* PlayerMovementComponent; // 0xb128(0x08)
	struct UPDMainPlayerSpringArmComponent* PDMainPlayerSpringArmComponent; // 0xb130(0x08)
	struct USpringArmComponent* SpringArmComp; // 0xb138(0x08)
	struct UCapsuleComponent* SpringArmCapsule; // 0xb140(0x08)
	struct UPDStoppingPowerComponent* StoppingPowerComponent; // 0xb148(0x08)
	struct USphereComponent* UpsideSphereComponent; // 0xb150(0x08)
	char pad_B158[0x169]; // 0xb158(0x169)
	char SuppressionLevel; // 0xb2c1(0x01)
	char pad_B2C2[0x2]; // 0xb2c2(0x02)
	float RemainingSuppressionTime; // 0xb2c4(0x04)
	float LastSuppressionTime; // 0xb2c8(0x04)
	float SuppressionKeepTime; // 0xb2cc(0x04)
	float SuppressionDownTime; // 0xb2d0(0x04)
	float CamBlendExp; // 0xb2d4(0x04)
	float DeathCamBlendTime; // 0xb2d8(0x04)
	float aimPosXOffsetLength; // 0xb2dc(0x04)
	float aimPosYOffsetLength; // 0xb2e0(0x04)
	float aimPosZOffsetLength; // 0xb2e4(0x04)
	bool bAccurateAimPitch; // 0xb2e8(0x01)
	char pad_B2E9[0x7]; // 0xb2e9(0x07)
	struct TArray<struct UCameraShake*> CameraShakeClasses; // 0xb2f0(0x10)
	char pad_B300[0x88]; // 0xb300(0x88)
	struct APDMainPlayerCharacterFP* FPCharacter; // 0xb388(0x08)
	char pad_B390[0x80]; // 0xb390(0x80)

	void OnUpsideSphereEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function ProjectD.PDMainPlayerCharacter.OnUpsideSphereEndOverlap // (Final|Native|Protected) // @ game+0x1820240
	void OnUpsideSphereBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function ProjectD.PDMainPlayerCharacter.OnUpsideSphereBeginOverlap // (Final|Native|Protected|HasOutParms) // @ game+0x1820050
	void HandMeshLoadingComplete(struct TArray<struct TSoftObjectPtr<UObject>>& Data, int32_t Index); // Function ProjectD.PDMainPlayerCharacter.HandMeshLoadingComplete // (Final|Native|Public|HasOutParms) // @ game+0x181fb30
};

// Class ProjectD.PDMainPlayerCharacterFP
// Size: 0x5a0 (Inherited: 0x4c0)
struct APDMainPlayerCharacterFP : ACharacter {
	struct UAnimMontage* CurrentPlayingDrawMontage; // 0x4b8(0x08)
	char pad_4C8[0x8]; // 0x4c8(0x08)
	struct UPDPlayerAnimInstanceFPDummy* FPAnimInstance; // 0x4d0(0x08)
	struct APDMainPlayerCharacter* MainPlayerCharacter; // 0x4d8(0x08)
	struct UPDMainPlayerStateComponent* MainPlayerStateComponent; // 0x4e0(0x08)
	struct APDFPWeapon* FPWeapon; // 0x4e8(0x08)
	char pad_4F0[0x28]; // 0x4f0(0x28)
	struct UCurveFloat* FPZoomInCameraLocationCurve; // 0x518(0x08)
	struct UCurveFloat* FPZoomInCameraRotationCurve; // 0x520(0x08)
	char pad_528[0x10]; // 0x528(0x10)
	struct ACameraActor* ToggleUsingAimChangeActor; // 0x538(0x08)
	struct UCameraComponent* BeginCamera; // 0x540(0x08)
	struct UCameraComponent* EndCamera; // 0x548(0x08)
	float ToggleChangeMaxTime; // 0x550(0x04)
	char pad_554[0xc]; // 0x554(0x0c)
	struct FTransform WeaponTransform; // 0x560(0x30)
	enum class EPDAimingState CurrentAimingState; // 0x590(0x01)
	char pad_591[0xf]; // 0x591(0x0f)
};

// Class ProjectD.PDMainPlayerMovementComponent
// Size: 0x850 (Inherited: 0x610)
struct UPDMainPlayerMovementComponent : UCharacterMovementComponent {
	char pad_610[0x18]; // 0x610(0x18)
	float MaxRunSpeedCrouched; // 0x628(0x04)
	float MaxSprintSpeedCrouched; // 0x62c(0x04)
	float MaxRunSpeed; // 0x630(0x04)
	float MaxSprintSpeed; // 0x634(0x04)
	float SprintAllowAngle; // 0x638(0x04)
	float SprintClampAngle; // 0x63c(0x04)
	char pad_640[0x130]; // 0x640(0x130)
	struct UPDMainPlayerStateComponent* OwnerPDStateComponent; // 0x770(0x08)
	char pad_778[0xd8]; // 0x778(0xd8)
};

// Class ProjectD.PDPlayerSpringArmComponent
// Size: 0x670 (Inherited: 0x280)
struct UPDPlayerSpringArmComponent : USpringArmComponent {
	float CameraHitBlendXY; // 0x280(0x04)
	char pad_284[0xc]; // 0x284(0x0c)
	struct APDPlayerCharacter* pOwnerCharacter; // 0x290(0x08)
	struct UPDStateComponent* pOwnerStateComponent; // 0x298(0x08)
	char pad_2A0[0x3d0]; // 0x2a0(0x3d0)
};

// Class ProjectD.PDMainPlayerSpringArmComponent
// Size: 0x690 (Inherited: 0x670)
struct UPDMainPlayerSpringArmComponent : UPDPlayerSpringArmComponent {
	float CrouchTargetOffsetLagSpeed; // 0x668(0x04)
	float TargetStartOffset; // 0x66c(0x04)
	float TraceDistance; // 0x670(0x04)
	float TraceRadius; // 0x674(0x04)
	float TraceHeight; // 0x678(0x04)
	char pad_684[0xc]; // 0x684(0x0c)
};

// Class ProjectD.PDStateComponent
// Size: 0x168 (Inherited: 0xb0)
struct UPDStateComponent : UActorComponent {
	char pad_B0[0x8]; // 0xb0(0x08)
	struct UPDMainPlayerMovementComponent* OwnerPDMainPlayMovementComponent; // 0xb8(0x08)
	struct APDPlayerCharacter* OwnerPlayer; // 0xc0(0x08)
	struct UPDPlayerAnimInstance* BaseAnimInstance; // 0xc8(0x08)
	char pad_D0[0x1c]; // 0xd0(0x1c)
	enum class EPDLocoType LocoType; // 0xec(0x01)
	enum class EPDLocoState LocoState; // 0xed(0x01)
	enum class EPDMovementState MovementState; // 0xee(0x01)
	enum class EPDStanceState StanceState; // 0xef(0x01)
	enum class EPDAimingState AimingState; // 0xf0(0x01)
	enum class EPDGaitsState GaitState; // 0xf1(0x01)
	char pad_F2[0x2]; // 0xf2(0x02)
	float GaitValue; // 0xf4(0x04)
	float Direction; // 0xf8(0x04)
	float AimPitch; // 0xfc(0x04)
	float AimYaw; // 0x100(0x04)
	float FreeLookYaw; // 0x104(0x04)
	float LeanFB; // 0x108(0x04)
	float LeanLR; // 0x10c(0x04)
	bool bLeftHandedPose; // 0x110(0x01)
	char pad_111[0xf]; // 0x111(0x0f)
	enum class EPDClimbStanceState ClimbStanceState; // 0x120(0x01)
	enum class EPDThrowStanceState ThrowStanceState; // 0x121(0x01)
	enum class EPDSlideStanceState SlideStanceState; // 0x122(0x01)
	char pad_123[0x4]; // 0x123(0x04)
	enum class EPDLeanState LeanState; // 0x127(0x01)
	struct TArray<struct UPDStateBase*> StateClassList; // 0x128(0x10)
	char pad_138[0x8]; // 0x138(0x08)
	struct UPDStateBase* CurrentState; // 0x140(0x08)
	struct TArray<struct UPDStateBase*> StateList; // 0x148(0x10)
	char pad_158[0x10]; // 0x158(0x10)
};

// Class ProjectD.PDMainPlayerStateComponent
// Size: 0x600 (Inherited: 0x168)
struct UPDMainPlayerStateComponent : UPDStateComponent {
	char pad_168[0x290]; // 0x168(0x290)
	struct FVector MoveInputAxis; // 0x3f8(0x0c)
	bool bMoveInputPressed; // 0x404(0x01)
	enum class EPDInputMoveType InputState; // 0x405(0x01)
	char pad_406[0x32]; // 0x406(0x32)
	float CurSpeed; // 0x438(0x04)
	float PreviousSpeed; // 0x43c(0x04)
	float LastInputMoveSpeed; // 0x440(0x04)
	char pad_444[0xcc]; // 0x444(0xcc)
	struct APDCharacterEntity* TargetCharacter; // 0x510(0x08)
	char pad_518[0x1c]; // 0x518(0x1c)
	float StartingFowardAcceleration; // 0x534(0x04)
	float StartingSideAcceleration; // 0x538(0x04)
	float StartingBackAcceleration; // 0x53c(0x04)
	float StartingFowardAcceleration_Crouch; // 0x540(0x04)
	float StartingSideAcceleration_Crouch; // 0x544(0x04)
	float StartingBackAcceleration_Crouch; // 0x548(0x04)
	float StoppingMaxBrakingDeceleration; // 0x54c(0x04)
	float StoppingMinBrakingDeceleration; // 0x550(0x04)
	float StoppingMaxBrakingDeceleration_Crouch; // 0x554(0x04)
	float StoppingMinBrakingDeceleration_Crouch; // 0x558(0x04)
	float RestoreAccelerationDuration; // 0x55c(0x04)
	float RestoreAccelerationDuration_Crouch; // 0x560(0x04)
	float RestoreBrakingDecelerationDuration; // 0x564(0x04)
	float RestoreBrakingDecelerationDuration_Crouch; // 0x568(0x04)
	float CurrentRestoreBrakingDecelerationDuration; // 0x56c(0x04)
	char pad_570[0x48]; // 0x570(0x48)
	float AimingIdleTime; // 0x5b8(0x04)
	float AimingIdleLimitPitchAngle; // 0x5bc(0x04)
	float AimingIdleLimitYawAngle; // 0x5c0(0x04)
	char pad_5C4[0x4]; // 0x5c4(0x04)
	struct UCurveBase* AimingIdleMoveCurve; // 0x5c8(0x08)
	char pad_5D0[0x4]; // 0x5d0(0x04)
	float AimingIdleHoldingMaxTime; // 0x5d4(0x04)
	struct UCurveFloat* AimingIdleHoldingCurve; // 0x5d8(0x08)
	float AimingIdleDelay; // 0x5e0(0x04)
	char pad_5E4[0x1c]; // 0x5e4(0x1c)
};

// Class ProjectD.PDMarkerGuide
// Size: 0x328 (Inherited: 0x290)
struct UPDMarkerGuide : UPDIngameModeWidget {
	struct UCanvasPanel* CP_Guide; // 0x290(0x08)
	struct UImage* IMG_Line; // 0x298(0x08)
	struct UCanvasPanel* CP_Info; // 0x2a0(0x08)
	struct UHorizontalBox* HB_Key; // 0x2a8(0x08)
	struct UWidgetSwitcher* WS_Key; // 0x2b0(0x08)
	struct UPDTextBlock* TB_Key; // 0x2b8(0x08)
	struct UPDTextBlock* TB_Desc; // 0x2c0(0x08)
	struct UHorizontalBox* HB_Type; // 0x2c8(0x08)
	struct UPDTextBlock* TB_Type; // 0x2d0(0x08)
	struct UPDTextBlock* TB_Distance; // 0x2d8(0x08)
	struct USizeBox* SB_User; // 0x2e0(0x08)
	struct UImage* IMG_UserCode; // 0x2e8(0x08)
	struct UPDTextBlock* TB_UserNum; // 0x2f0(0x08)
	struct UPDTextBlock* TB_UserName; // 0x2f8(0x08)
	struct USizeBox* SB_User_Item; // 0x300(0x08)
	struct UImage* IMG_UserCode_Item; // 0x308(0x08)
	struct UPDTextBlock* TB_UserNum_Item; // 0x310(0x08)
	struct UPDTextBlock* TB_UserName_Item; // 0x318(0x08)
	char pad_320[0x8]; // 0x320(0x08)
};

// Class ProjectD.PDMaskedText
// Size: 0x2b0 (Inherited: 0x288)
struct UPDMaskedText : UPDUserWidget {
	struct UCanvasPanel* CP_Left; // 0x288(0x08)
	struct UPDTextBlock* TB_Left; // 0x290(0x08)
	struct UCanvasPanel* CP_Right; // 0x298(0x08)
	struct UPDTextBlock* TB_Right; // 0x2a0(0x08)
	float Width; // 0x2a8(0x04)
	float Percent; // 0x2ac(0x04)
};

// Class ProjectD.PDMatchingUI
// Size: 0x2b0 (Inherited: 0x288)
struct UPDMatchingUI : UPDUserWidget {
	struct UPDTextBlock* TB_Matching; // 0x288(0x08)
	struct UPDTextBlock* TB_Time; // 0x290(0x08)
	struct UPDTextBlock* TB_Desc; // 0x298(0x08)
	char pad_2A0[0x10]; // 0x2a0(0x10)
};

// Class ProjectD.PDMatchListItem
// Size: 0x2a0 (Inherited: 0x288)
struct UPDMatchListItem : UPDUserWidget {
	struct UPDButton* Btn_MatchListItem; // 0x288(0x08)
	char pad_290[0x10]; // 0x290(0x10)

	void OnClickMatch(); // Function ProjectD.PDMatchListItem.OnClickMatch // (Final|Native|Protected) // @ game+0x181fd70
};

// Class ProjectD.PDMatchListUI
// Size: 0x290 (Inherited: 0x288)
struct UPDMatchListUI : UPDUserWidget {
	struct UScrollBox* SB_MatchIDList; // 0x288(0x08)
};

// Class ProjectD.PDMatchModeList
// Size: 0x2f8 (Inherited: 0x288)
struct UPDMatchModeList : UPDUserWidget {
	struct UPDButton* Btn_Matching; // 0x288(0x08)
	struct UHorizontalBox* HB_ModeList_3; // 0x290(0x08)
	struct UPDButton* Btn_Matching_FFA; // 0x298(0x08)
	struct UPDButton* Btn_Trainning_01; // 0x2a0(0x08)
	struct UPDButton* Btn_Trainning_02; // 0x2a8(0x08)
	struct UPDButton* Btn_Trainning_03; // 0x2b0(0x08)
	struct UPDButton* Btn_Trainning_04; // 0x2b8(0x08)
	struct UPDButton* Btn_CreateCustom; // 0x2c0(0x08)
	struct UPDButton* Btn_JoinCustom; // 0x2c8(0x08)
	struct UCanvasPanel* CP_Disabled; // 0x2d0(0x08)
	struct UImage* IMG_CreateCustom; // 0x2d8(0x08)
	struct UImage* IMG_JoinCustom; // 0x2e0(0x08)
	struct UWidgetSwitcher* WS_Matching_Case; // 0x2e8(0x08)
	struct UCanvasPanel* CP_MissionScore; // 0x2f0(0x08)

	void OnUnHoveredMatchBtn(); // Function ProjectD.PDMatchModeList.OnUnHoveredMatchBtn // (Final|Native|Private) // @ game+0x1820010
	void OnHoveredMatchBtn(); // Function ProjectD.PDMatchModeList.OnHoveredMatchBtn // (Final|Native|Private) // @ game+0x181feb0
	void OnClickTrainningWindfarm(); // Function ProjectD.PDMatchModeList.OnClickTrainningWindfarm // (Final|Native|Private) // @ game+0x181fe70
	void OnClickTrainningShipyard(); // Function ProjectD.PDMatchModeList.OnClickTrainningShipyard // (Final|Native|Private) // @ game+0x181fe50
	void OnClickTrainningDerail(); // Function ProjectD.PDMatchModeList.OnClickTrainningDerail // (Final|Native|Private) // @ game+0x181fe30
	void OnClickTrainningBridge(); // Function ProjectD.PDMatchModeList.OnClickTrainningBridge // (Final|Native|Private) // @ game+0x181fe10
	void OnClickMatchFFABtn(); // Function ProjectD.PDMatchModeList.OnClickMatchFFABtn // (Final|Native|Private) // @ game+0x181fdb0
	void OnClickMatchBtn(); // Function ProjectD.PDMatchModeList.OnClickMatchBtn // (Final|Native|Private) // @ game+0x181fd90
	void OnClickCustomMatchJoin(); // Function ProjectD.PDMatchModeList.OnClickCustomMatchJoin // (Final|Native|Private) // @ game+0x181fcf0
	void OnClickCustomMatchCreate(); // Function ProjectD.PDMatchModeList.OnClickCustomMatchCreate // (Final|Native|Private) // @ game+0x181fcd0
};

// Class ProjectD.PDMatchUI
// Size: 0x2e8 (Inherited: 0x288)
struct UPDMatchUI : UPDSceneBaseUI {
	struct UPDTextBlock* T_Tip; // 0x288(0x08)
	struct UPDTextBlock* T_Level; // 0x290(0x08)
	struct UCanvasPanel* CP_Mode; // 0x298(0x08)
	struct UPDTextBlock* T_Mode; // 0x2a0(0x08)
	struct UPDTextBlock* T_Desc_Mode; // 0x2a8(0x08)
	struct UPDTextBlock* T_Timeout; // 0x2b0(0x08)
	struct UWidgetSwitcher* WS_AnimIndicator; // 0x2b8(0x08)
	struct UWidgetSwitcher* WS_SwicherCase; // 0x2c0(0x08)
	struct UWidgetSwitcher* WS_CharacterCase; // 0x2c8(0x08)
	struct UWidgetSwitcher* WS_MapCase; // 0x2d0(0x08)
	char pad_2D8[0x10]; // 0x2d8(0x10)
};

// Class ProjectD.PDMathFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPDMathFunctionLibrary : UBlueprintFunctionLibrary {

	float NormalizeAngle(float Angle); // Function ProjectD.PDMathFunctionLibrary.NormalizeAngle // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x181fc50
	float BP_CalcVectorAngle(struct FVector Vector, struct FRotator BaseRotation); // Function ProjectD.PDMathFunctionLibrary.BP_CalcVectorAngle // (Final|Native|Static|Private|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x181f740
	float AngleDistance(float Angle1, float Angle2); // Function ProjectD.PDMathFunctionLibrary.AngleDistance // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x181f680
};

// Class ProjectD.PDMinimapUI
// Size: 0x300 (Inherited: 0x290)
struct UPDMinimapUI : UPDIngameModeWidget {
	struct UPDGameMapModule* GameMap; // 0x290(0x08)
	struct URetainerBox* RB_Map; // 0x298(0x08)
	struct UCanvasPanel* CP_Map; // 0x2a0(0x08)
	struct UPDTextBlock* TB_Time; // 0x2a8(0x08)
	struct UPDTextBlock* TB_Coordinates; // 0x2b0(0x08)
	struct UImage* IMG_Weather; // 0x2b8(0x08)
	struct UCanvasPanel* CP_NewBadge; // 0x2c0(0x08)
	float ExpandScale; // 0x2c8(0x04)
	float ZoomScaleMax; // 0x2cc(0x04)
	float ZoomScaleMin; // 0x2d0(0x04)
	float ZoomScaleStep; // 0x2d4(0x04)
	char pad_2D8[0x28]; // 0x2d8(0x28)
};

// Class ProjectD.PDMissionScoreModeUI
// Size: 0x4b0 (Inherited: 0x430)
struct UPDMissionScoreModeUI : UPDBaseModeUI {
	struct UPDSkyViewUI* SkyView; // 0x430(0x08)
	struct UPDMissionScoreRoundInfoUI* RoundInfo; // 0x438(0x08)
	struct UPDMissionScoreStatusBoard* IngameStatusBoard; // 0x440(0x08)
	struct UPDMissionScoreRoundResult* RoundResult; // 0x448(0x08)
	char pad_450[0x60]; // 0x450(0x60)
};

// Class ProjectD.PDMissionScorePlayerEntryItem
// Size: 0x370 (Inherited: 0x288)
struct UPDMissionScorePlayerEntryItem : UPDUserWidget {
	struct UPDTextBlock* TB_PlayerName; // 0x288(0x08)
	struct UImage* IMG_AgentIcon; // 0x290(0x08)
	struct UImage* IMG_PlayerBack; // 0x298(0x08)
	struct UBorder* BD_Score; // 0x2a0(0x08)
	struct UProgressBar* PB_Groggy; // 0x2a8(0x08)
	struct UWidgetSwitcher* WS_State; // 0x2b0(0x08)
	struct UPDTextBlock* TB_Score; // 0x2b8(0x08)
	struct UPDTextBlock* TB_AddScore_2; // 0x2c0(0x08)
	struct UPDTextBlock* TB_AddScore_3; // 0x2c8(0x08)
	struct UPDTextBlock* TB_AddScore_4; // 0x2d0(0x08)
	struct UPDTextBlock* TB_AddScore_5; // 0x2d8(0x08)
	struct UPDTextBlock* TB_AddScore_6; // 0x2e0(0x08)
	struct TArray<struct UPDTextBlock*> TB_AddScoreList; // 0x2e8(0x10)
	struct UCanvasPanel* CP_Item_2; // 0x2f8(0x08)
	struct UImage* IMG_Item_2; // 0x300(0x08)
	struct UCanvasPanel* CP_Item_3; // 0x308(0x08)
	struct UImage* IMG_Item_3; // 0x310(0x08)
	struct UCanvasPanel* CP_Item_4; // 0x318(0x08)
	struct UImage* IMG_Item_4; // 0x320(0x08)
	struct UCanvasPanel* CP_Item_5; // 0x328(0x08)
	struct UImage* IMG_Item_5; // 0x330(0x08)
	struct TArray<struct UCanvasPanel*> MissionItemPanelList; // 0x338(0x10)
	struct TArray<struct UImage*> MissionItemImgList; // 0x348(0x10)
	char pad_358[0x18]; // 0x358(0x18)
};

// Class ProjectD.PDMissionScoreRoundInfoUI
// Size: 0x300 (Inherited: 0x290)
struct UPDMissionScoreRoundInfoUI : UPDIngameModeWidget {
	struct UPDTextBlock* TB_Round; // 0x290(0x08)
	struct UHorizontalBox* HB_PlayerEntry; // 0x298(0x08)
	char pad_2A0[0x60]; // 0x2a0(0x60)
};

// Class ProjectD.PDMissionScoreRoundResult
// Size: 0x328 (Inherited: 0x290)
struct UPDMissionScoreRoundResult : UPDIngameModeWidget {
	struct UPDTextBlock* TB_RoundTitle; // 0x290(0x08)
	struct UHorizontalBox* HB_TopRankRoot; // 0x298(0x08)
	struct TMap<int32_t, struct UPDMSRoundResultTopRank*> TopRankMap; // 0x2a0(0x50)
	struct UVerticalBox* VB_PlayerInfoRoot; // 0x2f0(0x08)
	struct TArray<struct UPDMSRoundResultPlayerInfo*> PlayerInfoList; // 0x2f8(0x10)
	struct UHorizontalBox* HB_RoundRoot; // 0x308(0x08)
	struct TArray<struct UPDResultRoundItemUI*> RoundItemList; // 0x310(0x10)
	char pad_320[0x8]; // 0x320(0x08)
};

// Class ProjectD.PDMissionScoreStatusBoard
// Size: 0x2b0 (Inherited: 0x290)
struct UPDMissionScoreStatusBoard : UPDIngameModeWidget {
	struct UVerticalBox* VB_PlayerList; // 0x290(0x08)
	struct UHorizontalBox* HB_Round; // 0x298(0x08)
	char pad_2A0[0x10]; // 0x2a0(0x10)
};

// Class ProjectD.PDModelEntity
// Size: 0x368 (Inherited: 0x220)
struct APDModelEntity : AActor {
	char pad_220[0x128]; // 0x220(0x128)
	struct TArray<struct UStaticMeshComponent*> StaticMeshCompList; // 0x348(0x10)
	struct USkeletalMeshComponent* SkeletalMeshComp; // 0x358(0x08)
	char pad_360[0x8]; // 0x360(0x08)
};

// Class ProjectD.PDWeaponControlComponent
// Size: 0x108 (Inherited: 0xb0)
struct UPDWeaponControlComponent : UActorComponent {
	char pad_B0[0x10]; // 0xb0(0x10)
	struct APDPlayerCharacter* OwnerPlayer; // 0xc0(0x08)
	struct APDTutorialNPC* OwnerTutorialNPC; // 0xc8(0x08)
	struct APDCharacterEntity* OwnerEntity; // 0xd0(0x08)
	struct UPDStateComponent* PlayerStateComponent; // 0xd8(0x08)
	char pad_E0[0x28]; // 0xe0(0x28)
};

// Class ProjectD.PDMPWeaponControlComponent
// Size: 0x1c0 (Inherited: 0x108)
struct UPDMPWeaponControlComponent : UPDWeaponControlComponent {
	struct APDMainPlayerCharacter* OwnerMainPlayer; // 0x108(0x08)
	struct UPDMainPlayerStateComponent* MainPlayerStateComponent; // 0x110(0x08)
	char pad_118[0xa8]; // 0x118(0xa8)
};

// Class ProjectD.PDStatusBoardPlayerInfoBase
// Size: 0x398 (Inherited: 0x288)
struct UPDStatusBoardPlayerInfoBase : UPDUserWidget {
	struct UWidgetSwitcher* WS_PlayerState; // 0x288(0x08)
	struct UProgressBar* PB_Groggy; // 0x290(0x08)
	struct UPDTextBlock* T_PlayerName; // 0x298(0x08)
	struct UPDTextBlock* T_KillCount; // 0x2a0(0x08)
	struct UPDTextBlock* T_AssistCount; // 0x2a8(0x08)
	struct UPDTextBlock* T_DefenceCount; // 0x2b0(0x08)
	struct UPDTextBlock* T_AttackCount; // 0x2b8(0x08)
	struct UImage* IMG_Ping_01; // 0x2c0(0x08)
	struct UImage* IMG_Ping_02; // 0x2c8(0x08)
	struct UImage* IMG_Ping_03; // 0x2d0(0x08)
	struct UImage* IMG_Ping_04; // 0x2d8(0x08)
	struct UImage* IMG_Ping_05; // 0x2e0(0x08)
	struct UPDButton* BTN_Report; // 0x2e8(0x08)
	struct TArray<struct UImage*> PingImgList; // 0x2f0(0x10)
	struct UImage* IMG_Clan_BG; // 0x300(0x08)
	struct UImage* IMG_Clan; // 0x308(0x08)
	struct UBorder* B_ToggleChat_Line; // 0x310(0x08)
	struct UCheckBox* CB_ChatBlock; // 0x318(0x08)
	struct UBorder* B_TogglePing_Line; // 0x320(0x08)
	struct UCheckBox* CB_PingBlock; // 0x328(0x08)
	struct FSlateColor NormalTextColor; // 0x330(0x28)
	struct FSlateColor DeathTextColor; // 0x358(0x28)
	char pad_380[0x18]; // 0x380(0x18)

	void OnTogglePingBlockChanged(bool Val); // Function ProjectD.PDStatusBoardPlayerInfoBase.OnTogglePingBlockChanged // (Final|Native|Protected) // @ game+0x1836980
	void OnToggleChatBlockChanged(bool Val); // Function ProjectD.PDStatusBoardPlayerInfoBase.OnToggleChatBlockChanged // (Final|Native|Protected) // @ game+0x18368f0
	void OnClicked_BTN_Report(); // Function ProjectD.PDStatusBoardPlayerInfoBase.OnClicked_BTN_Report // (Final|Native|Protected) // @ game+0x1836890
};

// Class ProjectD.PDMSStatusBoardPlayerInfo
// Size: 0x3b8 (Inherited: 0x398)
struct UPDMSStatusBoardPlayerInfo : UPDStatusBoardPlayerInfoBase {
	struct UImage* IMG_SlotBg_Me; // 0x398(0x08)
	struct UPDTextBlock* T_PlayerRank; // 0x3a0(0x08)
	struct UPDTextBlock* T_Point; // 0x3a8(0x08)
	struct UPDTextBlock* T_MissionCount; // 0x3b0(0x08)
};

// Class ProjectD.PDMSRoundResultPlayerInfo
// Size: 0x3c8 (Inherited: 0x3b8)
struct UPDMSRoundResultPlayerInfo : UPDMSStatusBoardPlayerInfo {
	struct UWidgetSwitcher* WS_Rank; // 0x3b8(0x08)
	struct UPDTextBlock* T_Point_Get; // 0x3c0(0x08)
};

// Class ProjectD.PDMSRoundResultTopRank
// Size: 0x2e0 (Inherited: 0x288)
struct UPDMSRoundResultTopRank : UPDUserWidget {
	struct USizeBox* SB_CharacterIcon; // 0x288(0x08)
	struct UImage* IMG_Portrait; // 0x290(0x08)
	struct UImage* IMG_MainPlayer; // 0x298(0x08)
	struct UImage* IMG_Background; // 0x2a0(0x08)
	struct UWidgetSwitcher* WS_Rank; // 0x2a8(0x08)
	struct UPDTextBlock* TB_Rank; // 0x2b0(0x08)
	struct UCanvasPanel* CP_Label; // 0x2b8(0x08)
	struct UPDTextBlock* TB_Nickname; // 0x2c0(0x08)
	struct UImage* IMG_ClanMarkBG; // 0x2c8(0x08)
	struct UImage* IMG_ClanMarkFG; // 0x2d0(0x08)
	int32_t RankNumber; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
};

// Class ProjectD.PDMSStatusBoardRoundItem
// Size: 0x2a0 (Inherited: 0x288)
struct UPDMSStatusBoardRoundItem : UPDUserWidget {
	struct UPDTextBlock* T_RoundInfo; // 0x288(0x08)
	struct UWidgetSwitcher* WS_ResultType; // 0x290(0x08)
	struct UImage* IMG_SLotBg; // 0x298(0x08)
};

// Class ProjectD.PDMultiSplineComponent
// Size: 0x510 (Inherited: 0x500)
struct UPDMultiSplineComponent : USplineComponent {
	struct TArray<float> SpeedRateList; // 0x4f8(0x10)
};

// Class ProjectD.PDNameTagUI
// Size: 0x320 (Inherited: 0x2a0)
struct UPDNameTagUI : UPDHUDIconBaseUI {
	struct FSlateColor MyTeamColor; // 0x2a0(0x28)
	struct FSlateColor EnemyTeamColor; // 0x2c8(0x28)
	struct UPDTextBlock* TB_UserName; // 0x2f0(0x08)
	struct UWidgetSwitcher* WS_UserState; // 0x2f8(0x08)
	struct UProgressBar* PB_Health; // 0x300(0x08)
	struct UPDAttackDamageIndicatorUI* AttackDamageIndicator; // 0x308(0x08)
	char pad_310[0x10]; // 0x310(0x10)
};

// Class ProjectD.PDNameTagAllyUI
// Size: 0x410 (Inherited: 0x320)
struct UPDNameTagAllyUI : UPDNameTagUI {
	struct UCanvasPanel* CP_InScreen; // 0x320(0x08)
	struct UCanvasPanel* CP_OutScreen; // 0x328(0x08)
	struct UWidgetSwitcher* WS_UserSubState; // 0x330(0x08)
	struct UImage* IMG_UserCode; // 0x338(0x08)
	struct UImage* IMG_Height; // 0x340(0x08)
	struct UPDTextBlock* TB_UserNum; // 0x348(0x08)
	struct USizeBox* SB_StateItem; // 0x350(0x08)
	struct UImage* IMG_StateItem; // 0x358(0x08)
	struct UImage* IMG_StateItem_FX1; // 0x360(0x08)
	struct UImage* IMG_StateItem_FX2; // 0x368(0x08)
	struct UImage* IMG_Bomb; // 0x370(0x08)
	struct UPDArmorGauge* ArmorGauge; // 0x378(0x08)
	struct UPDCircleProgressModule* CPM_Groggy; // 0x380(0x08)
	struct UProgressBar* PB_Groggy; // 0x388(0x08)
	struct UCanvasPanel* CP_SelfRevivalKit; // 0x390(0x08)
	struct UPDCheerMarkFx* CheerFx; // 0x398(0x08)
	struct UBorder* BD_OutArrow; // 0x3a0(0x08)
	struct UImage* IMG_OutArrow; // 0x3a8(0x08)
	struct UImage* IMG_OutDamage; // 0x3b0(0x08)
	struct UPDCircleProgressModule* CPM_OutGroggy; // 0x3b8(0x08)
	struct UImage* IMG_OutGroggy; // 0x3c0(0x08)
	struct UImage* IMG_OutBomb; // 0x3c8(0x08)
	struct UCanvasPanel* CP_Medal; // 0x3d0(0x08)
	struct UImage* IMG_Medal; // 0x3d8(0x08)
	char pad_3E0[0x30]; // 0x3e0(0x30)

	void AdjustStateImageRatio(); // Function ProjectD.PDNameTagAllyUI.AdjustStateImageRatio // (Final|Native|Protected) // @ game+0x1823b40
};

// Class ProjectD.PDNameTagEnemyUI
// Size: 0x350 (Inherited: 0x320)
struct UPDNameTagEnemyUI : UPDNameTagUI {
	struct UCanvasPanel* CP_InScreen; // 0x320(0x08)
	struct UCanvasPanel* CP_OutScreen; // 0x328(0x08)
	struct UCanvasPanel* CP_MissionLeptonOwner; // 0x330(0x08)
	struct UCanvasPanel* CP_MissionTarget; // 0x338(0x08)
	char pad_340[0x10]; // 0x340(0x10)
};

// Class ProjectD.PDNeutralObject
// Size: 0x328 (Inherited: 0x220)
struct APDNeutralObject : AActor {
	char pad_220[0x10]; // 0x220(0x10)
	struct UPDSkeletalMeshComponent* Mesh; // 0x230(0x08)
	char pad_238[0xf0]; // 0x238(0xf0)

	void OnAssetsLoaded(struct TArray<struct TSoftObjectPtr<UObject>>& InAssets); // Function ProjectD.PDNeutralObject.OnAssetsLoaded // (Final|Native|Protected|HasOutParms) // @ game+0x1823b60
};

// Class ProjectD.PDNeutralObjectGroup
// Size: 0x300 (Inherited: 0x220)
struct APDNeutralObjectGroup : AActor {
	struct TArray<struct FVector> SpawnPoints; // 0x220(0x10)
	char pad_230[0x10]; // 0x230(0x10)
	struct TMap<uint64_t, char> SpawnNumByIndex; // 0x240(0x50)
	float PatrollRadius; // 0x290(0x04)
	float EventHeight; // 0x294(0x04)
	float LandableRadius; // 0x298(0x04)
	bool bAutoActive; // 0x29c(0x01)
	bool bDisablePatroll; // 0x29d(0x01)
	bool bShowDebugLines; // 0x29e(0x01)
	char pad_29F[0x61]; // 0x29f(0x61)
};

// Class ProjectD.PDNickNameCreateUI
// Size: 0x2b0 (Inherited: 0x288)
struct UPDNickNameCreateUI : UPDSceneBaseUI {
	char pad_288[0x8]; // 0x288(0x08)
	struct UPDButton* OKBtn; // 0x290(0x08)
	struct UEditableTextBox* ET_NickName; // 0x298(0x08)
	struct UCanvasPanel* CP_Alert; // 0x2a0(0x08)
	struct UPDTextBlock* TB_Alert; // 0x2a8(0x08)

	void OnClickOKBtn(); // Function ProjectD.PDNickNameCreateUI.OnClickOKBtn // (Final|Native|Private) // @ game+0x1823d00
	void OnChangeText(struct FText& InText); // Function ProjectD.PDNickNameCreateUI.OnChangeText // (Final|Native|Private|HasOutParms) // @ game+0x1804bc0
};

// Class ProjectD.PDNotificationAlert
// Size: 0x2c0 (Inherited: 0x288)
struct UPDNotificationAlert : UPDUserWidget {
	char pad_288[0x8]; // 0x288(0x08)
	struct UCanvasPanel* CP_Alert; // 0x290(0x08)
	struct UPDTextBlock* TB_Text; // 0x298(0x08)
	struct UProgressBar* PB_Alert; // 0x2a0(0x08)
	struct UBorder* BD_Desc; // 0x2a8(0x08)
	struct UPDTextBlock* TB_Desc; // 0x2b0(0x08)
	char pad_2B8[0x8]; // 0x2b8(0x08)
};

// Class ProjectD.PDNpc
// Size: 0x7f0 (Inherited: 0x7f0)
struct APDNpc : APDCharacterEntity {
};

// Class ProjectD.PDNPCAnimInstance
// Size: 0x2e0 (Inherited: 0x270)
struct UPDNPCAnimInstance : UAnimInstance {
	struct APDTutorialNPC* Owner; // 0x268(0x08)
	enum class EPDLocoType LocoType; // 0x270(0x01)
	bool bIsRagdoll; // 0x271(0x01)
	struct UAnimMontage* Groggy_Enter_Random_Hit_Head; // 0x278(0x08)
	struct UAnimMontage* Groggy_Enter_Random_Hit_Chest; // 0x280(0x08)
	struct UAnimMontage* Groggy_Enter_Random_Hit_Abdomen; // 0x288(0x08)
	struct UAnimMontage* Groggy_Enter_Random_Hit_LeftLeg; // 0x290(0x08)
	struct UAnimMontage* Groggy_Enter_Random_Hit_RightLeg; // 0x298(0x08)
	struct UAnimMontage* Groggy_Exit; // 0x2a0(0x08)
	struct UAnimMontage* Death_Random; // 0x2a8(0x08)
	struct UAnimMontage* Death_GROGGY_Random; // 0x2b0(0x08)
	struct UAnimMontage* Hit_A; // 0x2b8(0x08)
	struct UAnimMontage* Hit_B; // 0x2c0(0x08)
	struct UAnimMontage* Hit_C; // 0x2c8(0x08)
	char pad_2D2[0xe]; // 0x2d2(0x0e)
};

// Class ProjectD.PDScreenMarkerInteractive
// Size: 0x2a8 (Inherited: 0x2a0)
struct UPDScreenMarkerInteractive : UPDHUDIconBaseUI {
	char pad_2A0[0x8]; // 0x2a0(0x08)
};

// Class ProjectD.PDObjectTagSiteUI
// Size: 0x318 (Inherited: 0x2a8)
struct UPDObjectTagSiteUI : UPDScreenMarkerInteractive {
	struct UImage* IMG_ObjectIcon; // 0x2a8(0x08)
	struct UPDTextBlock* TB_Distance; // 0x2b0(0x08)
	struct UCanvasPanel* CP_OutArrow; // 0x2b8(0x08)
	struct UPDTextBlock* TB_Tag; // 0x2c0(0x08)
	struct UWidgetSwitcher* WS_Type; // 0x2c8(0x08)
	struct UCanvasPanel* CP_Reply; // 0x2d0(0x08)
	struct UPDPingReplyUI* Reply01; // 0x2d8(0x08)
	struct UPDPingReplyUI* Reply02; // 0x2e0(0x08)
	struct UPDPingReplyUI* Reply03; // 0x2e8(0x08)
	struct UPDPingReplyUI* Reply04; // 0x2f0(0x08)
	struct UPDPingReplyUI* Reply05; // 0x2f8(0x08)
	struct TArray<struct UPDPingReplyUI*> ReplyList; // 0x300(0x10)
	char pad_310[0x8]; // 0x310(0x08)
};

// Class ProjectD.PDObjectTagUI
// Size: 0x2c8 (Inherited: 0x2a0)
struct UPDObjectTagUI : UPDHUDIconBaseUI {
	struct UImage* IMG_ObjectIcon; // 0x2a0(0x08)
	struct UPDTextBlock* TB_Distance; // 0x2a8(0x08)
	struct UCanvasPanel* CP_OutArrow; // 0x2b0(0x08)
	char pad_2B8[0x10]; // 0x2b8(0x10)
};

// Class ProjectD.PDOptionContent
// Size: 0x3a0 (Inherited: 0x288)
struct UPDOptionContent : UPDUserWidget {
	char pad_288[0x10]; // 0x288(0x10)
	struct USizeBox* SB_OptionContents; // 0x298(0x08)
	struct UHorizontalBox* HB_Contents; // 0x2a0(0x08)
	struct UVerticalBox* VB_Image; // 0x2a8(0x08)
	struct UCanvasPanel* CP_ToolTip; // 0x2b0(0x08)
	struct UCanvasPanel* CP_Overlap; // 0x2b8(0x08)
	struct UPDTextBlock* TB_OverlapToolTip; // 0x2c0(0x08)
	struct UPDImage* IMG_OverlapEnable; // 0x2c8(0x08)
	struct UPDImage* IMG_OverlapWarning; // 0x2d0(0x08)
	struct UPDImage* IMG_OverlapWarningToggle; // 0x2d8(0x08)
	struct UWidgetSwitcher* WS_Contents; // 0x2e0(0x08)
	struct UPDComboBox* ComboBoxCtrl; // 0x2e8(0x08)
	struct UPDSlider* SliderCtrl; // 0x2f0(0x08)
	struct UPDInputKeySelector* NewInputKeySelectorCtrl; // 0x2f8(0x08)
	struct UHorizontalBox* HB_ToggleTabs; // 0x300(0x08)
	struct UPDInputKeySelector* NewToggleInputKeySelectorCtrl; // 0x308(0x08)
	struct UPDCheckBox* CheckBoxCtrl; // 0x310(0x08)
	struct UPDTabButton* BaseTabBtn; // 0x318(0x08)
	struct UPDTextBlock* TB_ContentName; // 0x320(0x08)
	struct UHorizontalBox* HB_Tabs; // 0x328(0x08)
	struct UPDButton* OneBtn; // 0x330(0x08)
	struct UBorder* BD_MainImage; // 0x338(0x08)
	struct UImage* Img_Underline; // 0x340(0x08)
	char pad_348[0x10]; // 0x348(0x10)
	struct UPDTabButtonGroup* TabBtnGroup; // 0x358(0x08)
	char pad_360[0x40]; // 0x360(0x40)

	void OnInputKeySelected(struct FInputChord InInputChord); // Function ProjectD.PDOptionContent.OnInputKeySelected // (Final|Native|Protected) // @ game+0x1823d60
};

// Class ProjectD.PDOptionPopupUI
// Size: 0x398 (Inherited: 0x2b8)
struct UPDOptionPopupUI : UPDPopupBaseUI {
	struct UPDButton* DefaultBtn; // 0x2b8(0x08)
	struct UPDButton* TabDefaultBtn; // 0x2c0(0x08)
	struct UPDButton* ConfirmBtn; // 0x2c8(0x08)
	struct UPDButton* CancelBtn; // 0x2d0(0x08)
	struct UPDTabButton* DisplaySettingBtn; // 0x2d8(0x08)
	struct UPDTabButton* SoundSettingBtn; // 0x2e0(0x08)
	struct UPDTabButton* ControlSettingBtn; // 0x2e8(0x08)
	struct UPDTabButton* GameplaySettingBtn; // 0x2f0(0x08)
	struct UPDTabButtonGroup* OptionTabBtnGroup; // 0x2f8(0x08)
	struct UWidgetSwitcher* OptionPageSwitcher; // 0x300(0x08)
	struct UPDDisplayOptionUI* DisplayOption; // 0x308(0x08)
	struct UPDSoundOptionUI* SoundOption; // 0x310(0x08)
	struct UPDControlOptionUI* ControlOption; // 0x318(0x08)
	struct UPDGameplayOptionUI* GamePlayOption; // 0x320(0x08)
	struct UPDTextBlock* TB_DisableTooltip; // 0x328(0x08)
	struct UPDImage* IMG_DisableConfirm; // 0x330(0x08)
	struct UHorizontalBox* HB_Ratings; // 0x338(0x08)
	struct TMap<enum class EOptionType, struct UPDOptionUIBase*> OptionPages; // 0x340(0x50)
	char pad_390[0x8]; // 0x390(0x08)

	void OnClickTabDefaultButton(); // Function ProjectD.PDOptionPopupUI.OnClickTabDefaultButton // (Final|Native|Protected) // @ game+0x1823d40
	void OnClickSoundButton(); // Function ProjectD.PDOptionPopupUI.OnClickSoundButton // (Final|Native|Protected) // @ game+0x1823d20
	void OnClickGameplayButton(); // Function ProjectD.PDOptionPopupUI.OnClickGameplayButton // (Final|Native|Protected) // @ game+0x1823ce0
	void OnClickDisplayButton(); // Function ProjectD.PDOptionPopupUI.OnClickDisplayButton // (Final|Native|Protected) // @ game+0x1823cc0
	void OnClickDefaultButton(); // Function ProjectD.PDOptionPopupUI.OnClickDefaultButton // (Final|Native|Protected) // @ game+0x1823ca0
	void OnClickControlsButton(); // Function ProjectD.PDOptionPopupUI.OnClickControlsButton // (Final|Native|Protected) // @ game+0x1823c80
	void OnClickConfirmButton(); // Function ProjectD.PDOptionPopupUI.OnClickConfirmButton // (Final|Native|Protected) // @ game+0x1823c60
	void OnClickCancelButton(); // Function ProjectD.PDOptionPopupUI.OnClickCancelButton // (Final|Native|Protected) // @ game+0x1823c40
};

// Class ProjectD.PDOutCheatManager
// Size: 0x78 (Inherited: 0x78)
struct UPDOutCheatManager : UCheatManager {

	void UnlockPerk(int32_t ItemIndex); // Function ProjectD.PDOutCheatManager.UnlockPerk // (Final|Exec|Native|Public) // @ game+0x18275f0
	void MakePenalty(); // Function ProjectD.PDOutCheatManager.MakePenalty // (Final|Exec|Native|Public) // @ game+0x1827040
	void EquipPerk(int32_t ItemIndex); // Function ProjectD.PDOutCheatManager.EquipPerk // (Final|Exec|Native|Public) // @ game+0x1826f20
	void BuyItem(int32_t ProdIndex); // Function ProjectD.PDOutCheatManager.BuyItem // (Final|Exec|Native|Public) // @ game+0x1826ea0
};

// Class ProjectD.PDOutGameCameraActor
// Size: 0x7c0 (Inherited: 0x7b0)
struct APDOutGameCameraActor : ACameraActor {
	enum class EOutGameCameraType ECameraType; // 0x7b0(0x01)
	char pad_7B1[0xf]; // 0x7b1(0x0f)
};

// Class ProjectD.PDOutgameCharacterSpawn
// Size: 0x230 (Inherited: 0x220)
struct APDOutgameCharacterSpawn : AActor {
	struct UStaticMeshComponent* StaticMeshComp; // 0x220(0x08)
	enum class EOutgameCharacterSpawnGroup Grouptype; // 0x228(0x01)
	char pad_229[0x3]; // 0x229(0x03)
	int32_t Index; // 0x22c(0x04)
};

// Class ProjectD.PDOutGameMode
// Size: 0x2c0 (Inherited: 0x2c0)
struct APDOutGameMode : AGameModeBase {
};

// Class ProjectD.PDOutgamePlayerController
// Size: 0x570 (Inherited: 0x570)
struct APDOutgamePlayerController : APDPlayerController {
};

// Class ProjectD.PDOutGameTopMenu
// Size: 0x440 (Inherited: 0x288)
struct UPDOutGameTopMenu : UPDUserWidget {
	struct UPDButton* BTN_GoToFindPartyPage; // 0x288(0x08)
	struct UWidgetSwitcher* WS_RegisterMercenary; // 0x290(0x08)
	struct UImage* IMG_NewInvite; // 0x298(0x08)
	struct UCanvasPanel* CP_TopMenu; // 0x2a0(0x08)
	struct UCanvasPanel* CP_InfoMenu; // 0x2a8(0x08)
	struct UCanvasPanel* CP_ContextMenu; // 0x2b0(0x08)
	struct UImage* IMG_New; // 0x2b8(0x08)
	struct UPDButton* Btn_Customize; // 0x2c0(0x08)
	struct UPDButton* Btn_AgentReport; // 0x2c8(0x08)
	struct UPDButton* Btn_Record; // 0x2d0(0x08)
	struct UPDButton* Btn_Clan; // 0x2d8(0x08)
	struct UImage* IMG_BtnActiveBar_Customizing; // 0x2e0(0x08)
	struct UImage* IMG_BtnActiveBar_Training; // 0x2e8(0x08)
	struct UImage* IMG_BtnActiveBar_GameGuide; // 0x2f0(0x08)
	struct UImage* IMG_BtnActiveBar_Clan; // 0x2f8(0x08)
	struct UPDButton* Btn_Community; // 0x300(0x08)
	struct UPDButton* Btn_Option; // 0x308(0x08)
	struct UPDButton* Btn_BattlePass; // 0x310(0x08)
	struct UPDButton* Btn_Tutorial; // 0x318(0x08)
	struct UPDButton* Btn_Setting; // 0x320(0x08)
	struct UPDButton* Btn_Exit; // 0x328(0x08)
	struct USizeBox* SB_BattlePass; // 0x330(0x08)
	struct UImage* IMG_SlotDivider_1; // 0x338(0x08)
	struct UPDTextBlock* TB_Money; // 0x340(0x08)
	struct UPDPartySlotListItemUI* PartySlot_2; // 0x348(0x08)
	struct UPDPartySlotListItemUI* PartySlot_3; // 0x350(0x08)
	struct UPDPartySlotListItemUI* PartySlot_4; // 0x358(0x08)
	struct UPDPartySlotListItemUI* PartySlot_5; // 0x360(0x08)
	struct UPDPartySlotListItemUI* PartySlot_6; // 0x368(0x08)
	struct UCanvasPanel* CP_MainMenu; // 0x370(0x08)
	struct UImage* IMG_ClanMarkBG; // 0x378(0x08)
	struct UImage* IMG_ClanMarkFG; // 0x380(0x08)
	struct UPDTextBlock* TB_Name; // 0x388(0x08)
	struct UPDTextBlock* TB_ClanName; // 0x390(0x08)
	struct UHorizontalBox* HB_ClanInfo; // 0x398(0x08)
	struct UCanvasPanel* CP_ClanImg; // 0x3a0(0x08)
	char pad_3A8[0x8]; // 0x3a8(0x08)
	struct UHorizontalBox* HB_UserData; // 0x3b0(0x08)
	struct UImage* IMG_Manner; // 0x3b8(0x08)
	struct UImage* IMG_Medal1; // 0x3c0(0x08)
	struct UImage* IMG_Medal2; // 0x3c8(0x08)
	struct UImage* IMG_Medal3; // 0x3d0(0x08)
	struct UCanvasPanel* CP_ToolTip; // 0x3d8(0x08)
	struct UPDTextBlock* TB_DataName; // 0x3e0(0x08)
	struct UPDTextBlock* TB_DataValue; // 0x3e8(0x08)
	struct UPDButton* Btn_MailBox; // 0x3f0(0x08)
	struct UImage* IMG_NewMail; // 0x3f8(0x08)
	struct UPDMailNotificationUI* MailNotificationUI; // 0x400(0x08)
	struct UPDButton* Btn_LeaveParty; // 0x408(0x08)
	struct TArray<struct UPDPartySlotListItemUI*> PartySlotArray; // 0x410(0x10)
	char pad_420[0x20]; // 0x420(0x20)

	void SetNewMailLabelVisible(bool bShow); // Function ProjectD.PDOutGameTopMenu.SetNewMailLabelVisible // (Final|Native|Private) // @ game+0x1827560
	void SendPartyInviteInfo(bool bAccept, struct FString PartyID, int64_t USN, struct FString Nickname); // Function ProjectD.PDOutGameTopMenu.SendPartyInviteInfo // (Final|Native|Private) // @ game+0x1827350
	void SendCustomRoomInviteInfo(bool bAccept); // Function ProjectD.PDOutGameTopMenu.SendCustomRoomInviteInfo // (Final|Native|Private) // @ game+0x18272c0
	void QuitGame(); // Function ProjectD.PDOutGameTopMenu.QuitGame // (Final|Native|Private) // @ game+0x18272a0
	void OnUnhoverRecordBtn(); // Function ProjectD.PDOutGameTopMenu.OnUnhoverRecordBtn // (Final|Native|Private) // @ game+0x1827280
	void OnUnhoverClanBtn(); // Function ProjectD.PDOutGameTopMenu.OnUnhoverClanBtn // (Final|Native|Private) // @ game+0x1827260
	void OnUnhoverAgentReportBtn(); // Function ProjectD.PDOutGameTopMenu.OnUnhoverAgentReportBtn // (Final|Native|Private) // @ game+0x1827240
	void OnUnhoverAgentBtn(); // Function ProjectD.PDOutGameTopMenu.OnUnhoverAgentBtn // (Final|Native|Private) // @ game+0x1827220
	void OnHoverRecordBtn(); // Function ProjectD.PDOutGameTopMenu.OnHoverRecordBtn // (Final|Native|Private) // @ game+0x1827200
	void OnHoverClanBtn(); // Function ProjectD.PDOutGameTopMenu.OnHoverClanBtn // (Final|Native|Private) // @ game+0x18271e0
	void OnHoverAgentReportBtn(); // Function ProjectD.PDOutGameTopMenu.OnHoverAgentReportBtn // (Final|Native|Private) // @ game+0x18271c0
	void OnHoverAgentBtn(); // Function ProjectD.PDOutGameTopMenu.OnHoverAgentBtn // (Final|Native|Private) // @ game+0x18271a0
	void OnGuidePageClosed(); // Function ProjectD.PDOutGameTopMenu.OnGuidePageClosed // (Final|Native|Private) // @ game+0x1827180
	void OnClickSettingBtn(); // Function ProjectD.PDOutGameTopMenu.OnClickSettingBtn // (Final|Native|Private) // @ game+0x1827160
	void OnClickRecordBtn(); // Function ProjectD.PDOutGameTopMenu.OnClickRecordBtn // (Final|Native|Private) // @ game+0x1827140
	void OnClickOptionBtn(); // Function ProjectD.PDOutGameTopMenu.OnClickOptionBtn // (Final|Native|Private) // @ game+0x1827120
	void OnClickMailBoxBtn(); // Function ProjectD.PDOutGameTopMenu.OnClickMailBoxBtn // (Final|Native|Private) // @ game+0x1827100
	void OnClickLeavePartyBtn(); // Function ProjectD.PDOutGameTopMenu.OnClickLeavePartyBtn // (Final|Native|Private) // @ game+0x18270e0
	void OnClickGoToFindPartyPageButton(); // Function ProjectD.PDOutGameTopMenu.OnClickGoToFindPartyPageButton // (Final|Native|Private) // @ game+0x18270c0
	void OnClickExitBtn(); // Function ProjectD.PDOutGameTopMenu.OnClickExitBtn // (Final|Native|Private) // @ game+0x18270a0
	void OnClickCommunityBtn(); // Function ProjectD.PDOutGameTopMenu.OnClickCommunityBtn // (Final|Native|Public) // @ game+0x18089b0
	void OnClickClanBtn(); // Function ProjectD.PDOutGameTopMenu.OnClickClanBtn // (Final|Native|Private) // @ game+0x1827080
	void OnClickBattlePassBtn(); // Function ProjectD.PDOutGameTopMenu.OnClickBattlePassBtn // (Final|Native|Private) // @ game+0x1827060
	void OnClickAgentReportBtn(); // Function ProjectD.PDOutGameTopMenu.OnClickAgentReportBtn // (Final|Native|Private) // @ game+0xfb2530
	void OnClickAgentBtn(); // Function ProjectD.PDOutGameTopMenu.OnClickAgentBtn // (Final|Native|Private) // @ game+0x1808540
	void ExitParty(); // Function ProjectD.PDOutGameTopMenu.ExitParty // (Final|Native|Private) // @ game+0x1826fa0
};

// Class ProjectD.PDOwnLeptonListItemData
// Size: 0x80 (Inherited: 0x28)
struct UPDOwnLeptonListItemData : UObject {
	char pad_28[0x58]; // 0x28(0x58)
};

// Class ProjectD.PDOwnLeptonListItem
// Size: 0x328 (Inherited: 0x288)
struct UPDOwnLeptonListItem : UPDUserWidget {
	char pad_288[0x8]; // 0x288(0x08)
	struct UImage* IMG_Item; // 0x290(0x08)
	struct UImage* IMG_Lock; // 0x298(0x08)
	struct UImage* IMG_New; // 0x2a0(0x08)
	struct UImage* IMG_PermanentIcon; // 0x2a8(0x08)
	struct UCanvasPanel* CP_Unlock; // 0x2b0(0x08)
	struct UPDTextBlock* TB_Name; // 0x2b8(0x08)
	struct UPDTextBlock* TB_Cost; // 0x2c0(0x08)
	struct UBorder* BD_Outline; // 0x2c8(0x08)
	struct UBorder* BD_EquipOutline; // 0x2d0(0x08)
	struct UDragDropOperation* DragDropOperation; // 0x2d8(0x08)
	char pad_2E0[0x48]; // 0x2e0(0x48)
};

// Class ProjectD.PDParticleModule_Collision
// Size: 0x198 (Inherited: 0x190)
struct UPDParticleModule_Collision : UParticleModuleCollision {
	float BounceOffsetWhenStuck; // 0x190(0x04)
	char pad_194[0x4]; // 0x194(0x04)
};

// Class ProjectD.PDPartySlotListItemUI
// Size: 0x328 (Inherited: 0x288)
struct UPDPartySlotListItemUI : UPDUserWidget {
	char pad_288[0x38]; // 0x288(0x38)
	struct UWidgetSwitcher* WS_Leader; // 0x2c0(0x08)
	struct UWidgetSwitcher* WS_SlotState; // 0x2c8(0x08)
	struct UWidgetSwitcher* WS_Voice; // 0x2d0(0x08)
	struct UImage* IMG_Face; // 0x2d8(0x08)
	struct UPDTextBlock* T_Name; // 0x2e0(0x08)
	struct UPDButton* SlotButton; // 0x2e8(0x08)
	struct UImage* IMG_Hover; // 0x2f0(0x08)
	struct UPDTextBlock* T_InviteName; // 0x2f8(0x08)
	char pad_300[0x28]; // 0x300(0x28)

	void OnClickSlot(); // Function ProjectD.PDPartySlotListItemUI.OnClickSlot // (Final|Native|Private) // @ game+0x17fc110
	void KickPartyMember(int64_t InPartyUSN); // Function ProjectD.PDPartySlotListItemUI.KickPartyMember // (Final|Native|Private) // @ game+0x1826fc0
};

// Class ProjectD.PDPathMeshActor
// Size: 0x288 (Inherited: 0x220)
struct APDPathMeshActor : AActor {
	char pad_220[0x68]; // 0x220(0x68)
};

// Class ProjectD.PDPerkEntryItem
// Size: 0x2f8 (Inherited: 0x288)
struct UPDPerkEntryItem : UPDUserWidget {
	struct UImage* IMG_Icon; // 0x288(0x08)
	struct UPDTextBlock* TB_Name; // 0x290(0x08)
	struct UPDCircleProgress* PDCP_ActiveTime; // 0x298(0x08)
	struct UPDCircleProgress* PDCP_Cooltime; // 0x2a0(0x08)
	struct UBorder* BD_Ready; // 0x2a8(0x08)
	struct UBorder* BD_Stack; // 0x2b0(0x08)
	struct UPDTextBlock* TB_Num; // 0x2b8(0x08)
	struct UBorder* BD_PerkKey; // 0x2c0(0x08)
	struct UPDTextBlock* TB_Key; // 0x2c8(0x08)
	struct UPDTextBlock* TB_CoolTime; // 0x2d0(0x08)
	char pad_2D8[0x20]; // 0x2d8(0x20)
};

// Class ProjectD.PDPerkNotifySlot
// Size: 0x2a8 (Inherited: 0x288)
struct UPDPerkNotifySlot : UPDUserWidget {
	struct UPDTextBlock* TB_Message; // 0x288(0x08)
	char pad_290[0x18]; // 0x290(0x18)
};

// Class ProjectD.PDPerkNotifyUI
// Size: 0x2c8 (Inherited: 0x290)
struct UPDPerkNotifyUI : UPDIngameModeWidget {
	struct UVerticalBox* HB_PerkNotifyContainer; // 0x290(0x08)
	struct UImage* IMG_Icon; // 0x298(0x08)
	struct FMargin SlotPadding; // 0x2a0(0x10)
	int32_t MaxSlotCount; // 0x2b0(0x04)
	float DefaultDuration; // 0x2b4(0x04)
	char pad_2B8[0x10]; // 0x2b8(0x10)
};

// Class ProjectD.PDPerkTooltipItemData
// Size: 0x30 (Inherited: 0x28)
struct UPDPerkTooltipItemData : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class ProjectD.PDPerkTooltipItem
// Size: 0x2b8 (Inherited: 0x288)
struct UPDPerkTooltipItem : UPDUserWidget {
	char pad_288[0x8]; // 0x288(0x08)
	struct UImage* IMG_DescIcon; // 0x290(0x08)
	struct UPDTextBlock* T_PerkName; // 0x298(0x08)
	struct UPDTextBlock* T_PerkDesc; // 0x2a0(0x08)
	struct UCanvasPanel* CP_Empty; // 0x2a8(0x08)
	struct UCanvasPanel* CP_Normal; // 0x2b0(0x08)
};

// Class ProjectD.PDPerkUI
// Size: 0x3c8 (Inherited: 0x290)
struct UPDPerkUI : UPDIngameModeWidget {
	struct UImage* IMG_Icon; // 0x290(0x08)
	struct UPDTextBlock* TB_PerkAlert; // 0x298(0x08)
	struct UPDTextBlock* TB_PerkDesc; // 0x2a0(0x08)
	struct UHorizontalBox* HB_PerkAlert; // 0x2a8(0x08)
	struct UHorizontalBox* HB_PerkContainer; // 0x2b0(0x08)
	float PerkDetailPadding; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct UHorizontalBox* HB_Signature; // 0x2c0(0x08)
	struct UPDTextBlock* TB_SignatureDesc; // 0x2c8(0x08)
	struct UCanvasPanel* CP_Buff01; // 0x2d0(0x08)
	struct UCanvasPanel* CP_Buff02; // 0x2d8(0x08)
	struct UCanvasPanel* CP_Buff03; // 0x2e0(0x08)
	struct UCanvasPanel* CP_Buff04; // 0x2e8(0x08)
	struct UCanvasPanel* CP_Buff05; // 0x2f0(0x08)
	struct UCanvasPanel* CP_Buff06; // 0x2f8(0x08)
	char pad_300[0x10]; // 0x300(0x10)
	struct UImage* IMG_BIcon01; // 0x310(0x08)
	struct UImage* IMG_BIcon02; // 0x318(0x08)
	struct UImage* IMG_BIcon03; // 0x320(0x08)
	struct UImage* IMG_BIcon04; // 0x328(0x08)
	struct UImage* IMG_BIcon05; // 0x330(0x08)
	struct UImage* IMG_BIcon06; // 0x338(0x08)
	struct TArray<struct UImage*> CP_BuffIMGList; // 0x340(0x10)
	char pad_350[0x50]; // 0x350(0x50)
	struct TArray<struct UPDPerkEntryItem*> PerkEntryItems; // 0x3a0(0x10)
	char pad_3B0[0x18]; // 0x3b0(0x18)
};

// Class ProjectD.PDPersonalMissionModule
// Size: 0x388 (Inherited: 0x288)
struct UPDPersonalMissionModule : UPDUserWidget {
	char pad_288[0x8]; // 0x288(0x08)
	struct FSlateColor MissionClearColor; // 0x290(0x28)
	struct FSlateColor MissionFailColor; // 0x2b8(0x28)
	struct FSlateColor MissionErrorColor; // 0x2e0(0x28)
	struct UProgressBar* PB_MissionTimer; // 0x308(0x08)
	struct UCanvasPanel* CP_MissionInfo; // 0x310(0x08)
	struct UPDTextBlock* TB_StateTitle; // 0x318(0x08)
	struct UPDTextBlock* TB_StateDesc; // 0x320(0x08)
	struct UCanvasPanel* CP_StateInfo; // 0x328(0x08)
	struct UPDTextBlock* TB_MissionCount; // 0x330(0x08)
	struct UPDTextBlock* TB_MissionDesc; // 0x338(0x08)
	struct UPDTextBlock* TB_MissionTime; // 0x340(0x08)
	struct UHorizontalBox* HB_RewardItem; // 0x348(0x08)
	char pad_350[0x38]; // 0x350(0x38)
};

// Class ProjectD.PDPersonalMissionRewardModule
// Size: 0x2a8 (Inherited: 0x288)
struct UPDPersonalMissionRewardModule : UPDUserWidget {
	struct UCanvasPanel* CP_RewardCoin; // 0x288(0x08)
	struct UCanvasPanel* CP_RewardScore; // 0x290(0x08)
	struct UImage* IMG_RewardItem; // 0x298(0x08)
	struct UPDTextBlock* TB_RewardText; // 0x2a0(0x08)
};

// Class ProjectD.PDPersonalMissionUI
// Size: 0x2b0 (Inherited: 0x290)
struct UPDPersonalMissionUI : UPDIngameModeWidget {
	struct UVerticalBox* VB_MissionList; // 0x290(0x08)
	enum class EHorizontalAlignment MissionHAlign; // 0x298(0x01)
	char pad_299[0x3]; // 0x299(0x03)
	struct FMargin MissionPadding; // 0x29c(0x10)
	char pad_2AC[0x4]; // 0x2ac(0x04)
};

// Class ProjectD.PDPhysicalAnimationNotifyState
// Size: 0x30 (Inherited: 0x30)
struct UPDPhysicalAnimationNotifyState : UAnimNotifyState {
};

// Class ProjectD.PDPingIndicatorUI
// Size: 0x350 (Inherited: 0x2a8)
struct UPDPingIndicatorUI : UPDScreenMarkerInteractive {
	struct UCanvasPanel* CP_Normal; // 0x2a8(0x08)
	struct UImage* IMG_Icon; // 0x2b0(0x08)
	struct UImage* IMG_IconFx; // 0x2b8(0x08)
	struct UImage* IMG_Pole; // 0x2c0(0x08)
	struct UImage* IMG_Point; // 0x2c8(0x08)
	struct UCanvasPanel* CP_Info; // 0x2d0(0x08)
	struct UCanvasPanel* CP_Item; // 0x2d8(0x08)
	struct UImage* IMG_Item; // 0x2e0(0x08)
	struct UScaleBox* SB_Weapon; // 0x2e8(0x08)
	struct UImage* IMG_Weapon; // 0x2f0(0x08)
	struct USizeBox* SB_ItemFx; // 0x2f8(0x08)
	struct UScaleBox* SB_WeaponFx; // 0x300(0x08)
	struct UImage* IMG_ItemFx; // 0x308(0x08)
	struct UCanvasPanel* CP_OutArrow; // 0x310(0x08)
	struct UBorder* BD_Distance; // 0x318(0x08)
	struct UPDTextBlock* TB_Distance; // 0x320(0x08)
	struct UBorder* BD_UserColor; // 0x328(0x08)
	struct UPDTextBlock* TB_UserNum; // 0x330(0x08)
	char pad_338[0x18]; // 0x338(0x18)
};

// Class ProjectD.PDPingLog
// Size: 0x2c8 (Inherited: 0x290)
struct UPDPingLog : UPDIngameModeWidget {
	char pad_290[0x8]; // 0x290(0x08)
	struct UVerticalBox* VB_LogList; // 0x298(0x08)
	enum class EHorizontalAlignment LogHAlign; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	struct FMargin LogPadding; // 0x2a4(0x10)
	bool InvertToAdd; // 0x2b4(0x01)
	char pad_2B5[0x3]; // 0x2b5(0x03)
	int32_t MaxLogCount; // 0x2b8(0x04)
	float DefaultDuration; // 0x2bc(0x04)
	bool AutoRemove; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
};

// Class ProjectD.PDPingLogItem
// Size: 0x2a0 (Inherited: 0x288)
struct UPDPingLogItem : UPDUserWidget {
	struct URichTextBlock* RTB_Content; // 0x288(0x08)
	struct UBorder* BD_Background; // 0x290(0x08)
	char pad_298[0x8]; // 0x298(0x08)
};

// Class ProjectD.PDPingReplyUI
// Size: 0x2a0 (Inherited: 0x288)
struct UPDPingReplyUI : UPDUserWidget {
	struct UImage* IMG_Mark; // 0x288(0x08)
	struct UImage* IMG_Mark_FX; // 0x290(0x08)
	struct UCanvasPanel* CP_Fx; // 0x298(0x08)
};

// Class ProjectD.PDPlayerAnimInstanceFPDummy
// Size: 0x580 (Inherited: 0x270)
struct UPDPlayerAnimInstanceFPDummy : UAnimInstance {
	struct FPDPWUsingInABPAnimDatas PWAnimDatas; // 0x268(0x128)
	struct FPDPCUsingInABPAnimDatas PCAnimDatas; // 0x390(0x60)
	enum class EPDAnimset AnimSet; // 0x3f0(0x01)
	enum class EPDLocoState LocoState; // 0x3f1(0x01)
	enum class EPDMovementState MovementState; // 0x3f2(0x01)
	enum class EPDStanceState StanceState; // 0x3f3(0x01)
	float GaitValue; // 0x3f4(0x04)
	float Direction; // 0x3f8(0x04)
	struct FRotator ControllRotation; // 0x3fc(0x0c)
	struct FVector ControllLocation; // 0x408(0x0c)
	struct FRotator WeaponRotation; // 0x414(0x0c)
	struct FVector WeaponAddOffset; // 0x420(0x0c)
	struct FRotator LeanRotationOffset; // 0x42c(0x0c)
	struct FRotator CameraLeanRotationOffset; // 0x438(0x0c)
	struct FVector R_Translate; // 0x444(0x0c)
	float DefaultRBoneYOffset; // 0x450(0x04)
	bool bAimingIdleHolding; // 0x454(0x01)
	struct APDPlayerCharacter* OwnerPlayerCharacter; // 0x458(0x08)
	struct UPDStateComponent* OwnerStateComponent; // 0x460(0x08)
	bool bDrawWeaponMontagePlayed; // 0x468(0x01)
	char pad_46E[0x2]; // 0x46e(0x02)
	struct UBlendSpace* FireAnim; // 0x470(0x08)
	struct UPDFireRecoilLevel* FireRecoilLevel; // 0x478(0x08)
	struct UPDFireRecoilLevelData* RecoilData; // 0x480(0x08)
	char pad_488[0x8]; // 0x488(0x08)
	float LeanBlendMaxTime; // 0x490(0x04)
	struct FVector LeanOffset; // 0x494(0x0c)
	float LeanWeaponAngle; // 0x4a0(0x04)
	float LeanCameraAngle; // 0x4a4(0x04)
	struct UCurveBase* LeanOffsetCurve; // 0x4a8(0x08)
	struct UCurveFloat* LeanWeaponCurve; // 0x4b0(0x08)
	struct UCurveFloat* LeanCameraCurve; // 0x4b8(0x08)
	char pad_4C0[0x48]; // 0x4c0(0x48)
	float WeaponRollAtMove_Angle; // 0x508(0x04)
	char pad_50C[0x4]; // 0x50c(0x04)
	struct UCurveFloat* WeaponRollAtMove_InCurve; // 0x510(0x08)
	struct UCurveFloat* WeaponRollAtMove_OutCurve; // 0x518(0x08)
	float WeaponRollAtMove_InTime; // 0x520(0x04)
	float WeaponRollAtMove_OutTime; // 0x524(0x04)
	struct UCurveFloat* WeaponRollAtMove_CurrCurve; // 0x528(0x08)
	char pad_530[0x18]; // 0x530(0x18)
	struct FVector StoppingPowerLocation; // 0x548(0x0c)
	struct FRotator StoppingPowerRotation; // 0x554(0x0c)
	struct FRotator StoppingPowerRotationWeapon; // 0x560(0x0c)
	char pad_56C[0x14]; // 0x56c(0x14)
};

// Class ProjectD.PDPlayerCheer
// Size: 0x320 (Inherited: 0x288)
struct UPDPlayerCheer : UPDUserWidget {
	struct UCanvasPanel* CP_Cheer1; // 0x288(0x08)
	struct UCanvasPanel* CP_Cheer2; // 0x290(0x08)
	struct UCanvasPanel* CP_Cheer3; // 0x298(0x08)
	struct UPDTextBlock* TB_CheerCount1; // 0x2a0(0x08)
	struct UPDTextBlock* TB_CheerCount2; // 0x2a8(0x08)
	struct UPDTextBlock* TB_CheerCount3; // 0x2b0(0x08)
	struct UPDTextBlock* TB_CheerCount1_2; // 0x2b8(0x08)
	struct UPDTextBlock* TB_CheerCount2_2; // 0x2c0(0x08)
	struct UPDTextBlock* TB_CheerCount3_2; // 0x2c8(0x08)
	char pad_2D0[0x50]; // 0x2d0(0x50)
};

// Class ProjectD.PDPlayerEntryItemBaseUI
// Size: 0x2c8 (Inherited: 0x288)
struct UPDPlayerEntryItemBaseUI : UPDUserWidget {
	struct UPDTextBlock* TB_PlayerName; // 0x288(0x08)
	struct UImage* IMG_AgentIcon; // 0x290(0x08)
	struct UImage* IMG_PlayerBack; // 0x298(0x08)
	struct UProgressBar* PB_Groggy; // 0x2a0(0x08)
	struct UWidgetSwitcher* WS_State; // 0x2a8(0x08)
	char pad_2B0[0x18]; // 0x2b0(0x18)
};

// Class ProjectD.PDPlayerEntryItemAllyUI
// Size: 0x300 (Inherited: 0x2c8)
struct UPDPlayerEntryItemAllyUI : UPDPlayerEntryItemBaseUI {
	struct UPDTextBlock* TB_UserNum; // 0x2c8(0x08)
	struct UProgressBar* PB_Health; // 0x2d0(0x08)
	struct UImage* IMG_State; // 0x2d8(0x08)
	struct UWidgetSwitcher* WS_Voice; // 0x2e0(0x08)
	struct UPDPingIndicatorUI* PingState; // 0x2e8(0x08)
	char pad_2F0[0x10]; // 0x2f0(0x10)
};

// Class ProjectD.PDPlayerEntryItemEnemyUI
// Size: 0x2c8 (Inherited: 0x2c8)
struct UPDPlayerEntryItemEnemyUI : UPDPlayerEntryItemBaseUI {
};

// Class ProjectD.PDPlayerEquipmentDetail
// Size: 0x328 (Inherited: 0x288)
struct UPDPlayerEquipmentDetail : UPDUserWidget {
	struct UPDTextBlock* TB_Num_Active; // 0x288(0x08)
	struct UPDTextBlock* TB_ItemName; // 0x290(0x08)
	struct UImage* IMG_Logo; // 0x298(0x08)
	struct UImage* IMG_Icon_ActiveWp; // 0x2a0(0x08)
	struct UImage* IMG_Icon_ActiveMelee; // 0x2a8(0x08)
	struct UImage* IMG_Icon_ActiveSub; // 0x2b0(0x08)
	struct USizeBox* SB_ActiveMain; // 0x2b8(0x08)
	struct USizeBox* SB_ActiveSub; // 0x2c0(0x08)
	struct UPDTextBlock* TB_CurrentCount; // 0x2c8(0x08)
	struct UPDTextBlock* TB_TotalCount; // 0x2d0(0x08)
	struct UPDTextBlock* TB_FireMode; // 0x2d8(0x08)
	struct UHorizontalBox* HB_Count; // 0x2e0(0x08)
	struct UHorizontalBox* HB_FireMode; // 0x2e8(0x08)
	struct UHorizontalBox* HB_Juggernaut; // 0x2f0(0x08)
	struct UPDTextBlock* TB_Num_Active_2; // 0x2f8(0x08)
	struct URetainerBox* RB_Progress; // 0x300(0x08)
	struct UImage* IMG_Progress; // 0x308(0x08)
	char pad_310[0x18]; // 0x310(0x18)
};

// Class ProjectD.PDPlayerEquipmentSlotBase
// Size: 0x2f0 (Inherited: 0x288)
struct UPDPlayerEquipmentSlotBase : UPDUserWidget {
	struct UWidgetSwitcher* WS_State; // 0x288(0x08)
	struct UBorder* BD_Interaction; // 0x290(0x08)
	struct UImage* IMG_BasicBack; // 0x298(0x08)
	struct UPDTextBlock* TB_Num_Empty; // 0x2a0(0x08)
	struct UPDTextBlock* TB_Num; // 0x2a8(0x08)
	struct UImage* IMG_Icon_Wp; // 0x2b0(0x08)
	struct UImage* IMG_Icon_Sub; // 0x2b8(0x08)
	struct UHorizontalBox* HB_Count; // 0x2c0(0x08)
	struct UPDTextBlock* TB_Current; // 0x2c8(0x08)
	struct UPDTextBlock* TB_Total; // 0x2d0(0x08)
	struct UPDTextBlock* TB_ItemName; // 0x2d8(0x08)
	char pad_2E0[0x10]; // 0x2e0(0x10)
};

// Class ProjectD.PDPlayerEquipmentSlot
// Size: 0x378 (Inherited: 0x2f0)
struct UPDPlayerEquipmentSlot : UPDPlayerEquipmentSlotBase {
	struct UPDTextBlock* TB_Num_Active; // 0x2f0(0x08)
	struct UImage* IMG_Logo; // 0x2f8(0x08)
	struct UImage* IMG_Icon_ActiveWp; // 0x300(0x08)
	struct UImage* IMG_Icon_ActiveMelee; // 0x308(0x08)
	struct UImage* IMG_Icon_ActiveSub; // 0x310(0x08)
	struct USizeBox* SB_ActiveMain; // 0x318(0x08)
	struct USizeBox* SB_ActiveSub; // 0x320(0x08)
	struct UPDTextBlock* TB_CurrentRounds; // 0x328(0x08)
	struct UPDTextBlock* TB_TotalRounds; // 0x330(0x08)
	struct UPDTextBlock* TB_FireMode; // 0x338(0x08)
	struct UPDTextBlock* TB_StackCount; // 0x340(0x08)
	struct UHorizontalBox* HB_FireMode; // 0x348(0x08)
	struct UHorizontalBox* HB_AimMode; // 0x350(0x08)
	struct UProgressBar* PB_Progress_Wp; // 0x358(0x08)
	struct UProgressBar* PB_Progress_Sub; // 0x360(0x08)
	char pad_368[0x10]; // 0x368(0x10)
};

// Class ProjectD.PDPlayerEquipmentSlotMulti
// Size: 0x380 (Inherited: 0x2f0)
struct UPDPlayerEquipmentSlotMulti : UPDPlayerEquipmentSlotBase {
	struct UImage* IMG_Icon_Sub2; // 0x2f0(0x08)
	struct UHorizontalBox* HB_Count2; // 0x2f8(0x08)
	struct UPDTextBlock* TB_Current2; // 0x300(0x08)
	struct UPDTextBlock* TB_Total2; // 0x308(0x08)
	struct UCanvasPanel* CP_Equip1; // 0x310(0x08)
	struct UCanvasPanel* CP_Equip2; // 0x318(0x08)
	struct UUniformGridPanel* UGP_Selected1; // 0x320(0x08)
	struct UUniformGridPanel* UGP_Selected2; // 0x328(0x08)
	char pad_330[0x50]; // 0x330(0x50)
};

// Class ProjectD.PDPlayerInfoUI
// Size: 0x470 (Inherited: 0x290)
struct UPDPlayerInfoUI : UPDIngameModeWidget {
	struct UCanvasPanel* HPBox; // 0x290(0x08)
	struct UProgressBar* PB_Health; // 0x298(0x08)
	struct UProgressBar* PB_Health_Expect; // 0x2a0(0x08)
	struct UProgressBar* PB_Health_Inc; // 0x2a8(0x08)
	struct UProgressBar* PB_Health_Dec; // 0x2b0(0x08)
	struct UPDTextBlock* TB_Health; // 0x2b8(0x08)
	struct UPDTextBlock* TB_TotalHealth; // 0x2c0(0x08)
	struct UPDTextBlock* TB_Health_w; // 0x2c8(0x08)
	struct UPDTextBlock* TB_TotalHealth_w; // 0x2d0(0x08)
	struct UCanvasPanel* CP_BlackMask; // 0x2d8(0x08)
	struct UCanvasPanel* CP_WhiteMask; // 0x2e0(0x08)
	struct FVector2D HealthSize; // 0x2e8(0x08)
	char pad_2F0[0x18]; // 0x2f0(0x18)
	struct UPDPlayerCheer* PlayerCheer; // 0x308(0x08)
	struct USizeBox* SB_DM; // 0x310(0x08)
	struct UImage* IMG_BombIcon; // 0x318(0x08)
	struct UCanvasPanel* CP_Juggernaut; // 0x320(0x08)
	struct UCanvasPanel* CP_ActiveJuggernaut; // 0x328(0x08)
	struct UCanvasPanel* CP_InactiveJuggernaut; // 0x330(0x08)
	struct UImage* IM_Juggernaut; // 0x338(0x08)
	struct UImage* IM_Exosuit; // 0x340(0x08)
	struct UPDTextBlock* TB_ActiveJuggernaut; // 0x348(0x08)
	struct UPDTextBlock* TB_InactiveJuggernaut; // 0x350(0x08)
	struct UPDPlayerEquipmentDetail* EquipmentDetail; // 0x358(0x08)
	struct UPDPlayerEquipmentSlotBase* ES_Slot01; // 0x360(0x08)
	struct UPDPlayerEquipmentSlotBase* ES_Slot02; // 0x368(0x08)
	struct UPDPlayerEquipmentSlotBase* ES_Slot03; // 0x370(0x08)
	struct UPDPlayerEquipmentSlotBase* ES_Slot04; // 0x378(0x08)
	struct UPDPlayerEquipmentSlotBase* ES_Slot05; // 0x380(0x08)
	struct UPDPlayerEquipmentSlotBase* ES_Slot06; // 0x388(0x08)
	struct UPDPlayerEquipmentSlotBase* ES_Slot07; // 0x390(0x08)
	struct UPDPlayerEquipmentSlotBase* ES_Slot08; // 0x398(0x08)
	struct UPDPlayerEquipmentSlotBase* ES_SlotMelee; // 0x3a0(0x08)
	struct UPDPlayerEquipmentSlotBase* ES_SlotThrowable; // 0x3a8(0x08)
	struct UCanvasPanel* CP_EquipmentSlide; // 0x3b0(0x08)
	struct USpacer* SP_EquipLeft; // 0x3b8(0x08)
	struct USpacer* SP_EquipRight; // 0x3c0(0x08)
	char pad_3C8[0x58]; // 0x3c8(0x58)
	struct UPDArmorGaugeDetail* ArmorGauge; // 0x420(0x08)
	struct UCanvasPanel* CP_ItemSkillGaugeDurationTime; // 0x428(0x08)
	struct UImage* IMG_ItemSkillIcon; // 0x430(0x08)
	struct UProgressBar* PB_SpeedIncreaseTime; // 0x438(0x08)
	char pad_440[0x8]; // 0x440(0x08)
	struct UCanvasPanel* CP_BowCharge; // 0x448(0x08)
	struct UCanvasPanel* CP_ChargeEf; // 0x450(0x08)
	struct UProgressBar* PB_BowCharge; // 0x458(0x08)
	struct UImage* IMG_ChargeFx; // 0x460(0x08)
	char pad_468[0x8]; // 0x468(0x08)
};

// Class ProjectD.PDPlayerSettingUI
// Size: 0x4c0 (Inherited: 0x290)
struct UPDPlayerSettingUI : UPDIngameModeWidget {
	struct UPDTextBlock* T_Desc_Mode; // 0x290(0x08)
	struct UPDTextBlock* T_Map; // 0x298(0x08)
	struct UCanvasPanel* CP_TeamMode; // 0x2a0(0x08)
	struct UImage* IMG_TeamMode; // 0x2a8(0x08)
	struct UPDTextBlock* T_TeamMode; // 0x2b0(0x08)
	struct UPaperSprite* AttackImg; // 0x2b8(0x08)
	struct UPaperSprite* DefenceImg; // 0x2c0(0x08)
	struct UCanvasPanel* CP_LoadingChar; // 0x2c8(0x08)
	struct UPDTextBlock* TB_MissionScoreTitle; // 0x2d0(0x08)
	struct UCanvasPanel* CP_TeamChar; // 0x2d8(0x08)
	struct UHorizontalBox* HP_TeamCharList; // 0x2e0(0x08)
	struct UCanvasPanel* CP_Char; // 0x2e8(0x08)
	struct UCanvasPanel* CP_Lepton; // 0x2f0(0x08)
	struct UCanvasPanel* CP_UniqueLeptonInfo; // 0x2f8(0x08)
	struct UImage* IMG_UniqueLepton1; // 0x300(0x08)
	struct UImage* IMG_UniqueLepton2; // 0x308(0x08)
	struct TArray<struct UImage*> IMG_UniqueLepton_List; // 0x310(0x10)
	struct UPDTextBlock* T_UniqueLepton1; // 0x320(0x08)
	struct UPDTextBlock* T_UniqueLepton2; // 0x328(0x08)
	struct TArray<struct UPDTextBlock*> T_UniqueLepton_List; // 0x330(0x10)
	struct UImage* IMG_SelectChar; // 0x340(0x08)
	struct UPDTextBlock* T_Name; // 0x348(0x08)
	struct UImage* IMG_Signature; // 0x350(0x08)
	struct UPDTextBlock* T_Signature; // 0x358(0x08)
	struct UTileView* TV_CharList; // 0x360(0x08)
	struct UPDTabButtonGroup* CharTabBtnGroup; // 0x368(0x08)
	struct UVerticalBox* VB_PresetTabs; // 0x370(0x08)
	struct UPDTextBlock* T_LeptonInfo_Title; // 0x378(0x08)
	struct UWidgetSwitcher* WS_EquipSlot1; // 0x380(0x08)
	struct UImage* IMG_EquipSlot_Perk1; // 0x388(0x08)
	struct UPDTextBlock* T_EquipSlot_PerkName1; // 0x390(0x08)
	struct UWidgetSwitcher* WS_EquipSlot2; // 0x398(0x08)
	struct UImage* IMG_EquipSlot_Perk2; // 0x3a0(0x08)
	struct UPDTextBlock* T_EquipSlot_PerkName2; // 0x3a8(0x08)
	struct UWidgetSwitcher* WS_EquipSlot3; // 0x3b0(0x08)
	struct UImage* IMG_EquipSlot_Perk3; // 0x3b8(0x08)
	struct UPDTextBlock* T_EquipSlot_PerkName3; // 0x3c0(0x08)
	struct UPDTabButtonGroup* PresetTabBtnGroup; // 0x3c8(0x08)
	struct TArray<struct UWidgetSwitcher*> WS_LeptonList; // 0x3d0(0x10)
	struct TArray<struct UImage*> IMG_LeptonIconList; // 0x3e0(0x10)
	struct TArray<struct UPDTextBlock*> TB_LeptonNameList; // 0x3f0(0x10)
	char pad_400[0xc0]; // 0x400(0xc0)

	void OnSelectLaptonPreset(int32_t SelectIndex); // Function ProjectD.PDPlayerSettingUI.OnSelectLaptonPreset // (Final|Native|Protected) // @ game+0x1829590
	void OnSelectChar(int32_t SelectAgentIndex); // Function ProjectD.PDPlayerSettingUI.OnSelectChar // (Final|Native|Protected) // @ game+0x1829510
};

// Class ProjectD.PDPlayLogListItemData
// Size: 0x68 (Inherited: 0x28)
struct UPDPlayLogListItemData : UObject {
	char pad_28[0x40]; // 0x28(0x40)
};

// Class ProjectD.PDPlayLogListItem
// Size: 0x2d0 (Inherited: 0x288)
struct UPDPlayLogListItem : UPDUserWidget {
	char pad_288[0x8]; // 0x288(0x08)
	struct UPDTextBlock* TB_FileName; // 0x290(0x08)
	struct UPDTextBlock* TB_FileDate; // 0x298(0x08)
	struct UPDTextBlock* TB_Round; // 0x2a0(0x08)
	struct UWidgetSwitcher* WS_PlayLog; // 0x2a8(0x08)
	struct UBorder* BD_Bg; // 0x2b0(0x08)
	struct UAkAudioEvent* HoverSound; // 0x2b8(0x08)
	struct UAkAudioEvent* ClickSound; // 0x2c0(0x08)
	char pad_2C8[0x8]; // 0x2c8(0x08)
};

// Class ProjectD.PDPlayLogMapIconPlayerModule
// Size: 0x300 (Inherited: 0x2a0)
struct UPDPlayLogMapIconPlayerModule : UPDGameMapIconModule {
	struct UCanvasPanel* CP_Normal; // 0x2a0(0x08)
	struct UImage* IMG_State_Groggy; // 0x2a8(0x08)
	struct UImage* IMG_State_Death; // 0x2b0(0x08)
	struct UPDPlayLogTrackLine* TrackLine; // 0x2b8(0x08)
	struct UBorder* BD_Direction; // 0x2c0(0x08)
	struct UImage* IMG_TeamColor; // 0x2c8(0x08)
	struct UImage* IMG_UserDirection; // 0x2d0(0x08)
	struct UPDTextBlock* TB_PlayerName; // 0x2d8(0x08)
	struct UWidgetSwitcher* WS_PlayerBack; // 0x2e0(0x08)
	struct UImage* IMG_MVPColor; // 0x2e8(0x08)
	char pad_2F0[0x10]; // 0x2f0(0x10)
};

// Class ProjectD.PDPlayLogMapIconSafeZoneDrawer
// Size: 0x2d8 (Inherited: 0x288)
struct UPDPlayLogMapIconSafeZoneDrawer : UPDUserWidget {
	enum class ESafeZoneDrawType DrawType; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct TArray<struct FSafeZoneDrawing> Drawings; // 0x290(0x10)
	bool DrawLineAntialias; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	float DrawLineTickness; // 0x2a4(0x04)
	bool bEdgeRounding; // 0x2a8(0x01)
	char pad_2A9[0x3]; // 0x2a9(0x03)
	float EdgeRoundingLen; // 0x2ac(0x04)
	int32_t EdgeRoundingSegment; // 0x2b0(0x04)
	char pad_2B4[0x24]; // 0x2b4(0x24)
};

// Class ProjectD.PDPlayLogMapIconSafeZoneModule
// Size: 0x2f8 (Inherited: 0x2a0)
struct UPDPlayLogMapIconSafeZoneModule : UPDGameMapIconModule {
	struct URetainerBox* RB_Mask; // 0x2a0(0x08)
	struct UCanvasPanel* CP_Mask; // 0x2a8(0x08)
	struct UImage* IMG_Area; // 0x2b0(0x08)
	struct UPDPlayLogMapIconSafeZoneDrawer* DrawerCurrent; // 0x2b8(0x08)
	struct UPDPlayLogMapIconSafeZoneDrawer* DrawerNext; // 0x2c0(0x08)
	char pad_2C8[0x14]; // 0x2c8(0x14)
	bool RenewalVersion; // 0x2dc(0x01)
	char pad_2DD[0x1b]; // 0x2dd(0x1b)
};

// Class ProjectD.PDPlayLogMapIconThrownModule
// Size: 0x2c0 (Inherited: 0x2a0)
struct UPDPlayLogMapIconThrownModule : UPDGameMapIconModule {
	struct UImage* IMG_Area; // 0x2a0(0x08)
	struct UCanvasPanel* CP_Replay_Thrown; // 0x2a8(0x08)
	struct USizeBox* SB_Area; // 0x2b0(0x08)
	char pad_2B8[0x8]; // 0x2b8(0x08)
};

// Class ProjectD.PDPlayLogMapModule
// Size: 0x3c8 (Inherited: 0x3c0)
struct UPDPlayLogMapModule : UPDGameMapModule {
	char pad_3C0[0x8]; // 0x3c0(0x08)
};

// Class ProjectD.PDPlayLogPlayerInfo
// Size: 0x2d0 (Inherited: 0x288)
struct UPDPlayLogPlayerInfo : UPDUserWidget {
	struct UPDPlayLogMapIconPlayerModule* PLMI_Icon; // 0x288(0x08)
	struct UPDTextBlock* TB_Name; // 0x290(0x08)
	struct UImage* IMG_CharacterIcon; // 0x298(0x08)
	struct UBorder* BD_Bg; // 0x2a0(0x08)
	struct UPDTextBlock* TB_Kill; // 0x2a8(0x08)
	struct UPDTextBlock* TB_Death; // 0x2b0(0x08)
	struct UBorder* BD_Outline; // 0x2b8(0x08)
	struct UPDCheckBox* CB_PlayerView; // 0x2c0(0x08)
	char pad_2C8[0x8]; // 0x2c8(0x08)

	void OnChangedCheckBox(bool InValue); // Function ProjectD.PDPlayLogPlayerInfo.OnChangedCheckBox // (Final|Native|Protected) // @ game+0x182d210
};

// Class ProjectD.PDPlayLogThrowLineDrawer
// Size: 0x2c8 (Inherited: 0x2a0)
struct UPDPlayLogThrowLineDrawer : UPDGameMapIconModule {
	char pad_2A0[0x28]; // 0x2a0(0x28)
};

// Class ProjectD.PDPlayLogTrackLine
// Size: 0x318 (Inherited: 0x288)
struct UPDPlayLogTrackLine : UPDUserWidget {
	struct UImage* IMG_DeathArrow; // 0x288(0x08)
	char pad_290[0x88]; // 0x290(0x88)
};

// Class ProjectD.PDPlayLogUI
// Size: 0x458 (Inherited: 0x288)
struct UPDPlayLogUI : UPDSceneBaseUI {
	struct UPDButton* Btn_GotoLobby; // 0x288(0x08)
	struct UPDButton* Btn_DeleteAll; // 0x290(0x08)
	struct UCanvasPanel* CP_Map; // 0x298(0x08)
	struct UPDPlayLogMapModule* PlayLogMap; // 0x2a0(0x08)
	struct UPDSlider* PDSlider; // 0x2a8(0x08)
	struct UPDTextBlock* TB_CurMin; // 0x2b0(0x08)
	struct UPDTextBlock* TB_CurSec; // 0x2b8(0x08)
	struct UPDTextBlock* TB_MaxMin; // 0x2c0(0x08)
	struct UPDTextBlock* TB_MaxSec; // 0x2c8(0x08)
	struct UListView* LV_PlayList; // 0x2d0(0x08)
	struct UListView* LV_RoundList; // 0x2d8(0x08)
	struct UVerticalBox* VB_AllyPlayInfo; // 0x2e0(0x08)
	struct UVerticalBox* VB_EnemyPlayInfo; // 0x2e8(0x08)
	struct UPDTabButton* TBTN_Normal; // 0x2f0(0x08)
	struct UPDTabButton* TBTN_Double; // 0x2f8(0x08)
	struct UPDTabButton* TBTN_Quadruple; // 0x300(0x08)
	struct UPDTabButton* TBTN_Play; // 0x308(0x08)
	struct UPDTabButton* TBTN_Stop; // 0x310(0x08)
	struct UPDTabButton* TBTN_Pause; // 0x318(0x08)
	struct UPDTextBlock* TB_AtWinType; // 0x320(0x08)
	struct UPDTextBlock* TB_DeWinType; // 0x328(0x08)
	struct UBorder* BD_AtWinTypeBg; // 0x330(0x08)
	struct UBorder* BD_DeWinTypeBg; // 0x338(0x08)
	struct UCanvasPanel* CP_Loading; // 0x340(0x08)
	struct UPDTabButtonGroup* SpeedCategoryGroup; // 0x348(0x08)
	struct UPDTabButtonGroup* PlayCategoryGroup; // 0x350(0x08)
	struct UPDKillLogUI* KillLog; // 0x358(0x08)
	struct UPDTextBlock* TB_MapName; // 0x360(0x08)
	struct UPDCheckBox* CB_VisibleTrack; // 0x368(0x08)
	struct UProgressBar* PB_PlayerBar; // 0x370(0x08)
	float ZoomScaleDefault; // 0x378(0x04)
	char pad_37C[0x4]; // 0x37c(0x04)
	struct UVerticalBox* VB_LogList; // 0x380(0x08)
	enum class EHorizontalAlignment LogHAlign; // 0x388(0x01)
	char pad_389[0x3]; // 0x389(0x03)
	struct FMargin LogPadding; // 0x38c(0x10)
	int32_t MaxLogCount; // 0x39c(0x04)
	float DefaultDuration; // 0x3a0(0x04)
	bool AutoRemove; // 0x3a4(0x01)
	char pad_3A5[0xb3]; // 0x3a5(0xb3)

	void PlayLogStop(); // Function ProjectD.PDPlayLogUI.PlayLogStop // (Final|Native|Private) // @ game+0x182d5b0
	void PlayLogStart(); // Function ProjectD.PDPlayLogUI.PlayLogStart // (Final|Native|Private) // @ game+0x182d590
	void PlayLogPause(); // Function ProjectD.PDPlayLogUI.PlayLogPause // (Final|Native|Private) // @ game+0x182d570
	void OnVisibleTrackChanged(bool Value); // Function ProjectD.PDPlayLogUI.OnVisibleTrackChanged // (Final|Native|Private) // @ game+0x182d4e0
	void OnValueChanged(float InValue); // Function ProjectD.PDPlayLogUI.OnValueChanged // (Final|Native|Private) // @ game+0x182d460
	void OnSelectedRoundListItem(struct UPDPlayLogListItemData* InListItemData); // Function ProjectD.PDPlayLogUI.OnSelectedRoundListItem // (Final|Native|Private) // @ game+0x182d3e0
	void OnSelectedListItem(struct UPDPlayLogListItemData* InListItemData); // Function ProjectD.PDPlayLogUI.OnSelectedListItem // (Final|Native|Private) // @ game+0x182d360
	void OnQuadrupleSpeed(); // Function ProjectD.PDPlayLogUI.OnQuadrupleSpeed // (Final|Native|Private) // @ game+0x182d340
	void OnNormalSpeed(); // Function ProjectD.PDPlayLogUI.OnNormalSpeed // (Final|Native|Private) // @ game+0x182d300
	void OnMouseCaptureBegin(); // Function ProjectD.PDPlayLogUI.OnMouseCaptureBegin // (Final|Native|Private) // @ game+0x182d2e0
	void OnDoubleSpeed(); // Function ProjectD.PDPlayLogUI.OnDoubleSpeed // (Final|Native|Private) // @ game+0x182d2c0
	void OnDeleteAllFile(); // Function ProjectD.PDPlayLogUI.OnDeleteAllFile // (Final|Native|Private) // @ game+0x182d2a0
	void MouseCaptureEnd(); // Function ProjectD.PDPlayLogUI.MouseCaptureEnd // (Final|Native|Private) // @ game+0x182d1d0
	void GotoLobby(); // Function ProjectD.PDPlayLogUI.GotoLobby // (Final|Native|Private) // @ game+0x182d1b0
	void DeleteAllFile(); // Function ProjectD.PDPlayLogUI.DeleteAllFile // (Final|Native|Private) // @ game+0x182d190
};

// Class ProjectD.PDPopupEventHandler
// Size: 0x28 (Inherited: 0x28)
struct UPDPopupEventHandler : UObject {
};

// Class ProjectD.PDPostAkEventAnimNotify
// Size: 0x50 (Inherited: 0x48)
struct UPDPostAkEventAnimNotify : UPDBaseAnimNotify {
	struct UAkAudioEvent* EventToPost; // 0x48(0x08)
};

// Class ProjectD.PDFootstepAkAnimNotify
// Size: 0xd0 (Inherited: 0x50)
struct UPDFootstepAkAnimNotify : UPDPostAkEventAnimNotify {
	enum class EHandsAndFeetBone Bone; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	enum class EPDTraceChannel TraceType; // 0x54(0x04)
	enum class EPDFootStepNotifyType FootStepNotifyType; // 0x58(0x01)
	char pad_59[0x77]; // 0x59(0x77)
};

// Class ProjectD.PDParkourAkAnimNotify
// Size: 0xd0 (Inherited: 0xd0)
struct UPDParkourAkAnimNotify : UPDFootstepAkAnimNotify {
};

// Class ProjectD.PDSlideAkAnimNotify
// Size: 0x128 (Inherited: 0xd0)
struct UPDSlideAkAnimNotify : UPDFootstepAkAnimNotify {
	char pad_D0[0x58]; // 0xd0(0x58)
};

// Class ProjectD.PDPracticeModeUI
// Size: 0x430 (Inherited: 0x430)
struct UPDPracticeModeUI : UPDBaseModeUI {
};

// Class ProjectD.PDProgress
// Size: 0x320 (Inherited: 0x288)
struct UPDProgress : UPDUserWidget {
	struct UImage* IMG_Progress; // 0x288(0x08)
	struct FSlateBrush ProgressMaterial; // 0x290(0x88)
	float Percent; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)
};

// Class ProjectD.PDProgressLeptonListItemData
// Size: 0x70 (Inherited: 0x28)
struct UPDProgressLeptonListItemData : UObject {
	char pad_28[0x48]; // 0x28(0x48)
};

// Class ProjectD.PDProgressLeptonListItem
// Size: 0x2c0 (Inherited: 0x288)
struct UPDProgressLeptonListItem : UPDUserWidget {
	char pad_288[0x8]; // 0x288(0x08)
	struct UImage* IMG_Item; // 0x290(0x08)
	struct UPDTextBlock* TB_Name; // 0x298(0x08)
	struct UPDTextBlock* TB_Desc; // 0x2a0(0x08)
	struct UPDTextBlock* TB_Count; // 0x2a8(0x08)
	struct UProgressBar* PB_Per; // 0x2b0(0x08)
	struct UBorder* BD_ItemOutline; // 0x2b8(0x08)
};

// Class ProjectD.PDPropActor
// Size: 0x370 (Inherited: 0x220)
struct APDPropActor : AActor {
	struct TArray<struct FName> TargetNameList; // 0x220(0x10)
	struct UMaterialParameterCollection* Collection; // 0x230(0x08)
	bool UseSineGraph; // 0x238(0x01)
	char pad_239[0x3]; // 0x239(0x03)
	float SignGraphRange; // 0x23c(0x04)
	float SignGraphPeriod; // 0x240(0x04)
	float RotatorRoll; // 0x244(0x04)
	float RotatorPitch; // 0x248(0x04)
	float RotatorYaw; // 0x24c(0x04)
	float RotationFactor; // 0x250(0x04)
	bool IsLamp; // 0x254(0x01)
	char pad_255[0x3]; // 0x255(0x03)
	struct TArray<struct FName> TargetNameList2; // 0x258(0x10)
	float RotatorRoll2; // 0x268(0x04)
	float RotatorPitch2; // 0x26c(0x04)
	float RotatorYaw2; // 0x270(0x04)
	char pad_274[0xfc]; // 0x274(0xfc)
};

// Class ProjectD.PDPulseLight
// Size: 0x238 (Inherited: 0x220)
struct APDPulseLight : AActor {
	struct UPointLightComponent* PointLight; // 0x220(0x08)
	char pad_228[0x10]; // 0x228(0x10)
};

// Class ProjectD.PDPurchaseMsg
// Size: 0x318 (Inherited: 0x288)
struct UPDPurchaseMsg : UPDUserWidget {
	struct UBorder* B_MessageBg; // 0x288(0x08)
	struct UPDTextBlock* T_Message; // 0x290(0x08)
	struct FLinearColor SuccessBGColor; // 0x298(0x10)
	struct FLinearColor FailBGColor; // 0x2a8(0x10)
	struct FSlateColor SuccessTextColor; // 0x2b8(0x28)
	struct FSlateColor FailTextColor; // 0x2e0(0x28)
	char pad_308[0x10]; // 0x308(0x10)
};

// Class ProjectD.PDRagdollAnimInstance
// Size: 0x290 (Inherited: 0x280)
struct UPDRagdollAnimInstance : UPDAnimInstance {
	bool bIsRagdoll; // 0x280(0x01)
	char pad_281[0xf]; // 0x281(0x0f)
};

// Class ProjectD.PDReactorToAkEventTrigger
// Size: 0x28 (Inherited: 0x28)
struct UPDReactorToAkEventTrigger : UInterface {
};

// Class ProjectD.PDRecruitListItemData
// Size: 0xc0 (Inherited: 0x28)
struct UPDRecruitListItemData : UObject {
	char pad_28[0x98]; // 0x28(0x98)
};

// Class ProjectD.PDRecruitListItem
// Size: 0x330 (Inherited: 0x288)
struct UPDRecruitListItem : UPDUserWidget {
	char pad_288[0x8]; // 0x288(0x08)
	struct UBorder* BD_Background; // 0x290(0x08)
	struct UWidgetSwitcher* WS_State; // 0x298(0x08)
	struct UImage* IMG_Face; // 0x2a0(0x08)
	struct UCanvasPanel* CP_ClanMarkInfo; // 0x2a8(0x08)
	struct UImage* IMG_ClanMarkBG; // 0x2b0(0x08)
	struct UImage* IMG_ClanMarkFG; // 0x2b8(0x08)
	struct UPDTextBlock* TB_ClanName; // 0x2c0(0x08)
	struct UPDTextBlock* TB_Nickname; // 0x2c8(0x08)
	struct UPDButton* Btn_Ok; // 0x2d0(0x08)
	struct UPDButton* Btn_Cancel; // 0x2d8(0x08)
	struct UBorder* BD_Disable; // 0x2e0(0x08)
	char pad_2E8[0x48]; // 0x2e8(0x48)

	void OnOKClicked(); // Function ProjectD.PDRecruitListItem.OnOKClicked // (Final|Native|Private) // @ game+0x182d320
	void OnCancelClicked(); // Function ProjectD.PDRecruitListItem.OnCancelClicked // (Final|Native|Private) // @ game+0x182d1f0
};

// Class ProjectD.PDReloadAnimNotifyState
// Size: 0x50 (Inherited: 0x30)
struct UPDReloadAnimNotifyState : UAnimNotifyState {
	struct FName MagazineAttachedBone; // 0x30(0x08)
	int32_t NotifyType; // 0x38(0x04)
	char pad_3C[0x14]; // 0x3c(0x14)
};

// Class ProjectD.PDReportPopupUI
// Size: 0x360 (Inherited: 0x290)
struct UPDReportPopupUI : UPDIngameModeWidget {
	struct UPDTextBlock* T_Name; // 0x290(0x08)
	struct UPDComboBox* CB_Category; // 0x298(0x08)
	struct UPDComboBox* CB_SubCategory; // 0x2a0(0x08)
	struct UMultiLineEditableText* MET_Opinion; // 0x2a8(0x08)
	struct UPDButton* ConfirmBtn; // 0x2b0(0x08)
	struct UPDButton* CancelBtn; // 0x2b8(0x08)
	char pad_2C0[0xa0]; // 0x2c0(0xa0)

	void OnTextChanged_MET_Opinion(struct FText& Text); // Function ProjectD.PDReportPopupUI.OnTextChanged_MET_Opinion // (Final|Native|Protected|HasOutParms) // @ game+0x182fc20
	void OnSelectionChanged_CB_SubCategory(struct FString sItem, enum class ESelectInfo SelType); // Function ProjectD.PDReportPopupUI.OnSelectionChanged_CB_SubCategory // (Final|Native|Protected) // @ game+0x182faf0
	void OnSelectionChanged_CB_Category(struct FString sItem, enum class ESelectInfo SelType); // Function ProjectD.PDReportPopupUI.OnSelectionChanged_CB_Category // (Final|Native|Protected) // @ game+0x182f9c0
	void OnReportConfirmed(); // Function ProjectD.PDReportPopupUI.OnReportConfirmed // (Final|Native|Protected) // @ game+0xfb2530
	void OnClick_ConfirmBtn(); // Function ProjectD.PDReportPopupUI.OnClick_ConfirmBtn // (Final|Native|Protected) // @ game+0x182f9a0
	void OnClick_CancelBtn(); // Function ProjectD.PDReportPopupUI.OnClick_CancelBtn // (Final|Native|Protected) // @ game+0x182f980
};

// Class ProjectD.PDResultExpItemUI
// Size: 0x2b8 (Inherited: 0x288)
struct UPDResultExpItemUI : UPDUserWidget {
	struct UPDTextBlock* TB_ContentName; // 0x288(0x08)
	struct UPDTextBlock* TB_ContentName_Fx01; // 0x290(0x08)
	struct UPDTextBlock* TB_ContentName_Fx02; // 0x298(0x08)
	struct UPDTextBlock* TB_ExpValue; // 0x2a0(0x08)
	struct UPDTextBlock* TB_ExpValue_Fx01; // 0x2a8(0x08)
	struct UPDTextBlock* TB_ExpValue_Fx02; // 0x2b0(0x08)
};

// Class ProjectD.PDResultMedalItem
// Size: 0x2e0 (Inherited: 0x288)
struct UPDResultMedalItem : UPDUserWidget {
	struct UPDTextBlock* TB_Title; // 0x288(0x08)
	struct UPDTextBlock* TB_Score; // 0x290(0x08)
	struct URetainerBox* RB_Mask; // 0x298(0x08)
	struct UImage* IMG_Medal; // 0x2a0(0x08)
	struct UImage* IMG_Fx_Smoke; // 0x2a8(0x08)
	struct UImage* IMG_Fx; // 0x2b0(0x08)
	struct UTexture* GoldTexture; // 0x2b8(0x08)
	struct UTexture* SilverTexture; // 0x2c0(0x08)
	struct UTexture* BronzeTexture; // 0x2c8(0x08)
	char pad_2D0[0x10]; // 0x2d0(0x10)
};

// Class ProjectD.PDResultRankScore
// Size: 0x2c8 (Inherited: 0x288)
struct UPDResultRankScore : UPDUserWidget {
	struct UImage* IMG_ScoreBoard_Line01; // 0x288(0x08)
	struct UImage* IMG_ScoreBoard_Line02; // 0x290(0x08)
	struct UImage* IMG_ScoreBoard_TopBg01; // 0x298(0x08)
	struct UPDTextBlock* TB_TeamName; // 0x2a0(0x08)
	struct UCanvasPanel* CP_PlayerScoreRoot; // 0x2a8(0x08)
	char pad_2B0[0x18]; // 0x2b0(0x18)
};

// Class ProjectD.PDResultRankScoreItem
// Size: 0x338 (Inherited: 0x288)
struct UPDResultRankScoreItem : UPDUserWidget {
	struct UImage* IMG_SLotBg; // 0x288(0x08)
	struct UImage* IMG_Agent; // 0x290(0x08)
	struct UImage* IMG_Lepton1; // 0x298(0x08)
	struct UImage* IMG_Lepton2; // 0x2a0(0x08)
	struct UImage* IMG_Lepton3; // 0x2a8(0x08)
	struct UImage* IMG_Lepton4; // 0x2b0(0x08)
	struct UImage* IMG_Lepton5; // 0x2b8(0x08)
	struct UPDTextBlock* TB_Rank; // 0x2c0(0x08)
	struct UPDTextBlock* TB_Name; // 0x2c8(0x08)
	struct UPDTextBlock* TB_Point; // 0x2d0(0x08)
	struct UPDTextBlock* TB_Mission; // 0x2d8(0x08)
	struct UPDTextBlock* TB_Kill; // 0x2e0(0x08)
	struct UPDTextBlock* TB_Death; // 0x2e8(0x08)
	struct UPDTextBlock* TB_AttackDamage; // 0x2f0(0x08)
	struct UPDTextBlock* TB_Damage; // 0x2f8(0x08)
	struct UPDTextBlock* TB_UseCoin; // 0x300(0x08)
	struct UPDTextBlock* TB_Invest; // 0x308(0x08)
	struct UCanvasPanel* CP_ClanMark; // 0x310(0x08)
	struct UImage* IMG_ClanMarkBG; // 0x318(0x08)
	struct UImage* IMG_ClanMark; // 0x320(0x08)
	char pad_328[0x10]; // 0x328(0x10)
};

// Class ProjectD.PDResultRewardItem
// Size: 0x2a0 (Inherited: 0x288)
struct UPDResultRewardItem : UPDUserWidget {
	struct UImage* IMG_Lepton; // 0x288(0x08)
	struct UPDTextBlock* T_RewardName; // 0x290(0x08)
	char pad_298[0x8]; // 0x298(0x08)
};

// Class ProjectD.PDResultRoundItemUI
// Size: 0x2d8 (Inherited: 0x288)
struct UPDResultRoundItemUI : UPDUserWidget {
	char pad_288[0x8]; // 0x288(0x08)
	struct UPDTextBlock* TB_Round; // 0x290(0x08)
	struct UPDTextBlock* TB_ModeName; // 0x298(0x08)
	struct UImage* IMG_ModeIcon; // 0x2a0(0x08)
	struct UWidgetSwitcher* WS_ResultType; // 0x2a8(0x08)
	struct UBorder* BD_Win; // 0x2b0(0x08)
	struct UBorder* BD_OWin; // 0x2b8(0x08)
	struct UBorder* BD_Rank; // 0x2c0(0x08)
	struct UPDTextBlock* TB_Rank; // 0x2c8(0x08)
	char pad_2D0[0x8]; // 0x2d0(0x08)
};

// Class ProjectD.PDResultRoundMenuItem
// Size: 0x368 (Inherited: 0x288)
struct UPDResultRoundMenuItem : UPDUserWidget {
	char pad_288[0x10]; // 0x288(0x10)
	struct UWidgetSwitcher* WS_ResultType; // 0x298(0x08)
	struct UImage* IMG_ModeIcon; // 0x2a0(0x08)
	struct UImage* IMG_SLotBg; // 0x2a8(0x08)
	struct UImage* IMG_SLotBg_Solo; // 0x2b0(0x08)
	struct UImage* IMG_SLotBg_BM; // 0x2b8(0x08)
	struct UCanvasPanel* CP_Result_Selected; // 0x2c0(0x08)
	struct UImage* IMG_Result_SelectedFx_Blue; // 0x2c8(0x08)
	struct UImage* IMG_Result_SelectedFx_Orange; // 0x2d0(0x08)
	struct UImage* IMG_Result_SelectedBar; // 0x2d8(0x08)
	struct UPDTextBlock* T_RoundInfo; // 0x2e0(0x08)
	struct UPDTextBlock* T_Win; // 0x2e8(0x08)
	struct UPDTextBlock* T_Draw; // 0x2f0(0x08)
	struct UPDTextBlock* T_Lose; // 0x2f8(0x08)
	struct UPDTextBlock* T_Rank; // 0x300(0x08)
	struct UBorder* B_Scheduled; // 0x308(0x08)
	struct UBorder* B_ResultCause; // 0x310(0x08)
	struct UImage* IMG_CauseIcon; // 0x318(0x08)
	struct UBorder* B_All; // 0x320(0x08)
	struct UPDButton* BTN_Area; // 0x328(0x08)
	struct UPaperSprite* AttackImg; // 0x330(0x08)
	struct UPaperSprite* DefenceImg; // 0x338(0x08)
	struct UPaperSprite* InstallImg; // 0x340(0x08)
	struct UPaperSprite* DeactiveImg; // 0x348(0x08)
	struct UPaperSprite* KilledImg; // 0x350(0x08)
	struct UPaperSprite* TimeOutImg; // 0x358(0x08)
	char pad_360[0x8]; // 0x360(0x08)

	void OnClickMenu(); // Function ProjectD.PDResultRoundMenuItem.OnClickMenu // (Final|Native|Private) // @ game+0x182f960
};

// Class ProjectD.PDResultRoundPlayerItem
// Size: 0x2e0 (Inherited: 0x288)
struct UPDResultRoundPlayerItem : UPDUserWidget {
	struct UImage* IMG_SLotBg; // 0x288(0x08)
	struct UImage* IMG_AgnetPic; // 0x290(0x08)
	struct UImage* IMG_ClanMark; // 0x298(0x08)
	struct UImage* IMG_ClanMark_Bg; // 0x2a0(0x08)
	struct UPDTextBlock* TB_Name; // 0x2a8(0x08)
	struct UPDTextBlock* T_PlayerNum; // 0x2b0(0x08)
	struct UPDTextBlock* TB_Kill; // 0x2b8(0x08)
	struct UPDTextBlock* TB_Death; // 0x2c0(0x08)
	struct UPDCheckBox* CB_PlayerView; // 0x2c8(0x08)
	struct UCanvasPanel* CP_ClanMark; // 0x2d0(0x08)
	char pad_2D8[0x8]; // 0x2d8(0x08)

	void OnChangedCheckBox(bool InValue); // Function ProjectD.PDResultRoundPlayerItem.OnChangedCheckBox // (Final|Native|Protected) // @ game+0x182f8d0
};

// Class ProjectD.PDResultRoundPlayerList
// Size: 0x300 (Inherited: 0x288)
struct UPDResultRoundPlayerList : UPDUserWidget {
	struct UImage* IMG_Attack; // 0x288(0x08)
	struct UImage* IMG_Defense; // 0x290(0x08)
	struct UBorder* BD_ResultBg; // 0x298(0x08)
	struct UPDTextBlock* TB_TeamName; // 0x2a0(0x08)
	struct UPDTextBlock* TB_Result; // 0x2a8(0x08)
	struct UPDResultRoundPlayerItem* RRP_Item1; // 0x2b0(0x08)
	struct UPDResultRoundPlayerItem* RRP_Item2; // 0x2b8(0x08)
	struct UPDResultRoundPlayerItem* RRP_Item3; // 0x2c0(0x08)
	struct UPDResultRoundPlayerItem* RRP_Item4; // 0x2c8(0x08)
	struct UPDResultRoundPlayerItem* RRP_Item5; // 0x2d0(0x08)
	struct TArray<struct UPDResultRoundPlayerItem*> RoundPlayerItems; // 0x2d8(0x10)
	char pad_2E8[0x18]; // 0x2e8(0x18)
};

// Class ProjectD.PDResultScoreItem
// Size: 0x2b8 (Inherited: 0x288)
struct UPDResultScoreItem : UPDUserWidget {
	struct UPDTextBlock* T_ScoreName; // 0x288(0x08)
	struct UPDTextBlock* T_Score; // 0x290(0x08)
	char pad_298[0x20]; // 0x298(0x20)
};

// Class ProjectD.PDResultTeamMemberUI
// Size: 0x2c0 (Inherited: 0x288)
struct UPDResultTeamMemberUI : UPDUserWidget {
	struct UPDTextBlock* TB_Nickname; // 0x288(0x08)
	struct UImage* IMG_Icon; // 0x290(0x08)
	struct UPDTextBlock* TB_Status; // 0x298(0x08)
	struct UPDTextBlock* TB_Record; // 0x2a0(0x08)
	struct UPDTextBlock* TB_Postfix; // 0x2a8(0x08)
	struct UCanvasPanel* CP_MVP; // 0x2b0(0x08)
	struct UImage* IMG_MVP_FxBg; // 0x2b8(0x08)
};

// Class ProjectD.PDResultTeamScore
// Size: 0x368 (Inherited: 0x288)
struct UPDResultTeamScore : UPDUserWidget {
	struct UImage* IMG_ScoreBoard_Line01; // 0x288(0x08)
	struct UImage* IMG_ScoreBoard_Line02; // 0x290(0x08)
	struct UImage* IMG_ScoreBoard_TopBg01; // 0x298(0x08)
	struct UPDTextBlock* TB_TeamName; // 0x2a0(0x08)
	struct UPDTextBlock* TB_TotalMVP; // 0x2a8(0x08)
	struct UPDTextBlock* TB_TotalKill; // 0x2b0(0x08)
	struct UPDTextBlock* TB_TotalDeath; // 0x2b8(0x08)
	struct UPDTextBlock* TB_TotalAssist; // 0x2c0(0x08)
	struct UPDTextBlock* TB_TotalRescue; // 0x2c8(0x08)
	struct UPDTextBlock* TB_TotalMission; // 0x2d0(0x08)
	struct UPDTextBlock* TB_TotalAlive; // 0x2d8(0x08)
	struct UPDTextBlock* TB_TotalAttackDamage; // 0x2e0(0x08)
	struct UPDTextBlock* TB_TotalDamage; // 0x2e8(0x08)
	struct UPDTextBlock* TB_TotalUseCoin; // 0x2f0(0x08)
	struct UPDTextBlock* TB_TotalInvest; // 0x2f8(0x08)
	struct UPDResultTeamScoreItem* RTSI_List1; // 0x300(0x08)
	struct UPDResultTeamScoreItem* RTSI_List2; // 0x308(0x08)
	struct UPDResultTeamScoreItem* RTSI_List3; // 0x310(0x08)
	struct UPDResultTeamScoreItem* RTSI_List4; // 0x318(0x08)
	struct UPDResultTeamScoreItem* RTSI_List5; // 0x320(0x08)
	struct TArray<struct UPDResultTeamScoreItem*> PlayerScoreItems; // 0x328(0x10)
	char pad_338[0x30]; // 0x338(0x30)
};

// Class ProjectD.PDResultTeamScoreItem
// Size: 0x348 (Inherited: 0x288)
struct UPDResultTeamScoreItem : UPDUserWidget {
	struct UImage* IMG_SLotBg; // 0x288(0x08)
	struct UImage* IMG_Agent; // 0x290(0x08)
	struct UImage* IMG_Lepton1; // 0x298(0x08)
	struct UImage* IMG_Lepton2; // 0x2a0(0x08)
	struct UImage* IMG_Lepton3; // 0x2a8(0x08)
	struct UImage* IMG_Lepton4; // 0x2b0(0x08)
	struct UImage* IMG_Lepton5; // 0x2b8(0x08)
	struct UPDTextBlock* TB_Name; // 0x2c0(0x08)
	struct UPDTextBlock* TB_MVP; // 0x2c8(0x08)
	struct UPDTextBlock* TB_Kill; // 0x2d0(0x08)
	struct UPDTextBlock* TB_Death; // 0x2d8(0x08)
	struct UPDTextBlock* TB_Assist; // 0x2e0(0x08)
	struct UPDTextBlock* TB_Rescue; // 0x2e8(0x08)
	struct UPDTextBlock* TB_Mission; // 0x2f0(0x08)
	struct UPDTextBlock* TB_Alive; // 0x2f8(0x08)
	struct UPDTextBlock* TB_AttackDamage; // 0x300(0x08)
	struct UPDTextBlock* TB_Damage; // 0x308(0x08)
	struct UPDTextBlock* TB_UseCoin; // 0x310(0x08)
	struct UPDTextBlock* TB_Invest; // 0x318(0x08)
	struct UCanvasPanel* CP_ClanMark; // 0x320(0x08)
	struct UImage* IMG_ClanMarkBG; // 0x328(0x08)
	struct UImage* IMG_ClanMark; // 0x330(0x08)
	char pad_338[0x10]; // 0x338(0x10)
};

// Class ProjectD.PDResultTitleAchieveItem
// Size: 0x2c0 (Inherited: 0x288)
struct UPDResultTitleAchieveItem : UPDUserWidget {
	struct UPDTextBlock* T_Achieve_Title; // 0x288(0x08)
	struct UPDTextBlock* T_Achieve_Desc; // 0x290(0x08)
	struct UPDTextBlock* T_Achieve_DescInfo; // 0x298(0x08)
	struct UPDTextBlock* T_Achieve_RecordName; // 0x2a0(0x08)
	struct UPDTextBlock* T_Achieve_Record; // 0x2a8(0x08)
	struct UImage* IMG_TopBg; // 0x2b0(0x08)
	struct UImage* IMG_BottomBg; // 0x2b8(0x08)
};

// Class ProjectD.PDResultTitleAgentNameItem
// Size: 0x2d0 (Inherited: 0x288)
struct UPDResultTitleAgentNameItem : UPDUserWidget {
	struct UPDTextBlock* T_UserName; // 0x288(0x08)
	struct UPDTextBlock* T_ClanName; // 0x290(0x08)
	struct UImage* IMG_Medal_01; // 0x298(0x08)
	struct UImage* IMG_Medal_02; // 0x2a0(0x08)
	struct UImage* IMG_Medal_03; // 0x2a8(0x08)
	struct UImage* IMG_Medal_04; // 0x2b0(0x08)
	struct UImage* IMG_Medal_05; // 0x2b8(0x08)
	struct UBorder* B_ClanMark_Bg; // 0x2c0(0x08)
	struct UImage* IMG_ClanMark; // 0x2c8(0x08)
};

// Class ProjectD.PDResultTitleItem
// Size: 0x308 (Inherited: 0x288)
struct UPDResultTitleItem : UPDUserWidget {
	struct UPDResultTitleAgentNameItem* RTANI_Agent; // 0x288(0x08)
	struct UPDResultTitleAchieveItem* RTAI_Title; // 0x290(0x08)
	struct UCanvasPanel* CP_RankNumber; // 0x298(0x08)
	struct UCanvasPanel* CP_RankRecord; // 0x2a0(0x08)
	struct UImage* IMG_RankRecordBg; // 0x2a8(0x08)
	struct UPDTextBlock* TB_RankRecordPoint; // 0x2b0(0x08)
	struct UWidgetSwitcher* WS_Rank; // 0x2b8(0x08)
	struct UHorizontalBox* HB_UserData; // 0x2c0(0x08)
	struct UImage* IMG_Medal1; // 0x2c8(0x08)
	struct UImage* IMG_Medal2; // 0x2d0(0x08)
	struct UImage* IMG_Medal3; // 0x2d8(0x08)
	char pad_2E0[0x28]; // 0x2e0(0x28)
};

// Class ProjectD.PDRingCommandUI
// Size: 0x4c0 (Inherited: 0x290)
struct UPDRingCommandUI : UPDIngameModeWidget {
	struct UCanvasPanel* CP_Category; // 0x290(0x08)
	struct UCanvasPanel* CP_Menu; // 0x298(0x08)
	struct URetainerBox* RB_Menu; // 0x2a0(0x08)
	struct UCanvasPanel* CP_Inner; // 0x2a8(0x08)
	struct UBorder* W_DirectionRing; // 0x2b0(0x08)
	struct UCanvasPanel* CP_Ring1; // 0x2b8(0x08)
	struct UCanvasPanel* CP_Ring2; // 0x2c0(0x08)
	struct UCanvasPanel* CP_Ring3; // 0x2c8(0x08)
	struct UCanvasPanel* CP_Ring6; // 0x2d0(0x08)
	struct UImage* IMG_Hovered1; // 0x2d8(0x08)
	struct UImage* IMG_Hovered2_1; // 0x2e0(0x08)
	struct UImage* IMG_Hovered2_2; // 0x2e8(0x08)
	struct UImage* IMG_Hovered3_1; // 0x2f0(0x08)
	struct UImage* IMG_Hovered3_2; // 0x2f8(0x08)
	struct UImage* IMG_Hovered3_3; // 0x300(0x08)
	struct UImage* IMG_Hovered6_1; // 0x308(0x08)
	struct UImage* IMG_Hovered6_2; // 0x310(0x08)
	struct UImage* IMG_Hovered6_3; // 0x318(0x08)
	struct UImage* IMG_Hovered6_4; // 0x320(0x08)
	struct UImage* IMG_Hovered6_5; // 0x328(0x08)
	struct UImage* IMG_Hovered6_6; // 0x330(0x08)
	struct UImage* IMG_Icon0; // 0x338(0x08)
	struct UImage* IMG_Icon1; // 0x340(0x08)
	struct UImage* IMG_Icon2; // 0x348(0x08)
	struct UImage* IMG_Icon3; // 0x350(0x08)
	struct UImage* IMG_Icon4; // 0x358(0x08)
	struct UImage* IMG_Icon5; // 0x360(0x08)
	struct UPDTextBlock* TB_Text0; // 0x368(0x08)
	struct UPDTextBlock* TB_Text1; // 0x370(0x08)
	struct UPDTextBlock* TB_Text2; // 0x378(0x08)
	struct UPDTextBlock* TB_Text3; // 0x380(0x08)
	struct UPDTextBlock* TB_Text4; // 0x388(0x08)
	struct UPDTextBlock* TB_Text5; // 0x390(0x08)
	struct USizeBox* SB_Key0; // 0x398(0x08)
	struct USizeBox* SB_Key1; // 0x3a0(0x08)
	struct USizeBox* SB_Key2; // 0x3a8(0x08)
	struct USizeBox* SB_Key3; // 0x3b0(0x08)
	struct USizeBox* SB_Key4; // 0x3b8(0x08)
	struct USizeBox* SB_Key5; // 0x3c0(0x08)
	struct UPDTextBlock* TB_Key0; // 0x3c8(0x08)
	struct UPDTextBlock* TB_Key1; // 0x3d0(0x08)
	struct UPDTextBlock* TB_Key2; // 0x3d8(0x08)
	struct UPDTextBlock* TB_Key3; // 0x3e0(0x08)
	struct UPDTextBlock* TB_Key4; // 0x3e8(0x08)
	struct UPDTextBlock* TB_Key5; // 0x3f0(0x08)
	struct UBorder* BD_Category1; // 0x3f8(0x08)
	struct UBorder* BD_Category2; // 0x400(0x08)
	struct UBorder* BD_Category3; // 0x408(0x08)
	struct UBorder* BD_Category4; // 0x410(0x08)
	struct UBorder* BD_Category5; // 0x418(0x08)
	struct TArray<struct UBorder*> CategoryList; // 0x420(0x10)
	float GlitchIntensity; // 0x430(0x04)
	float GlitchDuration; // 0x434(0x04)
	char pad_438[0x88]; // 0x438(0x88)
};

// Class ProjectD.PDRoadActor
// Size: 0x298 (Inherited: 0x220)
struct APDRoadActor : AActor {
	enum class EGuideType GuideType; // 0x220(0x01)
	char pad_221[0x7]; // 0x221(0x07)
	struct UArrowComponent* StartArrow; // 0x228(0x08)
	struct UPDSplineComponent* MainSpline; // 0x230(0x08)
	struct APDRoadActor* Parent; // 0x238(0x08)
	char pad_240[0x58]; // 0x240(0x58)
};

// Class ProjectD.PDRoundInfoUI
// Size: 0x3b8 (Inherited: 0x290)
struct UPDRoundInfoUI : UPDIngameModeWidget {
	struct UCanvasPanel* CP_PlayTimeBomb; // 0x290(0x08)
	struct UCanvasPanel* CP_RoundScore; // 0x298(0x08)
	struct UImage* IMG_Defuse; // 0x2a0(0x08)
	struct UPDTextBlock* TB_ShopNoti; // 0x2a8(0x08)
	struct UPDTextBlock* TB_Round; // 0x2b0(0x08)
	struct UPanelWidget* PW_ShopGuide; // 0x2b8(0x08)
	struct UPDTextBlock* T_ShopKey; // 0x2c0(0x08)
	struct UHorizontalBox* HB_EntryA; // 0x2c8(0x08)
	struct UHorizontalBox* HB_EntryB; // 0x2d0(0x08)
	struct UPDTextBlock* TB_ScoreA; // 0x2d8(0x08)
	struct UPDTextBlock* TB_ScoreB; // 0x2e0(0x08)
	struct UImage* IMG_TeamStateA; // 0x2e8(0x08)
	struct UImage* IMG_TeamStateB; // 0x2f0(0x08)
	struct UBorder* BD_ScoreBackL; // 0x2f8(0x08)
	struct UBorder* BD_ScoreBackR; // 0x300(0x08)
	struct UPDSeedProgressModule* SSM_SeedProgress; // 0x308(0x08)
	struct UImage* IMG_Highlight_Tutorial; // 0x310(0x08)
	int32_t WarningShopTime; // 0x318(0x04)
	struct FMargin EntryPadding; // 0x31c(0x10)
	char pad_32C[0x8c]; // 0x32c(0x8c)
};

// Class ProjectD.PDRoundRecord
// Size: 0x2f8 (Inherited: 0x288)
struct UPDRoundRecord : UPDUserWidget {
	struct UImage* IMG_MVPBack; // 0x288(0x08)
	struct UImage* IMG_MVP; // 0x290(0x08)
	struct UImage* IMG_GlowFx; // 0x298(0x08)
	struct UImage* IMG_ClanMarkBG; // 0x2a0(0x08)
	struct UImage* IMG_ClanMarkFG; // 0x2a8(0x08)
	struct UPDTextBlock* TB_Character; // 0x2b0(0x08)
	struct UPDTextBlock* TB_Player; // 0x2b8(0x08)
	struct UPDRoundRecordItem* MVPRecord01; // 0x2c0(0x08)
	struct UPDRoundRecordItem* MVPRecord02; // 0x2c8(0x08)
	struct UPDRoundRecordItem* MVPRecord03; // 0x2d0(0x08)
	struct UPDRoundRecordItem* MVPRecord04; // 0x2d8(0x08)
	struct UPDRoundRecordItem* MVPRecord05; // 0x2e0(0x08)
	struct TArray<struct UPDRoundRecordItem*> MVPRecords; // 0x2e8(0x10)
};

// Class ProjectD.PDRoundRecordItem
// Size: 0x2b0 (Inherited: 0x288)
struct UPDRoundRecordItem : UPDUserWidget {
	struct UPDTextBlock* TB_Title; // 0x288(0x08)
	struct UPDTextBlock* TB_Content; // 0x290(0x08)
	struct UImage* IMG_Coin; // 0x298(0x08)
	bool VisibleCoinIcon; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct UImage* IMG_Glow; // 0x2a8(0x08)
};

// Class ProjectD.PDRoundReplayer
// Size: 0x3d8 (Inherited: 0x290)
struct UPDRoundReplayer : UPDIngameModeWidget {
	struct UPDKillLogUI* KillLog; // 0x290(0x08)
	struct UPDPlayLogMapModule* ReplayGameMap; // 0x298(0x08)
	struct UPDTabButton* Btn_Play; // 0x2a0(0x08)
	struct UPDTabButton* Btn_Stop; // 0x2a8(0x08)
	struct UPDTabButton* Btn_Pause; // 0x2b0(0x08)
	struct UPDTextBlock* TB_CurMin; // 0x2b8(0x08)
	struct UPDTextBlock* TB_CurSec; // 0x2c0(0x08)
	struct UPDTextBlock* TB_MaxMin; // 0x2c8(0x08)
	struct UPDTextBlock* TB_MaxSec; // 0x2d0(0x08)
	struct UPDTextBlock* T_Replay; // 0x2d8(0x08)
	struct UPDSlider* S_TimePicker; // 0x2e0(0x08)
	struct UPDTabButton* Btn_Normal; // 0x2e8(0x08)
	struct UPDTabButton* Btn_Double; // 0x2f0(0x08)
	struct UPDTabButton* Btn_Quadruple; // 0x2f8(0x08)
	struct UPDButton* Btn_Round; // 0x300(0x08)
	struct UBorder* BD_PlayerBarCover; // 0x308(0x08)
	struct UPDTextBlock* T_Dropdown_Round; // 0x310(0x08)
	struct UPDTextBlock* T_Dropdown_Match; // 0x318(0x08)
	struct UPDTextBlock* T_Dropdown_Time; // 0x320(0x08)
	struct UImage* IMG_Dropdown_Arrow; // 0x328(0x08)
	struct UPDStatusBoardRoundList* StatusBoardRoundList; // 0x330(0x08)
	struct UCanvasPanel* CP_ReplayerScreen; // 0x338(0x08)
	struct UProgressBar* PB_PlayerBar; // 0x340(0x08)
	struct UCanvasPanel* CP_ReplayMenu; // 0x348(0x08)
	struct UPDButton* Btn_Replay_Close; // 0x350(0x08)
	struct UCanvasPanel* CP_PlaySpeedView; // 0x358(0x08)
	struct UPDTextBlock* TB_PlayerSpeed; // 0x360(0x08)
	struct UPDTabButtonGroup* SpeedCategoryGroup; // 0x368(0x08)
	struct UPDTabButtonGroup* PlayCategoryGroup; // 0x370(0x08)
	char pad_378[0x60]; // 0x378(0x60)

	void OnValueChanged(float InValue); // Function ProjectD.PDRoundReplayer.OnValueChanged // (Final|Native|Private) // @ game+0x1833970
	void OnMouseCaptureBegin(); // Function ProjectD.PDRoundReplayer.OnMouseCaptureBegin // (Final|Native|Private) // @ game+0x182d2e0
	void OnClickQuadrupleSpeed(); // Function ProjectD.PDRoundReplayer.OnClickQuadrupleSpeed // (Final|Native|Private) // @ game+0x18331b0
	void OnClickPlayLogStop(); // Function ProjectD.PDRoundReplayer.OnClickPlayLogStop // (Final|Native|Private) // @ game+0x1833190
	void OnClickPlayLogStart(); // Function ProjectD.PDRoundReplayer.OnClickPlayLogStart // (Final|Native|Private) // @ game+0x1833170
	void OnClickPlayLogPause(); // Function ProjectD.PDRoundReplayer.OnClickPlayLogPause // (Final|Native|Private) // @ game+0x1833150
	void OnClickNormalSpeed(); // Function ProjectD.PDRoundReplayer.OnClickNormalSpeed // (Final|Native|Private) // @ game+0x1833130
	void OnClickDoubleSpeed(); // Function ProjectD.PDRoundReplayer.OnClickDoubleSpeed // (Final|Native|Private) // @ game+0x1833110
	void MouseCaptureEnd(); // Function ProjectD.PDRoundReplayer.MouseCaptureEnd // (Final|Native|Private) // @ game+0x1832f60
};

// Class ProjectD.PDRoundResult
// Size: 0x338 (Inherited: 0x290)
struct UPDRoundResult : UPDIngameModeWidget {
	struct UBorder* BD_ResultContent02; // 0x290(0x08)
	struct UImage* IMG_RR_TitleColorR_4; // 0x298(0x08)
	struct UPDTextBlock* TB_ResultText00; // 0x2a0(0x08)
	struct UPDTextBlock* TB_ResultText01; // 0x2a8(0x08)
	struct UPDTextBlock* TB_Count; // 0x2b0(0x08)
	struct UImage* IMG_TitleBack00; // 0x2b8(0x08)
	struct UImage* IMG_TitleBack01; // 0x2c0(0x08)
	struct UImage* IMG_TitleBack02; // 0x2c8(0x08)
	struct UImage* IMG_TitleReusltColor; // 0x2d0(0x08)
	struct UImage* IMG_Dot01; // 0x2d8(0x08)
	struct UPDTextBlock* TB_EndRound; // 0x2e0(0x08)
	struct UImage* IMG_RR_LeftTeamBack; // 0x2e8(0x08)
	struct UPDTextBlock* TB_LeftTeam; // 0x2f0(0x08)
	struct UImage* IMG_RightTeamBack; // 0x2f8(0x08)
	struct UPDTextBlock* TB_FoeName; // 0x300(0x08)
	struct UHorizontalBox* HB_RoundRoot; // 0x308(0x08)
	struct TArray<struct UPDResultRoundItemUI*> RoundItems; // 0x310(0x10)
	struct UPDRoundReview* Review; // 0x320(0x08)
	char pad_328[0x10]; // 0x328(0x10)
};

// Class ProjectD.PDRoundReview
// Size: 0x390 (Inherited: 0x288)
struct UPDRoundReview : UPDUserWidget {
	char pad_288[0x8]; // 0x288(0x08)
	struct UImage* IMG_MVP_Text; // 0x290(0x08)
	struct UImage* IMG_Fx; // 0x298(0x08)
	struct UImage* IMG_GlowFx; // 0x2a0(0x08)
	struct UImage* IMG_KEY; // 0x2a8(0x08)
	struct UImage* IMG_Rating; // 0x2b0(0x08)
	struct UImage* IMG_ClanMarkBG_Ally; // 0x2b8(0x08)
	struct UImage* IMG_ClanMarkFG_Ally; // 0x2c0(0x08)
	struct UPDTextBlock* TB_UserName; // 0x2c8(0x08)
	struct UPDRoundRecordItem* AllyRecord01; // 0x2d0(0x08)
	struct UPDRoundRecordItem* AllyRecord02; // 0x2d8(0x08)
	struct UPDRoundRecordItem* AllyRecord03; // 0x2e0(0x08)
	struct UPDRoundRecordItem* AllyRecord04; // 0x2e8(0x08)
	struct UPDRoundRecordItem* AllyRecord05; // 0x2f0(0x08)
	struct UPDRoundRecordItem* AllyRecord06; // 0x2f8(0x08)
	struct TArray<struct UPDRoundRecordItem*> AllyKeyRecords; // 0x300(0x10)
	struct UImage* IMG_FX_Foe; // 0x310(0x08)
	struct UImage* IMG_GlowFx_Foe; // 0x318(0x08)
	struct UImage* IMG_KEY_foe; // 0x320(0x08)
	struct UImage* IMG_Rating_Foe; // 0x328(0x08)
	struct UImage* IMG_ClanMarkBG_Enemy; // 0x330(0x08)
	struct UImage* IMG_ClanMarkFG_Enemy; // 0x338(0x08)
	struct UPDTextBlock* TB_UserName_Foe; // 0x340(0x08)
	struct UPDRoundRecordItem* EnemyRecord01; // 0x348(0x08)
	struct UPDRoundRecordItem* EnemyRecord02; // 0x350(0x08)
	struct UPDRoundRecordItem* EnemyRecord03; // 0x358(0x08)
	struct UPDRoundRecordItem* EnemyRecord04; // 0x360(0x08)
	struct UPDRoundRecordItem* EnemyRecord05; // 0x368(0x08)
	struct UPDRoundRecordItem* EnemyRecord06; // 0x370(0x08)
	struct UPDRoundReplayer* RoundReplayer; // 0x378(0x08)
	struct TArray<struct UPDRoundRecordItem*> EnemyKeyRecords; // 0x380(0x10)
};

// Class ProjectD.PDRoundWaitUI
// Size: 0x298 (Inherited: 0x290)
struct UPDRoundWaitUI : UPDIngameModeWidget {
	struct UPDTextBlock* TB_Desc; // 0x290(0x08)
};

// Class ProjectD.PDScreenMarkerLoot
// Size: 0x2b8 (Inherited: 0x2a0)
struct UPDScreenMarkerLoot : UPDHUDIconBaseUI {
	struct UCanvasPanel* CP_Root; // 0x2a0(0x08)
	struct UPDCircleProgressModule* PB_LootTime; // 0x2a8(0x08)
	char pad_2B0[0x8]; // 0x2b0(0x08)
};

// Class ProjectD.PDScreenToGIF
// Size: 0xb0 (Inherited: 0x28)
struct UPDScreenToGIF : UObject {
	char pad_28[0x88]; // 0x28(0x88)

	void TimerFunc_FrameTick(); // Function ProjectD.PDScreenToGIF.TimerFunc_FrameTick // (Final|Native|Protected) // @ game+0x1833cc0
};

// Class ProjectD.PDSeedProgressModule
// Size: 0x2d8 (Inherited: 0x288)
struct UPDSeedProgressModule : UPDUserWidget {
	struct FDelegate GetProgressPerDelegate; // 0x288(0x10)
	struct UPDTextBlock* TB_SeedDesc; // 0x298(0x08)
	struct UPDTextBlock* TB_PerText; // 0x2a0(0x08)
	struct UProgressBar* PRG_SeedSet; // 0x2a8(0x08)
	struct UImage* IMG_Icon; // 0x2b0(0x08)
	struct UImage* IMG_GaugeLight; // 0x2b8(0x08)
	struct UCanvasPanel* CP_Gauge; // 0x2c0(0x08)
	char pad_2C8[0x10]; // 0x2c8(0x10)
};

// Class ProjectD.PDShowBowStringNotify
// Size: 0x50 (Inherited: 0x48)
struct UPDShowBowStringNotify : UPDBaseAnimNotify {
	enum class EBowStringAction Action; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class ProjectD.PDSkeletalMeshComponent
// Size: 0xb20 (Inherited: 0xad0)
struct UPDSkeletalMeshComponent : USkeletalMeshComponent {
	char bEnableLag : 1; // 0xac8(0x01)
	float LagSpeed; // 0xacc(0x04)
	float LagMaxTimeStep; // 0xad0(0x04)
	float DistanceThreashold; // 0xad4(0x04)
	char m_bEnableSystemLag : 1; // 0xad8(0x01)
	char m_bEnableLag : 1; // 0xad8(0x01)
	char m_bUpdateLag : 1; // 0xad8(0x01)
	char pad_ADC_4 : 4; // 0xadc(0x01)
	char pad_ADD[0x7]; // 0xadd(0x07)
	float m_OrgRelativeLocationZ; // 0xae4(0x04)
	struct FVector PreviousDesiredLoc; // 0xae8(0x0c)
	struct FVector CurrentCharacterLoc; // 0xaf4(0x0c)
	float m_fCurrentRelativeZOffset; // 0xb00(0x04)
	struct FVector RelativeSocketLocation; // 0xb04(0x0c)
	struct ACharacter* m_pOwnerCharacter; // 0xb10(0x08)
	struct USkeletalMeshComponent* m_pTargetSkeletalMesh; // 0xb18(0x08)
};

// Class ProjectD.PDSkeletalMeshLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPDSkeletalMeshLibrary : UBlueprintFunctionLibrary {

	struct USkeletalMesh* MergeMeshes(struct FSkeletalMeshMergeParams& Params); // Function ProjectD.PDSkeletalMeshLibrary.MergeMeshes // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1832e40
};

// Class ProjectD.PDSkyViewUI
// Size: 0x358 (Inherited: 0x288)
struct UPDSkyViewUI : UPDUserWidget {
	struct UCanvasPanel* CP_Map; // 0x288(0x08)
	struct UCanvasPanel* CP_DefuseBomb; // 0x290(0x08)
	struct UCanvasPanel* CP_MissionScore; // 0x298(0x08)
	struct UWidgetSwitcher* WS_BattleStyle; // 0x2a0(0x08)
	struct URichTextBlock* RTB_SeedAlert; // 0x2a8(0x08)
	struct UPDTextBlock* TB_AtkStr; // 0x2b0(0x08)
	struct UPDTextBlock* TB_DefStr; // 0x2b8(0x08)
	struct UPDGameMapModule* GameMap; // 0x2c0(0x08)
	struct UImage* IMG_Agent; // 0x2c8(0x08)
	struct UImage* IMG_PlayerNum; // 0x2d0(0x08)
	struct UTexture* PlayerTextureNum01; // 0x2d8(0x08)
	struct UTexture* PlayerTextureNum02; // 0x2e0(0x08)
	struct UTexture* PlayerTextureNum03; // 0x2e8(0x08)
	struct UTexture* PlayerTextureNum04; // 0x2f0(0x08)
	struct UTexture* PlayerTextureNum05; // 0x2f8(0x08)
	struct UCanvasPanel* CP_Recently01; // 0x300(0x08)
	struct UCanvasPanel* CP_Recently02; // 0x308(0x08)
	struct UImage* IMG_DamageAgent; // 0x310(0x08)
	struct UImage* IMG_FundAgent; // 0x318(0x08)
	struct UImage* IMG_PlayerNum01; // 0x320(0x08)
	struct UImage* IMG_PlayerNum02; // 0x328(0x08)
	struct UPDTextBlock* TB_DamageAgent; // 0x330(0x08)
	struct UPDTextBlock* TB_FundAgent; // 0x338(0x08)
	char pad_340[0x18]; // 0x340(0x18)
};

// Class ProjectD.PDSlidableActor
// Size: 0x248 (Inherited: 0x220)
struct APDSlidableActor : AActor {
	char pad_220[0x10]; // 0x220(0x10)
	enum class EPDSlidableType SlidableType; // 0x230(0x01)
	char pad_231[0x3]; // 0x231(0x03)
	float ArrowDegree; // 0x234(0x04)
	struct UBoxComponent* Box; // 0x238(0x08)
	char pad_240[0x8]; // 0x240(0x08)
};

// Class ProjectD.PDSlider
// Size: 0x680 (Inherited: 0x288)
struct UPDSlider : UPDUserWidget {
	struct UPDCustomSlider* Slider; // 0x288(0x08)
	struct UPDTextBlock* Value; // 0x290(0x08)
	struct UEditableText* EB_Value; // 0x298(0x08)
	struct FSlateFontInfo Font; // 0x2a0(0x50)
	struct FLinearColor BarColor; // 0x2f0(0x10)
	struct FSlateColor TextColor; // 0x300(0x28)
	struct FSliderStyle SliderStyle; // 0x328(0x340)
	float StepSize; // 0x668(0x04)
	char pad_66C[0x14]; // 0x66c(0x14)

	void OnSliderTextCommitted(struct FText& InText, enum class ETextCommit CommitMethod); // Function ProjectD.PDSlider.OnSliderTextCommitted // (Final|Native|Protected|HasOutParms) // @ game+0x1833680
	void OnSliderTextChanged(struct FText& InText); // Function ProjectD.PDSlider.OnSliderTextChanged // (Final|Native|Protected|HasOutParms) // @ game+0x18335a0
};

// Class ProjectD.PDSoloModeComponent
// Size: 0x4e0 (Inherited: 0x4a0)
struct UPDSoloModeComponent : UStaticMeshComponent {
	struct FActiveRangeInfo ArraySpawnInfo; // 0x498(0x24)
	char pad_4C4[0x1c]; // 0x4c4(0x1c)
};

// Class ProjectD.PDSoundOptionUI
// Size: 0x360 (Inherited: 0x338)
struct UPDSoundOptionUI : UPDOptionUIBase {
	struct UPDTabButton* SoundSettingBtn; // 0x338(0x08)
	struct UPDTabButton* VoiceSettingBtn; // 0x340(0x08)
	struct UScrollBox* SB_Sounds; // 0x348(0x08)
	char pad_350[0x10]; // 0x350(0x10)

	void OnVoiceChatTeamPushToTalk(); // Function ProjectD.PDSoundOptionUI.OnVoiceChatTeamPushToTalk // (Final|Native|Private) // @ game+0x1833ca0
	void OnVoiceChatTeamOpenMic(); // Function ProjectD.PDSoundOptionUI.OnVoiceChatTeamOpenMic // (Final|Native|Private) // @ game+0x1833c80
	void OnVoiceChatSensitiveChanged(float Value); // Function ProjectD.PDSoundOptionUI.OnVoiceChatSensitiveChanged // (Final|Native|Private) // @ game+0x1833c00
	void OnVoiceChatOutputVolumeChanged(float Value); // Function ProjectD.PDSoundOptionUI.OnVoiceChatOutputVolumeChanged // (Final|Native|Private) // @ game+0x1833b80
	void OnVoiceChatNoiseFloorChanged(float Value); // Function ProjectD.PDSoundOptionUI.OnVoiceChatNoiseFloorChanged // (Final|Native|Private) // @ game+0x1833b00
	void OnVoiceChatInputVolumeChanged(float Value); // Function ProjectD.PDSoundOptionUI.OnVoiceChatInputVolumeChanged // (Final|Native|Private) // @ game+0x1833a80
	void OnVoiceChatEnableChanged(bool Value); // Function ProjectD.PDSoundOptionUI.OnVoiceChatEnableChanged // (Final|Native|Private) // @ game+0x18339f0
	void OnSpatialChanged(bool Value); // Function ProjectD.PDSoundOptionUI.OnSpatialChanged // (Final|Native|Private) // @ game+0x18338e0
	void OnSoundPresetChanged(struct FString sItem, enum class ESelectInfo SelType); // Function ProjectD.PDSoundOptionUI.OnSoundPresetChanged // (Final|Native|Private) // @ game+0x18337b0
	void OnSfxVolumeChanged(float Value); // Function ProjectD.PDSoundOptionUI.OnSfxVolumeChanged // (Final|Native|Private) // @ game+0x1833520
	void OnOperatorVolumeChanged(float Value); // Function ProjectD.PDSoundOptionUI.OnOperatorVolumeChanged // (Final|Native|Private) // @ game+0x18334a0
	void OnMasterVolumeChanged(float Value); // Function ProjectD.PDSoundOptionUI.OnMasterVolumeChanged // (Final|Native|Private) // @ game+0x1833420
	void OnLobbySfxVolumeChanged(float Value); // Function ProjectD.PDSoundOptionUI.OnLobbySfxVolumeChanged // (Final|Native|Private) // @ game+0x18333a0
	void OnLobbyBgmVolumeChanged(float Value); // Function ProjectD.PDSoundOptionUI.OnLobbyBgmVolumeChanged // (Final|Native|Private) // @ game+0x1833320
	void OnInputKeySelected(struct UPDOptionContent* Content); // Function ProjectD.PDSoundOptionUI.OnInputKeySelected // (Final|Native|Private) // @ game+0x18332a0
	void OnHRTFChanged(bool Value); // Function ProjectD.PDSoundOptionUI.OnHRTFChanged // (Final|Native|Private) // @ game+0x1833210
	void OnClickVoiceSettingButton(); // Function ProjectD.PDSoundOptionUI.OnClickVoiceSettingButton // (Final|Native|Private) // @ game+0x18331f0
	void OnClickSoundSettingButton(); // Function ProjectD.PDSoundOptionUI.OnClickSoundSettingButton // (Final|Native|Private) // @ game+0x18331d0
	void OnCharacterVoiceVolumeChanged(float Value); // Function ProjectD.PDSoundOptionUI.OnCharacterVoiceVolumeChanged // (Final|Native|Private) // @ game+0x1833090
	void OnBgmVolumeChanged(float Value); // Function ProjectD.PDSoundOptionUI.OnBgmVolumeChanged // (Final|Native|Private) // @ game+0x1833010
	void OnBackGroundVolumePlayChanged(bool Value); // Function ProjectD.PDSoundOptionUI.OnBackGroundVolumePlayChanged // (Final|Native|Private) // @ game+0x1832f80
};

// Class ProjectD.PDSpectatorPlayerEntry
// Size: 0x498 (Inherited: 0x288)
struct UPDSpectatorPlayerEntry : UPDUserWidget {
	struct UImage* IMG_PlayerPic; // 0x288(0x08)
	struct UImage* IMG_PlayerPic_Dead; // 0x290(0x08)
	struct UPDTextBlock* T_PlayerName; // 0x298(0x08)
	struct UBorder* B_PlayerCode; // 0x2a0(0x08)
	struct UPDTextBlock* T_PlayerNum; // 0x2a8(0x08)
	struct UWidgetSwitcher* WS_PlayerState; // 0x2b0(0x08)
	struct UWidgetSwitcher* WS_IconState; // 0x2b8(0x08)
	struct UProgressBar* PB_HP; // 0x2c0(0x08)
	struct UProgressBar* PB_Groggy; // 0x2c8(0x08)
	struct UWidgetSwitcher* WS_Weapon_01; // 0x2d0(0x08)
	struct UImage* IMG_Weapon_01; // 0x2d8(0x08)
	struct UWidgetSwitcher* WS_Weapon_02; // 0x2e0(0x08)
	struct UImage* IMG_Weapon_02; // 0x2e8(0x08)
	struct UWidgetSwitcher* WS_Weapon_03; // 0x2f0(0x08)
	struct UImage* IMG_Weapon_03; // 0x2f8(0x08)
	struct UWidgetSwitcher* WS_Weapon_Melee; // 0x300(0x08)
	struct UImage* IMG_Weapon_Melee; // 0x308(0x08)
	struct UImage* IMG_SlotBG01; // 0x310(0x08)
	struct UImage* IMG_SlotBG02; // 0x318(0x08)
	struct UImage* IMG_SlotBG03; // 0x320(0x08)
	struct UImage* IMG_SlotBGMelee; // 0x328(0x08)
	char pad_330[0x158]; // 0x330(0x158)
	struct TArray<struct UImage*> IMG_BGList; // 0x488(0x10)
};

// Class ProjectD.PDSpectatorEntryAlly
// Size: 0x5a0 (Inherited: 0x498)
struct UPDSpectatorEntryAlly : UPDSpectatorPlayerEntry {
	struct UImage* IMG_PlayerState; // 0x498(0x08)
	struct UPDArmorGauge* ArmorGauge; // 0x4a0(0x08)
	struct UWidgetSwitcher* WS_Weapon_04; // 0x4a8(0x08)
	struct UWidgetSwitcher* WS_Weapon_Th1; // 0x4b0(0x08)
	struct UImage* IMG_Weapon_Th1; // 0x4b8(0x08)
	struct UPDTextBlock* TB_Weapon_Th1; // 0x4c0(0x08)
	struct UWidgetSwitcher* WS_Weapon_Th2; // 0x4c8(0x08)
	struct UImage* IMG_Weapon_Th2; // 0x4d0(0x08)
	struct UPDTextBlock* TB_Weapon_Th2; // 0x4d8(0x08)
	struct UWidgetSwitcher* WS_Weapon_05; // 0x4e0(0x08)
	struct UImage* IMG_Weapon_05; // 0x4e8(0x08)
	struct UPDTextBlock* TB_Weapon_05; // 0x4f0(0x08)
	struct UWidgetSwitcher* WS_Weapon_06; // 0x4f8(0x08)
	struct UImage* IMG_Weapon_06; // 0x500(0x08)
	struct UPDTextBlock* TB_Weapon_06; // 0x508(0x08)
	struct UWidgetSwitcher* WS_Weapon_07; // 0x510(0x08)
	struct UImage* IMG_Weapon_07; // 0x518(0x08)
	struct UPDTextBlock* TB_Weapon_07; // 0x520(0x08)
	struct UImage* IMG_ModeItem; // 0x528(0x08)
	struct UPDTextBlock* TB_ModeItem_Empty; // 0x530(0x08)
	struct UImage* IMG_PowerArmor; // 0x538(0x08)
	struct UPDTextBlock* TB_PowerArmor_Empty; // 0x540(0x08)
	struct UImage* IMG_RevivalKit; // 0x548(0x08)
	struct UPDTextBlock* TB_RevivalKit_Empty; // 0x550(0x08)
	struct UImage* IMG_Outline_Self; // 0x558(0x08)
	struct UImage* IMG_Outline_Target; // 0x560(0x08)
	struct UImage* IMG_SlotBG04; // 0x568(0x08)
	struct UImage* IMG_SlotBG05; // 0x570(0x08)
	struct UImage* IMG_SlotBG06; // 0x578(0x08)
	struct UImage* IMG_SlotBG07; // 0x580(0x08)
	struct UImage* IMG_SlotBGSeed; // 0x588(0x08)
	struct UImage* IMG_SlotBGRevival; // 0x590(0x08)
	struct UImage* IMG_SlotBGAgent; // 0x598(0x08)
};

// Class ProjectD.PDSpectatorTargetInfo
// Size: 0x4e8 (Inherited: 0x288)
struct UPDSpectatorTargetInfo : UPDUserWidget {
	struct UCanvasPanel* CP_Health; // 0x288(0x08)
	struct UProgressBar* PB_Health; // 0x290(0x08)
	struct UProgressBar* PB_Health_Expect; // 0x298(0x08)
	struct UProgressBar* PB_Health_Inc; // 0x2a0(0x08)
	struct UProgressBar* PB_Health_Dec; // 0x2a8(0x08)
	struct UPDTextBlock* TB_Health; // 0x2b0(0x08)
	struct UPDTextBlock* TB_TotalHealth; // 0x2b8(0x08)
	struct UPDTextBlock* TB_Health_w; // 0x2c0(0x08)
	struct UPDTextBlock* TB_TotalHealth_w; // 0x2c8(0x08)
	struct UCanvasPanel* CP_BlackMask; // 0x2d0(0x08)
	struct UCanvasPanel* CP_WhiteMask; // 0x2d8(0x08)
	struct FVector2D HealthSize; // 0x2e0(0x08)
	char pad_2E8[0x18]; // 0x2e8(0x18)
	struct UCanvasPanel* CP_GroggyHP; // 0x300(0x08)
	struct UProgressBar* PB_GroggyHP; // 0x308(0x08)
	struct UPDArmorGaugeDetail* ArmorGauge; // 0x310(0x08)
	struct UPDPlayerEquipmentDetail* EquipmentDetail; // 0x318(0x08)
	struct UImage* IMG_KeyFill_Q; // 0x320(0x08)
	struct UImage* IMG_KeyFill_W; // 0x328(0x08)
	struct UImage* IMG_KeyFill_E; // 0x330(0x08)
	struct UImage* IMG_KeyFill_R; // 0x338(0x08)
	struct UImage* IMG_KeyFill_A; // 0x340(0x08)
	struct UImage* IMG_KeyFill_S; // 0x348(0x08)
	struct UImage* IMG_KeyFill_D; // 0x350(0x08)
	struct UImage* IMG_KeyFill_F; // 0x358(0x08)
	struct UImage* IMG_KeyFill_Z; // 0x360(0x08)
	struct UImage* IMG_KeyFill_X; // 0x368(0x08)
	struct UImage* IMG_KeyFill_C; // 0x370(0x08)
	struct UImage* IMG_KeyFill_V; // 0x378(0x08)
	struct UImage* IMG_KeyFill_LShift; // 0x380(0x08)
	struct UImage* IMG_KeyFill_LCtrl; // 0x388(0x08)
	struct UImage* IMG_KeyFill_Space; // 0x390(0x08)
	struct UImage* IMG_KeyFill_MLB; // 0x398(0x08)
	struct UImage* IMG_KeyFill_MRB; // 0x3a0(0x08)
	struct UImage* IMG_KeyFill_MMB; // 0x3a8(0x08)
	struct UImage* IMG_KeyFill_MWU; // 0x3b0(0x08)
	struct UImage* IMG_KeyFill_MWD; // 0x3b8(0x08)
	struct UPDTextBlock* TB_Key_Q; // 0x3c0(0x08)
	struct UPDTextBlock* TB_Key_W; // 0x3c8(0x08)
	struct UPDTextBlock* TB_Key_E; // 0x3d0(0x08)
	struct UPDTextBlock* TB_Key_R; // 0x3d8(0x08)
	struct UPDTextBlock* TB_Key_A; // 0x3e0(0x08)
	struct UPDTextBlock* TB_Key_S; // 0x3e8(0x08)
	struct UPDTextBlock* TB_Key_D; // 0x3f0(0x08)
	struct UPDTextBlock* TB_Key_F; // 0x3f8(0x08)
	struct UPDTextBlock* TB_Key_Z; // 0x400(0x08)
	struct UPDTextBlock* TB_Key_X; // 0x408(0x08)
	struct UPDTextBlock* TB_Key_C; // 0x410(0x08)
	struct UPDTextBlock* TB_Key_V; // 0x418(0x08)
	struct UPDTextBlock* TB_Key_LShift; // 0x420(0x08)
	struct UPDTextBlock* TB_Key_LCtrl; // 0x428(0x08)
	struct UPDTextBlock* TB_Key_Space; // 0x430(0x08)
	char pad_438[0xb0]; // 0x438(0xb0)
};

// Class ProjectD.PDSpectatorUI
// Size: 0x320 (Inherited: 0x290)
struct UPDSpectatorUI : UPDIngameModeWidget {
	struct UPDTextBlock* TB_Name; // 0x290(0x08)
	struct UPDSpectatorTargetInfo* TargetInfo; // 0x298(0x08)
	struct UVerticalBox* VB_AllyTeam; // 0x2a0(0x08)
	struct UVerticalBox* VB_EnemyTeam; // 0x2a8(0x08)
	struct UPanelWidget* PW_CheerList; // 0x2b0(0x08)
	struct UCanvasPanel* CP_CheerTarget; // 0x2b8(0x08)
	struct UHorizontalBox* HB_UserData; // 0x2c0(0x08)
	struct UImage* IMG_Medal1; // 0x2c8(0x08)
	struct UImage* IMG_Medal2; // 0x2d0(0x08)
	struct UImage* IMG_Medal3; // 0x2d8(0x08)
	struct TArray<struct UPDSpectatorPlayerEntry*> AllyPlayers; // 0x2e0(0x10)
	struct TArray<struct UPDSpectatorPlayerEntry*> EnemyPlayers; // 0x2f0(0x10)
	struct TArray<struct UWidget*> Cheers; // 0x300(0x10)
	char pad_310[0x10]; // 0x310(0x10)
};

// Class ProjectD.PDSplineCamera
// Size: 0x7e0 (Inherited: 0x7b0)
struct APDSplineCamera : ACameraActor {
	struct USplineComponent* SplineComp; // 0x7b0(0x08)
	struct UStaticMeshComponent* OriginComp; // 0x7b8(0x08)
	float PlayingTime; // 0x7c0(0x04)
	float TotalTime; // 0x7c4(0x04)
	bool IsLoop; // 0x7c8(0x01)
	bool IsPlaying; // 0x7c9(0x01)
	enum class ESplineRotation RotationType; // 0x7ca(0x01)
	char pad_7CB[0x5]; // 0x7cb(0x05)
	struct AActor* LookAtTarget; // 0x7d0(0x08)
	enum class ESplineTrace TraceMode; // 0x7d8(0x01)
	char pad_7D9[0x7]; // 0x7d9(0x07)
};

// Class ProjectD.PDSplineCameraTimelineComponent
// Size: 0x108 (Inherited: 0xb0)
struct UPDSplineCameraTimelineComponent : UPDTimelineBaseComponent {
	struct TArray<struct FEventData> EventDataArray; // 0xb0(0x10)
	char pad_C0[0x48]; // 0xc0(0x48)
};

// Class ProjectD.PDSplineComponent
// Size: 0x510 (Inherited: 0x500)
struct UPDSplineComponent : USplineComponent {
	struct TArray<struct FRuntimeFloatCurve> TimelineCurveList; // 0x4f8(0x10)
};

// Class ProjectD.PDSplitObject
// Size: 0x270 (Inherited: 0x220)
struct APDSplitObject : AActor {
	char pad_220[0x10]; // 0x220(0x10)
	struct TArray<struct UPDSplitObjectComponent*> SplitObjectCompList; // 0x230(0x10)
	struct TArray<enum class EDamageType> EffectiveDamages; // 0x240(0x10)
	struct FString DestructSound; // 0x250(0x10)
	char pad_260[0x10]; // 0x260(0x10)
};

// Class ProjectD.PDSplitObject2x2
// Size: 0x270 (Inherited: 0x270)
struct APDSplitObject2x2 : APDSplitObject {
};

// Class ProjectD.PDSplitObject3x3
// Size: 0x270 (Inherited: 0x270)
struct APDSplitObject3x3 : APDSplitObject {
};

// Class ProjectD.PDSplitObjectComponent
// Size: 0x4c0 (Inherited: 0x4a0)
struct UPDSplitObjectComponent : UStaticMeshComponent {
	bool RootNode; // 0x498(0x01)
	int32_t HP; // 0x49c(0x04)
	int32_t DestructEffectID; // 0x4a0(0x04)
	char pad_4A9[0x17]; // 0x4a9(0x17)
};

// Class ProjectD.PDStartUI
// Size: 0x2c0 (Inherited: 0x288)
struct UPDStartUI : UPDSceneBaseUI {
	struct UCanvasPanel* CP_Ratings; // 0x288(0x08)
	struct UBorder* B_MovieBG; // 0x290(0x08)
	struct UWidget* IMG_Movie; // 0x298(0x08)
	struct UMediaPlayer* SplashMediaPlayer; // 0x2a0(0x08)
	struct FString SplashFilePath; // 0x2a8(0x10)
	char pad_2B8[0x8]; // 0x2b8(0x08)

	void OnSplashMovieOpened(); // Function ProjectD.PDStartUI.OnSplashMovieOpened // (Final|Native|Public|BlueprintCallable) // @ game+0x18368d0
	void OnSplashMovieClosed(); // Function ProjectD.PDStartUI.OnSplashMovieClosed // (Final|Native|Public|BlueprintCallable) // @ game+0x18368b0
	void OnInitMediaPlayer(); // Function ProjectD.PDStartUI.OnInitMediaPlayer // (Event|Public|BlueprintEvent) // @ game+0x1b61b60
};

// Class ProjectD.PDStateBase
// Size: 0x40 (Inherited: 0x28)
struct UPDStateBase : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UPDStateComponent* OwnerStateComponent; // 0x30(0x08)
	struct APDPlayerCharacter* OwnerPlayerCharacter; // 0x38(0x08)
};

// Class ProjectD.PDStateClimb
// Size: 0x40 (Inherited: 0x40)
struct UPDStateClimb : UPDStateBase {
};

// Class ProjectD.PDStateDefault
// Size: 0x40 (Inherited: 0x40)
struct UPDStateDefault : UPDStateBase {
};

// Class ProjectD.PDStateGaugeUI
// Size: 0x2b0 (Inherited: 0x290)
struct UPDStateGaugeUI : UPDIngameModeWidget {
	struct UCanvasPanel* CP_GroggyHP; // 0x290(0x08)
	struct UProgressBar* PB_GroggyHP; // 0x298(0x08)
	struct UCanvasPanel* CP_StaminaGauge; // 0x2a0(0x08)
	struct UProgressBar* PB_StaminaGauge; // 0x2a8(0x08)
};

// Class ProjectD.PDStateGroggy
// Size: 0x48 (Inherited: 0x40)
struct UPDStateGroggy : UPDStateBase {
	char pad_40[0x8]; // 0x40(0x08)
};

// Class ProjectD.PDStateSlide
// Size: 0x50 (Inherited: 0x40)
struct UPDStateSlide : UPDStateBase {
	char pad_40[0x10]; // 0x40(0x10)
};

// Class ProjectD.PDStateZipline
// Size: 0x40 (Inherited: 0x40)
struct UPDStateZipline : UPDStateBase {
};

// Class ProjectD.PDStaticActorEntity
// Size: 0x230 (Inherited: 0x220)
struct APDStaticActorEntity : AActor {
	char pad_220[0x10]; // 0x220(0x10)
};

// Class ProjectD.PDStatusBoardGameMap
// Size: 0x450 (Inherited: 0x3c0)
struct UPDStatusBoardGameMap : UPDGameMapModule {
	struct UCanvasPanel* PaintZone; // 0x3c0(0x08)
	char pad_3C8[0x88]; // 0x3c8(0x88)
};

// Class ProjectD.PDStatusBoardPlayerInfo_Ally
// Size: 0x3f8 (Inherited: 0x398)
struct UPDStatusBoardPlayerInfo_Ally : UPDStatusBoardPlayerInfoBase {
	struct UPDTextBlock* T_PlayerNum; // 0x398(0x08)
	struct UImage* IMG_SlotBg_Me; // 0x3a0(0x08)
	struct UCanvasPanel* CP_Voice; // 0x3a8(0x08)
	struct UPDButton* Btn_Voice_Active; // 0x3b0(0x08)
	struct UPDButton* Btn_Voice_Mute; // 0x3b8(0x08)
	struct UWidgetSwitcher* WS_VoiceState; // 0x3c0(0x08)
	struct UWidgetSwitcher* WS_VolumeState; // 0x3c8(0x08)
	struct USlider* Sd_Volume_Active; // 0x3d0(0x08)
	struct UPDTextBlock* T_Volume_Active; // 0x3d8(0x08)
	struct USlider* Sd_Volume_Muted; // 0x3e0(0x08)
	struct UPDTextBlock* T_Volume_Muted; // 0x3e8(0x08)
	char pad_3F0[0x8]; // 0x3f0(0x08)

	void OnVoiceVolumeChanged(float Value); // Function ProjectD.PDStatusBoardPlayerInfo_Ally.OnVoiceVolumeChanged // (Final|Native|Protected) // @ game+0x1836a10
	void OnClickVoiceMute(); // Function ProjectD.PDStatusBoardPlayerInfo_Ally.OnClickVoiceMute // (Final|Native|Protected) // @ game+0x1836870
	void OnClickVoiceAvtive(); // Function ProjectD.PDStatusBoardPlayerInfo_Ally.OnClickVoiceAvtive // (Final|Native|Protected) // @ game+0x1836850
};

// Class ProjectD.PDStatusBoardPlayerInfo_Enemy
// Size: 0x398 (Inherited: 0x398)
struct UPDStatusBoardPlayerInfo_Enemy : UPDStatusBoardPlayerInfoBase {
};

// Class ProjectD.PDStatusBoardRoundList
// Size: 0x290 (Inherited: 0x288)
struct UPDStatusBoardRoundList : UPDUserWidget {
	struct UVerticalBox* VB_Container; // 0x288(0x08)
};

// Class ProjectD.PDStatusBoardRoundListItem
// Size: 0x2c0 (Inherited: 0x288)
struct UPDStatusBoardRoundListItem : UPDUserWidget {
	struct UPDButton* BTN_Slot; // 0x288(0x08)
	struct UPDTextBlock* T_Round; // 0x290(0x08)
	struct UPDTextBlock* T_Match; // 0x298(0x08)
	struct UPDTextBlock* T_Time; // 0x2a0(0x08)
	char pad_2A8[0x18]; // 0x2a8(0x18)

	void OnClickRoundListItem(); // Function ProjectD.PDStatusBoardRoundListItem.OnClickRoundListItem // (Final|Native|Private) // @ game+0x1839c90
};

// Class ProjectD.PDStatusBoardRoundResultItem
// Size: 0x300 (Inherited: 0x288)
struct UPDStatusBoardRoundResultItem : UPDUserWidget {
	struct UWidgetSwitcher* WS_ResultType; // 0x288(0x08)
	struct UImage* IMG_ModeIcon; // 0x290(0x08)
	struct UImage* IMG_SLotBg; // 0x298(0x08)
	struct UPDTextBlock* T_RoundInfo; // 0x2a0(0x08)
	struct UPDTextBlock* T_Win; // 0x2a8(0x08)
	struct UImage* IMG_CauseIcon; // 0x2b0(0x08)
	struct UHorizontalBox* HB_ModePlayer; // 0x2b8(0x08)
	struct UPDTextBlock* T_PlayerName; // 0x2c0(0x08)
	struct UPDTextBlock* T_Desc; // 0x2c8(0x08)
	struct UPaperSprite* AttackImg; // 0x2d0(0x08)
	struct UPaperSprite* DefenceImg; // 0x2d8(0x08)
	struct UPaperSprite* InstallImg; // 0x2e0(0x08)
	struct UPaperSprite* DeactiveImg; // 0x2e8(0x08)
	struct UPaperSprite* KilledImg; // 0x2f0(0x08)
	struct UPaperSprite* TimeOutImg; // 0x2f8(0x08)
};

// Class ProjectD.PDStatusBoardSeedSlot
// Size: 0x2d8 (Inherited: 0x288)
struct UPDStatusBoardSeedSlot : UPDUserWidget {
	struct UImage* IMG_SEED; // 0x288(0x08)
	struct UBorder* B_SEED; // 0x290(0x08)
	struct FLinearColor MouseNormalColor; // 0x298(0x10)
	struct FLinearColor MouseOverColor; // 0x2a8(0x10)
	struct UDragDropOperation* DragDropOperation; // 0x2b8(0x08)
	struct UPDInvenDrag* InvenDrag; // 0x2c0(0x08)
	char pad_2C8[0x10]; // 0x2c8(0x10)
};

// Class ProjectD.PDStatusBoardUpgradeSlot
// Size: 0x338 (Inherited: 0x288)
struct UPDStatusBoardUpgradeSlot : UPDUserWidget {
	struct UPDTextBlock* T_Level; // 0x288(0x08)
	struct UPDTextBlock* T_Name; // 0x290(0x08)
	struct UImage* IMG_SlotShadow; // 0x298(0x08)
	struct UImage* IMG_SLotBg; // 0x2a0(0x08)
	struct UImage* IMG_SlotOutline; // 0x2a8(0x08)
	struct UProgressBar* PB_Upgrade_01; // 0x2b0(0x08)
	struct UProgressBar* PB_Upgrade_02; // 0x2b8(0x08)
	struct UProgressBar* PB_Upgrade_03; // 0x2c0(0x08)
	struct UProgressBar* PB_Upgrade_04; // 0x2c8(0x08)
	struct UProgressBar* PB_Upgrade_05; // 0x2d0(0x08)
	struct TArray<struct UProgressBar*> GaugeList; // 0x2d8(0x10)
	struct FLinearColor GaugeColor; // 0x2e8(0x10)
	struct FText UpgradeGroup; // 0x2f8(0x18)
	struct FText UpgradeGroupName; // 0x310(0x18)
	bool IsEnemy; // 0x328(0x01)
	char pad_329[0xf]; // 0x329(0x0f)
};

// Class ProjectD.PDStoppingPowerComponent
// Size: 0x240 (Inherited: 0x1f0)
struct UPDStoppingPowerComponent : USceneComponent {
	struct UAnimSequence* SP_HitFrontAnim; // 0x1f0(0x08)
	struct UAnimSequence* SP_HitBackAnim; // 0x1f8(0x08)
	struct UAnimSequence* SP_HitLeftAnim; // 0x200(0x08)
	struct UAnimSequence* SP_HitRightAnim; // 0x208(0x08)
	char pad_210[0x30]; // 0x210(0x30)
};

// Class ProjectD.PDSubtitleUI
// Size: 0x2b8 (Inherited: 0x288)
struct UPDSubtitleUI : UPDUserWidget {
	struct UVerticalBox* VB_Subtitle; // 0x288(0x08)
	struct UPDTextBlock* TB_CopyTextBlock; // 0x290(0x08)
	struct UImage* IMG_SubtitleBG; // 0x298(0x08)
	int32_t MaxSubtitleNum; // 0x2a0(0x04)
	float SubtitleDestroyTime; // 0x2a4(0x04)
	char pad_2A8[0x10]; // 0x2a8(0x10)
};

// Class ProjectD.PDSystemMessageUI
// Size: 0x2b8 (Inherited: 0x288)
struct UPDSystemMessageUI : UPDUserWidget {
	struct UCanvasPanel* CP_SysMsg; // 0x288(0x08)
	struct UPDTextBlock* TB_Text; // 0x290(0x08)
	float DefaultDuration; // 0x298(0x04)
	float RollInterval; // 0x29c(0x04)
	float RollSpeed; // 0x2a0(0x04)
	float StartOffset; // 0x2a4(0x04)
	char pad_2A8[0x10]; // 0x2a8(0x10)
};

// Class ProjectD.PDTabButton
// Size: 0xe20 (Inherited: 0xc50)
struct UPDTabButton : UPDButton {
	char pad_C50[0x20]; // 0xc50(0x20)
	struct UWidgetSwitcher* TabBtnStateSwitcher; // 0xc70(0x08)
	struct UBorder* SelectBG; // 0xc78(0x08)
	struct UPDTextBlock* SelectText; // 0xc80(0x08)
	struct UBorder* Selected_Outline; // 0xc88(0x08)
	struct FSlateBrush SelectedBGStyle; // 0xc90(0x88)
	struct FSlateColor SelectedTextColor; // 0xd18(0x28)
	bool UseSelectedOutline; // 0xd40(0x01)
	char pad_D41[0x7]; // 0xd41(0x07)
	struct FPDButtonOutLine SelectedOutLineStyle; // 0xd48(0xc8)
	char pad_E10[0x8]; // 0xe10(0x08)
	struct UPDTabButtonGroup* Parent; // 0xe18(0x08)
};

// Class ProjectD.PDTabButtonGroup
// Size: 0x38 (Inherited: 0x28)
struct UPDTabButtonGroup : UObject {
	struct TArray<struct UPDTabButton*> TabButtons; // 0x28(0x10)
};

// Class ProjectD.PDTargetScreenUI
// Size: 0x340 (Inherited: 0x290)
struct UPDTargetScreenUI : UPDIngameModeWidget {
	struct UCanvasPanel* CP_Root; // 0x290(0x08)
	struct TMap<int32_t, struct UPDHUDIconBaseUI*> MarkerMap; // 0x298(0x50)
	char pad_2E8[0x58]; // 0x2e8(0x58)
};

// Class ProjectD.PDTeamCharListItem
// Size: 0x2a0 (Inherited: 0x288)
struct UPDTeamCharListItem : UPDUserWidget {
	struct UPDTextBlock* T_PlayerName; // 0x288(0x08)
	struct UImage* IMG_Face; // 0x290(0x08)
	char pad_298[0x8]; // 0x298(0x08)
};

// Class ProjectD.PDTextBlock
// Size: 0x2d0 (Inherited: 0x2a0)
struct UPDTextBlock : UTextBlock {
	struct FMargin TextMargin; // 0x2a0(0x10)
	bool IsKeyButton; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct FText ControlName; // 0x2b8(0x18)
};

// Class ProjectD.PDTutorialModeUI
// Size: 0x430 (Inherited: 0x430)
struct UPDTutorialModeUI : UPDBaseModeUI {
};

// Class ProjectD.PDTutorialNPC
// Size: 0x840 (Inherited: 0x7f0)
struct APDTutorialNPC : APDNpc {
	char pad_7F0[0x18]; // 0x7f0(0x18)
	struct UPDWeaponControlComponent* PDWeaponCtrlComponent; // 0x808(0x08)
	struct UPhysicalAnimationComponent* PhysicalAnimation; // 0x810(0x08)
	char pad_818[0x28]; // 0x818(0x28)
};

// Class ProjectD.PDTutorialPopupUI
// Size: 0x350 (Inherited: 0x2f8)
struct UPDTutorialPopupUI : UPDOKCancelPopupUI {
	struct UWidgetSwitcher* WS_Title; // 0x2f8(0x08)
	struct URichTextBlock* RT_Desc; // 0x300(0x08)
	struct UWidgetSwitcher* WS_Reward_01; // 0x308(0x08)
	struct UImage* IMG_Reward_01; // 0x310(0x08)
	struct UPDTextBlock* T_Reward_01; // 0x318(0x08)
	struct UPDTextBlock* T_Desc_Reward_01; // 0x320(0x08)
	struct UWidgetSwitcher* WS_Reward_02; // 0x328(0x08)
	struct UImage* IMG_Reward_02; // 0x330(0x08)
	struct UPDTextBlock* T_Reward_02; // 0x338(0x08)
	struct UPDTextBlock* T_Desc_Reward_02; // 0x340(0x08)
	char pad_348[0x8]; // 0x348(0x08)
};

// Class ProjectD.PDTutorialQuestItemData
// Size: 0x70 (Inherited: 0x28)
struct UPDTutorialQuestItemData : UObject {
	char pad_28[0x48]; // 0x28(0x48)
};

// Class ProjectD.PDTutorialQuestItem
// Size: 0x308 (Inherited: 0x288)
struct UPDTutorialQuestItem : UPDUserWidget {
	char pad_288[0x8]; // 0x288(0x08)
	struct UVerticalBox* VB_OptionContents; // 0x290(0x08)
	struct UBorder* BD_TutoList; // 0x298(0x08)
	struct UImage* IMG_CHK; // 0x2a0(0x08)
	struct UPDTextBlock* TB_ContentName; // 0x2a8(0x08)
	struct UHorizontalBox* HB_Keys; // 0x2b0(0x08)
	struct UWidgetSwitcher* WS_KeyBase; // 0x2b8(0x08)
	struct UWidgetSwitcher* WS_PressType; // 0x2c0(0x08)
	struct USizeBox* SB_CommaBase; // 0x2c8(0x08)
	struct UPDImage* ScanLine; // 0x2d0(0x08)
	struct UWidgetAnimation* WA_Complete; // 0x2d8(0x08)
	struct UWidgetAnimation* WA_Initialize; // 0x2e0(0x08)
	char pad_2E8[0x20]; // 0x2e8(0x20)

	void OnInitializeAnimationFinished(); // Function ProjectD.PDTutorialQuestItem.OnInitializeAnimationFinished // (Final|Native|Private) // @ game+0x1839d30
	void OnCompleteAnimationFinished(); // Function ProjectD.PDTutorialQuestItem.OnCompleteAnimationFinished // (Final|Native|Private) // @ game+0x1839cb0
};

// Class ProjectD.PDTutorialQuestListUI
// Size: 0x2e0 (Inherited: 0x290)
struct UPDTutorialQuestListUI : UPDIngameModeWidget {
	struct UVerticalBox* VB_List; // 0x290(0x08)
	struct UPDTextBlock* TB_QuestList; // 0x298(0x08)
	struct UPDTextBlock* TB_CurrentPhase; // 0x2a0(0x08)
	struct UPDTextBlock* TB_TotalPhase; // 0x2a8(0x08)
	struct UListView* LV_Quest; // 0x2b0(0x08)
	struct UWidgetAnimation* WA_Intro; // 0x2b8(0x08)
	char pad_2C0[0x20]; // 0x2c0(0x20)

	void ShowNextQuestListItem(); // Function ProjectD.PDTutorialQuestListUI.ShowNextQuestListItem // (Final|Native|Private) // @ game+0x1839e50
	void OnIntroAnimationFinished(); // Function ProjectD.PDTutorialQuestListUI.OnIntroAnimationFinished // (Final|Native|Private) // @ game+0x1839d50
};

// Class ProjectD.PDUniqueLeptonListItemData
// Size: 0x58 (Inherited: 0x28)
struct UPDUniqueLeptonListItemData : UObject {
	char pad_28[0x30]; // 0x28(0x30)
};

// Class ProjectD.PDUniqueLeptonListItem
// Size: 0x2a8 (Inherited: 0x288)
struct UPDUniqueLeptonListItem : UPDUserWidget {
	char pad_288[0x8]; // 0x288(0x08)
	struct UImage* IMG_Item; // 0x290(0x08)
	struct UPDTextBlock* TB_Name; // 0x298(0x08)
	struct UPDTextBlock* TB_Desc; // 0x2a0(0x08)
};

// Class ProjectD.PDUnKnowMarketCoinSlot
// Size: 0x338 (Inherited: 0x288)
struct UPDUnKnowMarketCoinSlot : UPDUserWidget {
	struct UDragDropOperation* DragDropOperation; // 0x288(0x08)
	struct UPDTextBlock* TB_Name; // 0x290(0x08)
	struct UImage* IMG_Item; // 0x298(0x08)
	struct UPDTextBlock* TB_CurNum; // 0x2a0(0x08)
	struct UPDTextBlock* TB_GetCoin; // 0x2a8(0x08)
	struct UPDTextBlock* TB_GetCoin_Fx; // 0x2b0(0x08)
	struct UImage* IMG_Empty; // 0x2b8(0x08)
	struct UBorder* BD_Bg; // 0x2c0(0x08)
	struct UPaperSprite* EmptyPaperSprite; // 0x2c8(0x08)
	struct UCanvasPanel* CP_Dragable; // 0x2d0(0x08)
	struct FLinearColor MouseNormalColor; // 0x2d8(0x10)
	struct FLinearColor MouseOverColor; // 0x2e8(0x10)
	char pad_2F8[0x40]; // 0x2f8(0x40)

	void OnSynchronizeProperties(); // Function ProjectD.PDUnKnowMarketCoinSlot.OnSynchronizeProperties // (Native|Event|Public|BlueprintEvent) // @ game+0x1800000
};

// Class ProjectD.PDUnKnowMarketModeSlot
// Size: 0x328 (Inherited: 0x288)
struct UPDUnKnowMarketModeSlot : UPDUserWidget {
	struct UDragDropOperation* DragDropOperation; // 0x288(0x08)
	struct UPDTextBlock* TB_Name; // 0x290(0x08)
	struct UImage* IMG_Item; // 0x298(0x08)
	struct UPDTextBlock* TB_CurNum; // 0x2a0(0x08)
	struct UImage* IMG_Empty; // 0x2a8(0x08)
	struct UBorder* BD_Bg; // 0x2b0(0x08)
	struct UPaperSprite* EmptyPaperSprite; // 0x2b8(0x08)
	struct FLinearColor MouseNormalColor; // 0x2c0(0x10)
	struct FLinearColor MouseOverColor; // 0x2d0(0x10)
	struct UCanvasPanel* CP_Dragable; // 0x2e0(0x08)
	char pad_2E8[0x40]; // 0x2e8(0x40)

	void OnSynchronizeProperties(); // Function ProjectD.PDUnKnowMarketModeSlot.OnSynchronizeProperties // (Native|Event|Public|BlueprintEvent) // @ game+0x1800000
};

// Class ProjectD.PDUnKnownMarket
// Size: 0x818 (Inherited: 0x290)
struct UPDUnKnownMarket : UPDIngameModeWidget {
	struct UCanvasPanel* CP_InvenArea; // 0x290(0x08)
	struct UListView* LV_PickupList; // 0x298(0x08)
	struct UCanvasPanel* CP_PickupListArea; // 0x2a0(0x08)
	struct UPDInvenListItem* InvenListTitle; // 0x2a8(0x08)
	struct UListView* LV_InvenList; // 0x2b0(0x08)
	struct UCanvasPanel* CP_InvenListArea; // 0x2b8(0x08)
	struct UPDUnKnownMarketEquipSlot* Main1EquipSlot; // 0x2c0(0x08)
	struct UPDUnKnownMarketEquipSlot* Main2EquipSlot; // 0x2c8(0x08)
	struct UPDUnKnownMarketEquipSlot* SubEquipSlot; // 0x2d0(0x08)
	struct USizeBox* SB_Throw_2; // 0x2d8(0x08)
	struct UPDUnKnownMarketItemSlot* ThrowSlot1; // 0x2e0(0x08)
	struct USizeBox* SB_Throw_3; // 0x2e8(0x08)
	struct UPDUnKnownMarketItemSlot* ThrowSlot2; // 0x2f0(0x08)
	struct USizeBox* SB_Recover_2; // 0x2f8(0x08)
	struct UPDUnKnownMarketItemSlot* RecoverSlot1; // 0x300(0x08)
	struct USizeBox* SB_Recover_3; // 0x308(0x08)
	struct UPDUnKnownMarketItemSlot* RecoverSlot2; // 0x310(0x08)
	struct USizeBox* SB_Recover_4; // 0x318(0x08)
	struct UPDUnKnownMarketItemSlot* RecoverSlot3; // 0x320(0x08)
	struct UPDUnKnowMarketModeSlot* ModeSlot; // 0x328(0x08)
	struct UPDUnKnowMarketCoinSlot* CoinSlot; // 0x330(0x08)
	struct UPDInvenDivide* InvenDivide; // 0x338(0x08)
	struct UPDTextBlock* T_Coin; // 0x340(0x08)
	struct UPDTextBlock* TB_GetCoin; // 0x348(0x08)
	struct UPDTextBlock* TB_GetCoin_Fx; // 0x350(0x08)
	struct UPDTextBlock* T_TeamCoinTitle; // 0x358(0x08)
	struct UHorizontalBox* HB_TeamCoinNum; // 0x360(0x08)
	struct UPDTextBlock* T_TeamCoin; // 0x368(0x08)
	struct UCanvasPanel* CP_CoinTooltip; // 0x370(0x08)
	struct UPDTextBlock* T_TooltipCoin; // 0x378(0x08)
	struct UPDTextBlock* T_InvenRemain; // 0x380(0x08)
	struct UPDTextBlock* T_InvenRemain_Slash; // 0x388(0x08)
	struct UPDTextBlock* T_InvenRemain_Max; // 0x390(0x08)
	struct UScrollBox* SB_InvenList; // 0x398(0x08)
	struct UVerticalBox* VB_MissionItem; // 0x3a0(0x08)
	struct UListView* LV_MissionItemList; // 0x3a8(0x08)
	struct UPDInvenListItem* AmmoListTitle; // 0x3b0(0x08)
	struct UListView* LV_AmmoList; // 0x3b8(0x08)
	char pad_3C0[0x10]; // 0x3c0(0x10)
	struct TArray<struct UPDUnKnownMarketEquipSlot*> WeaponSlots; // 0x3d0(0x10)
	char pad_3E0[0x50]; // 0x3e0(0x50)
	struct TArray<struct UObject*> ItemStorageList; // 0x430(0x10)
	char pad_440[0x88]; // 0x440(0x88)
	struct UGridPanel* CP_Market; // 0x4c8(0x08)
	struct UCanvasPanel* CP_Upgrade; // 0x4d0(0x08)
	struct UPDUnKnownMarketWeaponCategory* Tab_All; // 0x4d8(0x08)
	struct UPDUnKnownMarketWeaponCategory* Tab_Pistol; // 0x4e0(0x08)
	struct UPDUnKnownMarketWeaponCategory* Tab_SMG; // 0x4e8(0x08)
	struct UPDUnKnownMarketWeaponCategory* Tab_SG; // 0x4f0(0x08)
	struct UPDUnKnownMarketWeaponCategory* Tab_AR; // 0x4f8(0x08)
	struct UPDUnKnownMarketWeaponCategory* Tab_LMG; // 0x500(0x08)
	struct UPDUnKnownMarketWeaponCategory* Tab_SR; // 0x508(0x08)
	char pad_510[0x8]; // 0x510(0x08)
	struct UPDTabButtonGroup* WeaponCategoryGroup; // 0x518(0x08)
	struct UPDUnKnownMarketUpgradeSlot* UpgradeSlot_ARMORY; // 0x520(0x08)
	struct UPDUnKnownMarketUpgradeSlot* UpgradeSlot_ORDNANCE; // 0x528(0x08)
	struct UPDUnKnownMarketUpgradeSlot* UpgradeSlot_TACTICAL; // 0x530(0x08)
	struct UPDUnKnownMarketUpgradeSlot* UpgradeSlot_DEFENCE; // 0x538(0x08)
	char pad_540[0x50]; // 0x540(0x50)
	struct UPDUnKnownMarketFundingTooltip* FundingTooltip; // 0x590(0x08)
	struct UCanvasPanel* CP_Reward; // 0x598(0x08)
	struct UPDUnKnownMarketFundingProgress* FundingReward_01; // 0x5a0(0x08)
	struct UPDUnKnownMarketFundingProgress* FundingReward_02; // 0x5a8(0x08)
	struct UPDUnKnownMarketFundingProgress* FundingReward_03; // 0x5b0(0x08)
	char pad_5B8[0x10]; // 0x5b8(0x10)
	struct UCanvasPanel* CP_UpgradeTooltip; // 0x5c8(0x08)
	struct UPDUnKnownMarketUpgradeTooltip* UpgradeTooltip; // 0x5d0(0x08)
	struct UTileView* TV_WeaponList; // 0x5d8(0x08)
	struct UTileView* TV_ThrowItem; // 0x5e0(0x08)
	struct UTileView* TV_RecoverItem; // 0x5e8(0x08)
	struct UTileView* TV_TacticalItem; // 0x5f0(0x08)
	struct UTileView* TV_AmmoItem; // 0x5f8(0x08)
	struct UPDUnKnownMarketTooltip* MarketTooltip; // 0x600(0x08)
	struct UCanvasPanel* CP_InvenListDragable; // 0x608(0x08)
	struct UCanvasPanel* CP_PickupListDragable; // 0x610(0x08)
	struct UPDKeyButton* KBtn_Close; // 0x618(0x08)
	struct UHorizontalBox* HB_RespawnGuide; // 0x620(0x08)
	struct URichTextBlock* RTB_GuideMessage; // 0x628(0x08)
	struct UProgressBar* PB_Skip; // 0x630(0x08)
	struct UPDKeyButton* KBtn_Respawn; // 0x638(0x08)
	char pad_640[0x1a0]; // 0x640(0x1a0)
	struct TArray<struct UPDUnKnownMarketListItemData*> ListItemDataList; // 0x7e0(0x10)
	struct TArray<struct UPDUnKnownMarketListItemData*> EmptyListItemData; // 0x7f0(0x10)
	char pad_800[0x18]; // 0x800(0x18)

	void SelectWeaponCategory(int32_t ItemProp); // Function ProjectD.PDUnKnownMarket.SelectWeaponCategory // (Final|Native|Protected) // @ game+0x1839dd0
	void OnClickRespawnBtn(); // Function ProjectD.PDUnKnownMarket.OnClickRespawnBtn // (Final|Native|Private) // @ game+0xfb2530
	void OnClickCloseBtn(); // Function ProjectD.PDUnKnownMarket.OnClickCloseBtn // (Final|Native|Private) // @ game+0x1839c10
	void DivideBgMouseDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function ProjectD.PDUnKnownMarket.DivideBgMouseDown // (Final|Native|Private|HasOutParms) // @ game+0x1839a50
};

// Class ProjectD.PDUnKnownMarketEquipSlot
// Size: 0x6b8 (Inherited: 0x288)
struct UPDUnKnownMarketEquipSlot : UPDUserWidget {
	struct UDragDropOperation* DragDropOperation; // 0x288(0x08)
	struct UCanvasPanel* CP_TooltipArea; // 0x290(0x08)
	struct URetainerBox* RT_EquipSlot; // 0x298(0x08)
	struct UCanvasPanel* CP_EquipState; // 0x2a0(0x08)
	struct UCanvasPanel* CP_EmptyState; // 0x2a8(0x08)
	char pad_2B0[0x50]; // 0x2b0(0x50)
	struct UPDTextBlock* T_EmptySlotTitle; // 0x300(0x08)
	struct UPDTextBlock* TB_EmptyName; // 0x308(0x08)
	struct UPDTextBlock* TB_Name; // 0x310(0x08)
	struct UPDTextBlock* T_BulletAmount; // 0x318(0x08)
	struct UPDTextBlock* T_InvenBulletAmount; // 0x320(0x08)
	struct UImage* IMG_Item; // 0x328(0x08)
	struct UImage* IMG_Empty; // 0x330(0x08)
	struct UImage* IMG_Bullet; // 0x338(0x08)
	struct UPDTextBlock* T_BulletInfo; // 0x340(0x08)
	struct UImage* IMG_SLotBg; // 0x348(0x08)
	struct UWidgetSwitcher* WS_SellState; // 0x350(0x08)
	struct UPDTextBlock* T_ResellPrice; // 0x358(0x08)
	struct UCanvasPanel* CP_Parts; // 0x360(0x08)
	struct UCanvasPanel* CP_Dragable; // 0x368(0x08)
	struct UCanvasPanel* CP_Equipped; // 0x370(0x08)
	struct UPDUnKnownMarketWeaponPartSlot* PartSlot_Muzzle; // 0x378(0x08)
	struct UPDUnKnownMarketWeaponPartSlot* PartSlot_Barrel; // 0x380(0x08)
	struct UPDUnKnownMarketWeaponPartSlot* PartSlot_Laser; // 0x388(0x08)
	struct UPDUnKnownMarketWeaponPartSlot* PartSlot_UnderBarrel; // 0x390(0x08)
	struct UPDUnKnownMarketWeaponPartSlot* PartSlot_Scope; // 0x398(0x08)
	struct UPDUnKnownMarketWeaponPartSlot* PartSlot_Magazine; // 0x3a0(0x08)
	struct UPDUnKnownMarketWeaponPartSlot* PartSlot_Grip; // 0x3a8(0x08)
	struct UPDUnKnownMarketWeaponPartSlot* PartSlot_Stock; // 0x3b0(0x08)
	char pad_3B8[0x50]; // 0x3b8(0x50)
	struct UHorizontalBox* HB_Loadout; // 0x408(0x08)
	struct UPDTextBlock* T_LoadoutTitle; // 0x410(0x08)
	struct USizeBox* SB_Loadout_A; // 0x418(0x08)
	struct UPDTabButton* Tab_LoadoutA; // 0x420(0x08)
	struct USizeBox* SB_Loadout_B; // 0x428(0x08)
	struct UPDTabButton* Tab_LoadoutB; // 0x430(0x08)
	struct USizeBox* SB_Loadout_C; // 0x438(0x08)
	struct UPDTabButton* Tab_LoadoutC; // 0x440(0x08)
	struct UPDTabButtonGroup* LoadoutTabGroup; // 0x448(0x08)
	struct UPDButton* Btn_Refund; // 0x450(0x08)
	struct UPDButton* Btn_Sell; // 0x458(0x08)
	struct UImage* IMG_LoadoutHighlight_Tutorial; // 0x460(0x08)
	struct TArray<struct USizeBox*> LoadoutUIList; // 0x468(0x10)
	struct FText InSlotNumber; // 0x478(0x18)
	struct FText InSlotEmptyTitle; // 0x490(0x18)
	struct FText InWeaponClass; // 0x4a8(0x18)
	struct FSlateBrush InEmptyIconBrush; // 0x4c0(0x88)
	struct FLinearColor MouseNormalColor; // 0x548(0x10)
	struct FLinearColor MouseOverColor; // 0x558(0x10)
	struct FVector2D PartSlotStartPos; // 0x568(0x08)
	struct FVector2D PartSlotPadding; // 0x570(0x08)
	struct FVector2D PartSlotSize; // 0x578(0x08)
	char pad_580[0x138]; // 0x580(0x138)

	void ResellItem(); // Function ProjectD.PDUnKnownMarketEquipSlot.ResellItem // (Final|Native|Private) // @ game+0x1839db0
	void RefundItem(); // Function ProjectD.PDUnKnownMarketEquipSlot.RefundItem // (Final|Native|Private) // @ game+0x1839d90
	void OnUnHoverLoadout(); // Function ProjectD.PDUnKnownMarketEquipSlot.OnUnHoverLoadout // (Final|Native|Private) // @ game+0x1839d70
	void OnHoverLoadoutC(); // Function ProjectD.PDUnKnownMarketEquipSlot.OnHoverLoadoutC // (Final|Native|Private) // @ game+0x1839d10
	void OnHoverLoadoutB(); // Function ProjectD.PDUnKnownMarketEquipSlot.OnHoverLoadoutB // (Final|Native|Private) // @ game+0x1839cf0
	void OnHoverLoadoutA(); // Function ProjectD.PDUnKnownMarketEquipSlot.OnHoverLoadoutA // (Final|Native|Private) // @ game+0x1839cd0
	void OnClickLoadoutC(); // Function ProjectD.PDUnKnownMarketEquipSlot.OnClickLoadoutC // (Final|Native|Private) // @ game+0x1839c70
	void OnClickLoadoutB(); // Function ProjectD.PDUnKnownMarketEquipSlot.OnClickLoadoutB // (Final|Native|Private) // @ game+0x1839c50
	void OnClickLoadoutA(); // Function ProjectD.PDUnKnownMarketEquipSlot.OnClickLoadoutA // (Final|Native|Private) // @ game+0x1839c30
};

// Class ProjectD.PDUnKnownMarketFundingProgress
// Size: 0x298 (Inherited: 0x288)
struct UPDUnKnownMarketFundingProgress : UPDUserWidget {
	struct UProgressBar* PB_Reward; // 0x288(0x08)
	struct UPDTextBlock* T_RewardCoin; // 0x290(0x08)
};

// Class ProjectD.PDUnKnownMarketFundingTooltip
// Size: 0x348 (Inherited: 0x288)
struct UPDUnKnownMarketFundingTooltip : UPDUserWidget {
	struct UBorder* B_Title_01; // 0x288(0x08)
	struct UBorder* B_Title_02; // 0x290(0x08)
	struct UBorder* B_Title_03; // 0x298(0x08)
	struct TArray<struct UBorder*> B_Title_List; // 0x2a0(0x10)
	struct UPDTextBlock* T_Desc_01; // 0x2b0(0x08)
	struct UPDTextBlock* T_Desc_02; // 0x2b8(0x08)
	struct UPDTextBlock* T_Desc_03; // 0x2c0(0x08)
	struct TArray<struct UPDTextBlock*> T_Desc_List; // 0x2c8(0x10)
	struct UImage* IMG_Icon_01; // 0x2d8(0x08)
	struct UImage* IMG_Icon_02; // 0x2e0(0x08)
	struct UImage* IMG_Icon_03; // 0x2e8(0x08)
	struct TArray<struct UImage*> IMG_Icon_List; // 0x2f0(0x10)
	struct UPDTextBlock* T_Lv_01; // 0x300(0x08)
	struct UPDTextBlock* T_Lv_02; // 0x308(0x08)
	struct UPDTextBlock* T_Lv_03; // 0x310(0x08)
	struct TArray<struct UPDTextBlock*> T_Lv_List; // 0x318(0x10)
	char pad_328[0x20]; // 0x328(0x20)
};

// Class ProjectD.PDUnKnownMarketItemSlot
// Size: 0x498 (Inherited: 0x288)
struct UPDUnKnownMarketItemSlot : UPDUserWidget {
	struct UDragDropOperation* DragDropOperation; // 0x288(0x08)
	struct UCanvasPanel* CP_EmptyState; // 0x290(0x08)
	struct UCanvasPanel* CP_EquipState; // 0x298(0x08)
	char pad_2A0[0x50]; // 0x2a0(0x50)
	struct UPDTextBlock* TB_Name; // 0x2f0(0x08)
	struct UPDTextBlock* TB_EmptyName; // 0x2f8(0x08)
	struct UImage* IMG_Item; // 0x300(0x08)
	struct UImage* IMG_SLotBg; // 0x308(0x08)
	struct UPDTextBlock* T_Amount; // 0x310(0x08)
	struct UCanvasPanel* CP_Dragable; // 0x318(0x08)
	struct UCanvasPanel* CP_Refund; // 0x320(0x08)
	struct UPDButton* Btn_Refund; // 0x328(0x08)
	struct FText InSlotNumber; // 0x330(0x18)
	struct FText InSlotName; // 0x348(0x18)
	struct FSlateBrush InEmptyIconBrush; // 0x360(0x88)
	struct FLinearColor MouseNormalColor; // 0x3e8(0x10)
	struct FLinearColor MouseOverColor; // 0x3f8(0x10)
	struct FLinearColor NormalBunchColor; // 0x408(0x10)
	struct FLinearColor MaxBunchColor; // 0x418(0x10)
	struct UProgressBar* PB_ItemProgress; // 0x428(0x08)
	char pad_430[0x68]; // 0x430(0x68)

	void RefundItem(); // Function ProjectD.PDUnKnownMarketItemSlot.RefundItem // (Final|Native|Protected) // @ game+0x183d1c0
};

// Class ProjectD.PDUnKnownMarketListItemData
// Size: 0xa0 (Inherited: 0x28)
struct UPDUnKnownMarketListItemData : UObject {
	char pad_28[0x78]; // 0x28(0x78)
};

// Class ProjectD.PDUnKnownMarketListItem
// Size: 0x4e8 (Inherited: 0x288)
struct UPDUnKnownMarketListItem : UPDUserWidget {
	char pad_288[0x8]; // 0x288(0x08)
	struct UCanvasPanel* CP_Empty; // 0x290(0x08)
	struct UCanvasPanel* CP_Sell; // 0x298(0x08)
	struct UCanvasPanel* CP_SoldOut; // 0x2a0(0x08)
	struct UCanvasPanel* CP_Lock; // 0x2a8(0x08)
	struct UCanvasPanel* CP_Owned; // 0x2b0(0x08)
	struct UCanvasPanel* CP_EventArea; // 0x2b8(0x08)
	char pad_2C0[0x50]; // 0x2c0(0x50)
	struct UImage* IMG_Item; // 0x310(0x08)
	struct UImage* IMG_HoverClick; // 0x318(0x08)
	struct UHorizontalBox* HB_Price; // 0x320(0x08)
	struct UPDTextBlock* T_Price; // 0x328(0x08)
	struct UPDTextBlock* T_Price_Shortage; // 0x330(0x08)
	struct UPDTextBlock* T_Price_Sale; // 0x338(0x08)
	struct UPDTextBlock* T_UnLock_Level; // 0x340(0x08)
	struct UImage* IMG_Lock_Icon; // 0x348(0x08)
	struct USizeBox* SB_EquippedSlot_01; // 0x350(0x08)
	struct USizeBox* SB_EquippedSlot_02; // 0x358(0x08)
	struct USizeBox* SB_EquippedSlot_03; // 0x360(0x08)
	char pad_368[0x50]; // 0x368(0x50)
	struct UBorder* B_Request; // 0x3b8(0x08)
	struct UPDTextBlock* T_WeaponName; // 0x3c0(0x08)
	struct UCanvasPanel* CP_Blink; // 0x3c8(0x08)
	struct UPDTextBlock* T_InstanceCnt; // 0x3d0(0x08)
	struct UBorder* B_WeaponSale; // 0x3d8(0x08)
	struct UPDTextBlock* T_WeaponSale; // 0x3e0(0x08)
	struct UCanvasPanel* CP_AvailableCounter; // 0x3e8(0x08)
	struct UPDCircleProgress* Cpr_Gauge; // 0x3f0(0x08)
	struct UPDTextBlock* T_AvailableCounter; // 0x3f8(0x08)
	struct UCanvasPanel* CP_BuyBtn; // 0x400(0x08)
	struct UCanvasPanel* CP_BtnEventArea; // 0x408(0x08)
	struct UImage* IMG_BtnHover; // 0x410(0x08)
	struct UBorder* B_Cancel; // 0x418(0x08)
	struct UCanvasPanel* CP_Activate; // 0x420(0x08)
	struct UImage* IMG_Highlight_Tutorial; // 0x428(0x08)
	struct UDragDropOperation* DragDropOperation; // 0x430(0x08)
	struct TArray<struct FText> LockImagePath; // 0x438(0x10)
	struct TArray<struct FSlateColor> LockTextColor; // 0x448(0x10)
	char pad_458[0x90]; // 0x458(0x90)

	void OnClickBuy(); // Function ProjectD.PDUnKnownMarketListItem.OnClickBuy // (Final|Native|Protected) // @ game+0x183d140
};

// Class ProjectD.PDUnKnownMarketPartListItem
// Size: 0x358 (Inherited: 0x288)
struct UPDUnKnownMarketPartListItem : UPDUserWidget {
	struct UImage* IMG_ItemIcon; // 0x288(0x08)
	struct UImage* IMG_Slot_Hover; // 0x290(0x08)
	struct UImage* IMG_HoverBg; // 0x298(0x08)
	struct UPDTextBlock* T_PartsName; // 0x2a0(0x08)
	struct UPDTextBlock* T_Ability; // 0x2a8(0x08)
	struct UPDTextBlock* T_Equiped; // 0x2b0(0x08)
	struct UCanvasPanel* CP_Lock; // 0x2b8(0x08)
	struct UImage* IMG_Lock_Icon; // 0x2c0(0x08)
	struct UPDTextBlock* T_UnLock_Level; // 0x2c8(0x08)
	struct TArray<struct FText> LockImagePath; // 0x2d0(0x10)
	struct TArray<struct FSlateColor> LockTextColor; // 0x2e0(0x10)
	char pad_2F0[0x68]; // 0x2f0(0x68)

	void OnClickPart(); // Function ProjectD.PDUnKnownMarketPartListItem.OnClickPart // (Final|Native|Protected) // @ game+0x183d160
};

// Class ProjectD.PDUnKnownMarketTooltip
// Size: 0x410 (Inherited: 0x288)
struct UPDUnKnownMarketTooltip : UPDUserWidget {
	struct UPDTextBlock* T_WeaponName; // 0x288(0x08)
	struct UPDTextBlock* T_LoadoutName; // 0x290(0x08)
	struct UPDTextBlock* T_BulletInfo; // 0x298(0x08)
	struct UPDTextBlock* T_FireModeInfo; // 0x2a0(0x08)
	struct UPDTextBlock* T_ItemName; // 0x2a8(0x08)
	struct UWidgetSwitcher* WS_ItemType; // 0x2b0(0x08)
	struct UImage* IMG_Weapon; // 0x2b8(0x08)
	struct UImage* IMG_Info_Bullet; // 0x2c0(0x08)
	struct UImage* IMG_Logo; // 0x2c8(0x08)
	struct UPDTextBlock* T_Description; // 0x2d0(0x08)
	struct UWidgetSwitcher* WS_StatCase; // 0x2d8(0x08)
	struct UWidgetSwitcher* WS_InfoCase; // 0x2e0(0x08)
	struct URetainerBox* RT_Tooltip; // 0x2e8(0x08)
	struct UImage* IMG_MouseGuideBg; // 0x2f0(0x08)
	struct UCanvasPanel* Cp_Stat_Weapon; // 0x2f8(0x08)
	struct UPDUnKnownWeaponStatProgress* WeaponStat1; // 0x300(0x08)
	struct UPDUnKnownWeaponStatProgress* WeaponStat2; // 0x308(0x08)
	struct UPDUnKnownWeaponStatProgress* WeaponStat3; // 0x310(0x08)
	struct UPDUnKnownWeaponStatProgress* WeaponStat4; // 0x318(0x08)
	struct UPDUnKnownWeaponStatProgress* WeaponStat5; // 0x320(0x08)
	struct UPDUnKnownWeaponStatProgress* WeaponStat6; // 0x328(0x08)
	struct UCanvasPanel* CP_Stat_Part; // 0x330(0x08)
	struct URichTextBlock* RT_TooltipPartStat; // 0x338(0x08)
	struct UCanvasPanel* CP_MouseGuide; // 0x340(0x08)
	struct UHorizontalBox* HB_GuideCase_01; // 0x348(0x08)
	struct UPDTextBlock* T_GuideCase_01; // 0x350(0x08)
	struct UHorizontalBox* HB_GuideCase_02; // 0x358(0x08)
	struct UPDTextBlock* T_GuideCase_02; // 0x360(0x08)
	struct UHorizontalBox* HB_GuideCase_03; // 0x368(0x08)
	struct UPDTextBlock* T_GuideCase_03; // 0x370(0x08)
	struct UPDTextBlock* T_Magazine; // 0x378(0x08)
	struct UHorizontalBox* HB_Parts; // 0x380(0x08)
	struct UImage* IMG_Part1; // 0x388(0x08)
	struct UImage* IMG_Part2; // 0x390(0x08)
	struct UImage* IMG_Part3; // 0x398(0x08)
	struct UImage* IMG_Part4; // 0x3a0(0x08)
	struct UImage* IMG_Part5; // 0x3a8(0x08)
	struct UImage* IMG_Part6; // 0x3b0(0x08)
	struct UImage* IMG_Part7; // 0x3b8(0x08)
	struct UImage* IMG_Part8; // 0x3c0(0x08)
	struct TArray<struct UImage*> LoadoutPartImgList; // 0x3c8(0x10)
	char pad_3D8[0x38]; // 0x3d8(0x38)
};

// Class ProjectD.PDUnKnownMarketUpgradeItemSlot
// Size: 0x4a0 (Inherited: 0x288)
struct UPDUnKnownMarketUpgradeItemSlot : UPDUserWidget {
	struct UWidgetSwitcher* WS_SlotBg; // 0x288(0x08)
	struct UWidgetSwitcher* WS_UpgradeType; // 0x290(0x08)
	struct UWidgetSwitcher* WS_LockType; // 0x298(0x08)
	struct UWidgetSwitcher* WS_Activation; // 0x2a0(0x08)
	struct UWidgetSwitcher* WS_UpgradeCase; // 0x2a8(0x08)
	struct UImage* IMG_Icon; // 0x2b0(0x08)
	struct UImage* IMG_Icon_Off; // 0x2b8(0x08)
	struct UPDTextBlock* T_Level; // 0x2c0(0x08)
	struct UPDTextBlock* T_LevelTitle; // 0x2c8(0x08)
	struct UPDTextBlock* T_Description_ARMORY; // 0x2d0(0x08)
	struct UPDTextBlock* T_Description_ORDNANCE; // 0x2d8(0x08)
	struct UPDTextBlock* T_Description_TACTICAL; // 0x2e0(0x08)
	struct UPDTextBlock* T_Description_DEFENCE; // 0x2e8(0x08)
	char pad_2F0[0x50]; // 0x2f0(0x50)
	struct UProgressBar* PB_Pogress_ARMORY; // 0x340(0x08)
	struct UProgressBar* PB_Pogress_ORDNANCE; // 0x348(0x08)
	struct UProgressBar* PB_Pogress_TACTICAL; // 0x350(0x08)
	struct UProgressBar* PB_Pogress_DEFENCE; // 0x358(0x08)
	char pad_360[0x50]; // 0x360(0x50)
	struct UPDTextBlock* T_Percent_ARMORY; // 0x3b0(0x08)
	struct UPDTextBlock* T_Percent_ORDNANCE; // 0x3b8(0x08)
	struct UPDTextBlock* T_Percent_TACTICAL; // 0x3c0(0x08)
	struct UPDTextBlock* T_Percent_DEFENCE; // 0x3c8(0x08)
	char pad_3D0[0x50]; // 0x3d0(0x50)
	struct UCanvasPanel* CP_GlowBox_ARMORY; // 0x420(0x08)
	struct UCanvasPanel* CP_GlowBox_ORDNANCE; // 0x428(0x08)
	struct UCanvasPanel* CP_GlowBox_TACTICAL; // 0x430(0x08)
	struct UCanvasPanel* CP_GlowBox_DEFENCE; // 0x438(0x08)
	char pad_440[0x50]; // 0x440(0x50)
	struct UPDTextBlock* T_Description_Off; // 0x490(0x08)
	char pad_498[0x8]; // 0x498(0x08)
};

// Class ProjectD.PDUnKnownMarketUpgradeSlot
// Size: 0x3e0 (Inherited: 0x288)
struct UPDUnKnownMarketUpgradeSlot : UPDUserWidget {
	struct UPDTextBlock* T_UpgradeLevel; // 0x288(0x08)
	struct UPDTextBlock* T_UpgradeGroupDelay; // 0x290(0x08)
	struct UPDTextBlock* T_UpgradeGroupName; // 0x298(0x08)
	struct UPDProgress* UpgradeProgress; // 0x2a0(0x08)
	struct UImage* Img_Bg; // 0x2a8(0x08)
	struct UImage* IMG_MAX; // 0x2b0(0x08)
	struct UImage* IMG_Highlight_Tutorial; // 0x2b8(0x08)
	struct UImage* IMG_Divider; // 0x2c0(0x08)
	struct UPDTextBlock* T_UpgradeUp; // 0x2c8(0x08)
	bool IsEnemy; // 0x2d0(0x01)
	bool IsShop; // 0x2d1(0x01)
	char pad_2D2[0x2]; // 0x2d2(0x02)
	struct FLinearColor GaugeColor; // 0x2d4(0x10)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct FSlateColor GroupTextColor; // 0x2e8(0x28)
	struct FSlateColor MaxTextColor; // 0x310(0x28)
	struct FLinearColor HoverBGColor; // 0x338(0x10)
	struct FLinearColor MaxGlowColor; // 0x348(0x10)
	struct FLinearColor DividerColor; // 0x358(0x10)
	struct FText UpgradeGroup; // 0x368(0x18)
	struct FText UpgradeGroupName; // 0x380(0x18)
	char pad_398[0x48]; // 0x398(0x48)

	void OnClickRequest(); // Function ProjectD.PDUnKnownMarketUpgradeSlot.OnClickRequest // (Final|Native|Protected) // @ game+0x183d180
};

// Class ProjectD.PDUnKnownMarketUpgradeTooltip
// Size: 0x360 (Inherited: 0x288)
struct UPDUnKnownMarketUpgradeTooltip : UPDUserWidget {
	struct UPDTextBlock* T_RemainCoin; // 0x288(0x08)
	struct UPDTextBlock* T_GuideCase_01; // 0x290(0x08)
	struct UPDUnKnownMarketUpgradeItemSlot* UpgradeItem_2; // 0x298(0x08)
	struct UPDUnKnownMarketUpgradeItemSlot* UpgradeItem_3; // 0x2a0(0x08)
	struct UPDUnKnownMarketUpgradeItemSlot* UpgradeItem_4; // 0x2a8(0x08)
	struct UPDUnKnownMarketUpgradeItemSlot* UpgradeItem_5; // 0x2b0(0x08)
	struct UPDUnKnownMarketUpgradeItemSlot* UpgradeItem_6; // 0x2b8(0x08)
	struct TArray<struct UPDUnKnownMarketUpgradeItemSlot*> UpgradeItemList; // 0x2c0(0x10)
	struct UWidgetSwitcher* WS_ConditionCase; // 0x2d0(0x08)
	struct UWidgetSwitcher* WS_UpgradeGroup; // 0x2d8(0x08)
	struct UPDTextBlock* T_RemianLevel_ARMORY; // 0x2e0(0x08)
	struct UPDTextBlock* T_RemianLevel_ORDNANCE; // 0x2e8(0x08)
	struct UPDTextBlock* T_RemianLevel_TACTICAL; // 0x2f0(0x08)
	struct UPDTextBlock* T_RemianLevel_DEFENCE; // 0x2f8(0x08)
	struct UCanvasPanel* CP_MouseGuide; // 0x300(0x08)
	char pad_308[0x54]; // 0x308(0x54)
	bool UseMouseGuide; // 0x35c(0x01)
	char pad_35D[0x3]; // 0x35d(0x03)
};

// Class ProjectD.PDUnKnownMarketWeaponCategory
// Size: 0x2c0 (Inherited: 0x288)
struct UPDUnKnownMarketWeaponCategory : UPDUserWidget {
	char pad_288[0x10]; // 0x288(0x10)
	struct UPDTabButton* TabBtn_Category; // 0x298(0x08)
	struct FText InCategoryText; // 0x2a0(0x18)
	char pad_2B8[0x8]; // 0x2b8(0x08)

	void OnSelectCategory(); // Function ProjectD.PDUnKnownMarketWeaponCategory.OnSelectCategory // (Final|Native|Protected) // @ game+0x183d1a0
};

// Class ProjectD.PDUnKnownMarketWeaponPartSlot
// Size: 0x368 (Inherited: 0x288)
struct UPDUnKnownMarketWeaponPartSlot : UPDUserWidget {
	struct UWidgetSwitcher* WS_State; // 0x288(0x08)
	struct UWidgetSwitcher* WS_BgStyle; // 0x290(0x08)
	struct UImage* IMG_Icon; // 0x298(0x08)
	struct UImage* IMG_EmptyIcon; // 0x2a0(0x08)
	struct UImage* IMG_Icon_Lock; // 0x2a8(0x08)
	struct UImage* IMG_New; // 0x2b0(0x08)
	struct UImage* IMG_Highlight; // 0x2b8(0x08)
	struct UImage* IMG_NonUse; // 0x2c0(0x08)
	struct UVerticalBox* VB_MarketList; // 0x2c8(0x08)
	struct UPaperSprite* EmptyImageResource; // 0x2d0(0x08)
	struct FText PartProperty; // 0x2d8(0x18)
	struct UDragDropOperation* DragDropOperation; // 0x2f0(0x08)
	struct UCanvasPanel* CP_Blink; // 0x2f8(0x08)
	struct UImage* IMG_Highlight_Tutorial; // 0x300(0x08)
	char pad_308[0x50]; // 0x308(0x50)
	struct TArray<struct UPDUnKnownMarketPartListItem*> CurrentPartList; // 0x358(0x10)
};

// Class ProjectD.PDUnKnownWeaponStatProgress
// Size: 0x308 (Inherited: 0x288)
struct UPDUnKnownWeaponStatProgress : UPDUserWidget {
	struct UPDTextBlock* T_StatName; // 0x288(0x08)
	struct UPDTextBlock* T_Stat_Value; // 0x290(0x08)
	struct UCanvasPanel* CP_StatProgress; // 0x298(0x08)
	struct UCanvasPanel* CP_Stat_Dest; // 0x2a0(0x08)
	struct UProgressBar* PB_Stat_Dest; // 0x2a8(0x08)
	struct UCanvasPanel* CP_Stat_Src; // 0x2b0(0x08)
	struct UProgressBar* PB_Stat_Src; // 0x2b8(0x08)
	struct FText InStatName; // 0x2c0(0x18)
	char pad_2D8[0x30]; // 0x2d8(0x30)
};

// Class ProjectD.PDUpperAnimInstance
// Size: 0x5f0 (Inherited: 0x5f0)
struct UPDUpperAnimInstance : UPDPlayerAnimInstance {
	char bIsCrouching : 1; // 0x5e8(0x01)
};

// Class ProjectD.PDUtilFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPDUtilFunctionLibrary : UBlueprintFunctionLibrary {

	struct FName GetHitReactionDirName(struct AActor* Actor, struct FVector HitDir, struct TMap<enum class EPDDirectionType, struct FName>& DirNames, enum class EPDDirCalcMethodType Method, bool bForIncoming); // Function ProjectD.PDUtilFunctionLibrary.GetHitReactionDirName // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x183cf20
	void GetDirectionalPortion_4Way(struct AActor* Actor, struct FVector HitDir, float& ForwardPortion, float& RightPortion, bool bForIncoming); // Function ProjectD.PDUtilFunctionLibrary.GetDirectionalPortion_4Way // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x183cd50
	void GetDirectionalPortion(struct AActor* Actor, struct FVector HitDir, float& ForwardPortion, float& RightPortion, bool bForIncoming); // Function ProjectD.PDUtilFunctionLibrary.GetDirectionalPortion // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x183cb80
	enum class EPDDirectionType GetDirection_Simple(struct AActor* Actor, struct FVector HitDir, enum class EPDDirCalcMethodType Method, bool bForIncoming); // Function ProjectD.PDUtilFunctionLibrary.GetDirection_Simple // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x183ca40
};

// Class ProjectD.PDWebBrowser
// Size: 0x150 (Inherited: 0x150)
struct UPDWebBrowser : UWebBrowser {

	void ReleaseWebBrowser(); // Function ProjectD.PDWebBrowser.ReleaseWebBrowser // (Final|Native|Public|BlueprintCallable) // @ game+0x183f140
	void RefreshInputMethod(); // Function ProjectD.PDWebBrowser.RefreshInputMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x183f120
};

// Class ProjectD.PDWebButton
// Size: 0xc58 (Inherited: 0xc50)
struct UPDWebButton : UPDButton {
	int32_t WIC_Id; // 0xc50(0x04)
	char pad_C54[0x4]; // 0xc54(0x04)
};

// Class ProjectD.PDWebPopupUI
// Size: 0x2f8 (Inherited: 0x2d0)
struct UPDWebPopupUI : UPDOKPopupUI {
	struct UPDWebBrowser* WB_WebPage; // 0x2d0(0x08)
	struct UPDTextBlock* TB_Title; // 0x2d8(0x08)
	struct USizeBox* SB_SizeClamper; // 0x2e0(0x08)
	struct FString WebURL; // 0x2e8(0x10)

	void OpenWebPage(); // Function ProjectD.PDWebPopupUI.OpenWebPage // (Event|Public|BlueprintEvent) // @ game+0x1b61b60
	void CloseWebPage(); // Function ProjectD.PDWebPopupUI.CloseWebPage // (Event|Public|BlueprintEvent) // @ game+0x1b61b60
};

// Class ProjectD.PDWebTermsOfServicePopupUI
// Size: 0x330 (Inherited: 0x2f8)
struct UPDWebTermsOfServicePopupUI : UPDOKCancelPopupUI {
	struct UPDWebBrowser* WB_WebPage; // 0x2f8(0x08)
	struct USizeBox* SB_SizeClamper; // 0x300(0x08)
	struct UCheckBox* CB_TermsOfService; // 0x308(0x08)
	struct UPDButton* Btn_TermsOfService; // 0x310(0x08)
	struct FString WebURL; // 0x318(0x10)
	char pad_328[0x8]; // 0x328(0x08)

	void OpenTermsWebPage(); // Function ProjectD.PDWebTermsOfServicePopupUI.OpenTermsWebPage // (Event|Public|BlueprintEvent) // @ game+0x1b61b60
	void OnToggleTermsOfServiceChanged(bool Val); // Function ProjectD.PDWebTermsOfServicePopupUI.OnToggleTermsOfServiceChanged // (Final|Native|Protected) // @ game+0x183f090
	void OnTermsOfServiceBtn(); // Function ProjectD.PDWebTermsOfServicePopupUI.OnTermsOfServiceBtn // (Final|Native|Protected) // @ game+0x183f070
	void CloseTermaWebPage(); // Function ProjectD.PDWebTermsOfServicePopupUI.CloseTermaWebPage // (Event|Public|BlueprintEvent) // @ game+0x1b61b60
};

// Class ProjectD.PDWorldBoundaryChecker
// Size: 0x278 (Inherited: 0x220)
struct APDWorldBoundaryChecker : AActor {
	struct FBox AdjustValue; // 0x220(0x1c)
	struct FBox ResultBound; // 0x23c(0x1c)
	struct FBox BoundToTest; // 0x258(0x1c)
	char pad_274[0x4]; // 0x274(0x04)
};

// Class ProjectD.PDWorldMapUI
// Size: 0x2b0 (Inherited: 0x288)
struct UPDWorldMapUI : UPDUserWidget {
	struct UPDGameMapModule* GameMap; // 0x288(0x08)
	float ZoomScaleMin; // 0x290(0x04)
	float ZoomScaleMax; // 0x294(0x04)
	float ZoomScaleStep; // 0x298(0x04)
	char pad_29C[0x14]; // 0x29c(0x14)
};

// Class ProjectD.PDWorldMessageUI
// Size: 0x2f0 (Inherited: 0x290)
struct UPDWorldMessageUI : UPDIngameModeWidget {
	char pad_290[0x8]; // 0x290(0x08)
	struct UCanvasPanel* CP_Text; // 0x298(0x08)
	struct UPDTextBlock* TB_Text; // 0x2a0(0x08)
	struct UCanvasPanel* CP_Count; // 0x2a8(0x08)
	struct UPDTextBlock* TB_Count; // 0x2b0(0x08)
	struct UPDTextBlock* TB_CountDesc; // 0x2b8(0x08)
	struct UCanvasPanel* CP_Mission; // 0x2c0(0x08)
	struct UPDTextBlock* TB_MissionText; // 0x2c8(0x08)
	struct UCanvasPanel* CP_Alarm; // 0x2d0(0x08)
	struct UPDTextBlock* TB_AlarmText; // 0x2d8(0x08)
	float DefaultTextDuration; // 0x2e0(0x04)
	char pad_2E4[0xc]; // 0x2e4(0x0c)
};

// Class ProjectD.PDZipLine
// Size: 0x3c0 (Inherited: 0x220)
struct APDZipLine : AActor {
	char pad_220[0x60]; // 0x220(0x60)
	uint32_t ZiplineIndex; // 0x280(0x04)
	bool bItemToActive; // 0x284(0x01)
	bool bItemToUse; // 0x285(0x01)
	char pad_286[0x2]; // 0x286(0x02)
	float PathMovementVelocity; // 0x288(0x04)
	char pad_28C[0xbc]; // 0x28c(0xbc)
	struct UPDSplineComponent* SplineComp; // 0x348(0x08)
	struct USplineMeshComponent* SplineMeshComp; // 0x350(0x08)
	struct UStaticMeshComponent* EntryMesh; // 0x358(0x08)
	struct UArrowComponent* EntryInteractArrow; // 0x360(0x08)
	struct UStaticMeshComponent* ExitMesh; // 0x368(0x08)
	struct UArrowComponent* ExitInteractArrow; // 0x370(0x08)
	struct UStaticMeshComponent* SubEntryMesh; // 0x378(0x08)
	struct UStaticMeshComponent* SubExitMesh; // 0x380(0x08)
	struct UStaticMeshComponent* EntryPulley; // 0x388(0x08)
	struct UStaticMeshComponent* ExitPulley; // 0x390(0x08)
	struct UBoxComponent* EntryTriggerBox; // 0x398(0x08)
	struct UBoxComponent* ExitTriggerBox; // 0x3a0(0x08)
	char pad_3A8[0x18]; // 0x3a8(0x18)

	void OnExitTriggerEndOverlap(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function ProjectD.PDZipLine.OnExitTriggerEndOverlap // (Final|Native|Public) // @ game+0x183ef30
	void OnExitTriggerBeginOverlap(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function ProjectD.PDZipLine.OnExitTriggerBeginOverlap // (Final|Native|Public|HasOutParms) // @ game+0x183ed40
	void OnEntryTriggerEndOverlap(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function ProjectD.PDZipLine.OnEntryTriggerEndOverlap // (Final|Native|Public) // @ game+0x183ec00
	void OnEntryTriggerBeginOverlap(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function ProjectD.PDZipLine.OnEntryTriggerBeginOverlap // (Final|Native|Public|HasOutParms) // @ game+0x183ea10
};

// Class ProjectD.TurningAnimNotifyState
// Size: 0x38 (Inherited: 0x30)
struct UTurningAnimNotifyState : UAnimNotifyState {
	struct UAnimMontage* Montage; // 0x30(0x08)
};

// Class ProjectD.TurnInPlaceAnimNotifyState
// Size: 0x48 (Inherited: 0x30)
struct UTurnInPlaceAnimNotifyState : UAnimNotifyState {
	struct UCurveFloat* RotationCurveAsset; // 0x30(0x08)
	struct UCurveFloat* RotationCurveAsset_Mirror; // 0x38(0x08)
	bool bIsRightTurn; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class ProjectD.UPDNSpringArmComponent
// Size: 0x2a0 (Inherited: 0x280)
struct UUPDNSpringArmComponent : USpringArmComponent {
	char pad_280[0x20]; // 0x280(0x20)
};

