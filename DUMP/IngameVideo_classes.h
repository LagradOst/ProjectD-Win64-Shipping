// WidgetBlueprintGeneratedClass IngameVideo.IngameVideo_C
// Size: 0x330 (Inherited: 0x318)
struct UIngameVideo_C : UPDIngameVideoUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Anim_LineShow; // 0x320(0x08)
	struct UImage* IMG_MovieD; // 0x328(0x08)

	void OnInitMediaPlayer(); // Function IngameVideo.IngameVideo_C.OnInitMediaPlayer // (Event|Public|BlueprintEvent) // @ game+0x1b61b60
	void IngameMovieOpen(struct FString OpenedUrl); // Function IngameVideo.IngameVideo_C.IngameMovieOpen // (BlueprintCallable|BlueprintEvent) // @ game+0x1b61b60
	void ExecuteUbergraph_IngameVideo(int32_t EntryPoint); // Function IngameVideo.IngameVideo_C.ExecuteUbergraph_IngameVideo // (Final|UbergraphFunction) // @ game+0x1b61b60
};

