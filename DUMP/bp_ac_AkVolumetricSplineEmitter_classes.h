// BlueprintGeneratedClass bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C
// Size: 0x298 (Inherited: 0x220)
struct Abp_ac_AkVolumetricSplineEmitter_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UAkComponent* AkComponent; // 0x228(0x08)
	struct USplineComponent* Spline; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	bool Debug; // 0x240(0x01)
	bool Hidden In Game; // 0x241(0x01)
	bool Follow Player Elevation; // 0x242(0x01)
	char pad_243[0x5]; // 0x243(0x05)
	struct UAkAudioEvent* Ak Event Emitter; // 0x248(0x08)
	struct FName State Group; // 0x250(0x08)
	struct FName State Inside; // 0x258(0x08)
	struct FName State Outside; // 0x260(0x08)
	float Occ Refresh Interval; // 0x268(0x04)
	float Max Range Fade Distance; // 0x26c(0x04)
	bool Is Inside Spline; // 0x270(0x01)
	char pad_271[0x3]; // 0x271(0x03)
	float Dot Value; // 0x274(0x04)
	struct FVector Ak Emitter Location; // 0x278(0x0c)
	float Timer Lazy; // 0x284(0x04)
	bool Is Lazy; // 0x288(0x01)
	bool Is Initialized; // 0x289(0x01)
	char pad_28A[0x2]; // 0x28a(0x02)
	struct FVector Spline Curve Location Closest To Player; // 0x28c(0x0c)

	void GetDistanceToPlayerFromClosestSplinePoint(float& DistanceToPlayerFromClosestSplinePoint); // Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.GetDistanceToPlayerFromClosestSplinePoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b61b60
	void GetIsInsideSpline(bool& IsInsideSpline?, bool& IsInsideSplineChanged?); // Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.GetIsInsideSpline // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b61b60
	void GetPlayerControllerCameraRotation(struct FRotator& PlayerControllerCameraRotation); // Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.GetPlayerControllerCameraRotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b61b60
	void GetControlledPawnLocation(struct APawn*& ControlledPawnReference, struct FVector& ControlledPawnLocation); // Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.GetControlledPawnLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b61b60
	void UserConstructionScript(); // Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b61b60
	void UpdateEmitterLocationProxy(); // Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.UpdateEmitterLocationProxy // (BlueprintCallable|BlueprintEvent) // @ game+0x1b61b60
	void Update Emitter Slowly(); // Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.Update Emitter Slowly // (BlueprintCallable|BlueprintEvent) // @ game+0x1b61b60
	void ReceiveTick(float DeltaSeconds); // Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1b61b60
	void ReceiveBeginPlay(); // Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1b61b60
	void Set AK State(); // Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.Set AK State // (BlueprintCallable|BlueprintEvent) // @ game+0x1b61b60
	void ExecuteUbergraph_bp_ac_AkVolumetricSplineEmitter(int32_t EntryPoint); // Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.ExecuteUbergraph_bp_ac_AkVolumetricSplineEmitter // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b61b60
};

