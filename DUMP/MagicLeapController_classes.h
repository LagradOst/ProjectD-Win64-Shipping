// Class MagicLeapController.MagicLeapControllerFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapControllerFunctionLibrary : UBlueprintFunctionLibrary {

	bool SetMotionSourceForHand(enum class EControllerHand Hand, struct FName MotionSource); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetMotionSourceForHand // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x119a100
	bool SetControllerTrackingMode(enum class EMagicLeapControllerTrackingMode TrackingMode); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetControllerTrackingMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1199810
	bool PlayLEDPattern(struct FName MotionSource, enum class EMagicLeapControllerLEDPattern LEDPattern, enum class EMagicLeapControllerLEDColor LEDColor, float DurationInSec); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDPattern // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1199fc0
	bool PlayLEDEffect(struct FName MotionSource, enum class EMagicLeapControllerLEDEffect LEDEffect, enum class EMagicLeapControllerLEDSpeed LEDSpeed, enum class EMagicLeapControllerLEDPattern LEDPattern, enum class EMagicLeapControllerLEDColor LEDColor, float DurationInSec); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDEffect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1199e10
	bool PlayHapticPattern(struct FName MotionSource, enum class EMagicLeapControllerHapticPattern HapticPattern, enum class EMagicLeapControllerHapticIntensity Intensity); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayHapticPattern // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1199d20
	bool PlayControllerLEDEffect(enum class EControllerHand Hand, enum class EMagicLeapControllerLEDEffect LEDEffect, enum class EMagicLeapControllerLEDSpeed LEDSpeed, enum class EMagicLeapControllerLEDPattern LEDPattern, enum class EMagicLeapControllerLEDColor LEDColor, float DurationInSec); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLEDEffect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1199b70
	bool PlayControllerLED(enum class EControllerHand Hand, enum class EMagicLeapControllerLEDPattern LEDPattern, enum class EMagicLeapControllerLEDColor LEDColor, float DurationInSec); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLED // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1199a30
	bool PlayControllerHapticFeedback(enum class EControllerHand Hand, enum class EMagicLeapControllerHapticPattern HapticPattern, enum class EMagicLeapControllerHapticIntensity Intensity); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerHapticFeedback // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1199930
	int32_t MaxSupportedMagicLeapControllers(); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.MaxSupportedMagicLeapControllers // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x118d0c0
	bool IsMLControllerConnected(struct FName MotionSource); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.IsMLControllerConnected // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1199710
	void InvertControllerMapping(); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.InvertControllerMapping // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1199910
	struct FName GetMotionSourceForHand(enum class EControllerHand Hand); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMotionSourceForHand // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1199890
	enum class EMagicLeapControllerType GetMLControllerType(enum class EControllerHand Hand); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMLControllerType // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1199810
	enum class EControllerHand GetHandForMotionSource(struct FName MotionSource); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetHandForMotionSource // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1199790
	enum class EMagicLeapControllerType GetControllerType(struct FName MotionSource); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerType // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1199710
	enum class EMagicLeapControllerTrackingMode GetControllerTrackingMode(); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerTrackingMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x11996e0
	bool GetControllerMapping(int32_t ControllerIndex, enum class EControllerHand& Hand); // Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerMapping // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1199610
};

// Class MagicLeapController.MagicLeapTouchpadGesturesComponent
// Size: 0x140 (Inherited: 0xb0)
struct UMagicLeapTouchpadGesturesComponent : UActorComponent {
	char pad_B0[0x8]; // 0xb0(0x08)
	struct FMulticastInlineDelegate OnTouchpadGestureStart; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnTouchpadGestureContinue; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnTouchpadGestureEnd; // 0xd8(0x10)
	char pad_E8[0x58]; // 0xe8(0x58)
};

