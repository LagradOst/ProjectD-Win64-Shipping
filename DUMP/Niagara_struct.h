// Enum Niagara.ENiagaraSystemSpawnSectionEndBehavior
enum class ENiagaraSystemSpawnSectionEndBehavior : uint8 {
	SetSystemInactive = 0,
	Deactivate = 1,
	None = 2,
	ENiagaraSystemSpawnSectionEndBehavior_MAX = 3
};

// Enum Niagara.ENiagaraSystemSpawnSectionEvaluateBehavior
enum class ENiagaraSystemSpawnSectionEvaluateBehavior : uint8 {
	ActivateIfInactive = 0,
	None = 1,
	ENiagaraSystemSpawnSectionEvaluateBehavior_MAX = 2
};

// Enum Niagara.ENiagaraSystemSpawnSectionStartBehavior
enum class ENiagaraSystemSpawnSectionStartBehavior : uint8 {
	Activate = 0,
	ENiagaraSystemSpawnSectionStartBehavior_MAX = 1
};

// Enum Niagara.ENiagaraCollisionMode
enum class ENiagaraCollisionMode : uint8 {
	None = 0,
	SceneGeometry = 1,
	DepthBuffer = 2,
	DistanceField = 3,
	ENiagaraCollisionMode_MAX = 4
};

// Enum Niagara.ENiagaraLegacyTrailWidthMode
enum class ENiagaraLegacyTrailWidthMode : uint8 {
	FromCentre = 0,
	FromFirst = 1,
	FromSecond = 2,
	ENiagaraLegacyTrailWidthMode_MAX = 3
};

// Enum Niagara.ENiagaraIterationSource
enum class ENiagaraIterationSource : uint8 {
	Particles = 0,
	DataInterface = 1,
	ENiagaraIterationSource_MAX = 2
};

// Enum Niagara.ENiagaraScriptGroup
enum class ENiagaraScriptGroup : uint8 {
	Particle = 0,
	Emitter = 1,
	System = 2,
	Max = 3
};

// Enum Niagara.ENiagaraScriptUsage
enum class ENiagaraScriptUsage : uint8 {
	Function = 0,
	Module = 1,
	DynamicInput = 2,
	ParticleSpawnScript = 3,
	ParticleSpawnScriptInterpolated = 4,
	ParticleUpdateScript = 5,
	ParticleEventScript = 6,
	ParticleSimulationStageScript = 7,
	ParticleGPUComputeScript = 8,
	EmitterSpawnScript = 9,
	EmitterUpdateScript = 10,
	SystemSpawnScript = 11,
	SystemUpdateScript = 12,
	ENiagaraScriptUsage_MAX = 13
};

// Enum Niagara.ENiagaraScriptCompileStatus
enum class ENiagaraScriptCompileStatus : uint8 {
	NCS_Unknown = 0,
	NCS_Dirty = 1,
	NCS_Error = 2,
	NCS_UpToDate = 3,
	NCS_BeingCreated = 4,
	NCS_UpToDateWithWarnings = 5,
	NCS_ComputeUpToDateWithWarnings = 6,
	NCS_MAX = 7
};

// Enum Niagara.ENiagaraInputNodeUsage
enum class ENiagaraInputNodeUsage : uint8 {
	Undefined = 0,
	Parameter = 1,
	Attribute = 2,
	SystemConstant = 3,
	TranslatorConstant = 4,
	RapidIterationParameter = 5,
	ENiagaraInputNodeUsage_MAX = 6
};

// Enum Niagara.ENiagaraDataSetType
enum class ENiagaraDataSetType : uint8 {
	ParticleData = 0,
	Shared = 1,
	Event = 2,
	ENiagaraDataSetType_MAX = 3
};

// Enum Niagara.ENiagaraAgeUpdateMode
enum class ENiagaraAgeUpdateMode : uint8 {
	TickDeltaTime = 0,
	DesiredAge = 1,
	DesiredAgeNoSeek = 2,
	ENiagaraAgeUpdateMode_MAX = 3
};

// Enum Niagara.ENiagaraSimTarget
enum class ENiagaraSimTarget : uint8 {
	CPUSim = 0,
	GPUComputeSim = 1,
	ENiagaraSimTarget_MAX = 2
};

// Enum Niagara.ENiagaraDefaultMode
enum class ENiagaraDefaultMode : uint8 {
	Value = 0,
	Binding = 1,
	Custom = 2,
	ENiagaraDefaultMode_MAX = 3
};

// Enum Niagara.ENiagaraTickBehavior
enum class ENiagaraTickBehavior : uint8 {
	UsePrereqs = 0,
	UseComponentTickGroup = 1,
	ForceTickFirst = 2,
	ForceTickLast = 3,
	ENiagaraTickBehavior_MAX = 4
};

// Enum Niagara.ENCPoolMethod
enum class ENCPoolMethod : uint8 {
	None = 0,
	AutoRelease = 1,
	ManualRelease = 2,
	ManualRelease_OnComplete = 3,
	FreeInPool = 4,
	ENCPoolMethod_MAX = 5
};

// Enum Niagara.ENDISkeletalMesh_SkinningMode
enum class ENDISkeletalMesh_SkinningMode : uint8 {
	Invalid = 255,
	None = 0,
	SkinOnTheFly = 1,
	PreSkin = 2,
	ENDISkeletalMesh_MAX = 256
};

// Enum Niagara.ENiagaraScalabilityUpdateFrequency
enum class ENiagaraScalabilityUpdateFrequency : uint8 {
	SpawnOnly = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	Continuous = 4,
	ENiagaraScalabilityUpdateFrequency_MAX = 5
};

// Enum Niagara.ENiagaraCullReaction
enum class ENiagaraCullReaction : uint8 {
	Deactivate = 0,
	DeactivateImmediate = 1,
	DeactivateResume = 2,
	DeactivateImmediateResume = 3,
	ENiagaraCullReaction_MAX = 4
};

// Enum Niagara.EParticleAllocationMode
enum class EParticleAllocationMode : uint8 {
	AutomaticEstimate = 0,
	ManualEstimate = 1,
	EParticleAllocationMode_MAX = 2
};

// Enum Niagara.EScriptExecutionMode
enum class EScriptExecutionMode : uint8 {
	EveryParticle = 0,
	SpawnedParticles = 1,
	SingleParticle = 2,
	EScriptExecutionMode_MAX = 3
};

// Enum Niagara.ENiagaraSortMode
enum class ENiagaraSortMode : uint8 {
	None = 0,
	ViewDepth = 1,
	ViewDistance = 2,
	CustomAscending = 3,
	CustomDecending = 4,
	ENiagaraSortMode_MAX = 5
};

// Enum Niagara.ENiagaraMeshLockedAxisSpace
enum class ENiagaraMeshLockedAxisSpace : uint8 {
	Simulation = 0,
	World = 1,
	Local = 2,
	ENiagaraMeshLockedAxisSpace_MAX = 3
};

// Enum Niagara.ENiagaraMeshFacingMode
enum class ENiagaraMeshFacingMode : uint8 {
	Default = 0,
	Velocity = 1,
	CameraPosition = 2,
	CameraPlane = 3,
	ENiagaraMeshFacingMode_MAX = 4
};

// Enum Niagara.ENiagaraPlatformSetState
enum class ENiagaraPlatformSetState : uint8 {
	Disabled = 0,
	Enabled = 1,
	Active = 2,
	Unknown = 3,
	ENiagaraPlatformSetState_MAX = 4
};

// Enum Niagara.ENiagaraPlatformSelectionState
enum class ENiagaraPlatformSelectionState : uint8 {
	Default = 0,
	Enabled = 1,
	Disabled = 2,
	ENiagaraPlatformSelectionState_MAX = 3
};

// Enum Niagara.ENiagaraPreviewGridResetMode
enum class ENiagaraPreviewGridResetMode : uint8 {
	Never = 0,
	Individual = 1,
	All = 2,
	ENiagaraPreviewGridResetMode_MAX = 3
};

// Enum Niagara.ENiagaraRibbonTessellationMode
enum class ENiagaraRibbonTessellationMode : uint8 {
	Automatic = 0,
	Custom = 1,
	Disabled = 2,
	ENiagaraRibbonTessellationMode_MAX = 3
};

// Enum Niagara.ENiagaraRibbonDrawDirection
enum class ENiagaraRibbonDrawDirection : uint8 {
	FrontToBack = 0,
	BackToFront = 1,
	ENiagaraRibbonDrawDirection_MAX = 2
};

// Enum Niagara.ENiagaraRibbonAgeOffsetMode
enum class ENiagaraRibbonAgeOffsetMode : uint8 {
	Scale = 0,
	Clip = 1,
	ENiagaraRibbonAgeOffsetMode_MAX = 2
};

// Enum Niagara.ENiagaraRibbonFacingMode
enum class ENiagaraRibbonFacingMode : uint8 {
	Screen = 0,
	Custom = 1,
	CustomSideVector = 2,
	ENiagaraRibbonFacingMode_MAX = 3
};

// Enum Niagara.ENiagaraModuleDependencyScriptConstraint
enum class ENiagaraModuleDependencyScriptConstraint : uint8 {
	SameScript = 0,
	AllScripts = 1,
	ENiagaraModuleDependencyScriptConstraint_MAX = 2
};

// Enum Niagara.ENiagaraModuleDependencyType
enum class ENiagaraModuleDependencyType : uint8 {
	PreDependency = 0,
	PostDependency = 1,
	ENiagaraModuleDependencyType_MAX = 2
};

// Enum Niagara.EUnusedAttributeBehaviour
enum class EUnusedAttributeBehaviour : uint8 {
	Copy = 0,
	Zero = 1,
	None = 2,
	MarkInvalid = 3,
	PassThrough = 4,
	EUnusedAttributeBehaviour_MAX = 5
};

// Enum Niagara.ENiagaraSpriteFacingMode
enum class ENiagaraSpriteFacingMode : uint8 {
	FaceCamera = 0,
	FaceCameraPlane = 1,
	CustomFacingVector = 2,
	FaceCameraPosition = 3,
	FaceCameraDistanceBlend = 4,
	ENiagaraSpriteFacingMode_MAX = 5
};

// Enum Niagara.ENiagaraSpriteAlignment
enum class ENiagaraSpriteAlignment : uint8 {
	Unaligned = 0,
	VelocityAligned = 1,
	CustomAlignment = 2,
	ENiagaraSpriteAlignment_MAX = 3
};

// Enum Niagara.ENiagaraParameterPanelCategory
enum class ENiagaraParameterPanelCategory : uint8 {
	Input = 0,
	Attributes = 1,
	Output = 2,
	Local = 3,
	User = 4,
	Engine = 5,
	Owner = 6,
	System = 7,
	Emitter = 8,
	Particles = 9,
	ScriptTransient = 10,
	StaticSwitch = 11,
	None = 12,
	Num = 13,
	ENiagaraParameterPanelCategory_MAX = 14
};

// Enum Niagara.ENiagaraScriptParameterUsage
enum class ENiagaraScriptParameterUsage : uint8 {
	Input = 0,
	Output = 1,
	Local = 2,
	InputOutput = 3,
	InitialValueInput = 4,
	None = 5,
	Num = 6,
	ENiagaraScriptParameterUsage_MAX = 7
};

// Enum Niagara.ENiagaraParameterScope
enum class ENiagaraParameterScope : uint8 {
	Input = 0,
	User = 1,
	Engine = 2,
	Owner = 3,
	System = 4,
	Emitter = 5,
	Particles = 6,
	ScriptPersistent = 7,
	ScriptTransient = 8,
	Local = 9,
	Custom = 10,
	DISPLAY_ONLY_StaticSwitch = 11,
	Output = 12,
	None = 13,
	Num = 14,
	ENiagaraParameterScope_MAX = 15
};

// Enum Niagara.ENiagaraExecutionState
enum class ENiagaraExecutionState : uint8 {
	Active = 0,
	Inactive = 1,
	InactiveClear = 2,
	Complete = 3,
	Disabled = 4,
	Num = 5,
	ENiagaraExecutionState_MAX = 6
};

// Enum Niagara.ENiagaraExecutionStateSource
enum class ENiagaraExecutionStateSource : uint8 {
	Scalability = 0,
	Internal = 1,
	Owner = 2,
	InternalCompletion = 3,
	ENiagaraExecutionStateSource_MAX = 4
};

// Enum Niagara.ENiagaraNumericOutputTypeSelectionMode
enum class ENiagaraNumericOutputTypeSelectionMode : uint8 {
	None = 0,
	Largest = 1,
	Smallest = 2,
	Scalar = 3,
	ENiagaraNumericOutputTypeSelectionMode_MAX = 4
};

// Enum Niagara.ENiagaraVariantMode
enum class ENiagaraVariantMode : uint8 {
	None = 0,
	Object = 1,
	DataInterface = 2,
	Bytes = 3,
	ENiagaraVariantMode_MAX = 4
};

// ScriptStruct Niagara.MovieSceneNiagaraParameterSectionTemplate
// Size: 0x48 (Inherited: 0x20)
struct FMovieSceneNiagaraParameterSectionTemplate : FMovieSceneEvalTemplate {
	struct FNiagaraVariable Parameter; // 0x20(0x28)
};

// ScriptStruct Niagara.NiagaraVariableBase
// Size: 0x18 (Inherited: 0x00)
struct FNiagaraVariableBase {
	struct FName Name; // 0x00(0x08)
	struct FNiagaraTypeDefinition TypeDef; // 0x08(0x10)
};

// ScriptStruct Niagara.NiagaraTypeDefinition
// Size: 0x10 (Inherited: 0x00)
struct FNiagaraTypeDefinition {
	struct UObject* ClassStructOrEnum; // 0x00(0x08)
	uint16_t UnderlyingType; // 0x08(0x02)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct Niagara.NiagaraVariable
// Size: 0x28 (Inherited: 0x18)
struct FNiagaraVariable : FNiagaraVariableBase {
	struct TArray<char> VarData; // 0x18(0x10)
};

// ScriptStruct Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
// Size: 0xd8 (Inherited: 0x48)
struct FMovieSceneNiagaraBoolParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	struct FMovieSceneBoolChannel BoolChannel; // 0x48(0x90)
};

// ScriptStruct Niagara.MovieSceneNiagaraColorParameterSectionTemplate
// Size: 0x2c8 (Inherited: 0x48)
struct FMovieSceneNiagaraColorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	struct FMovieSceneFloatChannel RedChannel; // 0x48(0xa0)
	struct FMovieSceneFloatChannel GreenChannel; // 0xe8(0xa0)
	struct FMovieSceneFloatChannel BlueChannel; // 0x188(0xa0)
	struct FMovieSceneFloatChannel AlphaChannel; // 0x228(0xa0)
};

// ScriptStruct Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
// Size: 0xe8 (Inherited: 0x48)
struct FMovieSceneNiagaraFloatParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	struct FMovieSceneFloatChannel FloatChannel; // 0x48(0xa0)
};

// ScriptStruct Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
// Size: 0xd8 (Inherited: 0x48)
struct FMovieSceneNiagaraIntegerParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	struct FMovieSceneIntegerChannel IntegerChannel; // 0x48(0x90)
};

// ScriptStruct Niagara.MovieSceneNiagaraSystemTrackImplementation
// Size: 0x28 (Inherited: 0x10)
struct FMovieSceneNiagaraSystemTrackImplementation : FMovieSceneTrackImplementation {
	struct FFrameNumber SpawnSectionStartFrame; // 0x10(0x04)
	struct FFrameNumber SpawnSectionEndFrame; // 0x14(0x04)
	enum class ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior; // 0x18(0x04)
	enum class ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior; // 0x1c(0x04)
	enum class ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior; // 0x20(0x04)
	enum class ENiagaraAgeUpdateMode AgeUpdateMode; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct Niagara.MovieSceneNiagaraSystemTrackTemplate
// Size: 0x20 (Inherited: 0x20)
struct FMovieSceneNiagaraSystemTrackTemplate : FMovieSceneEvalTemplate {
};

// ScriptStruct Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
// Size: 0x2d0 (Inherited: 0x48)
struct FMovieSceneNiagaraVectorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	struct FMovieSceneFloatChannel VectorChannels[0x4]; // 0x48(0x280)
	int32_t ChannelsUsed; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
};

// ScriptStruct Niagara.NiagaraRandInfo
// Size: 0x0c (Inherited: 0x00)
struct FNiagaraRandInfo {
	int32_t Seed1; // 0x00(0x04)
	int32_t Seed2; // 0x04(0x04)
	int32_t Seed3; // 0x08(0x04)
};

// ScriptStruct Niagara.NiagaraUserParameterBinding
// Size: 0x28 (Inherited: 0x00)
struct FNiagaraUserParameterBinding {
	struct FNiagaraVariable Parameter; // 0x00(0x28)
};

// ScriptStruct Niagara.NiagaraScriptVariableBinding
// Size: 0x08 (Inherited: 0x00)
struct FNiagaraScriptVariableBinding {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct Niagara.NiagaraVariableDataInterfaceBinding
// Size: 0x28 (Inherited: 0x00)
struct FNiagaraVariableDataInterfaceBinding {
	struct FNiagaraVariable BoundVariable; // 0x00(0x28)
};

// ScriptStruct Niagara.NiagaraVariableAttributeBinding
// Size: 0x78 (Inherited: 0x00)
struct FNiagaraVariableAttributeBinding {
	struct FNiagaraVariable BoundVariable; // 0x00(0x28)
	struct FNiagaraVariable DataSetVariable; // 0x28(0x28)
	struct FNiagaraVariable DefaultValueIfNonExistent; // 0x50(0x28)
};

// ScriptStruct Niagara.NiagaraVariableInfo
// Size: 0x48 (Inherited: 0x00)
struct FNiagaraVariableInfo {
	struct FNiagaraVariable Variable; // 0x00(0x28)
	struct FText Definition; // 0x28(0x18)
	struct UNiagaraDataInterface* DataInterface; // 0x40(0x08)
};

// ScriptStruct Niagara.NiagaraSystemUpdateContext
// Size: 0x38 (Inherited: 0x00)
struct FNiagaraSystemUpdateContext {
	struct TArray<struct UNiagaraComponent*> ComponentsToReset; // 0x00(0x10)
	struct TArray<struct UNiagaraComponent*> ComponentsToReInit; // 0x10(0x10)
	struct TArray<struct UNiagaraSystem*> SystemSimsToDestroy; // 0x20(0x10)
	char pad_30[0x8]; // 0x30(0x08)
};

// ScriptStruct Niagara.VMExternalFunctionBindingInfo
// Size: 0x38 (Inherited: 0x00)
struct FVMExternalFunctionBindingInfo {
	struct FName Name; // 0x00(0x08)
	struct FName OwnerName; // 0x08(0x08)
	struct TArray<bool> InputParamLocations; // 0x10(0x10)
	int32_t NumOutputs; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FVMFunctionSpecifier> FunctionSpecifiers; // 0x28(0x10)
};

// ScriptStruct Niagara.VMFunctionSpecifier
// Size: 0x10 (Inherited: 0x00)
struct FVMFunctionSpecifier {
	struct FName Key; // 0x00(0x08)
	struct FName Value; // 0x08(0x08)
};

// ScriptStruct Niagara.NiagaraStatScope
// Size: 0x10 (Inherited: 0x00)
struct FNiagaraStatScope {
	struct FName FullName; // 0x00(0x08)
	struct FName FriendlyName; // 0x08(0x08)
};

// ScriptStruct Niagara.NiagaraScriptDataInterfaceCompileInfo
// Size: 0x38 (Inherited: 0x00)
struct FNiagaraScriptDataInterfaceCompileInfo {
	struct FName Name; // 0x00(0x08)
	int32_t UserPtrIdx; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FNiagaraTypeDefinition Type; // 0x10(0x10)
	struct FName RegisteredParameterMapRead; // 0x20(0x08)
	struct FName RegisteredParameterMapWrite; // 0x28(0x08)
	bool bIsPlaceholder; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Niagara.NiagaraScriptDataInterfaceInfo
// Size: 0x38 (Inherited: 0x00)
struct FNiagaraScriptDataInterfaceInfo {
	struct UNiagaraDataInterface* DataInterface; // 0x00(0x08)
	struct FName Name; // 0x08(0x08)
	int32_t UserPtrIdx; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FNiagaraTypeDefinition Type; // 0x18(0x10)
	struct FName RegisteredParameterMapRead; // 0x28(0x08)
	struct FName RegisteredParameterMapWrite; // 0x30(0x08)
};

// ScriptStruct Niagara.NiagaraFunctionSignature
// Size: 0x88 (Inherited: 0x00)
struct FNiagaraFunctionSignature {
	struct FName Name; // 0x00(0x08)
	struct TArray<struct FNiagaraVariable> Inputs; // 0x08(0x10)
	struct TArray<struct FNiagaraVariable> Outputs; // 0x18(0x10)
	struct FName OwnerName; // 0x28(0x08)
	char bRequiresContext : 1; // 0x30(0x01)
	char bMemberFunction : 1; // 0x30(0x01)
	char bExperimental : 1; // 0x30(0x01)
	char bSupportsCPU : 1; // 0x30(0x01)
	char bSupportsGPU : 1; // 0x30(0x01)
	char bWriteFunction : 1; // 0x30(0x01)
	char pad_30_6 : 2; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TMap<struct FName, struct FName> FunctionSpecifiers; // 0x38(0x50)
};

// ScriptStruct Niagara.NiagaraScriptDataUsageInfo
// Size: 0x01 (Inherited: 0x00)
struct FNiagaraScriptDataUsageInfo {
	bool bReadsAttributeData; // 0x00(0x01)
};

// ScriptStruct Niagara.NiagaraDataSetProperties
// Size: 0x20 (Inherited: 0x00)
struct FNiagaraDataSetProperties {
	struct FNiagaraDataSetID ID; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FNiagaraVariable> Variables; // 0x10(0x10)
};

// ScriptStruct Niagara.NiagaraDataSetID
// Size: 0x0c (Inherited: 0x00)
struct FNiagaraDataSetID {
	struct FName Name; // 0x00(0x08)
	enum class ENiagaraDataSetType Type; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Niagara.NCPool
// Size: 0x38 (Inherited: 0x00)
struct FNCPool {
	struct TArray<struct FNCPoolElement> FreeElements; // 0x00(0x10)
	struct TArray<struct UNiagaraComponent*> InUseComponents_Auto; // 0x10(0x10)
	struct TArray<struct UNiagaraComponent*> InUseComponents_Manual; // 0x20(0x10)
	char pad_30[0x8]; // 0x30(0x08)
};

// ScriptStruct Niagara.NCPoolElement
// Size: 0x10 (Inherited: 0x00)
struct FNCPoolElement {
	struct UNiagaraComponent* Component; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Niagara.BasicParticleData
// Size: 0x1c (Inherited: 0x00)
struct FBasicParticleData {
	struct FVector Position; // 0x00(0x0c)
	float Size; // 0x0c(0x04)
	struct FVector Velocity; // 0x10(0x0c)
};

// ScriptStruct Niagara.MeshTriCoordinate
// Size: 0x10 (Inherited: 0x00)
struct FMeshTriCoordinate {
	int32_t Tri; // 0x00(0x04)
	struct FVector BaryCoord; // 0x04(0x0c)
};

// ScriptStruct Niagara.NDIStaticMeshSectionFilter
// Size: 0x10 (Inherited: 0x00)
struct FNDIStaticMeshSectionFilter {
	struct TArray<int32_t> AllowedMaterialSlots; // 0x00(0x10)
};

// ScriptStruct Niagara.NiagaraDataSetCompiledData
// Size: 0x40 (Inherited: 0x00)
struct FNiagaraDataSetCompiledData {
	struct TArray<struct FNiagaraVariable> Variables; // 0x00(0x10)
	struct TArray<struct FNiagaraVariableLayoutInfo> VariableLayouts; // 0x10(0x10)
	uint32_t TotalFloatComponents; // 0x20(0x04)
	uint32_t TotalInt32Components; // 0x24(0x04)
	char bRequiresPersistentIDs : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FNiagaraDataSetID ID; // 0x2c(0x0c)
	enum class ENiagaraSimTarget SimTarget; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Niagara.NiagaraVariableLayoutInfo
// Size: 0x48 (Inherited: 0x00)
struct FNiagaraVariableLayoutInfo {
	uint32_t FloatComponentStart; // 0x00(0x04)
	uint32_t Int32ComponentStart; // 0x04(0x04)
	struct FNiagaraTypeLayoutInfo LayoutInfo; // 0x08(0x40)
};

// ScriptStruct Niagara.NiagaraTypeLayoutInfo
// Size: 0x40 (Inherited: 0x00)
struct FNiagaraTypeLayoutInfo {
	struct TArray<uint32_t> FloatComponentByteOffsets; // 0x00(0x10)
	struct TArray<uint32_t> FloatComponentRegisterOffsets; // 0x10(0x10)
	struct TArray<uint32_t> Int32ComponentByteOffsets; // 0x20(0x10)
	struct TArray<uint32_t> Int32ComponentRegisterOffsets; // 0x30(0x10)
};

// ScriptStruct Niagara.NiagaraGraphViewSettings
// Size: 0x10 (Inherited: 0x00)
struct FNiagaraGraphViewSettings {
	struct FVector2D Location; // 0x00(0x08)
	float Zoom; // 0x08(0x04)
	bool bIsValid; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Niagara.NiagaraEmitterScalabilityOverrides
// Size: 0x10 (Inherited: 0x00)
struct FNiagaraEmitterScalabilityOverrides {
	struct TArray<struct FNiagaraEmitterScalabilityOverride> Overrides; // 0x00(0x10)
};

// ScriptStruct Niagara.NiagaraEmitterScalabilitySettings
// Size: 0x28 (Inherited: 0x00)
struct FNiagaraEmitterScalabilitySettings {
	struct FNiagaraPlatformSet Platforms; // 0x00(0x20)
	char bScaleSpawnCount : 1; // 0x20(0x01)
	char pad_20_1 : 7; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float SpawnCountScale; // 0x24(0x04)
};

// ScriptStruct Niagara.NiagaraPlatformSet
// Size: 0x20 (Inherited: 0x00)
struct FNiagaraPlatformSet {
	int32_t QualityLevelMask; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FNiagaraDeviceProfileStateEntry> DeviceProfileStates; // 0x08(0x10)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct Niagara.NiagaraDeviceProfileStateEntry
// Size: 0x10 (Inherited: 0x00)
struct FNiagaraDeviceProfileStateEntry {
	struct FName ProfileName; // 0x00(0x08)
	uint32_t QualityLevelMask; // 0x08(0x04)
	uint32_t SetQualityLevelMask; // 0x0c(0x04)
};

// ScriptStruct Niagara.NiagaraEmitterScalabilityOverride
// Size: 0x30 (Inherited: 0x28)
struct FNiagaraEmitterScalabilityOverride : FNiagaraEmitterScalabilitySettings {
	char bOverrideSpawnCountScale : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Niagara.NiagaraEmitterScalabilitySettingsArray
// Size: 0x10 (Inherited: 0x00)
struct FNiagaraEmitterScalabilitySettingsArray {
	struct TArray<struct FNiagaraEmitterScalabilitySettings> Settings; // 0x00(0x10)
};

// ScriptStruct Niagara.NiagaraSystemScalabilityOverrides
// Size: 0x10 (Inherited: 0x00)
struct FNiagaraSystemScalabilityOverrides {
	struct TArray<struct FNiagaraSystemScalabilityOverride> Overrides; // 0x00(0x10)
};

// ScriptStruct Niagara.NiagaraSystemScalabilitySettings
// Size: 0x30 (Inherited: 0x00)
struct FNiagaraSystemScalabilitySettings {
	struct FNiagaraPlatformSet Platforms; // 0x00(0x20)
	char bCullByDistance : 1; // 0x20(0x01)
	char bCullMaxInstanceCount : 1; // 0x20(0x01)
	char bCullByMaxTimeWithoutRender : 1; // 0x20(0x01)
	char pad_20_3 : 5; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float MaxDistance; // 0x24(0x04)
	float MaxInstances; // 0x28(0x04)
	float MaxTimeWithoutRender; // 0x2c(0x04)
};

// ScriptStruct Niagara.NiagaraSystemScalabilityOverride
// Size: 0x38 (Inherited: 0x30)
struct FNiagaraSystemScalabilityOverride : FNiagaraSystemScalabilitySettings {
	char bOverrideDistanceSettings : 1; // 0x30(0x01)
	char bOverrideInstanceCountSettings : 1; // 0x30(0x01)
	char bOverrideTimeSinceRendererSettings : 1; // 0x30(0x01)
	char pad_30_3 : 5; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Niagara.NiagaraSystemScalabilitySettingsArray
// Size: 0x10 (Inherited: 0x00)
struct FNiagaraSystemScalabilitySettingsArray {
	struct TArray<struct FNiagaraSystemScalabilitySettings> Settings; // 0x00(0x10)
};

// ScriptStruct Niagara.NiagaraDetailsLevelScaleOverrides
// Size: 0x14 (Inherited: 0x00)
struct FNiagaraDetailsLevelScaleOverrides {
	float Low; // 0x00(0x04)
	float Medium; // 0x04(0x04)
	float High; // 0x08(0x04)
	float Epic; // 0x0c(0x04)
	float Cine; // 0x10(0x04)
};

// ScriptStruct Niagara.NiagaraEmitterScriptProperties
// Size: 0x28 (Inherited: 0x00)
struct FNiagaraEmitterScriptProperties {
	struct UNiagaraScript* Script; // 0x00(0x08)
	struct TArray<struct FNiagaraEventReceiverProperties> EventReceivers; // 0x08(0x10)
	struct TArray<struct FNiagaraEventGeneratorProperties> EventGenerators; // 0x18(0x10)
};

// ScriptStruct Niagara.NiagaraEventGeneratorProperties
// Size: 0x50 (Inherited: 0x00)
struct FNiagaraEventGeneratorProperties {
	int32_t MaxEventsPerFrame; // 0x00(0x04)
	struct FName ID; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FNiagaraDataSetCompiledData DataSetCompiledData; // 0x10(0x40)
};

// ScriptStruct Niagara.NiagaraEventReceiverProperties
// Size: 0x18 (Inherited: 0x00)
struct FNiagaraEventReceiverProperties {
	struct FName Name; // 0x00(0x08)
	struct FName SourceEventGenerator; // 0x08(0x08)
	struct FName SourceEmitter; // 0x10(0x08)
};

// ScriptStruct Niagara.NiagaraEventScriptProperties
// Size: 0x58 (Inherited: 0x28)
struct FNiagaraEventScriptProperties : FNiagaraEmitterScriptProperties {
	enum class EScriptExecutionMode ExecutionMode; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	uint32_t SpawnNumber; // 0x2c(0x04)
	uint32_t MaxEventsPerFrame; // 0x30(0x04)
	struct FGuid SourceEmitterID; // 0x34(0x10)
	struct FName SourceEventName; // 0x44(0x08)
	bool bRandomSpawnNumber; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	uint32_t MinSpawnNumber; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct Niagara.NiagaraEmitterHandle
// Size: 0x30 (Inherited: 0x00)
struct FNiagaraEmitterHandle {
	struct FGuid ID; // 0x00(0x10)
	struct FName IdName; // 0x10(0x08)
	bool bIsEnabled; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FName Name; // 0x1c(0x08)
	char pad_24[0x4]; // 0x24(0x04)
	struct UNiagaraEmitter* Instance; // 0x28(0x08)
};

// ScriptStruct Niagara.NiagaraCollisionEventPayload
// Size: 0x2c (Inherited: 0x00)
struct FNiagaraCollisionEventPayload {
	struct FVector CollisionPos; // 0x00(0x0c)
	struct FVector CollisionNormal; // 0x0c(0x0c)
	struct FVector CollisionVelocity; // 0x18(0x0c)
	int32_t ParticleIndex; // 0x24(0x04)
	int32_t PhysicalMaterialIndex; // 0x28(0x04)
};

// ScriptStruct Niagara.NiagaraMeshMaterialOverride
// Size: 0x30 (Inherited: 0x00)
struct FNiagaraMeshMaterialOverride {
	struct UMaterialInterface* ExplicitMat; // 0x00(0x08)
	struct FNiagaraUserParameterBinding UserParamBinding; // 0x08(0x28)
};

// ScriptStruct Niagara.NiagaraParameters
// Size: 0x10 (Inherited: 0x00)
struct FNiagaraParameters {
	struct TArray<struct FNiagaraVariable> Parameters; // 0x00(0x10)
};

// ScriptStruct Niagara.NiagaraParameterStore
// Size: 0xb8 (Inherited: 0x00)
struct FNiagaraParameterStore {
	char pad_0[0x8]; // 0x00(0x08)
	struct UObject* Owner; // 0x08(0x08)
	struct TArray<struct FNiagaraVariableWithOffset> SortedParameterOffsets; // 0x10(0x10)
	struct TArray<char> ParameterData; // 0x20(0x10)
	struct TArray<struct UNiagaraDataInterface*> DataInterfaces; // 0x30(0x10)
	struct TArray<struct UObject*> UObjects; // 0x40(0x10)
	char pad_50[0x68]; // 0x50(0x68)
};

// ScriptStruct Niagara.NiagaraVariableWithOffset
// Size: 0x20 (Inherited: 0x18)
struct FNiagaraVariableWithOffset : FNiagaraVariableBase {
	int32_t Offset; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Niagara.NiagaraBoundParameter
// Size: 0x30 (Inherited: 0x00)
struct FNiagaraBoundParameter {
	struct FNiagaraVariable Parameter; // 0x00(0x28)
	int32_t SrcOffset; // 0x28(0x04)
	int32_t DestOffset; // 0x2c(0x04)
};

// ScriptStruct Niagara.NiagaraPlatformSetConflictInfo
// Size: 0x18 (Inherited: 0x00)
struct FNiagaraPlatformSetConflictInfo {
	int32_t SetAIndex; // 0x00(0x04)
	int32_t SetBIndex; // 0x04(0x04)
	struct TArray<struct FNiagaraPlatformSetConflictEntry> Conflicts; // 0x08(0x10)
};

// ScriptStruct Niagara.NiagaraPlatformSetConflictEntry
// Size: 0x0c (Inherited: 0x00)
struct FNiagaraPlatformSetConflictEntry {
	struct FName ProfileName; // 0x00(0x08)
	int32_t QualityLevelMask; // 0x08(0x04)
};

// ScriptStruct Niagara.NiagaraScalabilityManager
// Size: 0x40 (Inherited: 0x00)
struct FNiagaraScalabilityManager {
	struct UNiagaraEffectType* EffectType; // 0x00(0x08)
	struct TArray<struct UNiagaraComponent*> ManagedComponents; // 0x08(0x10)
	char pad_18[0x28]; // 0x18(0x28)
};

// ScriptStruct Niagara.NiagaraVMExecutableData
// Size: 0x128 (Inherited: 0x00)
struct FNiagaraVMExecutableData {
	struct TArray<char> ByteCode; // 0x00(0x10)
	struct TArray<char> OptimizedByteCode; // 0x10(0x10)
	int32_t NumTempRegisters; // 0x20(0x04)
	int32_t NumUserPtrs; // 0x24(0x04)
	struct FNiagaraParameters Parameters; // 0x28(0x10)
	struct FNiagaraParameters InternalParameters; // 0x38(0x10)
	struct TMap<struct FName, struct FNiagaraParameters> DataSetToParameters; // 0x48(0x50)
	struct TArray<struct FNiagaraVariable> Attributes; // 0x98(0x10)
	struct FNiagaraScriptDataUsageInfo DataUsage; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct TArray<struct FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo; // 0xb0(0x10)
	struct TArray<struct FVMExternalFunctionBindingInfo> CalledVMExternalFunctions; // 0xc0(0x10)
	struct TArray<struct FNiagaraDataSetID> ReadDataSets; // 0xd0(0x10)
	struct TArray<struct FNiagaraDataSetProperties> WriteDataSets; // 0xe0(0x10)
	struct TArray<struct FNiagaraStatScope> StatScopes; // 0xf0(0x10)
	struct TArray<struct FNiagaraDataInterfaceGPUParamInfo> DIParamInfo; // 0x100(0x10)
	enum class ENiagaraScriptCompileStatus LastCompileStatus; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct TArray<struct FSimulationStageMetaData> SimulationStageMetaData; // 0x118(0x10)
};

// ScriptStruct Niagara.SimulationStageMetaData
// Size: 0x28 (Inherited: 0x00)
struct FSimulationStageMetaData {
	struct FName IterationSource; // 0x00(0x08)
	char bSpawnOnly : 1; // 0x08(0x01)
	char bWritesParticles : 1; // 0x08(0x01)
	char pad_8_2 : 6; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct FName> OutputDestinations; // 0x10(0x10)
	int32_t MinStage; // 0x20(0x04)
	int32_t MaxStage; // 0x24(0x04)
};

// ScriptStruct Niagara.NiagaraVMExecutableDataId
// Size: 0x48 (Inherited: 0x00)
struct FNiagaraVMExecutableDataId {
	struct FGuid CompilerVersionID; // 0x00(0x10)
	enum class ENiagaraScriptUsage ScriptUsageType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FGuid ScriptUsageTypeID; // 0x14(0x10)
	char bUsesRapidIterationParams : 1; // 0x24(0x01)
	char bInterpolatedSpawn : 1; // 0x24(0x01)
	char bRequiresPersistentIDs : 1; // 0x24(0x01)
	char pad_24_3 : 5; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FGuid BaseScriptID; // 0x28(0x10)
	struct FNiagaraCompileHash BaseScriptCompileHash; // 0x38(0x10)
};

// ScriptStruct Niagara.NiagaraModuleDependency
// Size: 0x28 (Inherited: 0x00)
struct FNiagaraModuleDependency {
	struct FName ID; // 0x00(0x08)
	enum class ENiagaraModuleDependencyType Type; // 0x08(0x01)
	enum class ENiagaraModuleDependencyScriptConstraint ScriptConstraint; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct FText Description; // 0x10(0x18)
};

// ScriptStruct Niagara.NiagaraScriptExecutionParameterStore
// Size: 0xd8 (Inherited: 0xb8)
struct FNiagaraScriptExecutionParameterStore : FNiagaraParameterStore {
	int32_t ParameterSize; // 0xb8(0x04)
	uint32_t PaddedParameterSize; // 0xbc(0x04)
	struct TArray<struct FNiagaraScriptExecutionPaddingInfo> PaddingInfo; // 0xc0(0x10)
	char bInitialized : 1; // 0xd0(0x01)
	char pad_D0_1 : 7; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
};

// ScriptStruct Niagara.NiagaraScriptExecutionPaddingInfo
// Size: 0x08 (Inherited: 0x00)
struct FNiagaraScriptExecutionPaddingInfo {
	uint16_t SrcOffset; // 0x00(0x02)
	uint16_t DestOffset; // 0x02(0x02)
	uint16_t SrcSize; // 0x04(0x02)
	uint16_t DestSize; // 0x06(0x02)
};

// ScriptStruct Niagara.NiagaraScriptHighlight
// Size: 0x28 (Inherited: 0x00)
struct FNiagaraScriptHighlight {
	struct FLinearColor Color; // 0x00(0x10)
	struct FText DisplayName; // 0x10(0x18)
};

// ScriptStruct Niagara.NiagaraSystemCompileRequest
// Size: 0x80 (Inherited: 0x00)
struct FNiagaraSystemCompileRequest {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct UObject*> RootObjects; // 0x08(0x10)
	char pad_18[0x68]; // 0x18(0x68)
};

// ScriptStruct Niagara.EmitterCompiledScriptPair
// Size: 0x78 (Inherited: 0x00)
struct FEmitterCompiledScriptPair {
	char pad_0[0x78]; // 0x00(0x78)
};

// ScriptStruct Niagara.NiagaraSystemCompiledData
// Size: 0x258 (Inherited: 0x00)
struct FNiagaraSystemCompiledData {
	struct FNiagaraParameterStore InstanceParamStore; // 0x00(0xb8)
	struct FNiagaraDataSetCompiledData DataSetCompiledData; // 0xb8(0x40)
	struct FNiagaraDataSetCompiledData SpawnInstanceParamsDataSetCompiledData; // 0xf8(0x40)
	struct FNiagaraDataSetCompiledData UpdateInstanceParamsDataSetCompiledData; // 0x138(0x40)
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceGlobalBinding; // 0x178(0x20)
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceSystemBinding; // 0x198(0x20)
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceOwnerBinding; // 0x1b8(0x20)
	struct TArray<struct FNiagaraParameterDataSetBindingCollection> SpawnInstanceEmitterBindings; // 0x1d8(0x10)
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceGlobalBinding; // 0x1e8(0x20)
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceSystemBinding; // 0x208(0x20)
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceOwnerBinding; // 0x228(0x20)
	struct TArray<struct FNiagaraParameterDataSetBindingCollection> UpdateInstanceEmitterBindings; // 0x248(0x10)
};

// ScriptStruct Niagara.NiagaraParameterDataSetBindingCollection
// Size: 0x20 (Inherited: 0x00)
struct FNiagaraParameterDataSetBindingCollection {
	struct TArray<struct FNiagaraParameterDataSetBinding> FloatOffsets; // 0x00(0x10)
	struct TArray<struct FNiagaraParameterDataSetBinding> Int32Offsets; // 0x10(0x10)
};

// ScriptStruct Niagara.NiagaraParameterDataSetBinding
// Size: 0x08 (Inherited: 0x00)
struct FNiagaraParameterDataSetBinding {
	int32_t ParameterOffset; // 0x00(0x04)
	int32_t DataSetComponentOffset; // 0x04(0x04)
};

// ScriptStruct Niagara.NiagaraEmitterCompiledData
// Size: 0x140 (Inherited: 0x00)
struct FNiagaraEmitterCompiledData {
	struct TArray<struct FName> SpawnAttributes; // 0x00(0x10)
	struct FNiagaraVariable EmitterSpawnIntervalVar; // 0x10(0x28)
	struct FNiagaraVariable EmitterInterpSpawnStartDTVar; // 0x38(0x28)
	struct FNiagaraVariable EmitterSpawnGroupVar; // 0x60(0x28)
	struct FNiagaraVariable EmitterAgeVar; // 0x88(0x28)
	struct FNiagaraVariable EmitterRandomSeedVar; // 0xb0(0x28)
	struct FNiagaraVariable EmitterTotalSpawnedParticlesVar; // 0xd8(0x28)
	struct FNiagaraDataSetCompiledData DataSetCompiledData; // 0x100(0x40)
};

// ScriptStruct Niagara.NiagaraVariableMetaData
// Size: 0xe8 (Inherited: 0x00)
struct FNiagaraVariableMetaData {
	struct FText Description; // 0x00(0x18)
	struct FText CategoryName; // 0x18(0x18)
	bool bAdvancedDisplay; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t EditorSortPriority; // 0x34(0x04)
	bool bInlineEditConditionToggle; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FNiagaraInputConditionMetadata EditCondition; // 0x40(0x18)
	struct FNiagaraInputConditionMetadata VisibleCondition; // 0x58(0x18)
	struct TMap<struct FName, struct FString> PropertyMetaData; // 0x70(0x50)
	struct FName ScopeName; // 0xc0(0x08)
	enum class ENiagaraScriptParameterUsage Usage; // 0xc8(0x04)
	bool bIsStaticSwitch; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	int32_t StaticSwitchDefaultValue; // 0xd0(0x04)
	bool bAddedToNodeGraphDeepCopy; // 0xd4(0x01)
	bool bOutputIsPersistent; // 0xd5(0x01)
	char pad_D6[0x2]; // 0xd6(0x02)
	struct FName CachedNamespacelessVariableName; // 0xd8(0x08)
	bool bCreatedInSystemEditor; // 0xe0(0x01)
	bool bUseLegacyNameString; // 0xe1(0x01)
	char pad_E2[0x6]; // 0xe2(0x06)
};

// ScriptStruct Niagara.NiagaraInputConditionMetadata
// Size: 0x18 (Inherited: 0x00)
struct FNiagaraInputConditionMetadata {
	struct FName InputName; // 0x00(0x08)
	struct TArray<struct FString> TargetValues; // 0x08(0x10)
};

// ScriptStruct Niagara.NiagaraParameterScopeInfo
// Size: 0x18 (Inherited: 0x00)
struct FNiagaraParameterScopeInfo {
	enum class ENiagaraParameterScope Scope; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString NamespaceString; // 0x08(0x10)
};

// ScriptStruct Niagara.NiagaraCompileHashVisitorDebugInfo
// Size: 0x30 (Inherited: 0x00)
struct FNiagaraCompileHashVisitorDebugInfo {
	struct FString Object; // 0x00(0x10)
	struct TArray<struct FString> PropertyKeys; // 0x10(0x10)
	struct TArray<struct FString> PropertyValues; // 0x20(0x10)
};

// ScriptStruct Niagara.NiagaraID
// Size: 0x08 (Inherited: 0x00)
struct FNiagaraID {
	int32_t Index; // 0x00(0x04)
	int32_t AcquireTag; // 0x04(0x04)
};

// ScriptStruct Niagara.NiagaraSpawnInfo
// Size: 0x10 (Inherited: 0x00)
struct FNiagaraSpawnInfo {
	int32_t Count; // 0x00(0x04)
	float InterpStartDt; // 0x04(0x04)
	float IntervalDt; // 0x08(0x04)
	int32_t SpawnGroup; // 0x0c(0x04)
};

// ScriptStruct Niagara.NiagaraMatrix
// Size: 0x40 (Inherited: 0x00)
struct FNiagaraMatrix {
	struct FVector4 Row0; // 0x00(0x10)
	struct FVector4 Row1; // 0x10(0x10)
	struct FVector4 Row2; // 0x20(0x10)
	struct FVector4 Row3; // 0x30(0x10)
};

// ScriptStruct Niagara.NiagaraTestStruct
// Size: 0x48 (Inherited: 0x00)
struct FNiagaraTestStruct {
	struct FVector Vector1; // 0x00(0x0c)
	struct FVector Vector2; // 0x0c(0x0c)
	struct FNiagaraTestStructInner InnerStruct1; // 0x18(0x18)
	struct FNiagaraTestStructInner InnerStruct2; // 0x30(0x18)
};

// ScriptStruct Niagara.NiagaraTestStructInner
// Size: 0x18 (Inherited: 0x00)
struct FNiagaraTestStructInner {
	struct FVector InnerVector1; // 0x00(0x0c)
	struct FVector InnerVector2; // 0x0c(0x0c)
};

// ScriptStruct Niagara.NiagaraParameterMap
// Size: 0x01 (Inherited: 0x00)
struct FNiagaraParameterMap {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Niagara.NiagaraNumeric
// Size: 0x01 (Inherited: 0x00)
struct FNiagaraNumeric {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Niagara.NiagaraBool
// Size: 0x04 (Inherited: 0x00)
struct FNiagaraBool {
	int32_t Value; // 0x00(0x04)
};

// ScriptStruct Niagara.NiagaraInt32
// Size: 0x04 (Inherited: 0x00)
struct FNiagaraInt32 {
	int32_t Value; // 0x00(0x04)
};

// ScriptStruct Niagara.NiagaraFloat
// Size: 0x04 (Inherited: 0x00)
struct FNiagaraFloat {
	float Value; // 0x00(0x04)
};

// ScriptStruct Niagara.NiagaraUserRedirectionParameterStore
// Size: 0x108 (Inherited: 0xb8)
struct FNiagaraUserRedirectionParameterStore : FNiagaraParameterStore {
	struct TMap<struct FNiagaraVariable, struct FNiagaraVariable> UserParameterRedirects; // 0xb8(0x50)
};

// ScriptStruct Niagara.NiagaraVariant
// Size: 0x28 (Inherited: 0x00)
struct FNiagaraVariant {
	struct UObject* Object; // 0x00(0x08)
	struct UNiagaraDataInterface* DataInterface; // 0x08(0x08)
	struct TArray<char> Bytes; // 0x10(0x10)
	enum class ENiagaraVariantMode CurrentMode; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Niagara.NiagaraWorldManagerTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FNiagaraWorldManagerTickFunction : FTickFunction {
	char pad_28[0x8]; // 0x28(0x08)
};

