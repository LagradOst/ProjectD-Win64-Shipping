// WidgetBlueprintGeneratedClass IngameMap.IngameMap_C
// Size: 0x530 (Inherited: 0x4a0)
struct UIngameMap_C : UPDIngameMapUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a0(0x08)
	struct UWidgetAnimation* AllyPing_Old; // 0x4a8(0x08)
	struct UWidgetAnimation* MissionPing_Old; // 0x4b0(0x08)
	struct UWidgetAnimation* AllyPing; // 0x4b8(0x08)
	struct UWidgetAnimation* MissionPing; // 0x4c0(0x08)
	struct UImage* IMG_AlertAnim_01; // 0x4c8(0x08)
	struct UImage* IMG_AlertAnim_02; // 0x4d0(0x08)
	struct UImage* IMG_AlertAnim_03; // 0x4d8(0x08)
	struct UImage* IMG_Back; // 0x4e0(0x08)
	struct UImage* IMG_BadgeBg; // 0x4e8(0x08)
	struct UImage* IMG_BadgeOutline; // 0x4f0(0x08)
	struct UPDImage* IMG_Deco; // 0x4f8(0x08)
	struct UImage* IMG_GuideBg; // 0x500(0x08)
	struct UImage* IMG_Mouse_C; // 0x508(0x08)
	struct UImage* IMG_Mouse_L; // 0x510(0x08)
	struct UImage* IMG_Mouse_R; // 0x518(0x08)
	struct UImage* IMG_Mouse_WD; // 0x520(0x08)
	struct URetainerBox* RetainerBox_1; // 0x528(0x08)

	void Construct(); // Function IngameMap.IngameMap_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b61b60
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function IngameMap.IngameMap_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b61b60
	void ExecuteUbergraph_IngameMap(int32_t EntryPoint); // Function IngameMap.IngameMap_C.ExecuteUbergraph_IngameMap // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b61b60
};

