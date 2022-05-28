// WidgetBlueprintGeneratedClass PlayerEquipmentCenterSlot.PlayerEquipmentCenterSlot_C
// Size: 0x3b0 (Inherited: 0x328)
struct UPlayerEquipmentCenterSlot_C : UPDPlayerEquipmentDetail {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* ReloadComp; // 0x330(0x08)
	struct UWidgetAnimation* ReloadAlert; // 0x338(0x08)
	struct UPDImage* IMG_CompBack; // 0x340(0x08)
	struct UPDImage* IMG_Gauge_Back; // 0x348(0x08)
	struct UPDImage* InfoBackC; // 0x350(0x08)
	struct UPDImage* InfoBackL; // 0x358(0x08)
	struct UPDImage* InfoBackR; // 0x360(0x08)
	struct UPDImage* PDImage; // 0x368(0x08)
	struct UPDImage* PDImage_3; // 0x370(0x08)
	struct UPDImage* PDImage_4; // 0x378(0x08)
	struct UPDImage* PDImage_5; // 0x380(0x08)
	struct UPDImage* PDImage_332; // 0x388(0x08)
	struct URetainerBox* RB_Back; // 0x390(0x08)
	struct URetainerBox* RB_Deco; // 0x398(0x08)
	struct URetainerBox* RB_ReloadComp; // 0x3a0(0x08)
	struct URetainerBox* RB_WPInfo; // 0x3a8(0x08)

	void PreConstruct(bool IsDesignTime); // Function PlayerEquipmentCenterSlot.PlayerEquipmentCenterSlot_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b61b60
	void Construct(); // Function PlayerEquipmentCenterSlot.PlayerEquipmentCenterSlot_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b61b60
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function PlayerEquipmentCenterSlot.PlayerEquipmentCenterSlot_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b61b60
	void ExecuteUbergraph_PlayerEquipmentCenterSlot(int32_t EntryPoint); // Function PlayerEquipmentCenterSlot.PlayerEquipmentCenterSlot_C.ExecuteUbergraph_PlayerEquipmentCenterSlot // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b61b60
};

