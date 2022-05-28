// WidgetBlueprintGeneratedClass Minimap.Minimap_C
// Size: 0x3b8 (Inherited: 0x300)
struct UMinimap_C : UPDMinimapUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct UWidgetAnimation* AllyPing_Old; // 0x308(0x08)
	struct UWidgetAnimation* MissionPing_Old; // 0x310(0x08)
	struct UWidgetAnimation* MapScale; // 0x318(0x08)
	struct UWidgetAnimation* AllyPing; // 0x320(0x08)
	struct UWidgetAnimation* MissionPing; // 0x328(0x08)
	struct UPDButton_C* Btn_DeleteAllLine; // 0x330(0x08)
	struct UCheckBox* CB_ToggleBoard; // 0x338(0x08)
	struct UImage* IMG_AlertAnim_01; // 0x340(0x08)
	struct UImage* IMG_AlertAnim_02; // 0x348(0x08)
	struct UImage* IMG_AlertAnim_03; // 0x350(0x08)
	struct UImage* IMG_Back; // 0x358(0x08)
	struct UImage* IMG_BadgeBg; // 0x360(0x08)
	struct UImage* IMG_BadgeOutline; // 0x368(0x08)
	struct UPDImage* IMG_Deco; // 0x370(0x08)
	struct UImage* IMG_MapShadow; // 0x378(0x08)
	struct UImage* IMG_Mouse_C; // 0x380(0x08)
	struct UImage* IMG_Mouse_C_2; // 0x388(0x08)
	struct UImage* IMG_Mouse_L; // 0x390(0x08)
	struct UImage* IMG_Mouse_WD; // 0x398(0x08)
	struct UImage* IMG_Mouse_WU; // 0x3a0(0x08)
	struct URetainerBox* RetainerBox_1; // 0x3a8(0x08)
	struct UWidgetSwitcher* WS_Menu; // 0x3b0(0x08)

	void Construct(); // Function Minimap.Minimap_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b61b60
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Minimap.Minimap_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b61b60
	void ExecuteUbergraph_Minimap(int32_t EntryPoint); // Function Minimap.Minimap_C.ExecuteUbergraph_Minimap // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b61b60
};

