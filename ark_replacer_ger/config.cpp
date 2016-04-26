class CfgPatches
{
	class ARK_Replacer_Ger
	{
		units[] = {"CUP_B_GER_Soldier","CUP_B_GER_Medic","CUP_B_GER_Soldier_TL","CUP_B_GER_Soldier_Scout","CUP_B_Ger_Soldier_MG","CUP_B_GER_Soldier_Engineer","CUP_B_GER_Soldier_AA","CUP_B_GER_Soldier_AAA","CUP_B_GER_Soldier_AT","CUP_B_GER_Soldier_AAT","CUP_B_GER_Soldier_Sniper","CUP_B_GER_Soldier_Ammo","CUP_B_GER_Fleck_Soldier","CUP_B_GER_Fleck_Medic","CUP_B_GER_Fleck_Soldier_TL","CUP_B_GER_Fleck_Soldier_Scout","CUP_B_Ger_Fleck_Soldier_MG","CUP_B_GER_Fleck_Soldier_Engineer","CUP_B_GER_Fleck_Soldier_AA","CUP_B_GER_Fleck_Soldier_AAA","CUP_B_GER_Fleck_Soldier_AT","CUP_B_GER_Fleck_Soldier_AAT","CUP_B_GER_Fleck_Soldier_Sniper","CUP_B_GER_Fleck_Soldier_Ammo","CUP_B_Backpack_SpecOps","CUP_B_GER_Backpack_AmmoBearer","CUP_B_GER_Backpack_ATAssist","CUP_B_GER_Backpack_AAAssist","CUP_B_GER_Backpack_Engineer","CUP_B_GER_Backpack_AA","CUP_B_GER_Backpack_AT","CUP_B_GER_Backpack_Medic","CUP_B_GER_Soldier_01","CUP_B_GER_Soldier_02","CUP_B_GER_Soldier_03","CUP_B_Backpack_SpecOps_Fleck","CUP_B_GER_Backpack_AmmoBearer_Fleck","CUP_B_GER_Backpack_ATAssist_Fleck","CUP_B_GER_Backpack_AAAssist_Fleck","CUP_B_GER_Backpack_Engineer_Fleck","CUP_B_GER_Backpack_AA_Fleck","CUP_B_GER_Backpack_AT_Fleck","CUP_B_GER_Backpack_Medic_Fleck","CUP_B_GER_Fleck_Soldier_01","CUP_B_GER_Fleck_Soldier_02","CUP_B_GER_Fleck_Soldier_03"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_Creatures_Military_Germany"};
	};
};
class UniformSlotInfo;
class CfgVehicleClasses
{
	class CUP_B_Men_GER
	{
		displayName = "Men - KSK (Desert)";
	};
	class CUP_B_Men_WDL_GER
	{
		displayName = "Men - KSK (Woodland)";
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase;
	class SoldierWB;
	class CUP_B_GER_Pack_Tropentarn;
	class CUP_B_Backpack_SpecOps;
	class CUP_B_GER_Backpack_AmmoBearer;
	class CUP_B_GER_Backpack_ATAssist;
	class B_Carryall_cbr;
	class CUP_B_GER_Backpack_AAAssist;
	class CUP_B_GER_Backpack_Engineer;
	class CUP_B_GER_Backpack_AA;
	class CUP_B_GER_Backpack_AT;
	class CUP_B_GER_Medic_Tropentarn;
	class CUP_B_GER_Backpack_Medic;
	class CUP_Creatures_Military_GER_Soldier_Base;
	class CUP_B_GER_Soldier_01;
	class CUP_B_GER_Soldier_02;
	class CUP_B_GER_Soldier_03;
	class CUP_B_GER_Soldier: CUP_B_GER_Soldier_02
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "Rifleman";
		canHideBodies = 1;
		backpack = "CUP_B_Backpack_SpecOps";
		weapons[] = {"hlc_rifle_G36V","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		respawnWeapons[] = {"hlc_rifle_G36V","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		magazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_HandGrenade_M67","CUP_HandGrenade_M67","B_IR_Grenade","SmokeShellRed","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_HandGrenade_M67","CUP_HandGrenade_M67","B_IR_Grenade","SmokeShellRed","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"CUP_V_B_GER_Carrier_Vest_3","H_ShemagOpen_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"CUP_V_B_GER_Carrier_Vest_3","H_ShemagOpen_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		Items[] = {"FirstAidKit","CUP_NVG_PVS7"};
		RespawnItems[] = {"FirstAidKit","CUP_NVG_PVS7"};
		icon = "iconMan";
	};
	class CUP_B_GER_Medic: CUP_B_GER_Soldier_01
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		displayName = "Paramedic";
		icon = "iconManMedic";
		picture = "pictureHeal";
		accuracy = 3.7;
		cost = 1000000;
		attendant = 1;
		backpack = "CUP_B_GER_Backpack_Medic";
		nameSound = "veh_Medic";
		canHideBodies = 1;
		weapons[] = {"hlc_rifle_G36C","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		respawnWeapons[] = {"hlc_rifle_G36C","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		magazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","B_IR_Grenade","SmokeShellRed","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","B_IR_Grenade","SmokeShellRed","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"CUP_V_B_GER_Carrier_Rig","CUP_H_Ger_Boonie_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"CUP_V_B_GER_Carrier_Rig","CUP_H_Ger_Boonie_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		Items[] = {"FirstAidKit","CUP_NVG_PVS7"};
		RespawnItems[] = {"FirstAidKit","CUP_NVG_PVS7"};
	};
	class CUP_B_GER_Soldier_TL: CUP_B_GER_Soldier_01
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		displayName = "Team Leader";
		canHideBodies = 1;
		backpack = "CUP_B_Backpack_SpecOps";
		weapons[] = {"hlc_rifle_G36VAG36","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		respawnWeapons[] = {"hlc_rifle_G36VAG36","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		magazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShellRed","SmokeShellGreen","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShellRed","SmokeShellGreen","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"CUP_V_B_GER_Carrier_Rig","CUP_H_Ger_Boonie_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"CUP_V_B_GER_Carrier_Rig","CUP_H_Ger_Boonie_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		Items[] = {"FirstAidKit","CUP_NVG_PVS7"};
		RespawnItems[] = {"FirstAidKit","CUP_NVG_PVS7"};
		icon = "iconManLeader";
	};
	class CUP_B_GER_Soldier_Scout: CUP_B_GER_Soldier_02
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "Scout";
		canHideBodies = 1;
		backpack = "CUP_B_Backpack_SpecOps";
		weapons[] = {"CUP_arifle_G36C_camo_holo_snds","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		respawnWeapons[] = {"CUP_arifle_G36C_camo_holo_snds","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		magazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_HandGrenade_M67","CUP_HandGrenade_M67","B_IR_Grenade","SmokeShellRed","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_HandGrenade_M67","CUP_HandGrenade_M67","B_IR_Grenade","SmokeShellRed","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"CUP_V_B_GER_Carrier_Vest","H_ShemagOpen_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"CUP_V_B_GER_Carrier_Vest","H_ShemagOpen_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		Items[] = {"FirstAidKit","CUP_NVG_PVS7"};
		RespawnItems[] = {"FirstAidKit","CUP_NVG_PVS7"};
		icon = "iconManExplosive";
		picture = "pictureExplosive";
	};
	class CUP_B_GER_Soldier_MG: CUP_B_GER_Soldier_02
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "Machinegunner";
		canHideBodies = 1;
		backpack = "CUP_B_Backpack_SpecOps";
		weapons[] = {"hlc_rifle_MG36","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		respawnWeapons[] = {"hlc_rifle_MG36","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		magazines[] = {"CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_556x45_BetaCMag","CUP_HandGrenade_M67","CUP_HandGrenade_M67","B_IR_Grenade","SmokeShellRed","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_556x45_BetaCMag","CUP_HandGrenade_M67","CUP_HandGrenade_M67","B_IR_Grenade","SmokeShellRed","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"CUP_V_B_GER_Carrier_Vest_3","H_ShemagOpen_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"CUP_V_B_GER_Carrier_Vest_3","H_ShemagOpen_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		Items[] = {"FirstAidKit","CUP_NVG_PVS7"};
		RespawnItems[] = {"FirstAidKit","CUP_NVG_PVS7"};
		icon = "iconManMG";
	};
	class CUP_B_GER_Soldier_Engineer: CUP_B_GER_Soldier_02
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "Combat Engineer";
		canHideBodies = 1;
		backpack = "CUP_B_GER_Backpack_Engineer";
		weapons[] = {"hlc_rifle_G36V","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		respawnWeapons[] = {"hlc_rifle_G36V","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		magazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_HandGrenade_M67","CUP_HandGrenade_M67","B_IR_Grenade","SmokeShellRed","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_HandGrenade_M67","CUP_HandGrenade_M67","B_IR_Grenade","SmokeShellRed","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"CUP_V_B_GER_Carrier_Vest","H_ShemagOpen_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"CUP_V_B_GER_Carrier_Vest","H_ShemagOpen_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		Items[] = {"FirstAidKit","CUP_NVG_PVS7"};
		RespawnItems[] = {"FirstAidKit","CUP_NVG_PVS7"};
		icon = "iconManEngineer";
		picture = "pictureRepair";
		engineer = 1;
		canDeactivateMines = 1;
	};
	class CUP_B_GER_Soldier_AA: CUP_B_GER_Soldier_01
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		displayName = "AA Specialist (Fliegerfaust)";
		canHideBodies = 1;
		weapons[] = {"hlc_rifle_G36KV","CUP_launch_FIM92Stinger","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		respawnWeapons[] = {"hlc_rifle_G36KV","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		magazines[] = {"CUP_Stinger_M","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_HandGrenade_M67","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"CUP_Stinger_M","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_HandGrenade_M67","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"CUP_V_B_GER_Vest_2","CUP_H_Ger_Boonie_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"CUP_V_B_GER_Vest_2","CUP_H_Ger_Boonie_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		Items[] = {"FirstAidKit","CUP_NVG_PVS7"};
		RespawnItems[] = {"FirstAidKit","CUP_NVG_PVS7"};
		icon = "iconManAT";
	};
	class CUP_B_GER_Soldier_AAA: CUP_B_GER_Soldier_02
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "AA Assistant";
		canHideBodies = 1;
		backpack = "CUP_B_GER_Backpack_AAAssist";
		weapons[] = {"hlc_rifle_G36KV","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		respawnWeapons[] = {"hlc_rifle_G36KV","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		magazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_HandGrenade_M67","CUP_HandGrenade_M67","B_IR_Grenade","SmokeShellRed","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_HandGrenade_M67","CUP_HandGrenade_M67","B_IR_Grenade","SmokeShellRed","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"CUP_V_B_GER_Carrier_Vest_3","H_ShemagOpen_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"CUP_V_B_GER_Carrier_Vest_3","H_ShemagOpen_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		Items[] = {"FirstAidKit","CUP_NVG_PVS7"};
		RespawnItems[] = {"FirstAidKit","CUP_NVG_PVS7"};
		icon = "iconMan";
	};
	class CUP_B_GER_Soldier_AT: CUP_B_GER_Soldier_02
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "AT Specialist (Carl Gustav)";
		canHideBodies = 1;
		backpack = "CUP_B_GER_Backpack_AT";
		weapons[] = {"CUP_launch_MAAWS_Scope","hlc_rifle_G36KV","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		respawnWeapons[] = {"CUP_launch_MAAWS_Scope","hlc_rifle_G36KV","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		magazines[] = {"CUP_MAAWS_HEAT_M","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_HandGrenade_M67","CUP_HandGrenade_M67","B_IR_Grenade","SmokeShellRed","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"CUP_MAAWS_HEAT_M","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_HandGrenade_M67","CUP_HandGrenade_M67","B_IR_Grenade","SmokeShellRed","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"CUP_V_B_GER_Carrier_Vest","H_ShemagOpen_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"CUP_V_B_GER_Carrier_Vest","H_ShemagOpen_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		Items[] = {"FirstAidKit","CUP_NVG_PVS7"};
		RespawnItems[] = {"FirstAidKit","CUP_NVG_PVS7"};
		icon = "iconManAT";
	};
	class CUP_B_GER_Soldier_AAT: CUP_B_GER_Soldier_02
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "AT Assistant";
		canHideBodies = 1;
		backpack = "CUP_B_GER_Backpack_ATAssist";
		weapons[] = {"hlc_rifle_G36KV","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		respawnWeapons[] = {"hlc_rifle_G36KV","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		magazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_HandGrenade_M67","CUP_HandGrenade_M67","B_IR_Grenade","SmokeShellRed","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_HandGrenade_M67","CUP_HandGrenade_M67","B_IR_Grenade","SmokeShellRed","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"CUP_V_B_GER_Carrier_Vest_3","H_ShemagOpen_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"CUP_V_B_GER_Carrier_Vest_3","H_ShemagOpen_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		Items[] = {"FirstAidKit","CUP_NVG_PVS7"};
		RespawnItems[] = {"FirstAidKit","CUP_NVG_PVS7"};
		icon = "iconMan";
	};
	class CUP_B_GER_Soldier_Sniper: CUP_B_GER_Soldier_03
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "Sniper (G22)";
		canHideBodies = 1;
		weapons[] = {"CUP_srifle_G22_des_SBPMII","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		respawnWeapons[] = {"CUP_srifle_G22_des_SBPMII","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		magazines[] = {"CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_HandGrenade_M67","CUP_HandGrenade_M67","B_IR_Grenade","SmokeShellRed","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_HandGrenade_M67","CUP_HandGrenade_M67","B_IR_Grenade","SmokeShellRed","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"CUP_V_B_GER_Carrier_Vest","H_ShemagOpen_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"CUP_V_B_GER_Carrier_Vest","H_ShemagOpen_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		Items[] = {"FirstAidKit","CUP_NVG_PVS7","CUP_muzzle_snds_AWM"};
		RespawnItems[] = {"FirstAidKit","CUP_NVG_PVS7","CUP_muzzle_snds_AWM"};
		icon = "iconMan";
	};
	class CUP_B_GER_Soldier_Ammo: CUP_B_GER_Soldier_02
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "Ammo Bearer";
		canHideBodies = 1;
		backpack = "CUP_B_GER_Backpack_AmmoBearer";
		weapons[] = {"hlc_rifle_G36V","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		respawnWeapons[] = {"hlc_rifle_G36V","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		magazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_HandGrenade_M67","CUP_HandGrenade_M67","B_IR_Grenade","SmokeShellRed","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_HandGrenade_M67","CUP_HandGrenade_M67","B_IR_Grenade","SmokeShellRed","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"CUP_V_B_GER_Carrier_Vest_3","H_ShemagOpen_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"CUP_V_B_GER_Carrier_Vest_3","H_ShemagOpen_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		Items[] = {"FirstAidKit","CUP_NVG_PVS7"};
		RespawnItems[] = {"FirstAidKit","CUP_NVG_PVS7"};
		icon = "iconMan";
	};
	class CUP_B_GER_Fleck_Soldier_01: CUP_B_GER_Soldier_01
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 1;
		scopeCurator = 0;
		displayName = "Officer";
		nameSound = "veh_infantry_officer_s";
		editorSubcategory = "EdSubcat_Personnel_Camo_Woodland";
		vehicleClass = "CUP_B_Men_WDL_GER";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_Rifleman_desert.p3d";
		uniformClass = "CUP_U_B_GER_Flecktarn_1";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\fleck_tex1_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\fleck_tex2_co.paa"};
		icon = "iconManOfficer";
	};
	class CUP_B_GER_Fleck_Soldier_02: CUP_B_GER_Soldier_02
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 1;
		scopeCurator = 0;
		displayName = "Officer";
		editorSubcategory = "EdSubcat_Personnel_Camo_Woodland";
		nameSound = "veh_infantry_officer_s";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_Rifleman2_desert.p3d";
		uniformClass = "CUP_U_B_GER_Flecktarn_2";
		vehicleClass = "CUP_B_Men_WDL_GER";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\fleck_tex1_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\fleck_tex2_co.paa"};
		icon = "iconManOfficer";
	};
	class CUP_B_GER_Fleck_Soldier_03: CUP_B_GER_Soldier_03
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 1;
		scopeCurator = 0;
		displayName = "Soldier";
		editorSubcategory = "EdSubcat_Personnel_Camo_Woodland";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\CUP_USMC_Sniper.p3d";
		uniformClass = "CUP_U_B_GER_Fleck_Ghillie";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\data\ghillie_overall1_co.paa"};
		icon = "iconMan";
	};
	class CUP_B_GER_Fleck_Soldier: CUP_B_GER_Soldier
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "Rifleman";
		editorSubcategory = "EdSubcat_Personnel_Camo_Woodland";
		canHideBodies = 1;
		uniformClass = "CUP_U_B_GER_Flecktarn_2";
		vehicleClass = "CUP_B_Men_WDL_GER";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\fleck_tex1_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\fleck_tex2_co.paa"};
		backpack = "CUP_B_Backpack_SpecOps_Fleck";
		weapons[] = {"hlc_rifle_G36V","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		respawnWeapons[] = {"hlc_rifle_G36V","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		magazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_HandGrenade_M67","CUP_HandGrenade_M67","B_IR_Grenade","SmokeShellRed","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_HandGrenade_M67","CUP_HandGrenade_M67","B_IR_Grenade","SmokeShellRed","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"CUP_V_B_GER_Carrier_Vest_3","H_Shemag_olive_hs","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"CUP_V_B_GER_Carrier_Vest_3","H_Shemag_olive_hs","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		Items[] = {"FirstAidKit","CUP_NVG_PVS7"};
		RespawnItems[] = {"FirstAidKit","CUP_NVG_PVS7"};
		icon = "iconMan";
	};
	class CUP_B_GER_Fleck_Medic: CUP_B_GER_Medic
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		displayName = "Paramedic";
		editorSubcategory = "EdSubcat_Personnel_Camo_Woodland";
		icon = "iconManMedic";
		picture = "pictureHeal";
		uniformClass = "CUP_U_B_GER_Flecktarn_1";
		vehicleClass = "CUP_B_Men_WDL_GER";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\fleck_tex1_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\fleck_tex2_co.paa"};
		accuracy = 3.7;
		cost = 1000000;
		attendant = 1;
		backpack = "CUP_B_GER_Backpack_Medic_Fleck";
		nameSound = "veh_Medic";
		canHideBodies = 1;
		weapons[] = {"hlc_rifle_G36C","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		respawnWeapons[] = {"hlc_rifle_G36C","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		magazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","B_IR_Grenade","SmokeShellRed","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","B_IR_Grenade","SmokeShellRed","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"CUP_V_B_GER_Carrier_Rig","CUP_H_Ger_Boonie_Flecktarn","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"CUP_V_B_GER_Carrier_Rig","CUP_H_Ger_Boonie_Flecktarn","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		Items[] = {"FirstAidKit","CUP_NVG_PVS7"};
		RespawnItems[] = {"FirstAidKit","CUP_NVG_PVS7"};
	};
	class CUP_B_GER_Fleck_Soldier_TL: CUP_B_GER_Soldier_TL
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		displayName = "Team Leader";
		editorSubcategory = "EdSubcat_Personnel_Camo_Woodland";
		canHideBodies = 1;
		backpack = "CUP_B_Backpack_SpecOps_Fleck";
		uniformClass = "CUP_U_B_GER_Flecktarn_1";
		vehicleClass = "CUP_B_Men_WDL_GER";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\fleck_tex1_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\fleck_tex2_co.paa"};
		weapons[] = {"hlc_rifle_G36VAG36","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		respawnWeapons[] = {"hlc_rifle_G36VAG36","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		magazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShellRed","SmokeShellGreen","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShellRed","SmokeShellGreen","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"CUP_V_B_GER_Carrier_Rig","CUP_H_Ger_Boonie_Flecktarn","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"CUP_V_B_GER_Carrier_Rig","CUP_H_Ger_Boonie_Flecktarn","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		Items[] = {"FirstAidKit","CUP_NVG_PVS7"};
		RespawnItems[] = {"FirstAidKit","CUP_NVG_PVS7"};
		icon = "iconManLeader";
	};
	class CUP_B_GER_Fleck_Soldier_Scout: CUP_B_GER_Soldier_Scout
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "Scout";
		editorSubcategory = "EdSubcat_Personnel_Camo_Woodland";
		canHideBodies = 1;
		uniformClass = "CUP_U_B_GER_Flecktarn_2";
		vehicleClass = "CUP_B_Men_WDL_GER";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\fleck_tex1_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\fleck_tex2_co.paa"};
		backpack = "CUP_B_Backpack_SpecOps_Fleck";
		weapons[] = {"CUP_arifle_G36C_holo_snds","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		respawnWeapons[] = {"CUP_arifle_G36C_holo_snds","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		magazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_HandGrenade_M67","CUP_HandGrenade_M67","B_IR_Grenade","SmokeShellRed","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_HandGrenade_M67","CUP_HandGrenade_M67","B_IR_Grenade","SmokeShellRed","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"CUP_V_B_GER_Carrier_Vest","H_Shemag_olive_hs","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"CUP_V_B_GER_Carrier_Vest","H_Shemag_olive_hs","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		Items[] = {"FirstAidKit","CUP_NVG_PVS7"};
		RespawnItems[] = {"FirstAidKit","CUP_NVG_PVS7"};
		icon = "iconManExplosive";
		picture = "pictureExplosive";
	};
	class CUP_B_GER_Fleck_Soldier_MG: CUP_B_GER_Soldier_MG
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "Machinegunner";
		editorSubcategory = "EdSubcat_Personnel_Camo_Woodland";
		canHideBodies = 1;
		uniformClass = "CUP_U_B_GER_Flecktarn_2";
		vehicleClass = "CUP_B_Men_WDL_GER";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\fleck_tex1_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\fleck_tex2_co.paa"};
		backpack = "CUP_B_Backpack_SpecOps_Fleck";
		weapons[] = {"hlc_rifle_MG36","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		respawnWeapons[] = {"hlc_rifle_MG36","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		magazines[] = {"CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_556x45_BetaCMag","CUP_HandGrenade_M67","CUP_HandGrenade_M67","B_IR_Grenade","SmokeShellRed","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_556x45_BetaCMag","CUP_HandGrenade_M67","CUP_HandGrenade_M67","B_IR_Grenade","SmokeShellRed","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"CUP_V_B_GER_Carrier_Vest_3","H_Shemag_olive_hs","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"CUP_V_B_GER_Carrier_Vest_3","H_Shemag_olive_hs","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		Items[] = {"FirstAidKit","CUP_NVG_PVS7"};
		RespawnItems[] = {"FirstAidKit","CUP_NVG_PVS7"};
		icon = "iconManMG";
	};
	class CUP_B_GER_Fleck_Soldier_Engineer: CUP_B_GER_Soldier_Engineer
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "Combat Engineer";
		editorSubcategory = "EdSubcat_Personnel_Camo_Woodland";
		canHideBodies = 1;
		uniformClass = "CUP_U_B_GER_Flecktarn_2";
		vehicleClass = "CUP_B_Men_WDL_GER";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\fleck_tex1_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\fleck_tex2_co.paa"};
		backpack = "CUP_B_GER_Backpack_Engineer_Fleck";
		weapons[] = {"hlc_rifle_G36V","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		respawnWeapons[] = {"hlc_rifle_G36V","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		magazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_HandGrenade_M67","CUP_HandGrenade_M67","B_IR_Grenade","SmokeShellRed","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_HandGrenade_M67","CUP_HandGrenade_M67","B_IR_Grenade","SmokeShellRed","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"CUP_V_B_GER_Carrier_Vest","H_Shemag_olive_hs","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"CUP_V_B_GER_Carrier_Vest","H_Shemag_olive_hs","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		Items[] = {"FirstAidKit","CUP_NVG_PVS7"};
		RespawnItems[] = {"FirstAidKit","CUP_NVG_PVS7"};
		icon = "iconManEngineer";
		picture = "pictureRepair";
		engineer = 1;
		canDeactivateMines = 1;
	};
	class CUP_B_GER_Fleck_Soldier_AA: CUP_B_GER_Soldier_AA
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		displayName = "AA Specialist (Fliegerfaust)";
		canHideBodies = 1;
		editorSubcategory = "EdSubcat_Personnel_Camo_Woodland";
		uniformClass = "CUP_U_B_GER_Flecktarn_1";
		vehicleClass = "CUP_B_Men_WDL_GER";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\fleck_tex1_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\fleck_tex2_co.paa"};
		weapons[] = {"hlc_rifle_G36KV","CUP_launch_FIM92Stinger","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		respawnWeapons[] = {"hlc_rifle_G36KV","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		magazines[] = {"CUP_Stinger_M","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_HandGrenade_M67","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"CUP_Stinger_M","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_HandGrenade_M67","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"CUP_V_B_GER_Vest_2","CUP_H_Ger_Boonie_Flecktarn","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"CUP_V_B_GER_Vest_2","CUP_H_Ger_Boonie_Flecktarn","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		Items[] = {"FirstAidKit","CUP_NVG_PVS7"};
		RespawnItems[] = {"FirstAidKit","CUP_NVG_PVS7"};
		icon = "iconManAT";
	};
	class CUP_B_GER_Fleck_Soldier_AAA: CUP_B_GER_Soldier_AAA
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "AA Assistant";
		editorSubcategory = "EdSubcat_Personnel_Camo_Woodland";
		canHideBodies = 1;
		uniformClass = "CUP_U_B_GER_Flecktarn_2";
		vehicleClass = "CUP_B_Men_WDL_GER";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\fleck_tex1_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\fleck_tex2_co.paa"};
		backpack = "CUP_B_GER_Backpack_AAAssist_Fleck";
		weapons[] = {"hlc_rifle_G36V","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		respawnWeapons[] = {"hlc_rifle_G36V","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		magazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_HandGrenade_M67","CUP_HandGrenade_M67","B_IR_Grenade","SmokeShellRed","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_HandGrenade_M67","CUP_HandGrenade_M67","B_IR_Grenade","SmokeShellRed","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"CUP_V_B_GER_Carrier_Vest_3","H_Shemag_olive_hs","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"CUP_V_B_GER_Carrier_Vest_3","H_Shemag_olive_hs","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		Items[] = {"FirstAidKit","CUP_NVG_PVS7"};
		RespawnItems[] = {"FirstAidKit","CUP_NVG_PVS7"};
		icon = "iconMan";
	};
	class CUP_B_GER_Fleck_Soldier_AT: CUP_B_GER_Soldier_AT
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "AT Specialist (Carl Gustav)";
		canHideBodies = 1;
		editorSubcategory = "EdSubcat_Personnel_Camo_Woodland";
		uniformClass = "CUP_U_B_GER_Flecktarn_2";
		vehicleClass = "CUP_B_Men_WDL_GER";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\fleck_tex1_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\fleck_tex2_co.paa"};
		backpack = "CUP_B_GER_Backpack_AT_Fleck";
		weapons[] = {"CUP_launch_MAAWS_Scope","hlc_rifle_G36V","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		respawnWeapons[] = {"CUP_launch_MAAWS_Scope","hlc_rifle_G36V","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		magazines[] = {"CUP_MAAWS_HEAT_M","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_HandGrenade_M67","CUP_HandGrenade_M67","B_IR_Grenade","SmokeShellRed","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"CUP_MAAWS_HEAT_M","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_HandGrenade_M67","CUP_HandGrenade_M67","B_IR_Grenade","SmokeShellRed","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"CUP_V_B_GER_Carrier_Vest","H_Shemag_olive_hs","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"CUP_V_B_GER_Carrier_Vest","H_Shemag_olive_hs","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		Items[] = {"FirstAidKit","CUP_NVG_PVS7"};
		RespawnItems[] = {"FirstAidKit","CUP_NVG_PVS7"};
		icon = "iconManAT";
	};
	class CUP_B_GER_Fleck_Soldier_AAT: CUP_B_GER_Soldier_AAT
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "AT Assistant";
		canHideBodies = 1;
		editorSubcategory = "EdSubcat_Personnel_Camo_Woodland";
		uniformClass = "CUP_U_B_GER_Flecktarn_2";
		vehicleClass = "CUP_B_Men_WDL_GER";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\fleck_tex1_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\fleck_tex2_co.paa"};
		backpack = "CUP_B_GER_Backpack_ATAssist_Fleck";
		weapons[] = {"hlc_rifle_G36V","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		respawnWeapons[] = {"hlc_rifle_G36V","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		magazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_HandGrenade_M67","CUP_HandGrenade_M67","B_IR_Grenade","SmokeShellRed","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_HandGrenade_M67","CUP_HandGrenade_M67","B_IR_Grenade","SmokeShellRed","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"CUP_V_B_GER_Carrier_Vest_3","H_Shemag_olive_hs","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"CUP_V_B_GER_Carrier_Vest_3","H_Shemag_olive_hs","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		Items[] = {"FirstAidKit","CUP_NVG_PVS7"};
		RespawnItems[] = {"FirstAidKit","CUP_NVG_PVS7"};
		icon = "iconMan";
	};
	class CUP_B_GER_Fleck_Soldier_Sniper: CUP_B_GER_Soldier_Sniper
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "Sniper (G22)";
		vehicleClass = "CUP_B_Men_WDL_GER";
		canHideBodies = 1;
		editorSubcategory = "EdSubcat_Personnel_Camo_Woodland";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\CUP_USMC_Sniper.p3d";
		uniformClass = "CUP_U_B_GER_Fleck_Ghillie";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\data\ghillie_overall1_co.paa"};
		weapons[] = {"CUP_srifle_G22_des_SBPMII","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		respawnWeapons[] = {"CUP_srifle_G22_des_SBPMII","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		magazines[] = {"CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_HandGrenade_M67","CUP_HandGrenade_M67","B_IR_Grenade","SmokeShellRed","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_HandGrenade_M67","CUP_HandGrenade_M67","B_IR_Grenade","SmokeShellRed","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"CUP_V_B_GER_Carrier_Vest","H_Shemag_olive_hs","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"CUP_V_B_GER_Carrier_Vest","H_Shemag_olive_hs","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		Items[] = {"FirstAidKit","CUP_NVG_PVS7","CUP_muzzle_snds_AWM"};
		RespawnItems[] = {"FirstAidKit","CUP_NVG_PVS7","CUP_muzzle_snds_AWM"};
		icon = "iconMan";
	};
	class CUP_B_GER_Fleck_Soldier_Ammo: CUP_B_GER_Soldier_Ammo
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "Ammo Bearer";
		editorSubcategory = "EdSubcat_Personnel_Camo_Woodland";
		canHideBodies = 1;
		uniformClass = "CUP_U_B_GER_Flecktarn_2";
		vehicleClass = "CUP_B_Men_WDL_GER";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\fleck_tex1_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\fleck_tex2_co.paa"};
		backpack = "CUP_B_GER_Backpack_AmmoBearer_Fleck";
		weapons[] = {"hlc_rifle_G36V","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		respawnWeapons[] = {"hlc_rifle_G36V","CUP_Vector21Nite","Throw","Put","CUP_hgun_glock17_flashlight"};
		magazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_HandGrenade_M67","CUP_HandGrenade_M67","B_IR_Grenade","SmokeShellRed","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_HandGrenade_M67","CUP_HandGrenade_M67","B_IR_Grenade","SmokeShellRed","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17"};
		linkedItems[] = {"CUP_V_B_GER_Carrier_Vest_3","H_Shemag_olive_hs","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"CUP_V_B_GER_Carrier_Vest_3","H_Shemag_olive_hs","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		Items[] = {"FirstAidKit","CUP_NVG_PVS7"};
		RespawnItems[] = {"FirstAidKit","CUP_NVG_PVS7"};
		icon = "iconMan";
	};
};
class cfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	class UniformItem: InventoryItem_Base_F
	{
		type = 801;
	};
	class CUP_U_B_GER_Tropentarn_1: ItemCore
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "German Uniform (Steppentarn)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\ui\icon_u_b_german_tropen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CUP_B_GER_Soldier_01";
			containerClass = "Supply60";
			mass = 20;
		};
	};
	class CUP_U_B_GER_Tropentarn_2: ItemCore
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "German Overalls (Steppentarn)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\ui\icon_u_b_german2_tropen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CUP_B_GER_Soldier_02";
			containerClass = "Supply60";
			mass = 20;
		};
	};
	class CUP_U_B_GER_Ghillie: ItemCore
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "German Ghillie (desert)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\ui\icon_u_o_tk_ghillie_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CUP_B_GER_Soldier_03";
			containerClass = "Supply60";
			mass = 20;
		};
	};
	class CUP_U_B_GER_Flecktarn_1: ItemCore
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "German Uniform (Flecktarn)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\ui\icon_u_b_german_tropen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CUP_B_GER_Fleck_Soldier_01";
			containerClass = "Supply60";
			mass = 20;
		};
	};
	class CUP_U_B_GER_Flecktarn_2: ItemCore
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "German Overalls (Flecktarn)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\ui\icon_u_b_german2_tropen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CUP_B_GER_Fleck_Soldier_02";
			containerClass = "Supply60";
			mass = 20;
		};
	};
	class CUP_U_B_GER_Fleck_Ghillie: ItemCore
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "German Ghillie (Woodland)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\ui\icon_u_o_tk_ghillie_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CUP_B_GER_Fleck_Soldier_03";
			containerClass = "Supply60";
			mass = 20;
		};
	};
	class VestItem: InventoryItem_Base_F
	{
		type = 701;
		hiddenSelections[] = {};
		armor = "5*0";
		passThrough = 1;
		hitpointName = "HitBody";
	};
	class CUP_Vest_GER_Camo_Base: ItemCore
	{
		scope = 0;
		allowedSlots[] = {901};
		hiddenSelections[] = {"camo1","camo2"};
		class ItemInfo: VestItem
		{
			hiddenSelections[] = {"camo1","camo2"};
			armor = 0;
			passThrough = 1;
			mass = 0;
			containerClass = "Supply0";
			class HitpointsProtectionInfo
			{
				class Body
				{
					hitpointName = "HitBody";
					armor = 0;
					passThrough = 1;
				};
			};
		};
	};
	class CUP_V_B_GER_Carrier_Rig: CUP_Vest_GER_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_B_GER_Carrier_Rig_ARM: CUP_Vest_GER_Camo_Base
	{
		scope = 2;
		dlc = "CUP_Units";
		author = "$STR_CUP_AUTHOR_STRING";
		displayName = "German Pouch Harness (Holster)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\ui\icon_v_pouch_harness_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_Carrier_Rig.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\tex1_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\tex2_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\tex1_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\tex2_co.paa"};
			containerClass = "Supply160";
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_Carrier_Rig.p3d";
			mass = 80;
			class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=16;
                    PassThrough=0.30000001;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=16;
                    PassThrough=0.30000001;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=16;
                    passThrough=0.30000001;
                };
                class Body
                {
                    hitpointName="HitBody";
                    armor=16;
                    passThrough=0.30000001;
                };
            };
		};
	};
	class CUP_V_B_GER_Carrier_Rig_2: CUP_V_B_GER_Carrier_Rig
	{
		scope = 1;
	};
	class CUP_V_B_GER_Carrier_Rig_2_ARM: CUP_V_B_GER_Carrier_Rig
	{
		author = "$STR_CUP_AUTHOR_STRING";
        scope = 2;
		displayName = "German Pouch Harness";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_Carrier_Rig_2.p3d";
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\tex1_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\tex2_co.paa"};
			containerClass = "Supply160";
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_Carrier_Rig_2.p3d";
			mass = 80;
			class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=16;
                    PassThrough=0.30000001;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=16;
                    PassThrough=0.30000001;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=16;
                    passThrough=0.30000001;
                };
                class Body
                {
                    hitpointName="HitBody";
                    armor=16;
                    passThrough=0.30000001;
                };
            };
		};
	};
	class CUP_V_B_GER_Carrier_Rig_2_Brown: CUP_Vest_GER_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_B_GER_Carrier_Rig_2_Brown_ARM: CUP_Vest_GER_Camo_Base
	{
		scope = 2;
		dlc = "CUP_Units";
		author = "$STR_CUP_AUTHOR_STRING";
		displayName = "German Pouch Harness (Brown)";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_Carrier_Rig_2.p3d";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\ui\icon_v_pouch_harness_ca.paa";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\tex1_brown_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\tex2_brown_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\tex1_brown_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\tex2_brown_co.paa"};
			containerClass = "Supply160";
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_Carrier_Rig_2.p3d";
			mass = 80;
			class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=16;
                    PassThrough=0.30000001;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=16;
                    PassThrough=0.30000001;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=16;
                    passThrough=0.30000001;
                };
                class Body
                {
                    hitpointName="HitBody";
                    armor=16;
                    passThrough=0.30000001;
                };
            };
		};
	};
	class CUP_V_B_GER_Carrier_Rig_3_Brown: CUP_Vest_GER_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_B_GER_Carrier_Rig_3_Brown_ARM: CUP_Vest_GER_Camo_Base
	{
		scope = 2;
		dlc = "CUP_Units";
		author = "$STR_CUP_AUTHOR_STRING";
		displayName = "German Pouch Harness w/radio (Brown)";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_Carrier_Rig_3.p3d";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\ui\icon_v_pouch_harness_ca.paa";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\tex1_brown_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\tex2_brown_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\tex1_brown_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\tex2_brown_co.paa"};
			containerClass = "Supply160";
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_Carrier_Rig_3.p3d";
			mass = 80;
			class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=16;
                    PassThrough=0.30000001;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=16;
                    PassThrough=0.30000001;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=16;
                    passThrough=0.30000001;
                };
                class Body
                {
                    hitpointName="HitBody";
                    armor=16;
                    passThrough=0.30000001;
                };
            };
		};
	};
	class CUP_V_B_GER_Carrier_Vest: CUP_Vest_GER_Camo_Base
	{
		scope = 2;
		dlc = "CUP_Units";
		author = "$STR_CUP_AUTHOR_STRING";
		displayName = "German Carrier Vest";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\ui\icon_v_carrier_vest_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_CarrierVest.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\tex1_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\tex2_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\tex1_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\tex2_co.paa"};
			containerClass = "Supply110";
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_CarrierVest.p3d";
			armor = 0;
			passThrough = 1.0;
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CUP_V_B_GER_Carrier_Vest_2: CUP_Vest_GER_Camo_Base
	{
		scope = 2;
		dlc = "CUP_Units";
		author = "$STR_CUP_AUTHOR_STRING";
		displayName = "German Carrier Vest (Variant, no holster)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\ui\icon_v_carrier_vest_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_CarrierVest2.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\tex1_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\tex2_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\tex1_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\tex2_co.paa"};
			containerClass = "Supply100";
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_CarrierVest2.p3d";
			armor = 0;
			passThrough = 1.0;
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CUP_V_B_GER_Carrier_Vest_3: CUP_Vest_GER_Camo_Base
	{
		scope = 2;
		dlc = "CUP_Units";
		author = "$STR_CUP_AUTHOR_STRING";
		displayName = "German Carrier Vest (Variant)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\ui\icon_v_carrier_vest_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_CarrierVest3.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\tex1_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\tex2_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\tex1_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\tex2_co.paa"};
			containerClass = "Supply110";
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_CarrierVest3.p3d";
			armor = 0;
			passThrough = 1.0;
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CUP_V_B_GER_Vest_1: CUP_Vest_GER_Camo_Base
	{
		scope = 2;
		dlc = "CUP_Units";
		author = "$STR_CUP_AUTHOR_STRING";
		displayName = "German Vest (no holster)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\ui\icon_v_carrier_vest_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_vest.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\tex1_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\tex2_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\tex1_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\tex2_co.paa"};
			containerClass = "Supply50";
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_vest.p3d";
			armor = 0;
			passThrough = 1.0;
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CUP_V_B_GER_Vest_2: CUP_Vest_GER_Camo_Base
	{
		scope = 2;
		dlc = "CUP_Units";
		author = "$STR_CUP_AUTHOR_STRING";
		displayName = "German Vest (with holster)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\ui\icon_v_carrier_vest_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_vest2.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\tex1_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\tex2_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\tex1_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\tex2_co.paa"};
			containerClass = "Supply60";
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_vest2.p3d";
			armor = 0;
			passThrough = 1.0;
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
};

//};
