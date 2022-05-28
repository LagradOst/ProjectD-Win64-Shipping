// WidgetBlueprintGeneratedClass Spectator_Key.Spectator_Key_C
// Size: 0x280 (Inherited: 0x230)
struct USpectator_Key_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UCanvasPanel* CP_Key; // 0x238(0x08)
	struct UImage* IMG_KeyBack; // 0x240(0x08)
	struct UImage* IMG_KeyFill; // 0x248(0x08)
	struct UImage* IMG_Line; // 0x250(0x08)
	struct UPDTextBlock* TB_Key; // 0x258(0x08)
	struct FText Key; // 0x260(0x18)
	struct FVector2D Size; // 0x278(0x08)

	void PreConstruct(bool IsDesignTime); // Function Spectator_Key.Spectator_Key_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b61b60
	void ExecuteUbergraph_Spectator_Key(int32_t EntryPoint); // Function Spectator_Key.Spectator_Key_C.ExecuteUbergraph_Spectator_Key // (Final|UbergraphFunction) // @ game+0x1b61b60
};

