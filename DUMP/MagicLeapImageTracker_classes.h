// Class MagicLeapImageTracker.MagicLeapImageTrackerComponent
// Size: 0x270 (Inherited: 0x1f0)
struct UMagicLeapImageTrackerComponent : USceneComponent {
	struct UTexture2D* TargetImageTexture; // 0x1f0(0x08)
	struct FString Name; // 0x1f8(0x10)
	float LongerDimension; // 0x208(0x04)
	bool bIsStationary; // 0x20c(0x01)
	bool bUseUnreliablePose; // 0x20d(0x01)
	char pad_20E[0x2]; // 0x20e(0x02)
	struct FMulticastInlineDelegate OnSetImageTargetSucceeded; // 0x210(0x10)
	struct FMulticastInlineDelegate OnSetImageTargetFailed; // 0x220(0x10)
	struct FMulticastInlineDelegate OnImageTargetFound; // 0x230(0x10)
	struct FMulticastInlineDelegate OnImageTargetLost; // 0x240(0x10)
	struct FMulticastInlineDelegate OnImageTargetUnreliableTracking; // 0x250(0x10)
	char pad_260[0x10]; // 0x260(0x10)

	bool SetTargetAsync(struct UTexture2D* ImageTarget); // Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.SetTargetAsync // (Final|Native|Public|BlueprintCallable) // @ game+0x11ab570
	bool RemoveTargetAsync(); // Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.RemoveTargetAsync // (Final|Native|Public|BlueprintCallable) // @ game+0x11ab4d0
};

// Class MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapImageTrackerFunctionLibrary : UBlueprintFunctionLibrary {

	void SetMaxSimultaneousTargets(int32_t MaxSimultaneousTargets); // Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.SetMaxSimultaneousTargets // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x11ab500
	bool IsImageTrackingEnabled(); // Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.IsImageTrackingEnabled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x11ab4a0
	int32_t GetMaxSimultaneousTargets(); // Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.GetMaxSimultaneousTargets // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x11ab470
	void EnableImageTracking(bool bEnable); // Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.EnableImageTracking // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x11ab3f0
};

