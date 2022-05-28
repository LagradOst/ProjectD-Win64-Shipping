// WidgetBlueprintGeneratedClass WebTermsOfServicePopup.WebTermsOfServicePopup_C
// Size: 0x358 (Inherited: 0x330)
struct UWebTermsOfServicePopup_C : UPDWebTermsOfServicePopupUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UWidgetAnimation* Anim_SceneOut; // 0x338(0x08)
	struct UWidgetAnimation* Anim_SceneShowUp; // 0x340(0x08)
	struct UImage* IMG_Blinder; // 0x348(0x08)
	struct UImage* IMG_PopupLine; // 0x350(0x08)

	void OpenTermsWebPage(); // Function WebTermsOfServicePopup.WebTermsOfServicePopup_C.OpenTermsWebPage // (Event|Public|BlueprintEvent) // @ game+0x1b61b60
	void CloseTermaWebPage(); // Function WebTermsOfServicePopup.WebTermsOfServicePopup_C.CloseTermaWebPage // (Event|Public|BlueprintEvent) // @ game+0x1b61b60
	void ExecuteUbergraph_WebTermsOfServicePopup(int32_t EntryPoint); // Function WebTermsOfServicePopup.WebTermsOfServicePopup_C.ExecuteUbergraph_WebTermsOfServicePopup // (Final|UbergraphFunction) // @ game+0x1b61b60
};

