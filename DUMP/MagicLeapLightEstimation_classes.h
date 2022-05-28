// Class MagicLeapLightEstimation.MagicLeapLightingTrackingComponent
// Size: 0xc0 (Inherited: 0xb0)
struct UMagicLeapLightingTrackingComponent : UActorComponent {
	bool UseGlobalAmbience; // 0xb0(0x01)
	bool UseColorTemp; // 0xb1(0x01)
	char pad_B2[0xe]; // 0xb2(0x0e)
};

// Class MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapLightEstimationFunctionLibrary : UBlueprintFunctionLibrary {

	bool IsTrackerValid(); // Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.IsTrackerValid // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x11b2bc0
	bool GetColorTemperatureState(struct FMagicLeapLightEstimationColorTemperatureState& ColorTemperatureState); // Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetColorTemperatureState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x11b2b30
	bool GetAmbientGlobalState(struct FMagicLeapLightEstimationAmbientGlobalState& GlobalAmbientState); // Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetAmbientGlobalState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x11b2a80
	void DestroyTracker(); // Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.DestroyTracker // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x11b2a60
	bool CreateTracker(); // Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.CreateTracker // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x11b2a30
};

