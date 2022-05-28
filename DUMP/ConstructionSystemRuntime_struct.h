// Enum ConstructionSystemRuntime.EConstructionSystemToolType
enum class EConstructionSystemToolType : uint8 {
	BuildTool = 0,
	RemoveTool = 1,
	EConstructionSystemToolType_MAX = 2
};

// Enum ConstructionSystemRuntime.EConstructionSystemCursorVisiblity
enum class EConstructionSystemCursorVisiblity : uint8 {
	Visible = 0,
	VisibleInvalid = 1,
	Hidden = 2,
	EConstructionSystemCursorVisiblity_MAX = 3
};

// Enum ConstructionSystemRuntime.EPrefabricatorConstructionSnapType
enum class EPrefabricatorConstructionSnapType : uint8 {
	Floor = 0,
	Wall = 1,
	Object = 2,
	EPrefabricatorConstructionSnapType_MAX = 3
};

// ScriptStruct ConstructionSystemRuntime.ConstructionSystemSavePlayerInfo
// Size: 0x50 (Inherited: 0x00)
struct FConstructionSystemSavePlayerInfo {
	bool bRestorePlayerInfo; // 0x00(0x01)
	char pad_1[0xf]; // 0x01(0x0f)
	struct FTransform Transform; // 0x10(0x30)
	struct FRotator ControlRotation; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct ConstructionSystemRuntime.ConstructionSystemSaveConstructedItem
// Size: 0x40 (Inherited: 0x00)
struct FConstructionSystemSaveConstructedItem {
	struct UPrefabricatorAssetInterface* PrefabAsset; // 0x00(0x08)
	int32_t Seed; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FTransform Transform; // 0x10(0x30)
};

// ScriptStruct ConstructionSystemRuntime.PCSnapConstraintWall
// Size: 0x04 (Inherited: 0x00)
struct FPCSnapConstraintWall {
	bool AttachTop; // 0x00(0x01)
	bool AttachBottom; // 0x01(0x01)
	bool AttachLeft; // 0x02(0x01)
	bool AttachRight; // 0x03(0x01)
};

// ScriptStruct ConstructionSystemRuntime.PCSnapConstraintFloor
// Size: 0x06 (Inherited: 0x00)
struct FPCSnapConstraintFloor {
	bool AttachX; // 0x00(0x01)
	bool AttachXNegative; // 0x01(0x01)
	bool AttachY; // 0x02(0x01)
	bool AttachYNegative; // 0x03(0x01)
	bool AttachZ; // 0x04(0x01)
	bool AttachZNegative; // 0x05(0x01)
};

// ScriptStruct ConstructionSystemRuntime.ConstructionSystemUICategory
// Size: 0x30 (Inherited: 0x00)
struct FConstructionSystemUICategory {
	struct FText DisplayName; // 0x00(0x18)
	struct UTexture2D* Icon; // 0x18(0x08)
	struct TArray<struct FConstructionSystemUIPrefabEntry> PrefabEntries; // 0x20(0x10)
};

// ScriptStruct ConstructionSystemRuntime.ConstructionSystemUIPrefabEntry
// Size: 0x40 (Inherited: 0x00)
struct FConstructionSystemUIPrefabEntry {
	struct FText DisplayName; // 0x00(0x18)
	struct FText Tooltip; // 0x18(0x18)
	struct UTexture2D* Icon; // 0x30(0x08)
	struct UPrefabricatorAssetInterface* Prefab; // 0x38(0x08)
};

