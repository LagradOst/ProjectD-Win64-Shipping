// WidgetBlueprintGeneratedClass KillLog.KillLog_C
// Size: 0x2d0 (Inherited: 0x2a0)
struct UKillLog_C : UPDKillLogUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct UKillLogModule_C* KillLogModule; // 0x2a8(0x08)
	struct UKillLogModule_C* KillLogModule_2; // 0x2b0(0x08)
	struct UKillLogModule_C* KillLogModule_3; // 0x2b8(0x08)
	struct UKillLogModule_C* KillLogModule_4; // 0x2c0(0x08)
	struct UKillLogModule_C* KillLogModule_5; // 0x2c8(0x08)

	void PreConstruct(bool IsDesignTime); // Function KillLog.KillLog_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b61b60
	void ExecuteUbergraph_KillLog(int32_t EntryPoint); // Function KillLog.KillLog_C.ExecuteUbergraph_KillLog // (Final|UbergraphFunction) // @ game+0x1b61b60
};

