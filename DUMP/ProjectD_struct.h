// Enum ProjectD.ECoreNetError
enum class ECoreNetError : uint8 {
	CNE_None = 0,
	CNE_ConnectError = 1,
	CNE_DisconnectByClient = 2,
	CNE_DisconnectedByServer = 3,
	CNE_ReceiveError = 4,
	CNE_SendError = 5,
	CNE_RSADecryptError = 6,
	CNE_TimeOut = 7,
	CNE_MAX = 8
};

// Enum ProjectD.ECoreNetResult
enum class ECoreNetResult : uint8 {
	CNR_None = 0,
	CNR_Success = 1,
	CNR_Failure = 2,
	CNR_MAX = 3
};

// Enum ProjectD.EPDMovementState
enum class EPDMovementState : uint8 {
	Grounded = 0,
	Falling = 1,
	Ragdoll = 2,
	Parkour = 3,
	Riding = 4,
	SkyDiving = 5,
	Airborne = 6,
	Sliding = 7,
	MAX = 8
};

// Enum ProjectD.EPDCharacterActionType
enum class EPDCharacterActionType : uint8 {
	None = 0,
	Land = 1,
	Jump = 2,
	Roll = 3,
	Vault = 4,
	Climbup = 5,
	LedgeGrapParkour = 6,
	LedgeGrapClimbing = 7,
	MeleeAttack = 8,
	Lean = 9,
	ChangeStance = 10,
	ItemUse = 11,
	ClimbEnterUpward = 12,
	ClimbEnterDownward = 13,
	ClimbEnterVault = 14,
	ClimbMove = 15,
	ClimbExit = 16,
	GroggyEnter = 17,
	GroggyExit = 18,
	Death_Normal = 19,
	Death_Groggy = 20,
	FireWeapon = 21,
	AimWeapon = 22,
	ChangeWeapon = 23,
	ReloadWeapon = 24,
	InstantThrowWeapon = 25,
	ThrowWeapon = 26,
	BoltAction = 27,
	OutCover = 28,
	PickUpItem = 29,
	DynamicShielding = 30,
	GroggyRescue = 31,
	SNDModeBomb = 32,
	Guard = 33,
	MeleeHit = 34,
	KnockBack = 35,
	FallingObjcetKnockBack = 36,
	SlidingEnter = 37,
	SlidingExit = 38,
	ZipLine = 39,
	Signature_RevolerSpinning = 40,
	Signature_DrinkBottle = 41,
	Signature_EatHotdog = 42,
	Signature_LickKnife = 43,
	Signature_CoinToss = 44,
	Signature_GlassesScan = 45,
	Signature_ShootFlare = 46,
	Signature_SprayMoney = 47,
	Signature_Warcry = 48,
	Signature_LookMagnifier = 49,
	Perk_Hacking = 50,
	Perk_Maintenance = 51,
	JuggernautWear_Start = 52,
	JuggernautWear_End = 53,
	JuggernautDash_Start = 54,
	JuggernautDash_End = 55,
	ExoSuitWear_Start = 56,
	ExoSuitWear_End = 57,
	ExoSuitDash = 58,
	ExoSuitLauncher = 59,
	ArmorPlateReplaceKit = 60,
	TurnBack = 61,
	AFK = 62,
	RoundEnter = 63,
	BurnReaction = 64,
	MAX = 65
};

// Enum ProjectD.EINGAMEMISSIONSTATE
enum class EINGAMEMISSIONSTATE : uint8 {
	None = 0,
	MissionOrder = 1,
	MissionClear = 2,
	MissionError = 3,
	MissionFail = 4,
	EINGAMEMISSIONSTATE_MAX = 5
};

// Enum ProjectD.ESubLevelEvent
enum class ESubLevelEvent : uint8 {
	SLE_NONE = 0,
	SLE_ExplodeAreaA = 1,
	SLE_MAX = 2
};

// Enum ProjectD.ECharacterSpawnGroup
enum class ECharacterSpawnGroup : uint8 {
	CharacterSG_RED = 0,
	CharacterSG_BLUE = 1,
	CharacterSG_Result = 2,
	CharacterSG_MAX = 3
};

// Enum ProjectD.ETRIGGERNOTI
enum class ETRIGGERNOTI : uint8 {
	ETB_ALL = 0,
	ETB_PLAYER = 1,
	ETB_NPC = 2,
	ETB_MAX = 3
};

// Enum ProjectD.EDamageType
enum class EDamageType : uint8 {
	None = 0,
	Melee = 1,
	Weapon = 2,
	SystemGroggy = 3,
	Fall = 4,
	Vehicle = 5,
	RedStorm = 6,
	Explosion = 7,
	Blaze = 8,
	Burn = 9,
	Gas = 10,
	Heal = 11,
	InstallSeed = 12,
	ExplosionSeed = 13,
	DeactiveSeed = 14,
	SuicideGroggyToKill = 15,
	Max = 16
};

// Enum ProjectD.EActionReserveOption
enum class EActionReserveOption : uint8 {
	None = 0,
	IsAbleTo = 1,
	MustReserve = 2,
	IfBlockedDontReserve = 3,
	EActionReserveOption_MAX = 4
};

// Enum ProjectD.EPDGroggyRescueActionType
enum class EPDGroggyRescueActionType : uint8 {
	GroggyRescueAction_Start = 0,
	GroggyRescueAction_Complete = 1,
	GroggyRescueAction_Cancel = 2,
	GroggyRescueAction_MAX = 3
};

// Enum ProjectD.EParkourHeightType
enum class EParkourHeightType : uint8 {
	Parkour_51 = 0,
	Parkour_101 = 1,
	Parkour_151 = 2,
	Parkour_201 = 3,
	Parkour_251 = 4,
	Parkour_301 = 5,
	MAX = 6
};

// Enum ProjectD.ESlideEnterType
enum class ESlideEnterType : uint8 {
	SlideEnter_None = 0,
	SlideEnter_Default = 1,
	SlideEnter_Falling = 2,
	SlideEnter_Groggy = 3,
	SlideEnter_GroggyFalling = 4,
	SlideEnter_Die = 5,
	SlideEnter_MAX = 6
};

// Enum ProjectD.ESlideExitType
enum class ESlideExitType : uint8 {
	SlideExit_None = 0,
	SlideExit_Default = 1,
	SlideExit_Roll = 2,
	SlideExit_Falling = 3,
	SlideExit_Groggy = 4,
	SlideExit_GroggyFalling = 5,
	SlideExit_Die = 6,
	SlideExit_MAX = 7
};

// Enum ProjectD.ESlotState
enum class ESlotState : uint8 {
	Create = 0,
	Filled = 1,
	ESlotState_MAX = 2
};

// Enum ProjectD.EAkBankName
enum class EAkBankName : uint8 {
	sfx = 0,
	weapons = 1,
	ambience = 2,
	bgm = 3,
	foley = 4,
	EAkBankName_MAX = 5
};

// Enum ProjectD.EGameModeWidget
enum class EGameModeWidget : int32 {
	None = -1,
	PlayerInfo = 0,
	Spectator = 1,
	StateGauge = 2,
	Perk = 3,
	CoinInfo = 4,
	CrossHair = 5,
	TargetScreen = 6,
	DamageIndicator = 7,
	ThreeDIndicator = 8,
	InteractionInfo = 9,
	RoundInfo = 10,
	RoundResult = 11,
	GameTime = 12,
	IngameMap = 13,
	RoundReplayer = 14,
	RingCommand = 15,
	MarkerGuide = 16,
	UnknownMarket = 17,
	StatusBoard = 18,
	ReportPopup = 19,
	WorldMessage = 20,
	BattleLog = 21,
	KillMessage = 22,
	KillLog = 23,
	PerkNotify = 24,
	PingLog = 25,
	TutorialQuest = 26,
	BreakInto = 27,
	RoundWait = 28,
	AgentLeptonInfo = 29,
	PlayerSetting = 30,
	PersonalMission = 31,
	MAX = 32
};

// Enum ProjectD.EUIName
enum class EUIName : uint8 {
	None = 0,
	Start = 1,
	Login = 2,
	NickNameCreate = 3,
	AgentCreate = 4,
	AgentInventory = 5,
	AgentLobby = 6,
	CustomMain = 7,
	CustomCharacterPerk = 8,
	CustomCharacterDeco = 9,
	CustomVoice = 10,
	CustomWeapon = 11,
	CustomGameDeco = 12,
	CustomLocker = 13,
	ClanMain = 14,
	ClanInfo = 15,
	ClanList = 16,
	ClanCreate = 17,
	ClanInfoPopup = 18,
	DebugLog = 19,
	PlayLogReport = 20,
	Loading = 21,
	Ingame = 22,
	Match = 23,
	Intro = 24,
	GameResult = 25,
	DeathMatchModeUI = 26,
	SquadDeathMatchModeUI = 27,
	OptionContent = 28,
	OKPopup = 29,
	OKCancelPopup = 30,
	OptionPopup = 31,
	LobbyUserListPopup = 32,
	InvitePartyPopup = 33,
	TutorialPopup = 34,
	StroyPerkPopup = 35,
	GainPerkPopup = 36,
	GuideWebPagePopup = 37,
	WebPopup = 38,
	TermsOfServicePopup = 39,
	SystemMessage = 40,
	GameModeSelectItem = 41,
	LobbyUserListItem = 42,
	CommunityPopup = 43,
	PartySlotListItem = 44,
	FriendListItem = 45,
	FriendAddItem = 46,
	FriendClanItem = 47,
	CustomMatchJoinPopup = 48,
	CustomMatchListItem = 49,
	AgentListItem = 50,
	AgentSlotListItem = 51,
	CustomCharacterListItem = 52,
	PlayLogPlayInfoItem = 53,
	KillLogItem = 54,
	EventLogItem = 55,
	NameTagAlly = 56,
	NameTagEnemy = 57,
	ObjectTag = 58,
	ObjectTagSite = 59,
	PingIndicator = 60,
	IngameShopMain = 61,
	CategoryListItem = 62,
	IngameShopListItem = 63,
	IngameShopEtcItemElem = 64,
	IngameShopPartListItem = 65,
	IngameShopUpgradeListItem = 66,
	PurchaseMsg = 67,
	RingCommand = 68,
	InvenDragModule = 69,
	LootingList = 70,
	DamageIndicator = 71,
	PlayerEntryItemAlly = 72,
	PlayerEntryItemEnemy = 73,
	MissionScorePlayerEntryItem = 74,
	MSStatusBoardPlayerInfo = 75,
	MSStatusBoardRoundItem = 76,
	PerkEntryItem = 77,
	PerkNotifySlot = 78,
	AttackDamageIndicator = 79,
	GrenadeIndicator = 80,
	CoinInfoListItem = 81,
	PingLogItem = 82,
	PersonalMissionModule = 83,
	PersonalMissionRewardModule = 84,
	ScreenMarkerLoot = 85,
	BaseGameMode = 86,
	DeathMatchMode = 87,
	DefuseBombMode = 88,
	MissionScoreMode = 89,
	UnKnownMarketPartListItem = 90,
	UnKnownMarketPurchaseMsgItem = 91,
	UnKnownMarketInvenListItem = 92,
	StatusBoardRoundListItem = 93,
	ResultRoundItem = 94,
	ResultTeamMember = 95,
	ResultExpItem = 96,
	ResultMedalItem = 97,
	MatchListItem = 98,
	MailPopup = 99,
	MailNotificationSlot = 100,
	MailItemListSlot = 101,
	TeamCharListItem = 102,
	LeptonPresetTab = 103,
	UI_Max = 104,
	EUIName_MAX = 105
};

// Enum ProjectD.EPDHitReactionAnimType
enum class EPDHitReactionAnimType : uint8 {
	HitReaction_None = 0,
	HitReaction_Normal = 1,
	HitReaction_Run = 2,
	HitReaction_Lower = 3,
	HitReaction_Head = 4,
	HitReaction_Melee = 5,
	HitReaction_BombGraze = 6,
	HitReaction_BulletGraze = 7,
	MAX = 8
};

// Enum ProjectD.EPDRagdollState
enum class EPDRagdollState : uint8 {
	Wake = 0,
	Freeze = 1,
	EPDRagdollState_MAX = 2
};

// Enum ProjectD.EPDNPCActionState
enum class EPDNPCActionState : uint8 {
	None = 0,
	LookAround = 1,
	Surprised = 2,
	MAX = 3
};

// Enum ProjectD.EPDNPCLocoState
enum class EPDNPCLocoState : uint8 {
	NotMoving = 0,
	Moving = 1,
	MAX = 2
};

// Enum ProjectD.EOptionSensitivenessType
enum class EOptionSensitivenessType : uint8 {
	ZOOM0 = 0,
	ZOOM1 = 1,
	ZOOM2 = 2,
	ZOOM3 = 3,
	ZOOM4 = 4,
	_TOTAL_COUNT = 5,
	EOptionSensitivenessType_MAX = 6
};

// Enum ProjectD.EPDParkourType
enum class EPDParkourType : uint8 {
	NONE = 0,
	STAIR = 1,
	HURDLE = 2,
	WALL = 3,
	NEXTFLOOR = 4,
	MAX = 5
};

// Enum ProjectD.EPDActionRuleCondtion
enum class EPDActionRuleCondtion : uint8 {
	NOT_CHANGE = 0,
	WAIT_PREV_ACTION = 1,
	IMMEDIATE_NEXT_ACTION = 2,
	EPDActionRuleCondtion_MAX = 3
};

// Enum ProjectD.EPDIKStanceFrame
enum class EPDIKStanceFrame : uint8 {
	Idle = 0,
	Default = 1,
	SingleShot = 2,
	VerticalGrip = 3,
	AngleGrip = 4,
	HalfGrip = 5,
	MagGrip = 6,
	Max = 7
};

// Enum ProjectD.EPDSpecificWeaponAnimset
enum class EPDSpecificWeaponAnimset : uint8 {
	HK416 = 0,
	SCAR = 1,
	AK47 = 2,
	MP5 = 3,
	MPX = 4,
	BenelliM4 = 5,
	M24 = 6,
	M14 = 7,
	M249 = 8,
	M134 = 9,
	KrissVector = 10,
	AUGA3 = 11,
	ASVAL = 12,
	AWP = 13,
	Glock = 14,
	DesertEagle = 15,
	DoubleBarrel = 16,
	PBPistol = 17,
	Bow = 18,
	M870 = 19,
	G36 = 20,
	MAC10 = 21,
	P30L = 22,
	SVD = 23,
	DoubleDefense = 24,
	Barrett = 25,
	MAX = 26
};

// Enum ProjectD.EPDAnimset
enum class EPDAnimset : uint8 {
	Bare = 0,
	HK416 = 1,
	MP5 = 2,
	BenelliM4 = 3,
	M24 = 4,
	M249 = 5,
	Glock = 6,
	Throw = 7,
	M134 = 8,
	Knife = 9,
	KnuckleBlade = 10,
	Bow = 11,
	Karambit = 12,
	CAxe = 13,
	Tonfa = 14,
	ThreeBaton = 15,
	CHammer = 16,
	FistKnife = 17,
	Wrench = 18,
	ExoSuit = 19,
	MAX = 20
};

// Enum ProjectD.EPDLeanState
enum class EPDLeanState : uint8 {
	Lean_None = 0,
	Lean_Left = 1,
	Lean_Right = 2,
	MAX = 3
};

// Enum ProjectD.EPDSocketOffsetState
enum class EPDSocketOffsetState : uint8 {
	SocketOffset_Left = 0,
	SocketOffset_Right = 1,
	MAX = 2
};

// Enum ProjectD.EPDSlideStanceState
enum class EPDSlideStanceState : uint8 {
	SlideStance_Default = 0,
	SlideStance_Groggy = 1,
	MAX = 2
};

// Enum ProjectD.EPDThrowStanceState
enum class EPDThrowStanceState : uint8 {
	ThrowStance_Over = 0,
	ThrowStance_Under = 1,
	MAX = 2
};

// Enum ProjectD.EPDClimbStanceState
enum class EPDClimbStanceState : uint8 {
	Climb_4P = 0,
	Climb_2P = 1,
	MAX = 2
};

// Enum ProjectD.EPDRotationState
enum class EPDRotationState : uint8 {
	None = 0,
	FreeLook = 1,
	VelocityDirection = 2,
	LookingDirection = 3,
	Max = 4
};

// Enum ProjectD.EPDAimingState
enum class EPDAimingState : uint8 {
	Idle = 0,
	HipFire = 1,
	Aim = 2,
	ADS = 3,
	MAX = 4
};

// Enum ProjectD.EPDStanceState
enum class EPDStanceState : uint8 {
	Standing = 0,
	Crouching = 1,
	MAX = 2
};

// Enum ProjectD.EPDGaitsState
enum class EPDGaitsState : uint8 {
	Staying = 0,
	Walking = 1,
	Jogging = 2,
	Running = 3,
	Sprinting = 4,
	MAX = 5
};

// Enum ProjectD.EPDInputMoveType
enum class EPDInputMoveType : uint8 {
	Walk = 0,
	Run = 1,
	Sprint = 2,
	MAX = 3
};

// Enum ProjectD.EPDLocoState
enum class EPDLocoState : uint8 {
	NotMoving = 0,
	Stopping = 1,
	Starting_F = 2,
	Starting_L = 3,
	Starting_R = 4,
	Moving = 5,
	MAX = 6
};

// Enum ProjectD.EPDLocoType
enum class EPDLocoType : uint8 {
	Default = 0,
	Climb = 1,
	Cover = 2,
	Groggy = 3,
	Slide = 4,
	ZipLine = 5,
	Dead = 6,
	MAX = 7
};

// Enum ProjectD.EPDActionNotifyType
enum class EPDActionNotifyType : uint8 {
	ActionNotify_Begin_Anim = 0,
	ActionNotify_End_Anim = 1,
	ActionNotify_Event_Anim = 2,
	ActionNotify_Event_CPP = 3,
	ActionNotify_MAX = 4
};

// Enum ProjectD.EPDActionTriggerType
enum class EPDActionTriggerType : uint8 {
	Activate = 0,
	End = 1,
	Cancel = 2,
	Toggle = 3,
	EPDActionTriggerType_MAX = 4
};

// Enum ProjectD.EPDActionSlotType
enum class EPDActionSlotType : uint8 {
	Fullbody = 0,
	Upper = 1,
	Lower = 2,
	Additive = 3,
	EPDActionSlotType_MAX = 4
};

// Enum ProjectD.EPDLobbyAnimStatus
enum class EPDLobbyAnimStatus : uint8 {
	None = 0,
	Lobby_Scene_Select = 1,
	Lobby_Scene_Select_Idle = 2,
	Lobby_Scene_Matching_Start = 3,
	Lobby_Scene_Matching_Idle = 4,
	Lobby_Scene_Customizing = 5,
	Lobby_Scene_Shop = 6,
	Create_Scene_Select = 7,
	Create_Scene_Idle = 8,
	Result_Scene_Win = 9,
	Result_Scene_Win_Idle = 10,
	Result_Scene_Lose = 11,
	Result_Scene_Lose_IDle = 12,
	MAX = 13
};

// Enum ProjectD.EPDDirCalcMethodType
enum class EPDDirCalcMethodType : uint8 {
	_2WAY = 0,
	_4WAY = 1,
	_8WAY = 2,
	MAX = 3
};

// Enum ProjectD.EPD4DirType
enum class EPD4DirType : uint8 {
	Forward = 0,
	Left = 1,
	Right = 2,
	Back = 3,
	MAX = 4
};

// Enum ProjectD.EPDDirectionType
enum class EPDDirectionType : uint8 {
	FWD = 0,
	BCK = 1,
	RT = 2,
	LFT = 3,
	FWD_RT = 4,
	FWD_LFT = 5,
	BCK_RT = 6,
	BCK_LFT = 7,
	MAX = 8
};

// Enum ProjectD.EPDHitReactionType
enum class EPDHitReactionType : uint8 {
	FULL_BODY = 0,
	UPPER_BODY = 1,
	LOWER_BODY = 2,
	MELEE_HIT = 3,
	MAX = 4
};

// Enum ProjectD.EPDCharacterParts
enum class EPDCharacterParts : uint8 {
	Head = 0,
	Body = 1,
	Hair = 2,
	Accessory = 3,
	EPDCharacterParts_MAX = 4
};

// Enum ProjectD.EPDClimbMoveType
enum class EPDClimbMoveType : uint8 {
	ClimbMove_None = 0,
	ClimbMove_Default = 1,
	ClimbMove_InTurn = 2,
	ClimbMove_OutTurn = 3,
	ClimbMove_Jump = 4,
	ClimbMove_Wide = 5,
	ClimbMove_LongJump = 6,
	ClimbMove_MAX = 7
};

// Enum ProjectD.EPDClimbPointUptype
enum class EPDClimbPointUptype : uint8 {
	ClimbPoint_None = 0,
	ClimbPoint_Vault = 1,
	ClimbPoint_ClimbUp = 2,
	ClimbPoint_MAX = 3
};

// Enum ProjectD.EControlTapType
enum class EControlTapType : int32 {
	None = -1,
	Move = 0,
	Action = 1,
	Communication = 2,
	Interface = 3,
	Observer = 4,
	EControlTapType_MAX = 5
};

// Enum ProjectD.ECrossHairColorPreset
enum class ECrossHairColorPreset : uint8 {
	WHITE = 0,
	RED = 1,
	BLUE = 2,
	GREEN = 3,
	YELLOW = 4,
	PINK = 5,
	ECrossHairColorPreset_MAX = 6
};

// Enum ProjectD.ECrossHairDrawStyle
enum class ECrossHairDrawStyle : uint8 {
	Scaled = 0,
	ScaledWithOutline = 1,
	NonScaled = 2,
	NonScaledWithOutline = 3,
	ECrossHairDrawStyle_MAX = 4
};

// Enum ProjectD.EMISituation
enum class EMISituation : uint8 {
	None = 0,
	Weapon_AR = 1,
	Weapon_SMG = 2,
	Weapon_SR = 3,
	Weapon_SG = 4,
	Weapon_LMG = 5,
	Weapon_BOW = 6,
	Weapon_RPG = 7,
	Weapon_MINIGUN = 8,
	Weapon_EXOSUIT_SMG = 9,
	Weapon_Pistol = 10,
	Weapon_Melee = 11,
	Weapon_Weapon = 12,
	Weapon_Explosion = 13,
	Weather = 14,
	Fire_HipFire = 15,
	Fire_Aim = 16,
	Fire_ADS = 17,
	Groggy = 18,
	Execution = 19,
	EMISituation_MAX = 20
};

// Enum ProjectD.EMITarget
enum class EMITarget : uint8 {
	AnybodyUser = 0,
	RandomUser = 1,
	BestUser = 2,
	EMITarget_MAX = 3
};

// Enum ProjectD.EDYNAMICOBJECTSTATE
enum class EDYNAMICOBJECTSTATE : uint8 {
	NONE = 0,
	ALIVEOBJ = 1,
	MDESTROY = 2,
	FDESTROY = 3,
	CLOSE = 4,
	OPEN = 5,
	OPEN2 = 6,
	MOVE = 7,
	MOVE2 = 8,
	LOCK = 9,
	EDYNAMICOBJECTSTATE_MAX = 10
};

// Enum ProjectD.EGraphicsScalabilityType
enum class EGraphicsScalabilityType : uint8 {
	None = 0,
	Resolution = 1,
	ViewDistance = 2,
	AntiAliasing = 3,
	PostProcessing = 4,
	Shadows = 5,
	Texture = 6,
	Effects = 7,
	Foliage = 8,
	EGraphicsScalabilityType_MAX = 9
};

// Enum ProjectD.EFrameRateMode
enum class EFrameRateMode : uint8 {
	DisplayBased = 0,
	Customize = 1,
	EFrameRateMode_MAX = 2
};

// Enum ProjectD.EDisplayMode
enum class EDisplayMode : uint8 {
	WindowedFullscreen = 0,
	Windowed = 1,
	Fullscreen = 2,
	EDisplayMode_MAX = 3
};

// Enum ProjectD.EDisplayTapType
enum class EDisplayTapType : int32 {
	None = -1,
	Display = 0,
	Graphic = 1,
	System = 2,
	EDisplayTapType_MAX = 3
};

// Enum ProjectD.EDroneArmLagState
enum class EDroneArmLagState : uint8 {
	None = 0,
	Floating = 1,
	Crouch = 2,
	Parkour_Enable = 3,
	Parkour_Disable = 4,
	EDroneArmLagState_MAX = 5
};

// Enum ProjectD.EENVTYPE
enum class EENVTYPE : uint8 {
	DEFAULT = 0,
	DESTROY = 1,
	SAND = 2,
	WET = 3,
	EENVTYPE_MAX = 4
};

// Enum ProjectD.EPDEndAnimationType
enum class EPDEndAnimationType : uint8 {
	StartMove = 0,
	StopMove = 1,
	Pivot = 2,
	Max = 3
};

// Enum ProjectD.EPDEnvEffectClientType
enum class EPDEnvEffectClientType : uint8 {
	Normal = 0,
	SandStorm = 1,
	Rain = 2,
	SeaFog = 3,
	EPDEnvEffectClientType_MAX = 4
};

// Enum ProjectD.ESafeZoneDrawStyle
enum class ESafeZoneDrawStyle : uint8 {
	Line = 0,
	Solid = 1,
	ESafeZoneDrawStyle_MAX = 2
};

// Enum ProjectD.ESafeZoneDrawType
enum class ESafeZoneDrawType : uint8 {
	None = 0,
	CurrentArea = 1,
	NextArea = 2,
	ESafeZoneDrawType_MAX = 3
};

// Enum ProjectD.EMapShape
enum class EMapShape : uint8 {
	Rect = 0,
	Oval = 1,
	EMapShape_MAX = 2
};

// Enum ProjectD.EGamePlayTapType
enum class EGamePlayTapType : int32 {
	None = -1,
	Mouse = 0,
	CrossHair = 1,
	UI = 2,
	EGamePlayTapType_MAX = 3
};

// Enum ProjectD.GBOStep
enum class GBOStep : uint8 {
	ALL = 0,
	Step1 = 1,
	Step2 = 2,
	Step3 = 3,
	Step4 = 4,
	Step5 = 5,
	GBOStep_MAX = 6
};

// Enum ProjectD.EInventorySlot
enum class EInventorySlot : uint8 {
	Slot_None = 0,
	Weapon_MainSlot = 1,
	Weapon_SubSlot = 2,
	Weapon_PistolSlot = 3,
	Weapon_MeleeSlot = 4,
	Weapon_ThrowSlot = 5,
	Slot_Max = 6,
	EInventorySlot_MAX = 7
};

// Enum ProjectD.EPDHitFeedBackType
enum class EPDHitFeedBackType : uint8 {
	Hit = 0,
	Hit_NoDmg = 1,
	Groggy = 2,
	Death = 3,
	HeadShot = 4,
	Armor = 5,
	ArmorBroken = 6,
	EPDHitFeedBackType_MAX = 7
};

// Enum ProjectD.EDivideType
enum class EDivideType : uint8 {
	DivideType_None = 0,
	DivideType_DropItem = 1,
	DivideType_DropCoin = 2,
	DivideType_DropAmmo = 3,
	DivideType_GetItem = 4,
	DivideType_DropSlotItem = 5,
	DivideType_MAX = 6
};

// Enum ProjectD.EPDStoppingType
enum class EPDStoppingType : uint8 {
	Stopping_Foward = 0,
	Stopping_Left = 1,
	Stopping_Right = 2,
	Stopping_Back = 3,
	Stopping_MAX = 4
};

// Enum ProjectD.EPDStartingType
enum class EPDStartingType : uint8 {
	Starting_Foward = 0,
	Starting_Left = 1,
	Starting_Right = 2,
	Starting_Back = 3,
	Starting_MAX = 4
};

// Enum ProjectD.EPDSpectatingModeType
enum class EPDSpectatingModeType : uint8 {
	None = 0,
	FreeLookMode = 1,
	PlayerLookMode = 2,
	Max = 3
};

// Enum ProjectD.ESmoothTurn
enum class ESmoothTurn : uint8 {
	SmoothTurn_None = 0,
	SmoothTurn_Left = 1,
	SmoothTurn_Right = 2,
	SmoothTurn_MAX = 3
};

// Enum ProjectD.EOverlapNumber
enum class EOverlapNumber : uint8 {
	None = 0,
	Overlap1 = 1,
	Overlap2 = 2,
	Overlap3 = 3,
	Overlap4 = 4,
	Overlap5 = 5,
	Overlap6 = 6,
	Overlap7 = 7,
	Overlap8 = 8,
	Overlap9 = 9,
	EOverlapNumber_MAX = 10
};

// Enum ProjectD.EOptionContentType
enum class EOptionContentType : uint8 {
	ComboBox = 0,
	Slider = 1,
	InputKeySelector = 2,
	InputToggleKeySelector = 3,
	CheckBox = 4,
	Tabs = 5,
	OneButton = 6,
	CrossHairImage = 7,
	EOptionContentType_MAX = 8
};

// Enum ProjectD.EBlockType
enum class EBlockType : uint8 {
	Default = 0,
	Friend_Clan = 1,
	AllBlock = 2,
	EBlockType_MAX = 3
};

// Enum ProjectD.EOptionQuality
enum class EOptionQuality : uint8 {
	LowQuality = 0,
	MediumQuality = 1,
	HighQuality = 2,
	EpicQuality = 3,
	EOptionQuality_MAX = 4
};

// Enum ProjectD.EGraphicsQuality
enum class EGraphicsQuality : uint8 {
	Low = 0,
	Medium = 1,
	High = 2,
	Epic = 3,
	Custom = 4,
	EGraphicsQuality_MAX = 5
};

// Enum ProjectD.EMouseSensitivityType
enum class EMouseSensitivityType : uint8 {
	NormalSensitivity = 0,
	AimingSensitivity = 1,
	IronsightSensitivity = 2,
	X2ZoomScope = 3,
	X4ZoomScope = 4,
	X8ZoomScope = 5,
	X16ZoomScope = 6,
	EMouseSensitivityType_MAX = 7
};

// Enum ProjectD.EOptionType
enum class EOptionType : int32 {
	None = -1,
	Display = 0,
	Sounds = 1,
	Gameplay = 2,
	Controls = 3,
	OptionType_Max = 4,
	EOptionType_MAX = 5
};

// Enum ProjectD.EOutGameCameraType
enum class EOutGameCameraType : uint8 {
	OutgameCameraLobby = 0,
	OutgameCameraAgentInven = 1,
	OutgameCameraAgentCreate = 2,
	OutgameCameraCustomCharacter = 3,
	EOutGameCameraType_MAX = 4
};

// Enum ProjectD.EOutgameCharacterSpawnGroup
enum class EOutgameCharacterSpawnGroup : uint8 {
	OutgameCharacterSG_Lobby = 0,
	OutgameCharacterSG_AgentInven = 1,
	OutgameCharacterSG_AgentCreate = 2,
	OutgameCharacterSG_Custom = 3,
	OutgameCharacterSG_Result = 4,
	OutgameCharacterSG_MAX = 5
};

// Enum ProjectD.EPartySlotState
enum class EPartySlotState : uint8 {
	Empty = 0,
	Inviting = 1,
	Filled = 2,
	EPartySlotState_MAX = 3
};

// Enum ProjectD.ECameraMovementType
enum class ECameraMovementType : uint8 {
	CMT_Indoor = 0,
	CMT_Outdoor = 1,
	CMT_Groggy = 2,
	CMT_Roll = 3,
	CMT_PKRCU100WCamera = 4,
	CMT_PKRCU100RCamera = 5,
	CMT_PKRCU150WCamera1 = 6,
	CMT_PKRCU150WCamera2 = 7,
	CMT_PKRCU150RCamera1 = 8,
	CMT_PKRCU150RCamera2 = 9,
	CMT_PKRCU200WCamera1 = 10,
	CMT_PKRCU200WCamera2 = 11,
	CMT_PKRCU200RCamera1 = 12,
	CMT_PKRCU200RCamera2 = 13,
	CMT_PKRCU250WCamera1 = 14,
	CMT_PKRCU250WCamera2 = 15,
	CMT_PKRCU250RCamera1 = 16,
	CMT_PKRCU250RCamera2 = 17,
	CMT_PKRCU300WCamera1 = 18,
	CMT_PKRCU300WCamera2 = 19,
	CMT_PKRCU300RCamera1 = 20,
	CMT_PKRCU300RCamera2 = 21,
	CMT_PKRVT100WCamera = 22,
	CMT_PKRVT100RCamera = 23,
	CMT_PKRVT150WCamera1 = 24,
	CMT_PKRVT150WCamera2 = 25,
	CMT_PKRVT150RCamera1 = 26,
	CMT_PKRVT150RCamera2 = 27,
	CMT_PKRVT200WCamera1 = 28,
	CMT_PKRVT200WCamera2 = 29,
	CMT_PKRVT200RCamera1 = 30,
	CMT_PKRVT200RCamera2 = 31,
	CMT_PKRVT250WCamera1 = 32,
	CMT_PKRVT250WCamera2 = 33,
	CMT_PKRVT250RCamera1 = 34,
	CMT_PKRVT250RCamera2 = 35,
	CMT_PKRVT300WCamera1 = 36,
	CMT_PKRVT300WCamera2 = 37,
	CMT_PKRVT300RCamera1 = 38,
	CMT_PKRVT300RCamera2 = 39,
	CMT_PKRCloseUpCamera = 40,
	CMT_PKRDefCamera = 41,
	CMT_FirstPerson = 42,
	CMT_FirstPerson_Bow = 43,
	CMT_Aiming = 44,
	CMT_CrouchAiming = 45,
	CMT_Crouch = 46,
	CMT_Aiming_Bow = 47,
	CMT_CrouchAiming_Bow = 48,
	CMT_ForwardRun = 49,
	CMT_Jump = 50,
	CMT_LongJump = 51,
	CMT_Climb = 52,
	CMT_Zipline = 53,
	CMT_Slide = 54,
	CMT_JuggernautDash = 55,
	CMT_Stealth = 56,
	CMT_Seed_Bomb_Install_Defuse = 57,
	CMT_GgoggySeed_Bomb_Install_Defuse = 58,
	CMT_Count = 59,
	CMT_MAX = 60
};

// Enum ProjectD.ESpectatingParkourCamera
enum class ESpectatingParkourCamera : uint8 {
	None = 0,
	Following = 1,
	FollowingEnd = 2,
	MAX = 3
};

// Enum ProjectD.EPDFootStepNotifyType
enum class EPDFootStepNotifyType : uint8 {
	Run = 0,
	Jump = 1,
	SoftLand = 2,
	HardLand = 3,
	JugDash = 4,
	Roll = 5,
	Max = 6
};

// Enum ProjectD.EPDTraceChannel
enum class EPDTraceChannel : uint8 {
	Visibility = 3,
	Parkour = 14,
	Climb = 15,
	Weapon = 16,
	AttackObject = 17,
	Pickup = 18,
	Ladder = 19,
	Projectile = 20,
	Audio = 21,
	Slide = 23,
	AudioOcc = 25,
	EPDTraceChannel_MAX = 26
};

// Enum ProjectD.EHandsAndFeetBone
enum class EHandsAndFeetBone : uint8 {
	Palm_L = 0,
	Palm_R = 1,
	bx_L_toe = 2,
	bx_R_toe = 3,
	bx_spine = 4,
	EHandsAndFeetBone_MAX = 5
};

// Enum ProjectD.EBattleIntensityState
enum class EBattleIntensityState : uint8 {
	INTENSITY_NORMAL = 0,
	INTENSITY_ALARMED = 1,
	INTENSITY_COMBAT_SIMPLE = 2,
	INTENSITY_COMBAT_HARD = 3,
	INTENSITY_MAX = 4
};

// Enum ProjectD.EPDTutorialEvent
enum class EPDTutorialEvent : uint8 {
	CloseShopUI = 0,
	HighlightLoadoutUI = 1,
	HighlightNPC = 2,
	HighlightPartSlotUI = 3,
	HighlightShopItemUI = 4,
	HighlightShopGuideUI = 5,
	HighlightUpgradeUI = 6,
	HighlightVicinityItemUI = 7,
	SpawnItem = 8,
	SpawnNPC = 9,
	EPDTutorialEvent_MAX = 10
};

// Enum ProjectD.EPDTutorialQuestKeyPressType
enum class EPDTutorialQuestKeyPressType : uint8 {
	Normal = 0,
	Hold = 1,
	Short = 2,
	Double = 3,
	EPDTutorialQuestKeyPressType_MAX = 4
};

// Enum ProjectD.ETutorialPhase
enum class ETutorialPhase : uint8 {
	TP_PHASE_2 = 0,
	TP_PHASE_3 = 1,
	TP_PHASE_4 = 2,
	TP_PHASE_5 = 3,
	TP_PHASE_6 = 4,
	TP_PHASE_7 = 5,
	TP_PHASE_8 = 6,
	TP_PHASE_9 = 7,
	TP_PHASE_10 = 8,
	TP_PHASE_11 = 9,
	TP_PHASE_MAX = 10
};

// Enum ProjectD.EQuestAction
enum class EQuestAction : uint8 {
	QA_None = 0,
	QA_OUTGAME_CHA_VOICE = 1,
	QA_HIT = 2,
	QA_RANGE = 3,
	QA_THROW = 4,
	QA_CHA_STATE = 5,
	QA_AREA = 6,
	QA_PING = 7,
	QA_USEITEM = 8,
	QA_INTERACTION = 9,
	QA_MODE_EVENT = 10,
	QA_ADD_ITEM = 11,
	QA_UPGRADE = 12,
	QA_INGAME_MOVIE = 13,
	QA_BATTLE_ASPECT = 14,
	QA_GAME_READY = 15,
	QA_ROUND_END = 16,
	QA_OPERATOR_CHECK = 17,
	QA_ENV_EFFECT = 18,
	QA_MOVE_CHARACTER = 19,
	QA_CHANGE_MOVE_TYPE = 20,
	QA_TRY_ACTION = 21,
	QA_CHANGE_AIM_STATE = 22,
	QA_CHANGE_WEAPON = 23,
	QA_ETC_ACTION = 24,
	QA_START_TUTORIAL = 25,
	QA_COMPLETE_TUTORAL_PHASE = 26,
	QA_BATTLE_INTENSITY = 27,
	QA_RANGE_IN_LOCATION = 28,
	QA_SHOP_READY = 29,
	QA_UNEQUIP_POWERARMOR = 30,
	QA_MAX = 31
};

// Enum ProjectD.EQuestList
enum class EQuestList : int32 {
	QL_None = 0,
	QL_VOICE_ENEMY_HIT = 1,
	QL_VOICE_TEAM_HIT = 2,
	QL_VOICE_TEAM_ENEMY_HIT = 3,
	QL_VOICE_TEAM_ME_HIT = 4,
	QL_VOICE_ENEMY_TEAM_HIT = 5,
	QL_VOICE_ENEMY_ME_HIT = 6,
	QL_VOICE_GROGGY = 7,
	QL_VOICE_DEATH = 8,
	QL_VOICE_ENEMY_GROGGY = 9,
	QL_VOICE_ENEMY_DEATH = 10,
	QL_VOICE_DOT_HIT = 11,
	QL_VOICE_SMOKE_AREA = 12,
	QL_VOICE_THROW_GRANADE = 13,
	QL_VOICE_THROW_HEAL = 14,
	QL_VOICE_THROW_GAS = 15,
	QL_VOICE_THROW_SCAN = 16,
	QL_VOICE_JUGGERNAUT = 17,
	QL_VOICE_CHANGE_ARMORPLATE = 18,
	QL_VOICE_RECOVER = 19,
	QL_VOICE_FULL_INVEN = 20,
	QL_VOICE_GET_SEED = 21,
	QL_VOICE_SET_SEED = 22,
	QL_VOICE_RELEASE_SEED = 23,
	QL_VOICE_RELOAD = 24,
	QL_VOICE_SHOP_BUYREQUEST = 25,
	QL_VOICE_SHOP_CANCEL = 26,
	QL_VOICE_SHOP_REFUSE = 27,
	QL_VOICE_INTER_LEDEAR_DELEGATE = 28,
	QL_VOICE_SIGNATURE = 29,
	QL_VOICE_GROGGY_REQUEST = 30,
	QL_VOICE_GROGGY_HEAL = 31,
	QL_VOICE_INTER_BOMB_DELEGATE = 32,
	QL_VOICE_MONOLOGUE = 33,
	QL_VOICE_CHA_INTERACTION_TALK = 34,
	QL_VOICE_OUTGAME_CHA_CREATE = 35,
	QL_VOICE_OUTGAME_CHA_SELECT = 36,
	QL_VOICE_OUTGAME_LOBBY = 37,
	QL_VOICE_OUTGAME_RESULT_WIN = 38,
	QL_VOICE_OUTGAME_RESULT_LOSE = 39,
	QL_VOICE_ENEMY_SNIPER_FIND = 40,
	QL_VOICE_NEAR_GRANADE = 41,
	QL_VOICE_PING_MOVE = 42,
	QL_VOICE_PING_GO = 43,
	QL_VOICE_PING_ASSEMBLE = 44,
	QL_VOICE_PING_RETREAT = 45,
	QL_VOICE_PING_INSTALL = 46,
	QL_VOICE_PING_DEFUSE = 47,
	QL_VOICE_PING_CAUTIONINSTALL = 48,
	QL_VOICE_PING_CAUTIONDEFUSE = 49,
	QL_VOICE_PING_ENEMY = 50,
	QL_VOICE_PING_WATCH = 51,
	QL_VOICE_PING_SUPPORT = 52,
	QL_VOICE_PING_RUSH = 53,
	QL_VOICE_PING_ATTACK = 54,
	QL_VOICE_PING_DEFENSE = 55,
	QL_VOICE_PING_SOS = 56,
	QL_VOICE_PING_ALLYGROGGY = 57,
	QL_VOICE_PING_ENEMYGROGGY = 58,
	QL_VOICE_PING_ENEMYDEAD = 59,
	QL_VOICE_PING_ENEMYJUGGERNAUT = 60,
	QL_VOICE_PING_HELLO = 61,
	QL_VOICE_PING_SORRY = 62,
	QL_VOICE_PING_GREAT = 63,
	QL_VOICE_PING_THANKYOU = 64,
	QL_VOICE_PING_BLAHBLAH = 65,
	QL_VOICE_PING_INVEST = 66,
	QL_VOICE_PING_SAVING = 67,
	QL_VOICE_PING_ALLIN = 68,
	QL_VOICE_PING_RICH = 69,
	QL_VOICE_PING_POOR = 70,
	QL_VOICE_PING_ITEM = 71,
	QL_VOICE_PING_SEED = 72,
	QL_VOICE_PING_WEAPON_AR = 73,
	QL_VOICE_PING_WEAPON_SMG = 74,
	QL_VOICE_PING_WEAPON_SR = 75,
	QL_VOICE_PING_WEAPON_SG = 76,
	QL_VOICE_PING_WEAPON_LMG = 77,
	QL_VOICE_PING_WEAPON_BOW = 78,
	QL_VOICE_PING_WEAPON_SUB = 79,
	QL_VOICE_PING_AMMO_10 = 80,
	QL_VOICE_PING_AMMO_557 = 81,
	QL_VOICE_PING_AMMO_763 = 82,
	QL_VOICE_PING_AMMO_12GAUGE = 83,
	QL_VOICE_PING_AMMO_ARROW = 84,
	QL_VOICE_PING_THROW_GRENADE = 85,
	QL_VOICE_PING_THROW_GAS = 86,
	QL_VOICE_PING_THROW_SCAN = 87,
	QL_VOICE_PING_THROW_HEAL = 88,
	QL_VOICE_PING_BANDAGE = 89,
	QL_VOICE_PING_ARMORPLATE = 90,
	QL_VOICE_PING_ASTRAPI = 91,
	QL_VOICE_PING_SELFREVIVALKIT = 92,
	QL_VOICE_PING_BOMBDEACTIVATEKIT = 93,
	QL_VOICE_PING_JUGGERNAUT = 94,
	QL_VOICE_PING_INVEN_COIN = 95,
	QL_VOICE_PING_INVEN_SEED = 96,
	QL_VOICE_PING_INVEN_WEAPON_MAIN = 97,
	QL_VOICE_PING_INVEN_WEAPON_SUB = 98,
	QL_VOICE_PING_INVEN_AMMO_10 = 99,
	QL_VOICE_PING_INVEN_AMMO_557 = 100,
	QL_VOICE_PING_INVEN_AMMO_763 = 101,
	QL_VOICE_PING_INVEN_AMMO_12GAUGE = 102,
	QL_VOICE_PING_INVEN_AMMO_ARROW = 103,
	QL_VOICE_PING_SHOP = 104,
	QL_VOICE_PING_SHOP_WEAPON_AR = 105,
	QL_VOICE_PING_SHOP_WEAPON_SMG = 106,
	QL_VOICE_PING_SHOP_WEAPON_SR = 107,
	QL_VOICE_PING_SHOP_WEAPON_SG = 108,
	QL_VOICE_PING_SHOP_WEAPON_LMG = 109,
	QL_VOICE_PING_SHOP_WEAPON_BOW = 110,
	QL_VOICE_PING_SHOP_WEAPON_SUB = 111,
	QL_VOICE_PING_SHOP_AMMO_10 = 112,
	QL_VOICE_PING_SHOP_AMMO_557 = 113,
	QL_VOICE_PING_SHOP_AMMO_763 = 114,
	QL_VOICE_PING_SHOP_AMMO_12GAUGE = 115,
	QL_VOICE_PING_SHOP_AMMO_ARROW = 116,
	QL_VOICE_PING_SHOP_THROW_GRENADE = 117,
	QL_VOICE_PING_SHOP_THROW_GAS = 118,
	QL_VOICE_PING_SHOP_THROW_SCAN = 119,
	QL_VOICE_PING_SHOP_THROW_HEAL = 120,
	QL_VOICE_PING_SHOP_BANDAGE = 121,
	QL_VOICE_PING_SHOP_ARMORPLATE = 122,
	QL_VOICE_PING_SHOP_ASTRAPI = 123,
	QL_VOICE_PING_SHOP_SELFREVIVALKIT = 124,
	QL_VOICE_PING_SHOP_BOMBDEACTIVATEKIT = 125,
	QL_VOICE_PING_SHOP_JUGGERNAUT = 126,
	QL_VOICE_PING_SHOP_TEMABUFF = 127,
	QL_VOICE_PING_FUND_ARMORY = 128,
	QL_VOICE_PING_FUND_ORDNANCE = 129,
	QL_VOICE_PING_FUND_TACTICAL = 130,
	QL_VOICE_PING_GROGGY_MOVE = 131,
	QL_VOICE_PING_GROGGY_ENEMY = 132,
	QL_VOICE_PING_AGREE = 133,
	QL_VOICE_PING_DECLINE = 134,
	QL_VOICE_PING_TARGET_CANEL = 135,
	QL_VOICE_PING_CLAIM = 136,
	QL_VOICE_PING_HELP_AGREE = 137,
	QL_VOICE_BREAKINTO_START = 138,
	QL_VOICE_SCAN_ME = 139,
	QL_OPERATOR_ARMORY_UPGRADE = 140,
	QL_OPERATOR_TACTICAL_UPGRADE = 141,
	QL_OPERATOR_EQUIP_UPGRADE = 142,
	QL_OPERATOR_DERAILED_INGAME_MOVIE = 143,
	QL_OPERATOR_SHIPYARD_INGAME_MOVIE = 144,
	QL_OPERATOR_WINDFARM_INGAME_MOVIE = 145,
	QL_OPERATOR_BRIDGE_INGAME_MOVIE = 146,
	QL_OPERATOR_CHANGE_STARTPOINT_ATTACK = 147,
	QL_OPERATOR_CHANGE_STARTPOINT_DEFENCE = 148,
	QL_OPERATOR_REMAIN_TIME = 149,
	QL_OPERATOR_FILED_MOVE = 150,
	QL_OPERATOR_GET_SEED = 151,
	QL_OPERATOR_SEED_INSTALL = 152,
	QL_OPERATOR_SEED_RELEASE = 153,
	QL_OPERATOR_SEED_NOTIFY = 154,
	QL_OPERATOR_RESULT = 155,
	QL_OPERATOR_INTER_START = 156,
	QL_OPERATOR_INTER_END = 157,
	QL_OPERATOR_ARMED_TIME = 158,
	QL_OPERATOR_ALLREADY = 159,
	QL_OPERATOR_AUTO_SUPPLY = 160,
	QL_OPERATOR_ENEMY_INFO_OPEN = 161,
	QL_OPERATOR_ENEMY_INFO_OPEN_S = 162,
	QL_OPERATOR_ENEMY_UPGRADE_OPEN = 163,
	QL_OPERATOR_SEED_DROP = 164,
	QL_OPERATOR_BATTLE_ASPECT_E4_T3 = 165,
	QL_OPERATOR_BATTLE_ASPECT_E3_T1_AT = 166,
	QL_OPERATOR_BATTLE_ASPECT_E3_T1_DEF = 167,
	QL_OPERATOR_BATTLE_ASPECT_E1_T3_AT = 168,
	QL_OPERATOR_BATTLE_ASPECT_E1_T3_DEF = 169,
	QL_OPERATOR_BATTLE_ASPECT_E1_T1_AT = 170,
	QL_OPERATOR_BATTLE_ASPECT_E1_T1_DEF = 171,
	QL_OPERATOR_LAST_ROUND = 172,
	QL_OPERATOR_FIRST_WIN = 173,
	QL_OPERATOR_FIRST_LOSE = 174,
	QL_OPERATOR_WININGSTREAK_3 = 175,
	QL_OPERATOR_LOSINGSTREAK_3 = 176,
	QL_OPERATOR_WININGSTREAK_4 = 177,
	QL_OPERATOR_LOSINGSTREAK_4 = 178,
	QL_OPERATOR_WININGSTREAK_3_N_LOSE = 179,
	QL_OPERATOR_LOSINGSTREAK_3_N_WIN = 180,
	QL_OPERATOR_ENEMY_JUGGERNAUT_2 = 181,
	QL_OPERATOR_ENEMY_JUGGERNAUT_3 = 182,
	QL_OPERATOR_TEAM_JUGGERNAUT_2 = 183,
	QL_OPERATOR_TEAM_JUGGERNAUT_3 = 184,
	QL_OPERATOR_ENEMY_JUGGERNAUT_1 = 185,
	QL_OPERATOR_TEAM_JUGGERNAUT_1 = 186,
	QL_OPERATOR_TEAM_KILL = 187,
	QL_OPERATOR_FIRST_KILL = 188,
	QL_OPERATOR_DOUBLE_KILL = 189,
	QL_OPERATOR_TRIPLE_KILL = 190,
	QL_OPERATOR_ALL_KILL = 191,
	QL_OPERATOR_ALL_KILL_MELEE = 192,
	QL_OPERATOR_HALF_JUG_ARMOR = 193,
	QL_OPERATOR_HALF_JUG_AMMO = 194,
	QL_OPERATOR_ZERO_JUG_AMMO = 195,
	QL_OPERATOR_SHOP_NOTBUY_ARMOR = 196,
	QL_OPERATOR_SHOP_NOTBUY_AMMO = 197,
	QL_OPERATOR_SHOP_NOTBUY_SNIPERSCOPE = 198,
	QL_OPERATOR_30_UNDER_HAVE_HEAL_PACK = 199,
	QL_OPERATOR_30_UNDER_NEED_HEAL_PACK = 200,
	QL_OPERATOR_ARMORPLATE_USE = 201,
	QL_OPERATOR_ARMORPLATE_NEED = 202,
	QL_OPERATOR_SENDSTORM = 203,
	QL_OPERATOR_TUTORIAL_START_2 = 204,
	QL_OPERATOR_TUTORIAL_START_3 = 205,
	QL_OPERATOR_TUTORIAL_PHASE_2 = 206,
	QL_OPERATOR_TUTORIAL_PHASE_3 = 207,
	QL_OPERATOR_TUTORIAL_PHASE_4 = 208,
	QL_OPERATOR_TUTORIAL_PHASE_5 = 209,
	QL_OPERATOR_TUTORIAL_PHASE_6 = 210,
	QL_OPERATOR_TUTORIAL_PHASE_7 = 211,
	QL_OPERATOR_TUTORIAL_PHASE_8 = 212,
	QL_OPERATOR_TUTORIAL_PHASE_9 = 213,
	QL_OPERATOR_TUTORIAL_PHASE_10 = 214,
	QL_OPERATOR_TUTORIAL_PHASE_11 = 215,
	QL_OPERATOR_SIGNATURE_SCAN = 216,
	QL_OPERATOR_SOY_SIGNATURE_SCAN = 217,
	QL_OPERATOR_BREAKINTO_READY = 218,
	QL_OPERATOR_BREAKINTO_START = 219,
	QL_OPERATOR_BREAKINTO_TEAM_ALERT = 220,
	QL_TUTORIAL_OPEN_INVENTORY = 221,
	QL_TUTORIAL_BUY_MP5 = 222,
	QL_TUTORIAL_BUY_AMMO_10 = 223,
	QL_TUTORIAL_INVEST_ARMORY = 224,
	QL_TUTORIAL_ATTACH_WEAPON_PARTS = 225,
	QL_TUTORIAL_SET_LOADOUT = 226,
	QL_TUTORIAL_INVEST_ORDNANCE = 227,
	QL_TUTORIAL_BUY_BANDAGE = 228,
	QL_TUTORIAL_BUY_ARMOR_PLATE = 229,
	QL_TUTORIAL_BUY_GRENADE = 230,
	QL_TUTORIAL_MOVE_FRONT = 231,
	QL_TUTORIAL_MOVE_BACK = 232,
	QL_TUTORIAL_MOVE_LEFT = 233,
	QL_TUTORIAL_MOVE_RIGHT = 234,
	QL_TUTORIAL_CROUCH = 235,
	QL_TUTORIAL_WALK = 236,
	QL_TUTORIAL_JUMP = 237,
	QL_TUTORIAL_LONG_JUMP = 238,
	QL_TUTORIAL_ROLL = 239,
	QL_TUTORIAL_ROLL_LEFT = 240,
	QL_TUTORIAL_ROLL_RIGHT = 241,
	QL_TUTORIAL_FIRE_WEAPON = 242,
	QL_TUTORIAL_RELOAD_WEAPON = 243,
	QL_TUTORIAL_AIMING = 244,
	QL_TUTORIAL_AIM_TO_ADS = 245,
	QL_TUTORIAL_ADS = 246,
	QL_TUTORIAL_LEAN_LEFT = 247,
	QL_TUTORIAL_LEAN_RIGHT = 248,
	QL_TUTORIAL_GROGGY_BULLET = 249,
	QL_TUTORIAL_KILL_BULLET = 250,
	QL_TUTORIAL_MELEE_V = 251,
	QL_TUTORIAL_SWITCH_MELEE_WEAPON = 252,
	QL_TUTORIAL_MELEE_MOUSE = 253,
	QL_TUTORIAL_GROGGY_MELEE = 254,
	QL_TUTORIAL_KILL_MELEE = 255,
	QL_TUTORIAL_LOOT_ITEM = 256,
	QL_TUTORIAL_RESCUE_ALLY = 257,
	QL_TUTORIAL_INTERACT_ITEM_BOX = 258,
	QL_TUTORIAL_GET_DROP_ITEM = 259,
	QL_TUTORIAL_USE_ITEM_RECOVER = 260,
	QL_TUTORIAL_SIGNATURE_ACTION = 261,
	QL_TUTORIAL_USE_ZIPLINE = 262,
	QL_TUTORIAL_SWITCH_THROW_WEAPON = 263,
	QL_TUTORIAL_THROW_WEAPON = 264,
	QL_TUTORIAL_FAST_THROW_WEAPON = 265,
	QL_TUTORIAL_MARK_PING_MOVE = 266,
	QL_TUTORIAL_MARK_PING_ENEMY = 267,
	QL_TUTORIAL_MARK_PING_SUPPORT = 268,
	QL_TUTORIAL_OPEN_STATUS_BOARD = 269,
	QL_TUTORIAL_DRAW_STATUS_BOARD = 270,
	QL_TUTORIAL_PING_STATUS_BOARD = 271,
	QL_TUTORIAL_GET_BOMB = 272,
	QL_TUTORIAL_INSTALL_BOMB = 273,
	QL_TUTORIAL_WAIT_EXPLOSION_BOMB = 274,
	QL_TUTORIAL_USE_ARMOR_PLATE = 275,
	QL_TUTORIAL_STEALTH = 276,
	QL_BI_NORMAL = 277,
	QL_BI_ALARMED = 278,
	QL_BI_COMBAT_SIMPLE = 279,
	QL_BI_COMBAT_HARD = 280,
	QL_Max = 281
};

// Enum ProjectD.EQuestType
enum class EQuestType : uint8 {
	QT_VOICE = 0,
	QT_TUTORIAL = 1,
	QT_BATTLE_INTENSITY = 2,
	QT_MAX = 3
};

// Enum ProjectD.EReloadNotifyType
enum class EReloadNotifyType : uint8 {
	NONE = 0,
	AttachMagazineToHand = 1,
	HideMagazine = 2,
	All = 3,
	EReloadNotifyType_MAX = 4
};

// Enum ProjectD.EGuideType
enum class EGuideType : uint8 {
	ROUND_OFFENSE = 0,
	ROUND_DEFENSE = 1,
	AREA = 2,
	PATH = 3,
	EGuideType_MAX = 4
};

// Enum ProjectD.ESceneEvent
enum class ESceneEvent : uint8 {
	SE_None = 0,
	SE_MatchingStarted = 1,
	SE_MatchingCanceled = 2,
	SE_MAX = 3
};

// Enum ProjectD.ESceneName
enum class ESceneName : uint8 {
	None = 0,
	Start = 1,
	Login = 2,
	lobby = 3,
	AgentNick = 4,
	AgentCreate = 5,
	AgentInven = 6,
	AgentLobby = 7,
	Custom = 8,
	CustomCharacterPerk = 9,
	CustomCharacterDeco = 10,
	CustomVoice = 11,
	CustomWeapon = 12,
	CustomGameDeco = 13,
	Clan = 14,
	ClanInfo = 15,
	ClanList = 16,
	ClanCreate = 17,
	DebugLog = 18,
	PlayLogReport = 19,
	Loading = 20,
	LoadBase = 21,
	LoadIntro = 22,
	LoadMatch = 23,
	LoadResult = 24,
	Ingame = 25,
	GameResult = 26,
	Scene_Max = 27,
	ESceneName_MAX = 28
};

// Enum ProjectD.EBowStringAction
enum class EBowStringAction : uint8 {
	Grab = 0,
	Release = 1,
	PullTight = 2,
	EBowStringAction_MAX = 3
};

// Enum ProjectD.EPDSlidableType
enum class EPDSlidableType : uint8 {
	Slidable_None = 0,
	Slidable_Start = 1,
	Slidable_Loop = 2,
	Slidable_End = 3,
	Slidable_MAX = 4
};

// Enum ProjectD.ESoundTapType
enum class ESoundTapType : int32 {
	None = -1,
	Sound = 0,
	Voice = 1,
	ESoundTapType_MAX = 2
};

// Enum ProjectD.ESplineTrace
enum class ESplineTrace : uint8 {
	ST_None = 0,
	SR_TraceTarget = 1,
	ESplineTrace_MAX = 2
};

// Enum ProjectD.ESplineRotation
enum class ESplineRotation : uint8 {
	SR_None = 0,
	SR_LookAtTarget = 1,
	SR_Local = 2,
	SR_World = 3,
	SR_InterpPoint = 4,
	SR_InterpPointLocal = 5,
	SR_MAX = 6
};

// Enum ProjectD.ESplineMovementType
enum class ESplineMovementType : uint8 {
	Position = 0,
	OffsetRotateAndPosition = 1,
	RotateAndPosition = 2,
	UseCustomRotation = 3,
	UseCharacterBone = 4,
	FOVOnly = 5,
	ESplineMovementType_MAX = 6
};

// Enum ProjectD.EMoveInterpolateType
enum class EMoveInterpolateType : uint8 {
	None = 0,
	PrevPosInclusive = 1,
	EMoveInterpolateType_MAX = 2
};

// Enum ProjectD.ETabButtonState
enum class ETabButtonState : uint8 {
	UnSelect = 0,
	Select = 1,
	ETabButtonState_MAX = 2
};

// Enum ProjectD.ERookieEventState
enum class ERookieEventState : uint8 {
	FirstLogin = 0,
	Incomplete = 1,
	CompleteTutorial = 2,
	CompletePlayGames = 3,
	CompleteAll = 4,
	ERookieEventState_MAX = 5
};

// Enum ProjectD.EInvenSortOrder
enum class EInvenSortOrder : uint8 {
	Property_Mission_ModeItem = 0,
	Property_Coin = 1,
	Property_ArmorPlate = 2,
	Property_Bandage = 3,
	Property_Painkiller = 4,
	Property_Pouchkit = 5,
	Property_FirstAidkit = 6,
	Property_Astrapi = 7,
	Property_SelfRevivalKit = 8,
	Property_Scope = 9,
	Property_FrontSight = 10,
	Property_SideSight = 11,
	Property_RearSight = 12,
	Property_Grip = 13,
	Property_Muzzle = 14,
	Property_Stock = 15,
	Property_Magazine = 16,
	Property_Ammo_10 = 17,
	Property_Ammo_557 = 18,
	Property_Ammo_763 = 19,
	Property_Ammo_12Gauge = 20,
	Property_Ammo_47 = 21,
	Property_Ammo_128 = 22,
	Property_Ammo_762G = 23,
	Property_Ammo_Arrow = 24,
	Property_Ammo_Exosuit = 25,
	Property_AR = 26,
	Property_SMG = 27,
	Property_SR = 28,
	Property_SG = 29,
	Property_LMG = 30,
	Property_BOW = 31,
	Property_RPG = 32,
	Property_MINIGUN = 33,
	Property_EXOSUIT_SMG = 34,
	Property_ETC = 35,
	Property_Pistol = 36,
	Property_Grenade = 37,
	Property_Smoke = 38,
	Property_GasGrenade = 39,
	Property_ScanGrenade = 40,
	Property_HealGrenade = 41,
	Property_Explosive = 42,
	Property_WhitePhosphorus = 43,
	Property_SND_BombDeactivateKit = 44,
	Property_MAX = 45
};

// Enum ProjectD.EUIEvent
enum class EUIEvent : uint8 {
	UE_None = 0,
	UE_ClanNameCheck = 1,
	UE_ClanCreate = 2,
	UE_ClanBreakRequested = 3,
	UE_ClanDestroyed = 4,
	UE_ClanInfoUpdated = 5,
	UE_ClanMemberListUpdated = 6,
	UE_ClanWaiterListUpdated = 7,
	UE_ClanListUpdated = 8,
	UE_ClanBreakCanceled = 9,
	UE_ClanJoined = 10,
	UE_ClanMemberRemoved = 11,
	UE_ClanDetailGet = 12,
	UE_ClanListLeftClicked = 13,
	UE_LeptonEquipFailed = 14,
	UE_LeptonSeasonMissionStatusUpdated = 15,
	UE_LeptonEquipListUpdated = 16,
	UE_Mercenary_Notify_Invite = 17,
	UE_InviteParty_Result = 18,
	UE_AcceptInviteParty_Result = 19,
	UE_NotifyBreakParty = 20,
	UE_OnShutDown = 21,
	UE_ReloadFindPartyUI = 22,
	UE_ReloadRegisterMercenaryUI = 23,
	UE_FindPartyPageVisibilityUpdated = 24,
	UE_ShowMatching = 25,
	UE_MatchingTime = 26,
	UE_HideMatching = 27,
	UE_ReloadPenalty = 28,
	UE_DefaultCustomRoom = 29,
	UE_ReloadCustomRoom = 30,
	UE_ReloadCustomRoomOption = 31,
	UE_ReloadHideCode = 32,
	UE_ReloadCustomRoomState = 33,
	UE_ReloadCustomRoomButton = 34,
	UI_MailListUpdate = 35,
	UI_MailReceivedItem = 36,
	UE_NewMailVisibilityUpdated = 37,
	UE_MailUIClosed = 38,
	UE_ReloadOptionPopup = 39,
	MAXUIEvent = 40,
	EUIEvent_MAX = 41
};

// Enum ProjectD.EChannelRange
enum class EChannelRange : uint8 {
	None = 0,
	Party = 1,
	Area = 2,
	Team = 3,
	Text = 4,
	Max = 5
};

// Enum ProjectD.EMapObjectState
enum class EMapObjectState : uint8 {
	None = 0,
	Normal = 1,
	Groggy = 2,
	Dead = 3,
	Rescue = 4,
	Bandage = 5,
	Astrapi = 6,
	ArmorKit = 7,
	Seed = 8,
	Revive = 9,
	Shop = 10,
	Max = 11
};

// Enum ProjectD.EMapObjectType
enum class EMapObjectType : uint8 {
	None = 0,
	MainPlayer = 1,
	Ally = 2,
	Enemy = 3,
	Npc = 4,
	Object = 101,
	Seed = 102,
	Demolition = 103,
	EnemyDamage = 104,
	EnemyDeath = 105,
	SafeZone = 106,
	FireSound = 107,
	Ping = 108,
	Camp = 109,
	Drawing = 110,
	ItemBox = 111,
	Mission_Lepton = 112,
	RecMainPlayer = 201,
	RecAlly = 202,
	RecEnemy = 203,
	YoungsikHacking = 204,
	Max = 205
};

// Enum ProjectD.EEntryPointType
enum class EEntryPointType : uint8 {
	EPT_NONE = 0,
	EPT_Entry = 1,
	EPT_Exit = 2,
	EPT_MAX = 3
};

// ScriptStruct ProjectD.EnvSetting
// Size: 0x64 (Inherited: 0x00)
struct FEnvSetting {
	char bApplyLightIntensity : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float SkyLightIntensity; // 0x04(0x04)
	float DirectionalLightIntensity; // 0x08(0x04)
	struct FColor SkyLightColor; // 0x0c(0x04)
	struct FColor DirectionalLightColor; // 0x10(0x04)
	char bUseFogSetting : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FLinearColor FogInscatteringColor; // 0x18(0x10)
	float FogMaxOpacity; // 0x28(0x04)
	float FogDensity; // 0x2c(0x04)
	float FogHeightFalloff; // 0x30(0x04)
	float FogStartDistance; // 0x34(0x04)
	float FogDensity2; // 0x38(0x04)
	float FogHeightFalloff2; // 0x3c(0x04)
	float FogHeightOffset2; // 0x40(0x04)
	char bUseVolumetricFogSetting : 1; // 0x44(0x01)
	char pad_44_1 : 7; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct FColor VolumetricFogAlbedo; // 0x48(0x04)
	float VolumetricFogScatteringDistribution; // 0x4c(0x04)
	float VolumetricFogExtinctionScale; // 0x50(0x04)
	float VolumetricFogDistance; // 0x54(0x04)
	struct FVector MovingObjectPosition; // 0x58(0x0c)
};

// ScriptStruct ProjectD.GroupRangeInfo
// Size: 0x24 (Inherited: 0x00)
struct FGroupRangeInfo {
	int32_t DefScore; // 0x00(0x04)
	int32_t PlayerExistWeight; // 0x04(0x04)
	int32_t PlayerNoneWeight; // 0x08(0x04)
	float Height; // 0x0c(0x04)
	float ARadius; // 0x10(0x04)
	float BRadius; // 0x14(0x04)
	struct FColor AColor; // 0x18(0x04)
	struct FColor BColor; // 0x1c(0x04)
	float Bold; // 0x20(0x04)
};

// ScriptStruct ProjectD.ActionNotifyData
// Size: 0x38 (Inherited: 0x00)
struct FActionNotifyData {
	struct FName EventName; // 0x00(0x08)
	struct UCurveBase* Curve; // 0x08(0x08)
	struct FVector EventVector; // 0x10(0x0c)
	float TotalDuration; // 0x1c(0x04)
	float StartOffset; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct UAnimSequenceBase* NotifyAnimSequence; // 0x28(0x08)
	enum class ECameraMovementType CameraMovement; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct ProjectD.ParkourHandOffset
// Size: 0x10 (Inherited: 0x08)
struct FParkourHandOffset : FTableRowBase {
	float LeftHandOffset; // 0x08(0x04)
	float RightHandOffset; // 0x0c(0x04)
};

// ScriptStruct ProjectD.PDAudioSwitch
// Size: 0x20 (Inherited: 0x00)
struct FPDAudioSwitch {
	struct FString Group; // 0x00(0x10)
	struct FString Switch; // 0x10(0x10)
};

// ScriptStruct ProjectD.PDButtonOutLine
// Size: 0xc8 (Inherited: 0x00)
struct FPDButtonOutLine {
	struct FAnchors Anchors; // 0x00(0x10)
	struct FMargin Offsets; // 0x10(0x10)
	struct FVector2D Alignment; // 0x20(0x08)
	bool bSizeToContent; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FSlateBrush OutLineStyle; // 0x30(0x88)
	struct FLinearColor BrushColor; // 0xb8(0x10)
};

// ScriptStruct ProjectD.ActionTaskData
// Size: 0x70 (Inherited: 0x00)
struct FActionTaskData {
	bool BoolValue0; // 0x00(0x01)
	bool BoolValue1; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t IntValue0; // 0x04(0x04)
	int32_t IntValue1; // 0x08(0x04)
	float FloatValue0; // 0x0c(0x04)
	float FloatValue1; // 0x10(0x04)
	struct FVector VectorValue0; // 0x14(0x0c)
	struct FVector VectorValue1; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FTransform TransformValue; // 0x30(0x30)
	struct UObject* ObjectValue0; // 0x60(0x08)
	struct UObject* ObjectValue1; // 0x68(0x08)
};

// ScriptStruct ProjectD.PDAnimGraphAimingValues
// Size: 0x0c (Inherited: 0x00)
struct FPDAnimGraphAimingValues {
	struct FRotator SpineRotation; // 0x00(0x0c)
};

// ScriptStruct ProjectD.WeaponAnimDataSet
// Size: 0x08 (Inherited: 0x00)
struct FWeaponAnimDataSet {
	struct UAnimMontage* Fire; // 0x00(0x08)
};

// ScriptStruct ProjectD.BulletWeaponAnimDataSet
// Size: 0x10 (Inherited: 0x08)
struct FBulletWeaponAnimDataSet : FWeaponAnimDataSet {
	struct UAnimMontage* Reload; // 0x08(0x08)
};

// ScriptStruct ProjectD.PDPlayerAnimDatas
// Size: 0x50b8 (Inherited: 0x08)
struct FPDPlayerAnimDatas : FTableRowBase {
	struct FPDPerCharacterAnimDatas PerCharacterAnimDatas; // 0x08(0xba0)
	struct FPDPerWeaponAnimDatas PerWeaponAnimDatas[0x14]; // 0xba8(0x30c0)
	struct FPDPerSpecificWeaponAnimDatas PerSpecificWeaponAnimDatas[0x1a]; // 0x3c68(0x1450)
};

// ScriptStruct ProjectD.PDPerSpecificWeaponAnimDatas
// Size: 0xc8 (Inherited: 0x00)
struct FPDPerSpecificWeaponAnimDatas {
	struct UAnimSequence* Stance; // 0x00(0x08)
	struct UAnimMontage* ReloadWeapon_Stand; // 0x08(0x08)
	struct UAnimMontage* ReloadWeapon_Crouch; // 0x10(0x08)
	struct UAnimMontage* QuickReloadWeapon_Stand; // 0x18(0x08)
	struct UAnimMontage* QuickReloadWeapon_Crouch; // 0x20(0x08)
	struct UAnimMontage* SlowReloadWeapon_Stand; // 0x28(0x08)
	struct UAnimMontage* SlowReloadWeapon_Crouch; // 0x30(0x08)
	struct UAnimMontage* FireWeapon_FP; // 0x38(0x08)
	struct UAnimMontage* BoltActionFP; // 0x40(0x08)
	struct UAnimSequence* Weapon_ReloadEmpty; // 0x48(0x08)
	struct UAnimSequence* Weapon_ReloadNotEmpty; // 0x50(0x08)
	struct UAnimSequence* Weapon_FireEmpty; // 0x58(0x08)
	struct UAnimSequence* Weapon_FireNotEmpty; // 0x60(0x08)
	struct UAnimSequence* Weapon_BoltAction; // 0x68(0x08)
	struct UAnimSequence* Weapon_ReloadEmptyEnd; // 0x70(0x08)
	struct UAnimSequence* Weapon_Idle; // 0x78(0x08)
	struct UAnimSequence* Weapon_QuickReloadEmpty; // 0x80(0x08)
	struct UAnimSequence* Weapon_QuickReloadEmptyEnd; // 0x88(0x08)
	struct UAnimSequence* Weapon_Slow_Reload_Empty; // 0x90(0x08)
	struct UAnimSequence* Weapon_Slow_Reload_EmptyEnd; // 0x98(0x08)
	struct UAnimSequence* Weapon_Slow_Reload_NotEmpty; // 0xa0(0x08)
	float ADSAimYaw; // 0xa8(0x04)
	float ADSPlusAimPitch_Stn; // 0xac(0x04)
	float ADSPlusAimPitch_Cro; // 0xb0(0x04)
	float ADSPlusAimPitch_CroWalk; // 0xb4(0x04)
	float ADSPlusAimPitch_Stn_Lean; // 0xb8(0x04)
	float ADSPlusAimPitch_Cro_Lean; // 0xbc(0x04)
	float ADSPlusAimPitch_CroWalk_Lean; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// ScriptStruct ProjectD.PDPerWeaponAnimDatas
// Size: 0x270 (Inherited: 0x00)
struct FPDPerWeaponAnimDatas {
	struct FPDPWUsingInABPAnimDatas UsingInABPAnimDatas; // 0x00(0x128)
	struct FPDLandActionAnimDatas LandAnimDatas; // 0x128(0x08)
	struct FPDMeleeActionAnimDatas MeleeActionAnimDatas; // 0x130(0x28)
	struct FPDWeaponHandlingAnimDatas WeaponHandlingAnimDatas; // 0x158(0xd0)
	struct FPDPWParkourAnimDatas ParkourDatas; // 0x228(0x48)
};

// ScriptStruct ProjectD.PDPWParkourAnimDatas
// Size: 0x48 (Inherited: 0x00)
struct FPDPWParkourAnimDatas {
	struct UAnimMontage* Roll_F; // 0x00(0x08)
	struct UAnimMontage* Roll_F02; // 0x08(0x08)
	struct UAnimMontage* Roll_F03; // 0x10(0x08)
	struct UAnimMontage* Roll_F04; // 0x18(0x08)
	struct UAnimMontage* Roll_B; // 0x20(0x08)
	struct UAnimMontage* Roll_L; // 0x28(0x08)
	struct UAnimMontage* Roll_R; // 0x30(0x08)
	struct UAnimMontage* Jump_FP; // 0x38(0x08)
	struct UAnimMontage* Land_FP; // 0x40(0x08)
};

// ScriptStruct ProjectD.PDWeaponHandlingAnimDatas
// Size: 0xd0 (Inherited: 0x00)
struct FPDWeaponHandlingAnimDatas {
	struct UAnimMontage* Stand_FireWeapon; // 0x00(0x08)
	struct UAnimMontage* Crouch_FireWeapon; // 0x08(0x08)
	struct UAnimMontage* Stand_Fire_HipFire; // 0x10(0x08)
	struct UAnimMontage* Crouch_Fire_HipFire; // 0x18(0x08)
	struct UAnimMontage* Stand_FireWeapon_FP; // 0x20(0x08)
	struct UAnimMontage* Crouch_FireWeapon_FP; // 0x28(0x08)
	struct UAnimMontage* Crouch_Walk_Fire_HipFire; // 0x30(0x08)
	struct UAnimMontage* Crouch_Walk_Fire_ADS; // 0x38(0x08)
	struct UBlendSpace* Stand_FireRecoil_HipFire; // 0x40(0x08)
	struct UBlendSpace* Crouch_FireRecoil_HipFire; // 0x48(0x08)
	struct UBlendSpace* Stand_FireRecoil_ADS; // 0x50(0x08)
	struct UBlendSpace* Crouch_FireRecoil_ADS; // 0x58(0x08)
	struct UBlendSpace* Stand_FireRecoil_ADS_FP; // 0x60(0x08)
	struct UBlendSpace* Crouch_FireRecoil_ADS_FP; // 0x68(0x08)
	struct UBlendSpace* Crouch_Walk_FireRecoil_HipFire; // 0x70(0x08)
	struct UPDFireRecoilLevelData* FireRecoilLeveldata; // 0x78(0x08)
	struct UPDFireRecoilLevelData* FireRecoilLeveldata_FP; // 0x80(0x08)
	struct UAnimMontage* ReloadWeapon_Stand; // 0x88(0x08)
	struct UAnimMontage* ReloadWeapon_Crouch; // 0x90(0x08)
	struct UAnimMontage* ReloadWeapon_Groggy; // 0x98(0x08)
	struct UAnimMontage* HolsterWeapon; // 0xa0(0x08)
	struct UAnimMontage* DrawWeapon; // 0xa8(0x08)
	struct UAnimMontage* DrawWeapon_FP; // 0xb0(0x08)
	struct UAnimMontage* BoltAction; // 0xb8(0x08)
	struct UAnimMontage* BoltAction_Crouch; // 0xc0(0x08)
	struct UAnimMontage* BoltAction_Groggy; // 0xc8(0x08)
};

// ScriptStruct ProjectD.PDMeleeActionAnimDatas
// Size: 0x28 (Inherited: 0x00)
struct FPDMeleeActionAnimDatas {
	struct UAnimMontage* Melee_Attack_FullBody_RootMotion; // 0x00(0x08)
	struct UAnimMontage* Melee_Attack_DefAtt; // 0x08(0x08)
	struct UAnimMontage* Melee_Attack_LBTAtt; // 0x10(0x08)
	struct UAnimMontage* Melee_Attack_RBTAtt; // 0x18(0x08)
	struct UAnimMontage* Melee_Attack_FallAtt; // 0x20(0x08)
};

// ScriptStruct ProjectD.PDLandActionAnimDatas
// Size: 0x08 (Inherited: 0x00)
struct FPDLandActionAnimDatas {
	struct UAnimMontage* SoftLand; // 0x00(0x08)
};

// ScriptStruct ProjectD.PDPWUsingInABPAnimDatas
// Size: 0x128 (Inherited: 0x00)
struct FPDPWUsingInABPAnimDatas {
	struct UAnimSequence* Loco_Stand_Idle; // 0x00(0x08)
	struct UAnimSequence* Loco_Crouch_Idle; // 0x08(0x08)
	struct UAnimSequence* Loco_Stand_HipFireIdle; // 0x10(0x08)
	struct UAnimSequence* Loco_Crouch_HipFireIdle; // 0x18(0x08)
	struct UAnimSequence* Loco_Stand_ADSIdle; // 0x20(0x08)
	struct UAnimSequence* Loco_Crouch_ADSIdle; // 0x28(0x08)
	struct UAnimSequence* Loco_Stand_Fall; // 0x30(0x08)
	struct UAnimSequence* Loco_Crouch_Fall; // 0x38(0x08)
	struct UAnimSequence* StandToCrouch; // 0x40(0x08)
	struct UAnimSequence* CrouchToStand; // 0x48(0x08)
	struct UAnimSequence* StandToCrouch_ADS; // 0x50(0x08)
	struct UAnimSequence* CrouchToStand_ADS; // 0x58(0x08)
	struct UAnimSequence* Loco_Crouch_Walk_HipFireIdle; // 0x60(0x08)
	struct UBlendSpace* Loco_Stand_Run; // 0x68(0x08)
	struct UBlendSpace* Loco_Crouch_Run; // 0x70(0x08)
	struct UBlendSpace* Loco_Stand_Run_ADS; // 0x78(0x08)
	struct UBlendSpace* Loco_Crouch_Run_ADS; // 0x80(0x08)
	struct UBlendSpace* Loco_Stand_RunStart; // 0x88(0x08)
	struct UAnimSequence* Loco_Stand_RunStart_L; // 0x90(0x08)
	struct UAnimSequence* Loco_Stand_RunStart_R; // 0x98(0x08)
	struct UBlendSpace* Loco_Crouch_RunStart; // 0xa0(0x08)
	struct UAnimSequence* Loco_Stand_Fall_FP; // 0xa8(0x08)
	struct UBlendSpace* Loco_Stand_Walk_FP; // 0xb0(0x08)
	struct UAnimSequence* WaitBeforePlay_Stand_FP; // 0xb8(0x08)
	struct UAnimSequence* Stance; // 0xc0(0x08)
	struct UBlendSpaceBase* AO_Lean_Stand; // 0xc8(0x08)
	struct UBlendSpaceBase* AO_Lean_Crouch; // 0xd0(0x08)
	struct UBlendSpaceBase* AO_Stand_HipFire; // 0xd8(0x08)
	struct UBlendSpaceBase* AO_Crouch_HipFire; // 0xe0(0x08)
	struct UBlendSpaceBase* AO_Stand_ADS; // 0xe8(0x08)
	struct UBlendSpaceBase* AO_Crouch_ADS; // 0xf0(0x08)
	struct UBlendSpaceBase* AO_Crouch_Walk_HipFire; // 0xf8(0x08)
	struct UAnimSequence* Stand_LeanR_ADS; // 0x100(0x08)
	struct UAnimSequence* Crouch_LeanR_ADS; // 0x108(0x08)
	struct UAnimSequence* Stand_LeanR_HF; // 0x110(0x08)
	struct UAnimSequence* Crouch_LeanR_HF; // 0x118(0x08)
	struct UAnimSequence* Crouch_LeanR_Walk_HF; // 0x120(0x08)
};

// ScriptStruct ProjectD.PDPerCharacterAnimDatas
// Size: 0xba0 (Inherited: 0x00)
struct FPDPerCharacterAnimDatas {
	struct FPDPCUsingInABPAnimDatas UsingInABPAnimDatas; // 0x00(0x60)
	struct FPDLeanAnimDatas LeanAnimData; // 0x60(0x08)
	struct FPDTurnAnimDatas TurnAnimDatas; // 0x68(0x70)
	struct FPDParkourActionAnimDatas ParkourAnimDatas; // 0xd8(0x1b0)
	struct FPDClimbActionAnimDatas ClimbActionAnimDatas; // 0x288(0x68)
	struct FPDGroggyActionAnimDatas GroggyActionAnimDatas; // 0x2f0(0x80)
	struct FPDInteractionActionAnimDatas InteractionActionAnimDatas; // 0x370(0x48)
	struct FPDItemUseActionAnimDatas ItemUseActionAnimDatas; // 0x3b8(0x30)
	struct FPDDeathAnimData DeathAnimData; // 0x3e8(0x40)
	struct FPDKnockbackAnimData KnockbackAnimData; // 0x428(0x50)
	struct FPDPerkAnimDatas PerkAnimData; // 0x478(0x20)
	struct FPDZiplineAnimData ZipLineAnimData; // 0x498(0x08)
	struct FPDSignatureAnimDatas SignatureAnimData; // 0x4a0(0x50)
	struct FPDSlideAnimDatas SlideAnimData; // 0x4f0(0x20)
	struct FPDHitReactionAnimData HitReactionAnimData; // 0x510(0x150)
	struct FPDWearJuggernautAnimData WearJuggernautAnimData[0x2]; // 0x660(0x30)
	struct FPDPerAgentAnimData PerAgentAnimData[0x9]; // 0x690(0x510)
};

// ScriptStruct ProjectD.PDPerAgentAnimData
// Size: 0x90 (Inherited: 0x00)
struct FPDPerAgentAnimData {
	struct FPDAFKAnimData AFKAnimData; // 0x00(0x58)
	struct FPDSceneDirectionAnimData SceneDirectionAnimData; // 0x58(0x30)
	struct FPDAttackAnimData AttackAnimData; // 0x88(0x08)
};

// ScriptStruct ProjectD.PDAttackAnimData
// Size: 0x08 (Inherited: 0x00)
struct FPDAttackAnimData {
	struct UAnimMontage* Execution; // 0x00(0x08)
};

// ScriptStruct ProjectD.PDSceneDirectionAnimData
// Size: 0x30 (Inherited: 0x00)
struct FPDSceneDirectionAnimData {
	struct UAnimMontage* RoundEnterSeriousAnim; // 0x00(0x08)
	struct TArray<int32_t> SeriousAnimLinkedKeyType; // 0x08(0x10)
	struct UAnimMontage* RoundEnterLightAnim; // 0x18(0x08)
	struct TArray<int32_t> LightAnimLinkedKeyType; // 0x20(0x10)
};

// ScriptStruct ProjectD.PDAFKAnimData
// Size: 0x58 (Inherited: 0x00)
struct FPDAFKAnimData {
	struct UAnimMontage* RifleStand; // 0x00(0x08)
	struct UAnimMontage* RifleCrouch; // 0x08(0x08)
	uint32_t RiflePercentTypeD; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UAnimMontage* HGStand; // 0x18(0x08)
	struct UAnimMontage* HGCrouch; // 0x20(0x08)
	struct UAnimMontage* ThrowStand; // 0x28(0x08)
	struct UAnimMontage* ThrowCrouch; // 0x30(0x08)
	struct UAnimMontage* MeleeStand; // 0x38(0x08)
	struct UAnimMontage* MeleeCrouch; // 0x40(0x08)
	struct UAnimMontage* BowStand; // 0x48(0x08)
	struct UAnimMontage* BowCrouch; // 0x50(0x08)
};

// ScriptStruct ProjectD.PDWearJuggernautAnimData
// Size: 0x18 (Inherited: 0x00)
struct FPDWearJuggernautAnimData {
	struct UAnimMontage* WearJuggernaut; // 0x00(0x08)
	struct UAnimMontage* JuggernautDash; // 0x08(0x08)
	struct UAnimMontage* JuggernautLauncher; // 0x10(0x08)
};

// ScriptStruct ProjectD.PDHitReactionAnimData
// Size: 0x150 (Inherited: 0x00)
struct FPDHitReactionAnimData {
	struct UAnimMontage* AM_BurnReactionAnim; // 0x00(0x08)
	struct UAnimMontage* AM_NormalHitAnimA; // 0x08(0x08)
	struct UAnimMontage* AM_NormalHitAnimB; // 0x10(0x08)
	struct UAnimMontage* AM_NormalHitAnimC; // 0x18(0x08)
	struct TArray<struct UAnimMontage*> FowardNormalHitAnims; // 0x20(0x10)
	struct TArray<struct UAnimMontage*> BackNormalHitAnims; // 0x30(0x10)
	struct TArray<struct UAnimMontage*> LeftNormalHitAnims; // 0x40(0x10)
	struct TArray<struct UAnimMontage*> RightNormalHitAnims; // 0x50(0x10)
	struct TArray<struct UAnimMontage*> HitHeadAnims; // 0x60(0x10)
	struct TArray<struct UAnimMontage*> BulletGrazeAnimsStand; // 0x70(0x10)
	struct TArray<struct UAnimMontage*> BulletGrazeAnimsCrouch; // 0x80(0x10)
	struct TArray<struct UAnimMontage*> BombGrazeAnimsStand; // 0x90(0x10)
	struct TArray<struct UAnimMontage*> BombGrazeAnimsCrouch; // 0xa0(0x10)
	struct UAnimMontage* AM_RunHitAnimA; // 0xb0(0x08)
	struct UAnimMontage* AM_RunHitAnimB; // 0xb8(0x08)
	struct UAnimMontage* AM_RunHitAnimC; // 0xc0(0x08)
	struct FRotator HitReactionRotation; // 0xc8(0x0c)
	float HitReactionAngleFoward; // 0xd4(0x04)
	float HitReactionAngleLeft; // 0xd8(0x04)
	float HitReactionAngleRight; // 0xdc(0x04)
	float HitReactionAngleBack; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct UCurveFloat* HitReactionRotationCurve; // 0xe8(0x08)
	float NoramlHitMotionFrequency_Local; // 0xf0(0x04)
	float NoramlHitMotionFrequency_Remote; // 0xf4(0x04)
	float RunHitMotionFrequency_Local; // 0xf8(0x04)
	float RunHitMotionFrequency_Remote; // 0xfc(0x04)
	float FirstHitTime; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct UAnimMontage* AM_Lower_Right_HitAnim; // 0x108(0x08)
	struct UAnimMontage* AM_Lower_Left_HitAnim; // 0x110(0x08)
	float HitDelay; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct UAnimMontage* AM_UpperBody_WeakCenter; // 0x120(0x08)
	struct UAnimMontage* AM_UpperBody_WeakLeft; // 0x128(0x08)
	struct UAnimMontage* AM_UpperBody_WeakRight; // 0x130(0x08)
	struct UAnimMontage* AM_UpperBody_StrongCenter; // 0x138(0x08)
	struct UAnimMontage* AM_UpperBody_StrongLeft; // 0x140(0x08)
	struct UAnimMontage* AM_UpperBody_StrongRight; // 0x148(0x08)
};

// ScriptStruct ProjectD.PDSlideAnimDatas
// Size: 0x20 (Inherited: 0x00)
struct FPDSlideAnimDatas {
	struct UAnimMontage* SlideEnter; // 0x00(0x08)
	struct UAnimMontage* SlideExitDefault; // 0x08(0x08)
	struct UAnimMontage* SlideExitRoll; // 0x10(0x08)
	struct UAnimMontage* SlideExitGroggy; // 0x18(0x08)
};

// ScriptStruct ProjectD.PDSignatureAnimDatas
// Size: 0x50 (Inherited: 0x00)
struct FPDSignatureAnimDatas {
	struct UAnimMontage* RevolverSpinning; // 0x00(0x08)
	struct UAnimMontage* DrinkBottle; // 0x08(0x08)
	struct UAnimMontage* EatHotDog; // 0x10(0x08)
	struct UAnimMontage* LickKnife; // 0x18(0x08)
	struct UAnimMontage* CoinToss; // 0x20(0x08)
	struct UAnimMontage* GlassesScan; // 0x28(0x08)
	struct UAnimMontage* LookMagnifier; // 0x30(0x08)
	struct UAnimMontage* ShootFlare; // 0x38(0x08)
	struct UAnimMontage* SprayMoney; // 0x40(0x08)
	struct UAnimMontage* Warcry; // 0x48(0x08)
};

// ScriptStruct ProjectD.PDZiplineAnimData
// Size: 0x08 (Inherited: 0x00)
struct FPDZiplineAnimData {
	struct UAnimMontage* ZiplineRide; // 0x00(0x08)
};

// ScriptStruct ProjectD.PDPerkAnimDatas
// Size: 0x20 (Inherited: 0x00)
struct FPDPerkAnimDatas {
	struct UAnimMontage* RobCoin; // 0x00(0x08)
	struct UAnimMontage* ReviveInGroggy; // 0x08(0x08)
	struct UAnimMontage* Hacking; // 0x10(0x08)
	struct UAnimMontage* Maintenance; // 0x18(0x08)
};

// ScriptStruct ProjectD.PDKnockbackAnimData
// Size: 0x50 (Inherited: 0x00)
struct FPDKnockbackAnimData {
	struct UAnimMontage* Knockback_WeakCenter; // 0x00(0x08)
	struct UAnimMontage* Knockback_WeakLeft; // 0x08(0x08)
	struct UAnimMontage* Knockback_WeakRight; // 0x10(0x08)
	struct UAnimMontage* Knockback_MidCenter; // 0x18(0x08)
	struct UAnimMontage* Knockback_MidLeft; // 0x20(0x08)
	struct UAnimMontage* Knockback_MidRight; // 0x28(0x08)
	struct UAnimMontage* Knockback_StrongCenter; // 0x30(0x08)
	struct UAnimMontage* Knockback_StrongLeft; // 0x38(0x08)
	struct UAnimMontage* Knockback_StrongRight; // 0x40(0x08)
	struct UAnimMontage* Knockback_FallingObject; // 0x48(0x08)
};

// ScriptStruct ProjectD.PDDeathAnimData
// Size: 0x40 (Inherited: 0x00)
struct FPDDeathAnimData {
	struct UAnimMontage* Death_Random; // 0x00(0x08)
	struct UAnimMontage* Death_GROGGY_Random; // 0x08(0x08)
	struct UAnimMontage* Death_Groggy_By_Soccer_Kick; // 0x10(0x08)
	struct UAnimMontage* Death_GROGGY_Fall; // 0x18(0x08)
	struct UAnimMontage* Death_CLIMB_2P; // 0x20(0x08)
	struct UAnimMontage* Death_CLIMB_4P; // 0x28(0x08)
	struct UAnimMontage* Death_Front_KnockBack; // 0x30(0x08)
	struct UAnimMontage* Death_Back_KnockBack; // 0x38(0x08)
};

// ScriptStruct ProjectD.PDItemUseActionAnimDatas
// Size: 0x30 (Inherited: 0x00)
struct FPDItemUseActionAnimDatas {
	struct UAnimMontage* Bandage; // 0x00(0x08)
	struct UAnimMontage* Painkiller; // 0x08(0x08)
	struct UAnimMontage* ArmorPlateReplaceKit; // 0x10(0x08)
	struct UAnimMontage* Bandage_CLI; // 0x18(0x08)
	struct UAnimMontage* Painkiller_CLI; // 0x20(0x08)
	struct UAnimMontage* ArmorPlateReplaceKit_CLI; // 0x28(0x08)
};

// ScriptStruct ProjectD.PDInteractionActionAnimDatas
// Size: 0x48 (Inherited: 0x00)
struct FPDInteractionActionAnimDatas {
	struct UAnimMontage* PickItem_Crouch_Left; // 0x00(0x08)
	struct UAnimMontage* PickItem_Crouch_Right; // 0x08(0x08)
	struct UAnimMontage* PickItem_Stand_Left; // 0x10(0x08)
	struct UAnimMontage* PickItem_Stand_Right; // 0x18(0x08)
	struct UAnimMontage* Door_HingeOpen; // 0x20(0x08)
	struct UAnimMontage* GroggyRescue; // 0x28(0x08)
	struct UAnimMontage* Bomb; // 0x30(0x08)
	struct UAnimMontage* Bomb_Crouch; // 0x38(0x08)
	struct UAnimMontage* Bomb_Groggy; // 0x40(0x08)
};

// ScriptStruct ProjectD.PDGroggyActionAnimDatas
// Size: 0x80 (Inherited: 0x00)
struct FPDGroggyActionAnimDatas {
	struct UAnimMontage* Enter_MeleeHit; // 0x00(0x08)
	struct UAnimMontage* Enter_Random_Hit_Head; // 0x08(0x08)
	struct UAnimMontage* Enter_Random_Hit_Chest; // 0x10(0x08)
	struct UAnimMontage* Enter_Random_Hit_Abdomen; // 0x18(0x08)
	struct UAnimMontage* Enter_Random_Hit_LeftLeg; // 0x20(0x08)
	struct UAnimMontage* Enter_Random_Hit_RightLeg; // 0x28(0x08)
	struct UAnimMontage* Exit; // 0x30(0x08)
	struct UAnimMontage* FallEnter; // 0x38(0x08)
	struct UAnimMontage* FallLand; // 0x40(0x08)
	struct UAnimMontage* Climb2PEnter; // 0x48(0x08)
	struct UAnimMontage* Climb4PEnter; // 0x50(0x08)
	struct UAnimMontage* SlideEnter; // 0x58(0x08)
	struct UAnimMontage* InertiaEnter; // 0x60(0x08)
	struct UAnimMontage* FrontKnockBackEnter; // 0x68(0x08)
	struct UAnimMontage* BackKnockBackEnter; // 0x70(0x08)
	struct UAnimMontage* BurnEnter; // 0x78(0x08)
};

// ScriptStruct ProjectD.PDClimbActionAnimDatas
// Size: 0x68 (Inherited: 0x00)
struct FPDClimbActionAnimDatas {
	struct UAnimMontage* ClimbEnter; // 0x00(0x08)
	struct UAnimMontage* ClimbLedgeGrap; // 0x08(0x08)
	struct UAnimMontage* ClimbExit; // 0x10(0x08)
	struct UAnimMontage* ClimbExit_2PJump; // 0x18(0x08)
	struct UAnimMontage* ClimbExit_4PJump; // 0x20(0x08)
	struct UAnimMontage* ClimbMove_Turn; // 0x28(0x08)
	struct UAnimMontage* ClimbMove_2P; // 0x30(0x08)
	struct UAnimMontage* ClimbMove_2PWide; // 0x38(0x08)
	struct UAnimMontage* ClimbMove_4P; // 0x40(0x08)
	struct UAnimMontage* ClimbMove_4PWide; // 0x48(0x08)
	struct UAnimMontage* ClimbJump_2P; // 0x50(0x08)
	struct UAnimMontage* ClimbJump_4P; // 0x58(0x08)
	struct UAnimMontage* ClimbLongJump_4P; // 0x60(0x08)
};

// ScriptStruct ProjectD.PDParkourActionAnimDatas
// Size: 0x1b0 (Inherited: 0x00)
struct FPDParkourActionAnimDatas {
	struct UAnimMontage* Jump; // 0x00(0x08)
	struct UAnimMontage* Jump_Sprint; // 0x08(0x08)
	struct UAnimMontage* Jump_Long01; // 0x10(0x08)
	struct UAnimMontage* Jump_Long02; // 0x18(0x08)
	struct UAnimMontage* Jump_Long03; // 0x20(0x08)
	struct UAnimMontage* Jump_Long04; // 0x28(0x08)
	struct UAnimMontage* SoftLand; // 0x30(0x08)
	struct UAnimMontage* AutoRollLand; // 0x38(0x08)
	struct UAnimMontage* HardLand; // 0x40(0x08)
	struct UAnimMontage* HardLand1; // 0x48(0x08)
	struct UAnimMontage* HardLand2; // 0x50(0x08)
	struct UAnimMontage* HardLand1_Move; // 0x58(0x08)
	struct UAnimMontage* HardLand2_Move; // 0x60(0x08)
	struct UAnimMontage* groggyland; // 0x68(0x08)
	struct UAnimMontage* DamageLand; // 0x70(0x08)
	struct UAnimMontage* Roll_F01; // 0x78(0x08)
	struct UAnimMontage* Roll_F02; // 0x80(0x08)
	struct UAnimMontage* Roll_F03; // 0x88(0x08)
	struct UAnimMontage* Roll_F04; // 0x90(0x08)
	struct UAnimMontage* Roll_B; // 0x98(0x08)
	struct UAnimMontage* Roll_L; // 0xa0(0x08)
	struct UAnimMontage* Roll_R; // 0xa8(0x08)
	struct UAnimMontage* GRO_Roll_F; // 0xb0(0x08)
	struct UAnimMontage* GRO_Roll_B; // 0xb8(0x08)
	struct UAnimMontage* GRO_Roll_L; // 0xc0(0x08)
	struct UAnimMontage* GRO_Roll_R; // 0xc8(0x08)
	struct UAnimMontage* Vault_100_Walk; // 0xd0(0x08)
	struct UAnimMontage* Vault_100_Run; // 0xd8(0x08)
	struct UAnimMontage* Vault_150_Walk; // 0xe0(0x08)
	struct UAnimMontage* Vault_150_Run; // 0xe8(0x08)
	struct UAnimMontage* Vault_200_Walk; // 0xf0(0x08)
	struct UAnimMontage* Vault_200_Run; // 0xf8(0x08)
	struct UAnimMontage* Vault_250_Walk; // 0x100(0x08)
	struct UAnimMontage* Vault_250_Run; // 0x108(0x08)
	struct UAnimMontage* Vault_300_Walk; // 0x110(0x08)
	struct UAnimMontage* Vault_300_Run; // 0x118(0x08)
	struct UAnimMontage* Climbup_51; // 0x120(0x08)
	struct UAnimMontage* Climbup_100_Walk; // 0x128(0x08)
	struct UAnimMontage* Climbup_100_Run; // 0x130(0x08)
	struct UAnimMontage* Climbup_150_Walk; // 0x138(0x08)
	struct UAnimMontage* Climbup_150_Run; // 0x140(0x08)
	struct UAnimMontage* Climbup_200_Walk; // 0x148(0x08)
	struct UAnimMontage* Climbup_200_Run; // 0x150(0x08)
	struct UAnimMontage* Climbup_250_Walk; // 0x158(0x08)
	struct UAnimMontage* Climbup_250_Run; // 0x160(0x08)
	struct UAnimMontage* Climbup_300_Walk; // 0x168(0x08)
	struct UAnimMontage* Climbup_300_Run; // 0x170(0x08)
	struct UAnimMontage* Climbup_2P_Walk; // 0x178(0x08)
	struct UAnimMontage* Climbup_2P_Run; // 0x180(0x08)
	struct UAnimMontage* ClimbupMoveStart_101; // 0x188(0x08)
	struct UAnimMontage* ClimbupMoveStart_200_301; // 0x190(0x08)
	struct UAnimMontage* LedgeGrapVault; // 0x198(0x08)
	struct UAnimMontage* LedgeGrapClimbupFull; // 0x1a0(0x08)
	struct UAnimMontage* LedgeGrapClimbupHalf; // 0x1a8(0x08)
};

// ScriptStruct ProjectD.PDTurnAnimDatas
// Size: 0x70 (Inherited: 0x00)
struct FPDTurnAnimDatas {
	struct UAnimMontage* Loco_Stand_TurnInPlaceLeft; // 0x00(0x08)
	struct UAnimMontage* Loco_Stand_TurnInPlaceRight; // 0x08(0x08)
	struct UAnimMontage* Loco_Stand_TurnInPlaceLeft_GunStance; // 0x10(0x08)
	struct UAnimMontage* Loco_Stand_TurnInPlaceRight_GunStance; // 0x18(0x08)
	struct UAnimMontage* Loco_Crouch_TurnInPlaceLeft; // 0x20(0x08)
	struct UAnimMontage* Loco_Crouch_TurnInPlaceRight; // 0x28(0x08)
	struct UAnimMontage* Loco_Crouch_TurnInPlaceLeft_GunStance; // 0x30(0x08)
	struct UAnimMontage* Loco_Crouch_TurnInPlaceRight_GunStance; // 0x38(0x08)
	struct UAnimMontage* Loco_Groggy_TurnInPlaceLeft; // 0x40(0x08)
	struct UAnimMontage* Loco_Groggy_TurnInPlaceRight; // 0x48(0x08)
	struct UAnimMontage* Stand_AlignRotation_TurnLeft; // 0x50(0x08)
	struct UAnimMontage* Stand_AlignRoatation_TurnRight; // 0x58(0x08)
	struct UAnimMontage* Crouch_AlignRoatation_TurnLeft; // 0x60(0x08)
	struct UAnimMontage* Crouch_AlignRotation_TurnRight; // 0x68(0x08)
};

// ScriptStruct ProjectD.PDLeanAnimDatas
// Size: 0x08 (Inherited: 0x00)
struct FPDLeanAnimDatas {
	struct UAnimMontage* Lean_Loop; // 0x00(0x08)
};

// ScriptStruct ProjectD.PDPCUsingInABPAnimDatas
// Size: 0x60 (Inherited: 0x00)
struct FPDPCUsingInABPAnimDatas {
	struct UBlendSpace* Loco_Climb_2P; // 0x00(0x08)
	struct UBlendSpace* Loco_Climb_4P; // 0x08(0x08)
	struct UAnimSequence* Loco_Groggy_Idle_Bare; // 0x10(0x08)
	struct UAnimSequence* Loco_Groggy_Idle_HG; // 0x18(0x08)
	struct UBlendSpace* Loco_Groggy_Run_Bare; // 0x20(0x08)
	struct UBlendSpace* Loco_Groggy_Run_HG; // 0x28(0x08)
	struct UAnimSequence* Loco_Fall_Groggy_Idle_Bare; // 0x30(0x08)
	struct UAnimSequence* Loco_Climb_Groggy_Idle_Bare; // 0x38(0x08)
	struct UBlendSpaceBase* AO_Groggy_Bare; // 0x40(0x08)
	struct UBlendSpaceBase* AO_Groggy_HG; // 0x48(0x08)
	struct UBlendSpace* Loco_Slide_Default; // 0x50(0x08)
	struct UBlendSpace* Loco_Slide_Groggy; // 0x58(0x08)
};

// ScriptStruct ProjectD.PDLobbyCharacterAnimData
// Size: 0xd8 (Inherited: 0x08)
struct FPDLobbyCharacterAnimData : FTableRowBase {
	struct FPDLobbyAnimData LobbyAnimData; // 0x08(0xd0)
};

// ScriptStruct ProjectD.PDLobbyAnimData
// Size: 0xd0 (Inherited: 0x00)
struct FPDLobbyAnimData {
	struct UAnimSequence* Lobby_Scene_Select; // 0x00(0x08)
	struct UAnimSequence* Lobby_Scene_Idle_2; // 0x08(0x08)
	int32_t Lobby_Scene_Idle_1_Select_Percent; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UAnimSequence* Lobby_Scene_Idle_3; // 0x18(0x08)
	int32_t Lobby_Scene_Idle_2_Select_Percent; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct UAnimSequence* Lobby_Scene_Matching_Start; // 0x28(0x08)
	struct UAnimSequence* Lobby_Scene_Matching_Idle; // 0x30(0x08)
	struct UAnimSequence* Lobby_Scene_Customizing; // 0x38(0x08)
	struct UAnimSequence* Lobby_Scene_Shop; // 0x40(0x08)
	struct UAnimSequence* Create_Scene_Select; // 0x48(0x08)
	struct TArray<struct FPDResultAnimSequence> Result_Scene_Win; // 0x50(0x10)
	struct TArray<struct FPDResultAnimSequence> Result_Scene_Lose; // 0x60(0x10)
	struct UAnimSequence* Lobby_Scene_Select_Hair; // 0x70(0x08)
	struct UAnimSequence* Lobby_Scene_Idle_Hair_2; // 0x78(0x08)
	struct UAnimSequence* Lobby_Scene_Idle_Hair_3; // 0x80(0x08)
	struct UAnimSequence* Lobby_Scene_Matching_Start_Hair; // 0x88(0x08)
	struct UAnimSequence* Lobby_Scene_Matching_Idle_Hair; // 0x90(0x08)
	struct UAnimSequence* Lobby_Scene_Customizing_Hair; // 0x98(0x08)
	struct UAnimSequence* Lobby_Scene_Shop_Hair; // 0xa0(0x08)
	struct UAnimSequence* Create_Scene_Select_Hair; // 0xa8(0x08)
	struct TArray<struct FPDResultHairAnimSequence> Result_Scene_Win_Hair; // 0xb0(0x10)
	struct TArray<struct FPDResultHairAnimSequence> Result_Scene_Lose_Hair; // 0xc0(0x10)
};

// ScriptStruct ProjectD.PDResultHairAnimSequence
// Size: 0x10 (Inherited: 0x00)
struct FPDResultHairAnimSequence {
	struct UAnimSequence* ActionAnimData; // 0x00(0x08)
	struct UAnimSequence* IdleAnimData; // 0x08(0x08)
};

// ScriptStruct ProjectD.PDResultAnimSequence
// Size: 0x18 (Inherited: 0x00)
struct FPDResultAnimSequence {
	struct UAnimSequence* ActionAnimData; // 0x00(0x08)
	struct UAnimSequence* IdleAnimData; // 0x08(0x08)
	int32_t EquipWeaponIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ProjectD.PDFacialAnimData
// Size: 0x3b0 (Inherited: 0x08)
struct FPDFacialAnimData : FTableRowBase {
	struct FPDIngameFacialAnimData IngameFacialAnimData[0x9]; // 0x08(0x3a8)
};

// ScriptStruct ProjectD.PDIngameFacialAnimData
// Size: 0x68 (Inherited: 0x00)
struct FPDIngameFacialAnimData {
	struct UAnimSequence* Idle; // 0x00(0x08)
	struct UAnimSequence* Crouch; // 0x08(0x08)
	struct UAnimSequence* Exhauted; // 0x10(0x08)
	struct UAnimSequence* ads; // 0x18(0x08)
	struct UAnimSequence* Groggy; // 0x20(0x08)
	struct UAnimSequence* Dead; // 0x28(0x08)
	struct UAnimSequence* Env1; // 0x30(0x08)
	struct UAnimMontage* Melee; // 0x38(0x08)
	struct UAnimMontage* Hipfire; // 0x40(0x08)
	struct UAnimMontage* ADSFire; // 0x48(0x08)
	struct UAnimMontage* Reload; // 0x50(0x08)
	struct UAnimMontage* Painful; // 0x58(0x08)
	struct UAnimMontage* Parkour; // 0x60(0x08)
};

// ScriptStruct ProjectD.PDHitReactionBSAnimData
// Size: 0x08 (Inherited: 0x00)
struct FPDHitReactionBSAnimData {
	struct UBlendSpaceBase* HitReaction_BS; // 0x00(0x08)
};

// ScriptStruct ProjectD.TakeHitInfo
// Size: 0x120 (Inherited: 0x00)
struct FTakeHitInfo {
	float ActualDamage; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UObject* DamageTypeClass; // 0x08(0x08)
	struct TWeakObjectPtr<struct APawn> PawnInstigator; // 0x10(0x08)
	struct TWeakObjectPtr<struct AActor> DamageCauser; // 0x18(0x08)
	int32_t DamageEventClassID; // 0x20(0x04)
	bool bKilled; // 0x24(0x01)
	bool bBlackOut; // 0x25(0x01)
	char EnsureReplicationByte; // 0x26(0x01)
	char pad_27[0x1]; // 0x27(0x01)
	struct FDamageEvent GeneralDamageEvent; // 0x28(0x10)
	struct FPointDamageEvent PointDamageEvent; // 0x38(0xa8)
	struct FRadialDamageEvent RadialDamageEvent; // 0xe0(0x40)
};

// ScriptStruct ProjectD.NeighborInfoArray
// Size: 0x48 (Inherited: 0x00)
struct FNeighborInfoArray {
	struct TArray<struct APDClimbNodeActor*> ClimbNodeActors; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
	struct APDClimbableActor* ClimbableActor; // 0x18(0x08)
	struct FVector BoxExtent; // 0x20(0x0c)
	struct FVector LeftLocation; // 0x2c(0x0c)
	struct FVector RightLocation; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct ProjectD.NeighborInfo
// Size: 0x40 (Inherited: 0x00)
struct FNeighborInfo {
	struct FClimbNodeInfo Self; // 0x00(0x20)
	struct TArray<struct FClimbNodeInfo> NeighborActors; // 0x20(0x10)
	struct TArray<struct FClimbNodeInfo> NeighborActorsToJump; // 0x30(0x10)
};

// ScriptStruct ProjectD.ClimbNodeInfo
// Size: 0x20 (Inherited: 0x00)
struct FClimbNodeInfo {
	bool bDataOverridden; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct APDClimbableActor* ClimbableActor; // 0x08(0x08)
	enum class EPDClimbStanceState ClimbType; // 0x10(0x01)
	enum class EPDClimbMoveType MoveType; // 0x11(0x01)
	enum class EPDClimbPointUptype ClimbUpType; // 0x12(0x01)
	char pad_13[0xd]; // 0x13(0x0d)
};

// ScriptStruct ProjectD.SafeZoneDrawing
// Size: 0x08 (Inherited: 0x00)
struct FSafeZoneDrawing {
	enum class ESafeZoneDrawStyle Style; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FColor Color; // 0x04(0x04)
};

// ScriptStruct ProjectD.HitFeedbackIcon
// Size: 0x20 (Inherited: 0x00)
struct FHitFeedbackIcon {
	struct UPaperSprite* Sprite; // 0x00(0x08)
	struct FLinearColor Color; // 0x08(0x10)
	struct FVector2D Size; // 0x18(0x08)
};

// ScriptStruct ProjectD.PDIKAnimInstanceProxy
// Size: 0xba0 (Inherited: 0xab0)
struct FPDIKAnimInstanceProxy : FIKAnimInstanceProxy {
	struct FPDHandIKData HandIKData; // 0xab0(0xa0)
	float StanceExplicitTime; // 0xb50(0x04)
	char pad_B54[0x4]; // 0xb54(0x04)
	struct UPDIKAnimInstance* IKAnimInstance; // 0xb58(0x08)
	struct UPDStateComponent* OwnerStateComponent; // 0xb60(0x08)
	struct APDPlayerCharacter* OwnerPlayerCharacter; // 0xb68(0x08)
	float AimClampedYaw; // 0xb70(0x04)
	char pad_B74[0x2c]; // 0xb74(0x2c)
};

// ScriptStruct ProjectD.PDIngameMapPos
// Size: 0x28 (Inherited: 0x00)
struct FPDIngameMapPos {
	struct FAnchors Anchors; // 0x00(0x10)
	struct FMargin Offsets; // 0x10(0x10)
	struct FVector2D Alignment; // 0x20(0x08)
};

// ScriptStruct ProjectD.LobbySceneEventData
// Size: 0x14 (Inherited: 0x00)
struct FLobbySceneEventData {
	enum class ESceneEvent TargetSceneEvent; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Duration; // 0x04(0x04)
	struct FVector CameraDeltaPos; // 0x08(0x0c)
};

// ScriptStruct ProjectD.PDActionExecutionInfo
// Size: 0x20 (Inherited: 0x00)
struct FPDActionExecutionInfo {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct ProjectD.SmoothMoveInfo
// Size: 0x108 (Inherited: 0x00)
struct FSmoothMoveInfo {
	char pad_0[0x90]; // 0x00(0x90)
	struct UPrimitiveComponent* TargetRotationComponent; // 0x90(0x08)
	struct UPrimitiveComponent* TargetLocationComponent; // 0x98(0x08)
	struct AActor* TargetRotationActor; // 0xa0(0x08)
	struct AActor* TargetLocationActor; // 0xa8(0x08)
	char pad_B0[0x38]; // 0xb0(0x38)
	struct UCurveFloat* CurrentSmoothRotationCurve; // 0xe8(0x08)
	struct UCurveFloat* CurrentSmoothLocationCurveFloat; // 0xf0(0x08)
	struct UCurveVector* CurrentSmoothLocationCurveVector; // 0xf8(0x08)
	char pad_100[0x8]; // 0x100(0x08)
};

// ScriptStruct ProjectD.PDBirdAnimData
// Size: 0x48 (Inherited: 0x08)
struct FPDBirdAnimData : FTableRowBase {
	struct TArray<struct UAnimSequence*> Idles; // 0x08(0x10)
	struct UAnimSequence* Walk; // 0x18(0x08)
	struct UAnimSequence* FlyStart; // 0x20(0x08)
	struct UAnimSequence* Fly; // 0x28(0x08)
	struct UAnimSequence* Wing; // 0x30(0x08)
	struct UAnimSequence* Landing_Loop; // 0x38(0x08)
	struct UAnimSequence* Landing_End; // 0x40(0x08)
};

// ScriptStruct ProjectD.CameraMoveInfo
// Size: 0x54 (Inherited: 0x00)
struct FCameraMoveInfo {
	float ArmLength; // 0x00(0x04)
	struct FVector SocketOffset; // 0x04(0x0c)
	struct FVector TargetOffset; // 0x10(0x0c)
	struct FRotator RelativeRotation; // 0x1c(0x0c)
	float FOV; // 0x28(0x04)
	float InterpTime; // 0x2c(0x04)
	float ReturnTime; // 0x30(0x04)
	float DelayTime; // 0x34(0x04)
	struct TWeakObjectPtr<struct UCurveFloat> BlendingCurve; // 0x38(0x08)
	struct TWeakObjectPtr<struct UCurveFloat> ReturnCurve; // 0x40(0x08)
	char pad_48[0xc]; // 0x48(0x0c)
};

// ScriptStruct ProjectD.PDFootstepInfo
// Size: 0x50 (Inherited: 0x00)
struct FPDFootstepInfo {
	struct UDecalComponent* decal; // 0x00(0x08)
	char pad_8[0x48]; // 0x08(0x48)
};

// ScriptStruct ProjectD.SkeletalMeshMergeParams
// Size: 0x48 (Inherited: 0x00)
struct FSkeletalMeshMergeParams {
	struct TArray<struct FSkelMeshMergeSectionMapping_BP> MeshSectionMappings; // 0x00(0x10)
	struct TArray<struct FSkelMeshMergeUVTransformMapping> UVTransformsPerMesh; // 0x10(0x10)
	struct TArray<struct USkeletalMesh*> MeshesToMerge; // 0x20(0x10)
	int32_t StripTopLODS; // 0x30(0x04)
	char bNeedsCpuAccess : 1; // 0x34(0x01)
	char bSkeletonBefore : 1; // 0x34(0x01)
	char pad_34_2 : 6; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct USkeleton* Skeleton; // 0x38(0x08)
	struct UPhysicsAsset* PhysicsAsset; // 0x40(0x08)
};

// ScriptStruct ProjectD.SkelMeshMergeUVTransformMapping
// Size: 0x10 (Inherited: 0x00)
struct FSkelMeshMergeUVTransformMapping {
	struct TArray<struct FSkelMeshMergeUVTransform> UVTransformsPerMesh; // 0x00(0x10)
};

// ScriptStruct ProjectD.SkelMeshMergeUVTransform
// Size: 0x10 (Inherited: 0x00)
struct FSkelMeshMergeUVTransform {
	struct TArray<struct FTransform> UVTransforms; // 0x00(0x10)
};

// ScriptStruct ProjectD.SkelMeshMergeSectionMapping_BP
// Size: 0x10 (Inherited: 0x00)
struct FSkelMeshMergeSectionMapping_BP {
	struct TArray<int32_t> SectionIDs; // 0x00(0x10)
};

// ScriptStruct ProjectD.ActiveRangeInfo
// Size: 0x24 (Inherited: 0x00)
struct FActiveRangeInfo {
	int32_t DefScore; // 0x00(0x04)
	int32_t PlayerExistWeight; // 0x04(0x04)
	int32_t PlayerNoneWeight; // 0x08(0x04)
	float Height; // 0x0c(0x04)
	float ARadius; // 0x10(0x04)
	float BRadius; // 0x14(0x04)
	struct FColor AColor; // 0x18(0x04)
	struct FColor BColor; // 0x1c(0x04)
	float Bold; // 0x20(0x04)
};

// ScriptStruct ProjectD.EventData
// Size: 0x2c (Inherited: 0x00)
struct FEventData {
	float ExecuteTime; // 0x00(0x04)
	float StartKey; // 0x04(0x04)
	float EndKey; // 0x08(0x04)
	float Duration; // 0x0c(0x04)
	float FOV; // 0x10(0x04)
	enum class ESplineMovementType SplineMoveType; // 0x14(0x04)
	struct FRotator CustomRotation; // 0x18(0x0c)
	struct FName CharacterBone; // 0x24(0x08)
};

