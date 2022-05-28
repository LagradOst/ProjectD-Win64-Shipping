// WidgetBlueprintGeneratedClass Intro.Intro_C
// Size: 0x318 (Inherited: 0x2e8)
struct UIntro_C : UPDIntroUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UImage* IMG_AnimIndicator_A; // 0x2f0(0x08)
	struct UImage* IMG_AnimIndicator_B; // 0x2f8(0x08)
	struct UImage* Img_Indicator; // 0x300(0x08)
	struct UImage* IMG_PDLogo; // 0x308(0x08)
	struct UWidgetSwitcher* WS_AnimIndicator; // 0x310(0x08)

	void MovieEnd(); // Function Intro.Intro_C.MovieEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1b61b60
	void OnInitMediaPlayer(); // Function Intro.Intro_C.OnInitMediaPlayer // (Event|Public|BlueprintEvent) // @ game+0x1b61b60
	void MovieOpen(struct FString OpenedUrl); // Function Intro.Intro_C.MovieOpen // (BlueprintCallable|BlueprintEvent) // @ game+0x1b61b60
	void ExecuteUbergraph_Intro(int32_t EntryPoint); // Function Intro.Intro_C.ExecuteUbergraph_Intro // (Final|UbergraphFunction) // @ game+0x1b61b60
};

