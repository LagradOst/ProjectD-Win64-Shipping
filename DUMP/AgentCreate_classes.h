// WidgetBlueprintGeneratedClass AgentCreate.AgentCreate_C
// Size: 0x3b8 (Inherited: 0x340)
struct UAgentCreate_C : UPDAgentCreateUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UWidgetAnimation* Anim_SceneOut; // 0x348(0x08)
	struct UWidgetAnimation* Anim_SceneShowUp; // 0x350(0x08)
	struct UImage* IMG_ActiveBarDeco; // 0x358(0x08)
	struct UImage* IMG_BottomBg; // 0x360(0x08)
	struct UImage* IMG_Clipboard; // 0x368(0x08)
	struct UImage* IMG_DescIcon; // 0x370(0x08)
	struct UImage* IMG_Divider; // 0x378(0x08)
	struct UImage* IMG_Mouse_W; // 0x380(0x08)
	struct UImage* IMG_Outglow; // 0x388(0x08)
	struct UImage* IMG_Outglow_Agent; // 0x390(0x08)
	struct UImage* IMG_Outline; // 0x398(0x08)
	struct UImage* IMG_PerkPreview; // 0x3a0(0x08)
	struct UImage* IMG_TitleActiveBar; // 0x3a8(0x08)
	struct UImage* IMG_ToolTipBg; // 0x3b0(0x08)

	void OnBP_OnGetItemChildren_1(struct UObject* Item, struct TArray<struct UObject*>& Children); // Function AgentCreate.AgentCreate_C.OnBP_OnGetItemChildren_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b61b60
	void MovieEnd(); // Function AgentCreate.AgentCreate_C.MovieEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1b61b60
	void MovieOpen(struct FString OpenedUrl); // Function AgentCreate.AgentCreate_C.MovieOpen // (BlueprintCallable|BlueprintEvent) // @ game+0x1b61b60
	void OnInitMediaPlayer(); // Function AgentCreate.AgentCreate_C.OnInitMediaPlayer // (Event|Public|BlueprintEvent) // @ game+0x1b61b60
	void ExecuteUbergraph_AgentCreate(int32_t EntryPoint); // Function AgentCreate.AgentCreate_C.ExecuteUbergraph_AgentCreate // (Final|UbergraphFunction) // @ game+0x1b61b60
};

