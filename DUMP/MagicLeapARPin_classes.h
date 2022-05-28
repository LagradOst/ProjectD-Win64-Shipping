// Class MagicLeapARPin.MagicLeapARPinComponent
// Size: 0x320 (Inherited: 0x1f0)
struct UMagicLeapARPinComponent : USceneComponent {
	struct FString ObjectUID; // 0x1f0(0x10)
	int32_t UserIndex; // 0x200(0x04)
	enum class EMagicLeapAutoPinType AutoPinType; // 0x204(0x01)
	bool bShouldPinActor; // 0x205(0x01)
	char pad_206[0x2]; // 0x206(0x02)
	struct UMagicLeapARPinSaveGame* PinDataClass; // 0x208(0x08)
	struct FMulticastInlineDelegate OnPersistentEntityPinned; // 0x210(0x10)
	struct FMulticastInlineDelegate OnPersistentEntityPinLost; // 0x220(0x10)
	struct FGuid PinnedCFUID; // 0x230(0x10)
	struct USceneComponent* PinnedSceneComponent; // 0x240(0x08)
	struct UMagicLeapARPinSaveGame* PinData; // 0x248(0x08)
	char pad_250[0xd0]; // 0x250(0xd0)

	void UnPin(); // Function MagicLeapARPin.MagicLeapARPinComponent.UnPin // (Final|Native|Public|BlueprintCallable) // @ game+0x1181320
	bool PinSceneComponent(struct USceneComponent* ComponentToPin); // Function MagicLeapARPin.MagicLeapARPinComponent.PinSceneComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x11811f0
	bool PinRestoredOrSynced(); // Function MagicLeapARPin.MagicLeapARPinComponent.PinRestoredOrSynced // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11811c0
	bool PinActor(struct AActor* ActorToPin); // Function MagicLeapARPin.MagicLeapARPinComponent.PinActor // (Final|Native|Public|BlueprintCallable) // @ game+0x1181130
	void PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced); // DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinned__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1b61b60
	void PersistentEntityPinLost__DelegateSignature(); // DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1b61b60
	bool IsPinned(); // Function MagicLeapARPin.MagicLeapARPinComponent.IsPinned // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11810d0
	bool GetPinState(struct FMagicLeapARPinState& State); // Function MagicLeapARPin.MagicLeapARPinComponent.GetPinState // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1180f70
	bool GetPinnedPinID(struct FGuid& PinID); // Function MagicLeapARPin.MagicLeapARPinComponent.GetPinnedPinID // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1181020
	struct UMagicLeapARPinSaveGame* GetPinData(struct UMagicLeapARPinSaveGame* PinDataClass); // Function MagicLeapARPin.MagicLeapARPinComponent.GetPinData // (Final|Native|Public|BlueprintCallable) // @ game+0x1180ee0
};

// Class MagicLeapARPin.MagicLeapARPinFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapARPinFunctionLibrary : UBlueprintFunctionLibrary {

	void UnBindToOnMagicLeapARPinUpdatedDelegate(struct FDelegate& Delegate); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapARPinUpdatedDelegate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1181280
	bool IsTrackerValid(); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.IsTrackerValid // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1181100
	enum class EMagicLeapPassableWorldError GetNumAvailableARPins(int32_t& Count); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetNumAvailableARPins // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1180e50
	enum class EMagicLeapPassableWorldError GetClosestARPin(struct FVector& SearchPoint, struct FGuid& PinID); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetClosestARPin // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1180d60
	enum class EMagicLeapPassableWorldError GetAvailableARPins(int32_t NumRequested, struct TArray<struct FGuid>& Pins); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetAvailableARPins // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1180c80
	struct FString GetARPinStateToString(struct FMagicLeapARPinState& State); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinStateToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1180ba0
	enum class EMagicLeapPassableWorldError GetARPinState(struct FGuid& PinID, struct FMagicLeapARPinState& State); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinState // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1180aa0
	bool GetARPinPositionAndOrientation_TrackingSpace(struct FGuid& PinID, struct FVector& Position, struct FRotator& Orientation, bool& PinFoundInEnvironment); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation_TrackingSpace // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1180910
	bool GetARPinPositionAndOrientation(struct FGuid& PinID, struct FVector& Position, struct FRotator& Orientation, bool& PinFoundInEnvironment); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1180780
	enum class EMagicLeapPassableWorldError DestroyTracker(); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.DestroyTracker // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1180750
	enum class EMagicLeapPassableWorldError CreateTracker(); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.CreateTracker // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1180720
	void BindToOnMagicLeapARPinUpdatedDelegate(struct FDelegate& Delegate); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapARPinUpdatedDelegate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1180680
};

// Class MagicLeapARPin.MagicLeapARPinSettings
// Size: 0x40 (Inherited: 0x28)
struct UMagicLeapARPinSettings : UObject {
	float UpdateCheckFrequency; // 0x28(0x04)
	struct FMagicLeapARPinState OnUpdatedEventTriggerDelta; // 0x2c(0x10)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class MagicLeapARPin.MagicLeapARPinSaveGame
// Size: 0xa0 (Inherited: 0x28)
struct UMagicLeapARPinSaveGame : USaveGame {
	struct FGuid PinnedID; // 0x28(0x10)
	char pad_38[0x8]; // 0x38(0x08)
	struct FTransform ComponentWorldTransform; // 0x40(0x30)
	struct FTransform PinTransform; // 0x70(0x30)
};

