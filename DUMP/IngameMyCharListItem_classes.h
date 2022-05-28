// WidgetBlueprintGeneratedClass IngameMyCharListItem.IngameMyCharListItem_C
// Size: 0x2f0 (Inherited: 0x2c8)
struct UIngameMyCharListItem_C : UPDIngameMyCharListItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UWidgetAnimation* Anim_Selected; // 0x2d0(0x08)
	struct UImage* IMG_NotOwned_Outline; // 0x2d8(0x08)
	struct UImage* IMG_Owned_Outline; // 0x2e0(0x08)
	struct UImage* IMG_SLotBg; // 0x2e8(0x08)

	void BP_OnEntryReleased(); // Function IngameMyCharListItem.IngameMyCharListItem_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x1b61b60
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function IngameMyCharListItem.IngameMyCharListItem_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1b61b60
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function IngameMyCharListItem.IngameMyCharListItem_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1b61b60
	void ExecuteUbergraph_IngameMyCharListItem(int32_t EntryPoint); // Function IngameMyCharListItem.IngameMyCharListItem_C.ExecuteUbergraph_IngameMyCharListItem // (Final|UbergraphFunction) // @ game+0x1b61b60
};

