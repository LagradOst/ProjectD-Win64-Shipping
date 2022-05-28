// WidgetBlueprintGeneratedClass ResultMedalItem.ResultMedalItem_C
// Size: 0x2f8 (Inherited: 0x2e0)
struct UResultMedalItem_C : UPDResultMedalItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UWidgetAnimation* Anim_ShowUp; // 0x2e8(0x08)
	struct UWidgetAnimation* Anim_Glow; // 0x2f0(0x08)

	void PlayAnim(); // Function ResultMedalItem.ResultMedalItem_C.PlayAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1b61b60
	void PreConstruct(bool IsDesignTime); // Function ResultMedalItem.ResultMedalItem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b61b60
	void Construct(); // Function ResultMedalItem.ResultMedalItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b61b60
	void ExecuteUbergraph_ResultMedalItem(int32_t EntryPoint); // Function ResultMedalItem.ResultMedalItem_C.ExecuteUbergraph_ResultMedalItem // (Final|UbergraphFunction) // @ game+0x1b61b60
};

