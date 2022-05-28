// WidgetBlueprintGeneratedClass Start.Start_C
// Size: 0x318 (Inherited: 0x2c0)
struct UStart_C : UPDStartUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UWidgetAnimation* Anim_Show; // 0x2c8(0x08)
	struct UImage* IMG_AnimIndicator_A; // 0x2d0(0x08)
	struct UImage* IMG_AnimIndicator_B; // 0x2d8(0x08)
	struct UImage* Img_Bg; // 0x2e0(0x08)
	struct UImage* IMG_LoadingBg; // 0x2e8(0x08)
	struct UImage* IMG_PDLogo; // 0x2f0(0x08)
	struct UImage* IMG_Rating_01; // 0x2f8(0x08)
	struct UImage* IMG_Rating_02; // 0x300(0x08)
	struct UImage* IMG_Rating_03; // 0x308(0x08)
	struct UWidgetSwitcher* WS_AnimIndicator; // 0x310(0x08)

	void OnInitMediaPlayer(); // Function Start.Start_C.OnInitMediaPlayer // (Event|Public|BlueprintEvent) // @ game+0x1b61b60
	void MovieEnd(); // Function Start.Start_C.MovieEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1b61b60
	void MovieStart(struct FString OpenedUrl); // Function Start.Start_C.MovieStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1b61b60
	void ExecuteUbergraph_Start(int32_t EntryPoint); // Function Start.Start_C.ExecuteUbergraph_Start // (Final|UbergraphFunction) // @ game+0x1b61b60
};

