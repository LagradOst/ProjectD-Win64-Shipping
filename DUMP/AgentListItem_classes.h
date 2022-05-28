// WidgetBlueprintGeneratedClass AgentListItem.AgentListItem_C
// Size: 0x328 (Inherited: 0x2d0)
struct UAgentListItem_C : UPDAgentListItemUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UWidgetAnimation* Anim_Selected; // 0x2d8(0x08)
	struct UImage* IMG_HoldingBg; // 0x2e0(0x08)
	struct UImage* IMG_Lock; // 0x2e8(0x08)
	struct UImage* IMG_PremiumLock; // 0x2f0(0x08)
	struct UImage* IMG_Selected_InnerBox; // 0x2f8(0x08)
	struct UImage* IMG_Selected_LB; // 0x300(0x08)
	struct UImage* IMG_Selected_LT; // 0x308(0x08)
	struct UImage* IMG_Selected_RB; // 0x310(0x08)
	struct UImage* IMG_Selected_RT; // 0x318(0x08)
	struct UImage* IMG_TopBar; // 0x320(0x08)

	void BP_OnEntryReleased(); // Function AgentListItem.AgentListItem_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x1b61b60
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function AgentListItem.AgentListItem_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1b61b60
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function AgentListItem.AgentListItem_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1b61b60
	void ExecuteUbergraph_AgentListItem(int32_t EntryPoint); // Function AgentListItem.AgentListItem_C.ExecuteUbergraph_AgentListItem // (Final|UbergraphFunction) // @ game+0x1b61b60
};

