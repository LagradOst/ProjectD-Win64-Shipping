// WidgetBlueprintGeneratedClass IngameStatusBoard.IngameStatusBoard_C
// Size: 0x598 (Inherited: 0x538)
struct UIngameStatusBoard_C : UPDIngameStatusBoardUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x538(0x08)
	struct UWidgetAnimation* Anim_Replay; // 0x540(0x08)
	struct UImage* IMG_AllyTeamCoinIcon; // 0x548(0x08)
	struct UImage* IMG_EnemyTeamCoinIcon; // 0x550(0x08)
	struct UImage* IMG_PlayerInfo_Bg_Ally; // 0x558(0x08)
	struct UImage* IMG_PlayerInfo_Bg_Enemy; // 0x560(0x08)
	struct UImage* IMG_PlayerInfo_Outglow_Ally; // 0x568(0x08)
	struct UImage* IMG_PlayerInfo_Outglow_Enemy; // 0x570(0x08)
	struct UImage* IMG_PlayerInfo_Outline_Ally; // 0x578(0x08)
	struct UImage* IMG_PlayerInfo_Outline_Enemy; // 0x580(0x08)
	struct UInvalidationBox* InvalidationBox_Anemy; // 0x588(0x08)
	struct UUnKnownMarketTooltip_C* TeamBuffTooltip; // 0x590(0x08)

	void Construct(); // Function IngameStatusBoard.IngameStatusBoard_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b61b60
	void ExecuteUbergraph_IngameStatusBoard(int32_t EntryPoint); // Function IngameStatusBoard.IngameStatusBoard_C.ExecuteUbergraph_IngameStatusBoard // (Final|UbergraphFunction) // @ game+0x1b61b60
};

