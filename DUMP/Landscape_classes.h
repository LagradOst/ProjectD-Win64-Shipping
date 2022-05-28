// Class Landscape.ControlPointMeshActor
// Size: 0x228 (Inherited: 0x220)
struct AControlPointMeshActor : AActor {
	struct UControlPointMeshComponent* ControlPointMeshComponent; // 0x220(0x08)
};

// Class Landscape.ControlPointMeshComponent
// Size: 0x4a0 (Inherited: 0x4a0)
struct UControlPointMeshComponent : UStaticMeshComponent {
	float VirtualTextureMainPassMaxDrawDistance; // 0x498(0x04)
};

// Class Landscape.LandscapeProxy
// Size: 0x560 (Inherited: 0x220)
struct ALandscapeProxy : AActor {
	struct ULandscapeSplinesComponent* SplineComponent; // 0x220(0x08)
	struct FGuid LandscapeGuid; // 0x228(0x10)
	struct FIntPoint LandscapeSectionOffset; // 0x238(0x08)
	int32_t MaxLODLevel; // 0x240(0x04)
	float LODDistanceFactor; // 0x244(0x04)
	enum class ELandscapeLODFalloff LODFalloff; // 0x248(0x01)
	char pad_249[0x3]; // 0x249(0x03)
	float ComponentScreenSizeToUseSubSections; // 0x24c(0x04)
	float LOD0ScreenSize; // 0x250(0x04)
	float LOD0DistributionSetting; // 0x254(0x04)
	float LODDistributionSetting; // 0x258(0x04)
	float TessellationComponentScreenSize; // 0x25c(0x04)
	bool UseTessellationComponentScreenSizeFalloff; // 0x260(0x01)
	char pad_261[0x3]; // 0x261(0x03)
	float TessellationComponentScreenSizeFalloff; // 0x264(0x04)
	int32_t OccluderGeometryLOD; // 0x268(0x04)
	int32_t StaticLightingLOD; // 0x26c(0x04)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x270(0x08)
	float StreamingDistanceMultiplier; // 0x278(0x04)
	char pad_27C[0x4]; // 0x27c(0x04)
	struct UMaterialInterface* LandscapeMaterial; // 0x280(0x08)
	char pad_288[0x20]; // 0x288(0x20)
	struct UMaterialInterface* LandscapeHoleMaterial; // 0x2a8(0x08)
	struct TArray<struct FLandscapeProxyMaterialOverride> LandscapeMaterialsOverride; // 0x2b0(0x10)
	bool bMeshHoles; // 0x2c0(0x01)
	char MeshHolesMaxLod; // 0x2c1(0x01)
	char pad_2C2[0x6]; // 0x2c2(0x06)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x2c8(0x10)
	int32_t VirtualTextureNumLods; // 0x2d8(0x04)
	int32_t VirtualTextureLodBias; // 0x2dc(0x04)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x2e0(0x01)
	char pad_2E1[0x3]; // 0x2e1(0x03)
	float NegativeZBoundsExtension; // 0x2e4(0x04)
	float PositiveZBoundsExtension; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct TArray<struct ULandscapeComponent*> LandscapeComponents; // 0x2f0(0x10)
	struct TArray<struct ULandscapeHeightfieldCollisionComponent*> CollisionComponents; // 0x300(0x10)
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent*> FoliageComponents; // 0x310(0x10)
	char pad_320[0x64]; // 0x320(0x64)
	bool bHasLandscapeGrass; // 0x384(0x01)
	char pad_385[0x3]; // 0x385(0x03)
	float StaticLightingResolution; // 0x388(0x04)
	char bCastStaticShadow : 1; // 0x38c(0x01)
	char bCastShadowAsTwoSided : 1; // 0x38c(0x01)
	char bCastFarShadow : 1; // 0x38c(0x01)
	char pad_38C_3 : 5; // 0x38c(0x01)
	char pad_38D[0x3]; // 0x38d(0x03)
	char bAffectDistanceFieldLighting : 1; // 0x390(0x01)
	char pad_390_1 : 7; // 0x390(0x01)
	struct FLightingChannels LightingChannels; // 0x391(0x01)
	char pad_392[0x2]; // 0x392(0x02)
	char bUseMaterialPositionOffsetInStaticLighting : 1; // 0x394(0x01)
	char bRenderCustomDepth : 1; // 0x394(0x01)
	char pad_394_2 : 6; // 0x394(0x01)
	char pad_395[0x3]; // 0x395(0x03)
	int32_t CustomDepthStencilValue; // 0x398(0x04)
	float LDMaxDrawDistance; // 0x39c(0x04)
	struct FLightmassPrimitiveSettings LightmassSettings; // 0x3a0(0x18)
	int32_t CollisionMipLevel; // 0x3b8(0x04)
	int32_t SimpleCollisionMipLevel; // 0x3bc(0x04)
	float CollisionThickness; // 0x3c0(0x04)
	char pad_3C4[0x4]; // 0x3c4(0x04)
	struct FBodyInstance BodyInstance; // 0x3c8(0x130)
	char bGenerateOverlapEvents : 1; // 0x4f8(0x01)
	char bBakeMaterialPositionOffsetIntoCollision : 1; // 0x4f8(0x01)
	char pad_4F8_2 : 6; // 0x4f8(0x01)
	char pad_4F9[0x3]; // 0x4f9(0x03)
	int32_t ComponentSizeQuads; // 0x4fc(0x04)
	int32_t SubsectionSizeQuads; // 0x500(0x04)
	int32_t NumSubsections; // 0x504(0x04)
	char bUsedForNavigation : 1; // 0x508(0x01)
	char bFillCollisionUnderLandscapeForNavmesh : 1; // 0x508(0x01)
	char pad_508_2 : 6; // 0x508(0x01)
	char pad_509[0x3]; // 0x509(0x03)
	bool bUseDynamicMaterialInstance; // 0x50c(0x01)
	enum class ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x50d(0x01)
	bool bUseLandscapeForCullingInvisibleHLODVertices; // 0x50e(0x01)
	bool bHasLayersContent; // 0x50f(0x01)
	struct TMap<struct UTexture2D*, struct ULandscapeWeightmapUsage*> WeightmapUsageMap; // 0x510(0x50)

	void SetLandscapeMaterialVectorParameterValue(struct FName ParameterName, struct FLinearColor Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x28105a0
	void SetLandscapeMaterialTextureParameterValue(struct FName ParameterName, struct UTexture* Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x28104e0
	void SetLandscapeMaterialScalarParameterValue(struct FName ParameterName, float Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x2810410
	void EditorSetLandscapeMaterial(struct UMaterialInterface* NewLandscapeMaterial); // Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0xefbca0
	void EditorApplySpline(struct USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, struct ULandscapeLayerInfoObject* PaintLayer); // Function Landscape.LandscapeProxy.EditorApplySpline // (Final|Native|Public|BlueprintCallable) // @ game+0x2810080
	void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections); // Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff // (Native|Public|BlueprintCallable) // @ game+0x280fff0
	void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff); // Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff // (Native|Public|BlueprintCallable) // @ game+0x280ff70
	void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize); // Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize // (Native|Public|BlueprintCallable) // @ game+0x280fef0
	void ChangeLODDistanceFactor(float InLODDistanceFactor); // Function Landscape.LandscapeProxy.ChangeLODDistanceFactor // (Native|Public|BlueprintCallable) // @ game+0x280fe70
	void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections); // Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections // (Native|Public|BlueprintCallable) // @ game+0x280fdf0
};

// Class Landscape.Landscape
// Size: 0x560 (Inherited: 0x560)
struct ALandscape : ALandscapeProxy {
};

// Class Landscape.LandscapeBlueprintBrushBase
// Size: 0x220 (Inherited: 0x220)
struct ALandscapeBlueprintBrushBase : AActor {

	void RequestLandscapeUpdate(); // Function Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0xfb2530
	struct UTextureRenderTarget2D* Render(bool InIsHeightmap, struct UTextureRenderTarget2D* InCombinedResult, struct FName& InWeightmapLayerName); // Function Landscape.LandscapeBlueprintBrushBase.Render // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b61b60
	void Initialize(struct FTransform& InLandscapeTransform, struct FIntPoint& InLandscapeSize, struct FIntPoint& InLandscapeRenderTargetSize); // Function Landscape.LandscapeBlueprintBrushBase.Initialize // (Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x1b61b60
	void GetBlueprintRenderDependencies(struct TArray<struct UTexture2D*>& OutStreamableAssets); // Function Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b61b60
};

// Class Landscape.LandscapeComponent
// Size: 0x610 (Inherited: 0x410)
struct ULandscapeComponent : UPrimitiveComponent {
	int32_t SectionBaseX; // 0x408(0x04)
	int32_t SectionBaseY; // 0x40c(0x04)
	int32_t ComponentSizeQuads; // 0x410(0x04)
	int32_t SubsectionSizeQuads; // 0x414(0x04)
	int32_t NumSubsections; // 0x418(0x04)
	struct UMaterialInterface* OverrideMaterial; // 0x420(0x08)
	struct UMaterialInterface* OverrideHoleMaterial; // 0x428(0x08)
	struct TArray<struct FLandscapeComponentMaterialOverride> OverrideMaterials; // 0x430(0x10)
	struct TArray<struct UMaterialInstanceConstant*> MaterialInstances; // 0x440(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstancesDynamic; // 0x450(0x10)
	struct TArray<int8_t> LODIndexToMaterialIndex; // 0x460(0x10)
	struct TArray<int8_t> MaterialIndexToDisabledTessellationMaterial; // 0x470(0x10)
	struct UTexture2D* XYOffsetmapTexture; // 0x480(0x08)
	char pad_48C[0x4]; // 0x48c(0x04)
	struct FVector4 WeightmapScaleBias; // 0x490(0x10)
	float WeightmapSubsectionOffset; // 0x4a0(0x04)
	char pad_4A4[0xc]; // 0x4a4(0x0c)
	struct FVector4 HeightmapScaleBias; // 0x4b0(0x10)
	struct FBox CachedLocalBox; // 0x4c0(0x1c)
	LazyObjectProperty CollisionComponent; // 0x4dc(0x1c)
	struct UTexture2D* HeightmapTexture; // 0x4f8(0x08)
	struct TArray<struct FWeightmapLayerAllocationInfo> WeightmapLayerAllocations; // 0x500(0x10)
	struct TArray<struct UTexture2D*> WeightmapTextures; // 0x510(0x10)
	struct TArray<struct FWeightmapSource> WeightmapSources; // 0x520(0x10)
	struct FGuid MapBuildDataId; // 0x530(0x10)
	struct TArray<struct FGuid> IrrelevantLights; // 0x540(0x10)
	int32_t CollisionMipLevel; // 0x550(0x04)
	int32_t SimpleCollisionMipLevel; // 0x554(0x04)
	float NegativeZBoundsExtension; // 0x558(0x04)
	float PositiveZBoundsExtension; // 0x55c(0x04)
	float StaticLightingResolution; // 0x560(0x04)
	int32_t ForcedLOD; // 0x564(0x04)
	int32_t LODBias; // 0x568(0x04)
	struct FGuid StateId; // 0x56c(0x10)
	struct FGuid BakedTextureMaterialGuid; // 0x57c(0x10)
	char pad_58C[0x4]; // 0x58c(0x04)
	struct UTexture2D* GIBakedBaseColorTexture; // 0x590(0x08)
	char MobileBlendableLayerMask; // 0x598(0x01)
	char pad_599[0x7]; // 0x599(0x07)
	struct UMaterialInterface* MobileMaterialInterface; // 0x5a0(0x08)
	struct TArray<struct UMaterialInterface*> MobileMaterialInterfaces; // 0x5a8(0x10)
	struct TArray<struct UTexture2D*> MobileWeightmapTextures; // 0x5b8(0x10)
	char pad_5C8[0x48]; // 0x5c8(0x48)

	struct UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32_t InIndex); // Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x280e5a0
	float EditorGetPaintLayerWeightByNameAtLocation(struct FVector& InLocation, struct FName InPaintLayerName); // Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x280e4c0
	float EditorGetPaintLayerWeightAtLocation(struct FVector& InLocation, struct ULandscapeLayerInfoObject* PaintLayer); // Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x280e4c0
};

// Class Landscape.LandscapeGizmoActor
// Size: 0x220 (Inherited: 0x220)
struct ALandscapeGizmoActor : AActor {
};

// Class Landscape.LandscapeGizmoActiveActor
// Size: 0x270 (Inherited: 0x220)
struct ALandscapeGizmoActiveActor : ALandscapeGizmoActor {
	char pad_220[0x50]; // 0x220(0x50)
};

// Class Landscape.LandscapeGizmoRenderComponent
// Size: 0x410 (Inherited: 0x410)
struct ULandscapeGizmoRenderComponent : UPrimitiveComponent {
};

// Class Landscape.LandscapeGrassType
// Size: 0x60 (Inherited: 0x28)
struct ULandscapeGrassType : UObject {
	struct TArray<struct FGrassVariety> GrassVarieties; // 0x28(0x10)
	char bEnableDensityScaling : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct UStaticMesh* GrassMesh; // 0x40(0x08)
	float GrassDensity; // 0x48(0x04)
	float PlacementJitter; // 0x4c(0x04)
	int32_t StartCullDistance; // 0x50(0x04)
	int32_t EndCullDistance; // 0x54(0x04)
	bool RandomRotation; // 0x58(0x01)
	bool AlignToSurface; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)
};

// Class Landscape.LandscapeHeightfieldCollisionComponent
// Size: 0x4f0 (Inherited: 0x410)
struct ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeLayerInfoObject*> ComponentLayerInfos; // 0x408(0x10)
	int32_t SectionBaseX; // 0x418(0x04)
	int32_t SectionBaseY; // 0x41c(0x04)
	int32_t CollisionSizeQuads; // 0x420(0x04)
	float CollisionScale; // 0x424(0x04)
	int32_t SimpleCollisionSizeQuads; // 0x428(0x04)
	struct TArray<char> CollisionQuadFlags; // 0x430(0x10)
	struct FGuid HeightfieldGuid; // 0x440(0x10)
	struct FBox CachedLocalBox; // 0x450(0x1c)
	LazyObjectProperty RenderComponent; // 0x46c(0x1c)
	char pad_48C[0xc]; // 0x48c(0x0c)
	struct TArray<struct UPhysicalMaterial*> CookedPhysicalMaterials; // 0x498(0x10)
	char pad_4A8[0x48]; // 0x4a8(0x48)

	struct ULandscapeComponent* GetRenderComponent(); // Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x280e630
};

// Class Landscape.LandscapeInfo
// Size: 0x210 (Inherited: 0x28)
struct ULandscapeInfo : UObject {
	LazyObjectProperty LandscapeActor; // 0x28(0x1c)
	struct FGuid LandscapeGuid; // 0x44(0x10)
	int32_t ComponentSizeQuads; // 0x54(0x04)
	int32_t SubsectionSizeQuads; // 0x58(0x04)
	int32_t ComponentNumSubsections; // 0x5c(0x04)
	struct FVector DrawScale; // 0x60(0x0c)
	char pad_6C[0xa4]; // 0x6c(0xa4)
	struct TArray<struct ALandscapeStreamingProxy*> Proxies; // 0x110(0x10)
	char pad_120[0xf0]; // 0x120(0xf0)
};

// Class Landscape.LandscapeInfoMap
// Size: 0x80 (Inherited: 0x28)
struct ULandscapeInfoMap : UObject {
	char pad_28[0x58]; // 0x28(0x58)
};

// Class Landscape.LandscapeLayerInfoObject
// Size: 0x50 (Inherited: 0x28)
struct ULandscapeLayerInfoObject : UObject {
	struct FName LayerName; // 0x28(0x08)
	struct UPhysicalMaterial* PhysMaterial; // 0x30(0x08)
	float Hardness; // 0x38(0x04)
	struct FLinearColor LayerUsageDebugColor; // 0x3c(0x10)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Landscape.LandscapeMaterialInstanceConstant
// Size: 0x428 (Inherited: 0x410)
struct ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant {
	struct TArray<struct FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo; // 0x410(0x10)
	char bIsLayerThumbnail : 1; // 0x420(0x01)
	char bDisableTessellation : 1; // 0x420(0x01)
	char bMobile : 1; // 0x420(0x01)
	char bEditorToolUsage : 1; // 0x420(0x01)
	char pad_420_4 : 4; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
};

// Class Landscape.LandscapeMeshCollisionComponent
// Size: 0x500 (Inherited: 0x4f0)
struct ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent {
	struct FGuid MeshGuid; // 0x4e8(0x10)
};

// Class Landscape.LandscapeMeshProxyActor
// Size: 0x228 (Inherited: 0x220)
struct ALandscapeMeshProxyActor : AActor {
	struct ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent; // 0x220(0x08)
};

// Class Landscape.LandscapeMeshProxyComponent
// Size: 0x4c0 (Inherited: 0x4a0)
struct ULandscapeMeshProxyComponent : UStaticMeshComponent {
	struct FGuid LandscapeGuid; // 0x498(0x10)
	struct TArray<struct FIntPoint> ProxyComponentBases; // 0x4a8(0x10)
	int8_t ProxyLOD; // 0x4b8(0x01)
};

// Class Landscape.LandscapeSettings
// Size: 0x40 (Inherited: 0x38)
struct ULandscapeSettings : UDeveloperSettings {
	int32_t MaxNumberOfLayers; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Landscape.LandscapeSplinesComponent
// Size: 0x440 (Inherited: 0x410)
struct ULandscapeSplinesComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeSplineControlPoint*> ControlPoints; // 0x408(0x10)
	struct TArray<struct ULandscapeSplineSegment*> Segments; // 0x418(0x10)
	struct TArray<struct UMeshComponent*> CookedForeignMeshComponents; // 0x428(0x10)

	struct TArray<struct USplineMeshComponent*> GetSplineMeshComponents(); // Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents // (Final|Native|Public|BlueprintCallable) // @ game+0x2810390
};

// Class Landscape.LandscapeSplineControlPoint
// Size: 0xa8 (Inherited: 0x28)
struct ULandscapeSplineControlPoint : UObject {
	struct FVector Location; // 0x28(0x0c)
	struct FRotator Rotation; // 0x34(0x0c)
	float Width; // 0x40(0x04)
	float LayerWidthRatio; // 0x44(0x04)
	float SideFalloff; // 0x48(0x04)
	float LeftSideFalloffFactor; // 0x4c(0x04)
	float RightSideFalloffFactor; // 0x50(0x04)
	float LeftSideLayerFalloffFactor; // 0x54(0x04)
	float RightSideLayerFalloffFactor; // 0x58(0x04)
	float EndFalloff; // 0x5c(0x04)
	struct TArray<struct FLandscapeSplineConnection> ConnectedSegments; // 0x60(0x10)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x70(0x10)
	struct FBox Bounds; // 0x80(0x1c)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct UControlPointMeshComponent* LocalMeshComponent; // 0xa0(0x08)
};

// Class Landscape.LandscapeSplineSegment
// Size: 0xb0 (Inherited: 0x28)
struct ULandscapeSplineSegment : UObject {
	struct FLandscapeSplineSegmentConnection Connections[0x2]; // 0x28(0x30)
	struct FInterpCurveVector SplineInfo; // 0x58(0x18)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x70(0x10)
	struct FBox Bounds; // 0x80(0x1c)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct TArray<struct USplineMeshComponent*> LocalMeshComponents; // 0xa0(0x10)
};

// Class Landscape.LandscapeStreamingProxy
// Size: 0x580 (Inherited: 0x560)
struct ALandscapeStreamingProxy : ALandscapeProxy {
	LazyObjectProperty LandscapeActor; // 0x560(0x1c)
	char pad_57C[0x4]; // 0x57c(0x04)
};

// Class Landscape.LandscapeSubsystem
// Size: 0x98 (Inherited: 0x30)
struct ULandscapeSubsystem : UWorldSubsystem {
	char pad_30[0x68]; // 0x30(0x68)
};

// Class Landscape.LandscapeWeightmapUsage
// Size: 0x58 (Inherited: 0x28)
struct ULandscapeWeightmapUsage : UObject {
	struct ULandscapeComponent* ChannelUsage[0x4]; // 0x28(0x20)
	struct FGuid LayerGuid; // 0x48(0x10)
};

// Class Landscape.MaterialExpressionLandscapeGrassOutput
// Size: 0x50 (Inherited: 0x40)
struct UMaterialExpressionLandscapeGrassOutput : UMaterialExpressionCustomOutput {
	struct TArray<struct FGrassInput> GrassTypes; // 0x40(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerBlend
// Size: 0x60 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerBlend : UMaterialExpression {
	struct TArray<struct FLayerBlendInput> Layers; // 0x40(0x10)
	struct FGuid ExpressionGUID; // 0x50(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerCoords
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerCoords : UMaterialExpression {
	enum class ETerrainCoordMappingType MappingType; // 0x40(0x01)
	enum class ELandscapeCustomizedCoordType CustomUVType; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	float MappingScale; // 0x44(0x04)
	float MappingRotation; // 0x48(0x04)
	float MappingPanU; // 0x4c(0x04)
	float MappingPanV; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerSample
// Size: 0x60 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerSample : UMaterialExpression {
	struct FName ParameterName; // 0x40(0x08)
	float PreviewWeight; // 0x48(0x04)
	struct FGuid ExpressionGUID; // 0x4c(0x10)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// Size: 0x88 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression {
	struct FExpressionInput LayerUsed; // 0x40(0x0c)
	char pad_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput LayerNotUsed; // 0x54(0x0c)
	char pad_60[0x8]; // 0x60(0x08)
	struct FName ParameterName; // 0x68(0x08)
	char PreviewUsed : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	struct FGuid ExpressionGUID; // 0x74(0x10)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerWeight
// Size: 0x90 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerWeight : UMaterialExpression {
	struct FExpressionInput Base; // 0x40(0x0c)
	char pad_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput Layer; // 0x54(0x0c)
	char pad_60[0x8]; // 0x60(0x08)
	struct FName ParameterName; // 0x68(0x08)
	float PreviewWeight; // 0x70(0x04)
	struct FVector ConstBase; // 0x74(0x0c)
	struct FGuid ExpressionGUID; // 0x80(0x10)
};

// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// Size: 0x50 (Inherited: 0x40)
struct UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression {
	struct FGuid ExpressionGUID; // 0x40(0x10)
};

