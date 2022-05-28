// WidgetBlueprintGeneratedClass RoundResultInfo.RoundResultInfo_C
// Size: 0x420 (Inherited: 0x338)
struct URoundResultInfo_C : UPDRoundResult {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UWidgetAnimation* 10_AniSwitch; // 0x340(0x08)
	struct UWidgetAnimation* 08_AniKeyPlayer; // 0x348(0x08)
	struct UWidgetAnimation* 061_AniTeamRecordEnd; // 0x350(0x08)
	struct UWidgetAnimation* 06_AniTeamRecordStart; // 0x358(0x08)
	struct UWidgetAnimation* 07_AniKeyPlayerBack; // 0x360(0x08)
	struct UWidgetAnimation* 05_AniSwitch; // 0x368(0x08)
	struct UWidgetAnimation* 041_AniMVPEnd; // 0x370(0x08)
	struct UWidgetAnimation* 031_AniPlayerNotiEnd; // 0x378(0x08)
	struct UWidgetAnimation* 04_AniMVPStart; // 0x380(0x08)
	struct UWidgetAnimation* 03_AniPlayerNotiStart; // 0x388(0x08)
	struct UWidgetAnimation* 01_AniRoundResult; // 0x390(0x08)
	struct UWidgetAnimation* 02_Result_Round; // 0x398(0x08)
	struct UWidgetAnimation* 00_AniRoundEnd; // 0x3a0(0x08)
	struct UImage* Img_Bg; // 0x3a8(0x08)
	struct FLinearColor TeamColorBlue; // 0x3b0(0x10)
	struct FLinearColor TeamColorOrange; // 0x3c0(0x10)
	struct FLinearColor ResultColorLose; // 0x3d0(0x10)
	struct FLinearColor ResultColorDraw; // 0x3e0(0x10)
	struct FLinearColor SetTeamColor; // 0x3f0(0x10)
	struct FLinearColor SetfoeColor; // 0x400(0x10)
	struct FLinearColor SetMVPColor; // 0x410(0x10)

	struct FLinearColor FoeColorSet(); // Function RoundResultInfo.RoundResultInfo_C.FoeColorSet // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b61b60
	struct FLinearColor TeamColorSet(); // Function RoundResultInfo.RoundResultInfo_C.TeamColorSet // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b61b60
	void OrangeTeam(); // Function RoundResultInfo.RoundResultInfo_C.OrangeTeam // (BlueprintCallable|BlueprintEvent) // @ game+0x1b61b60
	void MVP_Orage(); // Function RoundResultInfo.RoundResultInfo_C.MVP_Orage // (BlueprintCallable|BlueprintEvent) // @ game+0x1b61b60
	void MVP_Blue(); // Function RoundResultInfo.RoundResultInfo_C.MVP_Blue // (BlueprintCallable|BlueprintEvent) // @ game+0x1b61b60
	void BlueTeam(); // Function RoundResultInfo.RoundResultInfo_C.BlueTeam // (BlueprintCallable|BlueprintEvent) // @ game+0x1b61b60
	void ExecuteUbergraph_RoundResultInfo(int32_t EntryPoint); // Function RoundResultInfo.RoundResultInfo_C.ExecuteUbergraph_RoundResultInfo // (Final|UbergraphFunction) // @ game+0x1b61b60
};

