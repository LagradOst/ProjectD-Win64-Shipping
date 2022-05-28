// Class ArchVisCharacter.ArchVisCharacter
// Size: 0x520 (Inherited: 0x4c0)
struct AArchVisCharacter : ACharacter {
	struct FString LookUpAxisName; // 0x4b8(0x10)
	struct FString LookUpAtRateAxisName; // 0x4c8(0x10)
	struct FString TurnAxisName; // 0x4d8(0x10)
	struct FString TurnAtRateAxisName; // 0x4e8(0x10)
	struct FString MoveForwardAxisName; // 0x4f8(0x10)
	struct FString MoveRightAxisName; // 0x508(0x10)
	float MouseSensitivityScale_Pitch; // 0x518(0x04)
	float MouseSensitivityScale_Yaw; // 0x51c(0x04)
};

// Class ArchVisCharacter.ArchVisCharMovementComponent
// Size: 0x660 (Inherited: 0x610)
struct UArchVisCharMovementComponent : UCharacterMovementComponent {
	struct FRotator RotationalAcceleration; // 0x610(0x0c)
	struct FRotator RotationalDeceleration; // 0x61c(0x0c)
	struct FRotator MaxRotationalVelocity; // 0x628(0x0c)
	float MinPitch; // 0x634(0x04)
	float MaxPitch; // 0x638(0x04)
	float WalkingFriction; // 0x63c(0x04)
	float WalkingSpeed; // 0x640(0x04)
	float WalkingAcceleration; // 0x644(0x04)
	char pad_648[0x18]; // 0x648(0x18)
};

