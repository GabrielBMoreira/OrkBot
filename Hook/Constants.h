#pragma once

namespace Address {
	const unsigned int GAME_PTR                                 = 0x0023EAA8;
	const unsigned int FUNC_STATUSMESSAGE                       = 0x00544A90; // 860
	const unsigned int FUNC_FLOATTEXT                           = 0x004E5930; // 860

	const unsigned int FUNC_RANDOMBYTE                          = 0x00541870; // 860
	const unsigned int FUNC_SENDLOOK                            = 0x00407210; // 860

	const unsigned int FUNC_RENDERGAME                          = 0x00459F30; // 860

	const unsigned int CALL_PROJECTILE                          = 0x00410860; // 860
	const unsigned int CALL_LOOKMESSAGE                         = 0x00413AFF; // 860
	const unsigned int FUNC_LOOKMESSAGE							= 0x0054AF50; // 860

	const unsigned int CALL_MESSAGEHANDLE                       = 0x00412589; // 860
	const unsigned int FUNC_MESSAGEHANDLE						= 0x0054E820; // 860
	const unsigned int CALL_PLACEOBJECT                         = 0x0041A46F; // 860
	const unsigned int FUNC_PLACEOBJECT = 0x004E2D60; // 860
	const unsigned int CALL_PLACEOBJECT2                        = 0x0040E6CA; // 860
	const unsigned int CALL_CHANGEHEALTH                        = 0x0045C906; // 860
	//const unsigned int CALL_TEXTMESSAGE                         = 0x0045DCB6;
	const unsigned int CALL_SETACTION                           = 0x0045749D; // 860

	const unsigned int CALL_PRINTNAME                           = 0x004F5823; // 860
	const unsigned int CALL_PRINTFPS                            = 0x0045A258; // updated to 860
	const unsigned int ADDR_ALWAYSFPS                           = 0x0045A194; // updated to 860
	const unsigned int SHOW_FPS                                 = 0x0063DB3C; // 860

	// ContextMenu
	const unsigned int FUNC_ADDCONTEXTMENU                      = 0x00453930;
	const unsigned int EVENT_ONCLICKCONTEXTMENU                 = 0x00450510;
	const unsigned int CALL_CONTEXTMENU_MESSAGE                 = 0x004545F5;
	// End ContextMenu

	// Memory auto generated 872
	const unsigned int PLAYER_VIPLIST                           = 0x0063DBB8; // List of players in vip list, ordered by appearance in client's Vip List Window
	const unsigned int PLAYER_VIPLIST_ONLINE                    = 0x0063FE18; // Number of online players in Vip List
	const unsigned int PLAYER_VIPLIST_SIZE                      = 0x0063FE1C; // Number of total players in Vip List
	const unsigned int PLAYER_CONDITION                         = 0x0063FE20; // Conditions that the player can have: haste, poison, etc
	const unsigned int PLAYER_FIST_PERC = 0x0063FE24;
	const unsigned int PLAYER_CLUB_PERC = 0x0063FE28;
	const unsigned int PLAYER_SWORD_PERC = 0x0063FE2C;
	const unsigned int PLAYER_AXE_PERC = 0x0063FE30;
	const unsigned int PLAYER_DISTANCE_PERC = 0x0063FE34;
	const unsigned int PLAYER_SHIELDING_PERC = 0x0063FE38;
	const unsigned int PLAYER_FISHING_PERC = 0x0063FE3C;
	const unsigned int PLAYER_FIST = 0x0063FE40;
	const unsigned int PLAYER_CLUB = 0x0063FE44;
	const unsigned int PLAYER_SWORD = 0x0063FE48;
	const unsigned int PLAYER_AXE = 0x0063FE4C;
	const unsigned int PLAYER_DISTANCE = 0x0063FE50;
	const unsigned int PLAYER_SHIELDING = 0x0063FE54;
	const unsigned int PLAYER_FISHING = 0x0063FE58;
	const unsigned int PLAYER_MOUSEOVER_ID = 0x0063FE5C;
	const unsigned int PLAYER_FOLLOW_ID = 0x0063FE60;
	const unsigned int PLAYER_ATTACK_ID = 0x0063FE64;
	const unsigned int PLAYER_CAP = 0x0063FE68;
	const unsigned int PLAYER_STAMINA = 0x0063FE6C;
	const unsigned int PLAYER_SOULPOINT = 0x0063FE70;
	const unsigned int PLAYER_MANA_MAX = 0x0063FE74;
	const unsigned int PLAYER_MANA = 0x0063FE78;
	const unsigned int PLAYER_MAGIC_LEVEL_PERC = 0x0063FE7C;
	const unsigned int PLAYER_LEVEL_PERC = 0x0063FE80;
	const unsigned int PLAYER_MAGIC_LEVEL = 0x0063FE84;

	const unsigned int PLAYER_LEVEL                             = 0x0063FE88; // 860
	const unsigned int PLAYER_EXPERIENCE                        = 0x0063FE8C; // 4 bytes, LITTLE ENDIAN
	const unsigned int PLAYER_HEALTH_MAX                        = 0x0063FE90; // 2 bytes, LITTLE
	const unsigned int PLAYER_HEALTH                            = 0x0063FE94; // 2 bytes
	const unsigned int PLAYER_ID                                = 0x0063FE98; // 2 bytes LITTLE
	const unsigned int PLAYER_GOTO_Z                            = 0x0063FED4; // 1 byte
	const unsigned int PLAYER_GOTO_Y                            = 0x0063FED8; // 2 bytes
	const unsigned int PLAYER_GOTO_X                            = 0x0063FEDC; //
	const unsigned int PLAYER_GOTO_DIRECTION                    = 0x0063FEE0; //
	const unsigned int PLAYER_MOVING_Y                          = 0x0063FEE4; //
	const unsigned int PLAYER_MOVING_X                          = 0x0063FEE8; // ??
	const unsigned int BATTLELIST_BEGIN                         = 0x0063FEF8; // 860
	const unsigned int BATTLELIST_END                           = 0x0064A304; // 860
	const unsigned int PLAYER_LOOK_DIRECTION					= 0x0063FF48; // 860

	const unsigned int PLAYER_HEAD_SLOT                         = 0x0067A0C8;
	const unsigned int PLAYER_NECK_SLOT                         = 0x0067A0D4;
	const unsigned int PLAYER_CONTAINER_SLOT                    = 0x0067A0E0;
	const unsigned int PLAYER_BODY_SLOT                         = 0x0067A0EC;
	const unsigned int PLAYER_LEFT_HAND_SLOT                    = 0x0067A0F8;
	const unsigned int PLAYER_LEFT_HAND_COUNT                   = 0x0067A0FC;
	const unsigned int PLAYER_RIGHT_HAND_SLOT                   = 0x0067A104;
	const unsigned int PLAYER_RIGHT_HAND_COUNT                  = 0x0067A108;
	const unsigned int PLAYER_LEGS_SLOT                         = 0x0067A110;
	const unsigned int PLAYER_FEET_SLOT                         = 0x0067A11C;
	const unsigned int PLAYER_RING_SLOT                         = 0x0067A128;
	const unsigned int PLAYER_ARROW_SLOT                        = 0x0067A134;
	const unsigned int PLAYER_ARROW_COUNT                       = 0x0067A138;
	const unsigned int CONTAINER_BEGIN                          = 0x0067A140;
	const unsigned int CONTAINER_END                            = 0x0067C000;

	const unsigned int ACCOUNT_PASSWORD                         = 0x007CA248;
	const unsigned int ACCOUNT_NAME                             = 0x007CA268;
	const unsigned int CONNECTION_STATUS                        = 0x0079CF28;
	const unsigned int RIGHT_CLICK_CREATURE_ID                  = 0x007CA290;
	const unsigned int RIGHT_CLICK_Z                            = 0x007CA294;
	const unsigned int RIGHT_CLICK_Y                            = 0x007CA298;
	const unsigned int RIGHT_CLICK_X                            = 0x007CA29C;
	const unsigned int RIGHT_CLICK_STACK                        = 0x007CA2A0;
	const unsigned int RIGHT_CLICK_Z2                           = 0x007CA2A4;
	const unsigned int RIGHT_CLICK_Y2                           = 0x007CA2A8;
	const unsigned int RIGHT_CLICK_X2                           = 0x007CA2AC;
	const unsigned int RIGHT_CLICK_STACK2                       = 0x007CA2B0;
	const unsigned int LEFT_CLICK_Z                             = 0x007CA2C0;
	const unsigned int LEFT_CLICK_Y                             = 0x007CA2C4;
	const unsigned int LEFT_CLICK_X                             = 0x007CA2C8;
	const unsigned int LEFT_CLICK_STACK                         = 0x007CA2CC;
	const unsigned int LEFT_CLICK_COORD_Y                       = 0x007CA2D0;
	const unsigned int LEFT_CLICK_COORD_X                       = 0x007CA2D4;
	const unsigned int WINDOW_HEIGHT                            = 0x007CA2E0;
	const unsigned int WINDOW_WIDTH                             = 0x007CA2E4;
	const unsigned int ACTIONSTATE                              = 0x007CA2EC;
	const unsigned int LEFT_CLICK_ITEM_ID                       = 0x007CA32C;
	const unsigned int LEFT_CLICK_ITEM_COUNT                    = 0x007CA330;
	const unsigned int RIGHT_CLICK_ITEM_ID                      = 0x007CA338;
	const unsigned int RIGHT_CLICK_ITEM_COUNT                   = 0x007CA33C;
	// auto generated end

	const unsigned int PLAYER_Z                                 = 0x0067CA30;
	const unsigned int PLAYER_Y                                 = 0x0067CA34;
	const unsigned int PLAYER_X                                 = 0x0067CA38;

	const unsigned int XRAY                                     = 0x004F247B;
	const unsigned int LEVELSPY1                                = 0x004F433A;
	const unsigned int LEVELSPY2                                = 0x004F443F;
	const unsigned int LEVELSPY3                                = 0x004F44C0;
	const unsigned int LEVELSPYPTR                              = 0x0067968C;
	const unsigned int GAMESCREENPTR                            = 0x0067C9F8;

	const unsigned int SEND_ADR                                 = 0x005B9614;
	const unsigned int SOCKET_PTR                               = 0x007C6CC0;
	const unsigned int PACKET_PTR                               = SOCKET_PTR + 0x1C;
	const unsigned int XTEA_KEY                                 = SOCKET_PTR + 0x2C;
	const unsigned int ISONLINE                                 = CONNECTION_STATUS;
	const unsigned int LOOKITEMID                               = RIGHT_CLICK_ITEM_ID;
};


namespace HardcoreBytes {
	const BYTE LevelSpyOriginal[6] = {0x89, 0x86, 0xC0, 0x5B, 0x00, 0x00};
	const BYTE XRayOff[2] = {0x75, 0x48};
	const BYTE XRayOn[2] = {0x75, 0x0A};
	const BYTE FullLightOn[4] = {0x90, 0x90, 0xBB, 0xFF};
	const BYTE FullLightOff[4] = {0x7E, 0x05, 0xBB, 0x80};
}

enum Items {
	StrongHealthPotion = 236,
	StrongManaPotion = 237,
	GreatManaPotion = 238,
	GreatHealthPotion = 239,
	HealthPotion = 266,
	ManaPotion = 268,
	IntenseHealingRune = 3152,
	SuddenDeathRune = 3155,
	UltimateHealingRune = 3160,
	MagicwallRune = 3180,
	HeavyMagicMissleRune = 3198,
	ExplosionRune = 3200,
	GreatSpiritPotion = 7642,
	UltimateHealthPotion = 7643,
};

enum Direction {
	North,
	East,
	South,
	West
};

enum PlayerStates {
	Poisoned = 1,
	Burning = 2,
	Electrified = 4,
	Drunk = 8,
	MagicShield = 16,
	Slowed = 32,
	Haste = 64,
	LogoutBlock = 128,
	Drowning = 256,
	Freezing = 512,
	Dazzled = 1024,
	Cursed = 2048
};

enum EquipSlot {
	Head = 1,
	Neck,
	Backpack,
	Body,
	LeftHand,
	RightHand,
	Legs,
	Feet,
	Ring,
	Ammo
};