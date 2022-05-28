// Class TemplateSequence.TemplateSequence
// Size: 0x3f0 (Inherited: 0x348)
struct UTemplateSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x348(0x08)
	struct TSoftClassPtr<UObject> BoundActorClass; // 0x350(0x28)
	struct TSoftObjectPtr<AActor> BoundPreviewActor; // 0x378(0x28)
	struct TMap<struct FGuid, struct FName> BoundActorComponents; // 0x3a0(0x50)
};

// Class TemplateSequence.CameraAnimationSequence
// Size: 0x3f0 (Inherited: 0x3f0)
struct UCameraAnimationSequence : UTemplateSequence {
};

// Class TemplateSequence.TemplateSequenceActor
// Size: 0x270 (Inherited: 0x220)
struct ATemplateSequenceActor : AActor {
	char pad_220[0x8]; // 0x220(0x08)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x228(0x14)
	char pad_23C[0x4]; // 0x23c(0x04)
	struct UTemplateSequencePlayer* SequencePlayer; // 0x240(0x08)
	struct FSoftObjectPath TemplateSequence; // 0x248(0x18)
	struct FTemplateSequenceBindingOverrideData BindingOverride; // 0x260(0x0c)
	char pad_26C[0x4]; // 0x26c(0x04)

	void SetSequence(struct UTemplateSequence* InSequence); // Function TemplateSequence.TemplateSequenceActor.SetSequence // (Final|Native|Public|BlueprintCallable) // @ game+0x12043d0
	void SetBinding(struct AActor* Actor); // Function TemplateSequence.TemplateSequenceActor.SetBinding // (Final|Native|Public|BlueprintCallable) // @ game+0x1204350
	struct UTemplateSequence* LoadSequence(); // Function TemplateSequence.TemplateSequenceActor.LoadSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1204320
	struct UTemplateSequencePlayer* GetSequencePlayer(); // Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x12042f0
	struct UTemplateSequence* GetSequence(); // Function TemplateSequence.TemplateSequenceActor.GetSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x12042c0
};

// Class TemplateSequence.TemplateSequencePlayer
// Size: 0x890 (Inherited: 0x888)
struct UTemplateSequencePlayer : UMovieSceneSequencePlayer {
	char pad_888[0x8]; // 0x888(0x08)

	struct UTemplateSequencePlayer* CreateTemplateSequencePlayer(struct UObject* WorldContextObject, struct UTemplateSequence* TemplateSequence, struct FMovieSceneSequencePlaybackSettings Settings, struct ATemplateSequenceActor*& OutActor); // Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1204150
};

// Class TemplateSequence.TemplateSequenceSection
// Size: 0x158 (Inherited: 0x158)
struct UTemplateSequenceSection : UMovieSceneSubSection {
};

// Class TemplateSequence.TemplateSequenceTrack
// Size: 0x68 (Inherited: 0x68)
struct UTemplateSequenceTrack : UMovieSceneSubTrack {
};

