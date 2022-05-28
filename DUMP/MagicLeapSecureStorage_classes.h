// Class MagicLeapSecureStorage.MagicLeapSecureStorage
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapSecureStorage : UBlueprintFunctionLibrary {

	bool PutSecureVector(struct FString Key, struct FVector& DataToStore); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureVector // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x11af650
	bool PutSecureTransform(struct FString Key, struct FTransform& DataToStore); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x11af920
	bool PutSecureString(struct FString Key, struct FString DataToStore); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureString // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x11b0070
	bool PutSecureSaveGame(struct FString Key, struct USaveGame* ObjectToStore); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureSaveGame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x11aff90
	bool PutSecureRotator(struct FString Key, struct FRotator& DataToStore); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureRotator // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x11af650
	bool PutSecureInt64(struct FString Key, int64_t DataToStore); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt64 // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x11afde0
	bool PutSecureInt(struct FString Key, int32_t DataToStore); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x11afec0
	bool PutSecureFloat(struct FString Key, float DataToStore); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureFloat // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x11afd00
	bool PutSecureByte(struct FString Key, char DataToStore); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureByte // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x11afc20
	bool PutSecureBool(struct FString Key, bool DataToStore); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureBool // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x11afb40
	bool PutSecureArray(struct FString Key, struct TArray<int32_t>& DataToStore); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureArray // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x11afa50
	bool GetSecureVector(struct FString Key, struct FVector& DataToRetrieve); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureVector // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x11af650
	bool GetSecureTransform(struct FString Key, struct FTransform& DataToRetrieve); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x11af920
	bool GetSecureString(struct FString Key, struct FString& DataToRetrieve); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x11af820
	bool GetSecureSaveGame(struct FString Key, struct USaveGame*& ObjectToRetrieve); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureSaveGame // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x11af730
	bool GetSecureRotator(struct FString Key, struct FRotator& DataToRetrieve); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureRotator // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x11af650
	bool GetSecureInt64(struct FString Key, int64_t& DataToRetrieve); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt64 // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x11af480
	bool GetSecureInt(struct FString Key, int32_t& DataToRetrieve); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x11af570
	bool GetSecureFloat(struct FString Key, float& DataToRetrieve); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureFloat // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x11af390
	bool GetSecureByte(struct FString Key, char& DataToRetrieve); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureByte // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x11af2a0
	bool GetSecureBool(struct FString Key, bool& DataToRetrieve); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureBool // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x11af2a0
	bool GetSecureArray(struct FString Key, struct TArray<int32_t>& DataToRetrieve); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureArray // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x11af1b0
	bool DeleteSecureData(struct FString Key); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.DeleteSecureData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x11af110
};

