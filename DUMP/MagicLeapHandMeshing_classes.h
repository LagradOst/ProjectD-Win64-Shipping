// Class MagicLeapHandMeshing.MagicLeapHandMeshingComponent
// Size: 0xb0 (Inherited: 0xb0)
struct UMagicLeapHandMeshingComponent : UActorComponent {

	void SetUseWeightedNormals(bool bInUseWeightedNormals); // Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.SetUseWeightedNormals // (Final|Native|Public|BlueprintCallable) // @ game+0x11b1950
	bool DisconnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.DisconnectMRMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x11b1840
	bool ConnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.ConnectMRMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x11b16d0
};

// Class MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapHandMeshingFunctionLibrary : UBlueprintFunctionLibrary {

	bool DisconnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DisconnectMRMesh // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x11b18d0
	bool DestroyClient(); // Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DestroyClient // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x11b1810
	bool CreateClient(); // Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.CreateClient // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x11b17e0
	bool ConnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.ConnectMRMesh // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x11b1760
};

