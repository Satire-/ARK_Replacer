
class CfgPatches
{
	class ARK_Replacer_Chedaki
	{
		units[] = {"CUP_O_INS_Soldier_AK74","CUP_O_INS_Soldier_Engineer","CUP_O_INS_Soldier","CUP_O_INS_Soldier_Ammo","CUP_O_INS_Soldier_GL","CUP_O_INS_Officer","CUP_O_INS_Medic","CUP_O_INS_Commander","CUP_O_INS_Soldier_AR","CUP_O_INS_Soldier_MG","CUP_O_INS_Soldier_AT","CUP_O_INS_Soldier_AA","CUP_O_INS_Sniper","CUP_O_INS_Soldier_Exp","CUP_O_INS_Saboteur","CUP_O_INS_Story_Lopotev","CUP_O_INS_Story_Bardak","CUP_O_INS_Crew","CUP_O_INS_Pilot","CUP_O_INS_Worker2","CUP_O_INS_Woodlander1","CUP_O_INS_Woodlander2","CUP_O_INS_Woodlander3","CUP_O_INS_Villager3","CUP_O_INS_Villager4","CUP_B_INS_Backpack_Medic","CUP_B_INS_RPG_Backpack","CUP_B_INS_Backpack_AR","CUP_B_INS_Backpack_MG","CUP_B_INS_AlicePack_Exp","CUP_B_INS_AlicePack_Mines","CUP_B_INS_AlicePack_Engineer","CUP_B_INS_AlicePack_Ammo","CUP_Creatures_Military_CHDKZ_Soldier_01","CUP_Creatures_Military_CHDKZ_Soldier_02","CUP_Creatures_Military_CHDKZ_Soldier_03","CUP_Creatures_Military_CHDKZ_Soldier_04","CUP_Creatures_Military_CHDKZ_Soldier_05","CUP_Creatures_Military_CHDKZ_Soldier_06","CUP_Creatures_Military_CHDKZ_Soldier_07","CUP_Creatures_Military_CHDKZ_Soldier_08","CUP_Creatures_Military_CHDKZ_Soldier_09","CUP_Creatures_Military_CHDKZ_Soldier_10","CUP_Creatures_Military_CHDKZ_Soldier_11","CUP_Creatures_Military_CHDKZ_Soldier_12","CUP_Creatures_Military_CHDKZ_Soldier_13","CUP_Creatures_Military_CHDKZ_Soldier_14","CUP_Creatures_Military_CHDKZ_Soldier_15","CUP_Creatures_Military_CHDKZ_Soldier_16","CUP_Creatures_Military_CHDKZ_Soldier_17","CUP_Creatures_Military_CHDKZ_Soldier_18"};
		weapons[] = {"CUP_U_O_CHDKZ_Bardak","CUP_U_O_CHDKZ_Commander","CUP_U_O_CHDKZ_Lopotev","CUP_U_O_CHDKZ_Kam_01","CUP_U_O_CHDKZ_Kam_02","CUP_U_O_CHDKZ_Kam_03","CUP_U_O_CHDKZ_Kam_04","CUP_U_O_CHDKZ_Kam_05","CUP_U_O_CHDKZ_Kam_06","CUP_U_O_CHDKZ_Kam_07","CUP_U_O_CHDKZ_Kam_08","CUP_U_O_Pilot_01","CUP_U_O_Worker_02","CUP_U_O_Woodlander_01","CUP_U_O_Woodlander_02","CUP_U_O_Woodlander_03","CUP_U_O_Villager_03","CUP_U_O_Villager_04","CUP_V_O_Ins_Carrier_Rig","CUP_V_O_Ins_Carrier_Rig_MG","CUP_V_O_Ins_Carrier_Rig_Com","CUP_V_O_Ins_Carrier_Rig_Light","CUP_H_ChDKZ_Beret","CUP_H_ChDKZ_Beanie","CUP_H_ChDKZ_Cap"};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_Creatures_Military_Chedaki"};
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase;
	class SoldierWB;
	class CUP_B_AlicePack_Bedroll;
	class CUP_B_AlicePack_Khaki;
	class CUP_B_RPGPack_Khaki;
	class CUP_B_INS_Backpack_Medic;
	class CUP_B_INS_Backpack_AR: CUP_B_AlicePack_Khaki
	{
		scope = 1;
		displayName = "Chedaki AR Pack";
		class TransportMagazines
		{
			class _xx_hlc_45Rnd_545x39_t_rpk
			{
				magazine = "hlc_45Rnd_545x39_t_rpk";
				count = 6;
			};
		};
	};
	class CUP_B_INS_AlicePack_Ammo: CUP_B_AlicePack_Bedroll
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 1;
		class TransportMagazines
		{
			class _xx_hlc_30Rnd_762x39_b_ak
			{
				magazine = "hlc_30Rnd_762x39_b_ak";
				count = 4;
			};
			class _xx_hlc_30Rnd_545x39_B_AK
			{
				magazine = "hlc_30Rnd_545x39_B_AK";
				count = 4;
			};
			class _xx_hlc_45Rnd_545x39_t_rpk
			{
				magazine = "hlc_45Rnd_545x39_t_rpk";
				count = 2;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
				count = 1;
			};
			class _xx_hlc_VOG25_AK
			{
				magazine = "hlc_VOG25_AK";
				count = 6;
			};
		};
	};
	class CUP_Creatures_Military_OPFINS_Soldier_Base;
	class CUP_Creatures_Military_CHDKZ_Soldier_01;
	class CUP_Creatures_Military_CHDKZ_Soldier_02;
	class CUP_Creatures_Military_CHDKZ_Soldier_03;
	class CUP_Creatures_Military_CHDKZ_Soldier_04;
	class CUP_Creatures_Military_CHDKZ_Soldier_05;
	class CUP_Creatures_Military_CHDKZ_Soldier_06;
	class CUP_Creatures_Military_CHDKZ_Soldier_07;
	class CUP_Creatures_Military_CHDKZ_Soldier_08;
	class CUP_Creatures_Military_CHDKZ_Soldier_09;
	class CUP_Creatures_Military_CHDKZ_Soldier_10;
	class CUP_Creatures_Military_CHDKZ_Soldier_11;
	class CUP_Creatures_Military_CHDKZ_Soldier_12;
	class CUP_Creatures_Military_CHDKZ_Soldier_13;
	class CUP_Creatures_Military_CHDKZ_Soldier_14;
	class CUP_Creatures_Military_CHDKZ_Soldier_15;
	class CUP_Creatures_Military_CHDKZ_Soldier_16;
	class CUP_Creatures_Military_CHDKZ_Soldier_17;
	class CUP_Creatures_Military_CHDKZ_Soldier_18;
	class CUP_O_INS_Soldier_AK74: CUP_Creatures_Military_CHDKZ_Soldier_04
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "Rifleman (AK-74)";
		Icon = "iconMan";
		weapons[] = {"hlc_rifle_ak74","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak74","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"ItemRadio","ItemWatch","ItemCompass","ItemMap","CUP_V_O_Ins_Carrier_Rig","CUP_H_ChDKZ_Beanie"};
		respawnLinkedItems[] = {"ItemRadio","ItemWatch","ItemCompass","ItemMap","CUP_V_O_Ins_Carrier_Rig","CUP_H_ChDKZ_Beanie"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
	};
	class CUP_O_INS_Soldier_Engineer: CUP_Creatures_Military_CHDKZ_Soldier_04
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "Engineer";
		weapons[] = {"hlc_rifle_ak74","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak74","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"ItemRadio","ItemWatch","ItemCompass","ItemMap","CUP_V_O_Ins_Carrier_Rig","CUP_H_ChDKZ_Beanie"};
		respawnLinkedItems[] = {"ItemRadio","ItemWatch","ItemCompass","ItemMap","CUP_V_O_Ins_Carrier_Rig","CUP_H_ChDKZ_Beanie"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		backpack = "CUP_B_INS_AlicePack_Engineer";
		engineer = 1;
		icon = "iconManEngineer";
		picture = "pictureRepair";
	};
	class CUP_O_INS_Soldier: CUP_Creatures_Military_CHDKZ_Soldier_04
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman";
		accuracy = 2;
		camouflage = 1.4;
		weapons[] = {"hlc_rifle_akm","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akm","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		cost = 40000;
		linkedItems[] = {"ItemRadio","ItemWatch","ItemCompass","ItemMap","CUP_V_O_Ins_Carrier_Rig","CUP_H_ChDKZ_Beanie"};
		respawnLinkedItems[] = {"ItemRadio","ItemWatch","ItemCompass","ItemMap","CUP_V_O_Ins_Carrier_Rig","CUP_H_ChDKZ_Beanie"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
	};
	class CUP_O_INS_Soldier_Ammo: CUP_Creatures_Military_CHDKZ_Soldier_07
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		displayName = "Ammo Bearer";
		accuracy = 2;
		camouflage = 1.4;
		weapons[] = {"hlc_rifle_akm","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akm","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		cost = 40000;
		linkedItems[] = {"ItemRadio","ItemWatch","ItemCompass","ItemMap","CUP_V_O_Ins_Carrier_Rig"};
		respawnLinkedItems[] = {"ItemRadio","ItemWatch","ItemCompass","ItemMap","CUP_V_O_Ins_Carrier_Rig"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		backpack = "CUP_B_INS_AlicePack_Ammo";
	};
	class CUP_O_INS_Soldier_GL: CUP_Creatures_Military_CHDKZ_Soldier_08
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "Grenadier";
		weapons[] = {"hlc_rifle_aks74_GL","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74_GL","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M"};
		cost = 50000;
		linkedItems[] = {"ItemRadio","ItemWatch","ItemCompass","ItemMap","CUP_V_O_Ins_Carrier_Rig","G_Balaclava_oli"};
		respawnLinkedItems[] = {"ItemRadio","ItemWatch","ItemCompass","ItemMap","CUP_V_O_Ins_Carrier_Rig","G_Balaclava_oli"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
	};
	class CUP_O_INS_Officer: CUP_Creatures_Military_CHDKZ_Soldier_10
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		displayName = "Officer";
		accuracy = 3.6;
		weapons[] = {"hlc_rifle_aks74","Binocular","Throw","Put","CUP_hgun_Makarov"};
		respawnWeapons[] = {"hlc_rifle_aks74","Binocular","Throw","Put","CUP_hgun_Makarov"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","SmokeShell","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","SmokeShell","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M"};
		cost = 600000;
		linkedItems[] = {"ItemRadio","ItemWatch","ItemCompass","ItemMap","CUP_V_O_Ins_Carrier_Rig_Com","CUP_H_ChDKZ_Cap","CUP_NVG_PVS7"};
		respawnLinkedItems[] = {"ItemRadio","ItemWatch","ItemCompass","ItemMap","CUP_V_O_Ins_Carrier_Rig_Com","CUP_H_ChDKZ_Cap","CUP_NVG_PVS7"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_officer_s"};
				speechPlural[] = {"veh_infantry_officer_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_officer_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_officer_p";
		icon = "iconManOfficer";
	};
	class CUP_O_INS_Medic: CUP_Creatures_Military_CHDKZ_Soldier_09
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		displayName = "Medic";
		accuracy = 3.7;
		cost = 60000;
		attendant = 1;
		backpack = "CUP_B_INS_Backpack_Medic";
		weapons[] = {"hlc_rifle_aks74u","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74u","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","SmokeShellOrange"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","SmokeShellOrange"};
		linkedItems[] = {"ItemRadio","ItemWatch","ItemCompass","ItemMap","CUP_V_O_Ins_Carrier_Rig_Light","CUP_H_ChDKZ_Cap"};
		respawnLinkedItems[] = {"ItemRadio","ItemWatch","ItemCompass","ItemMap","CUP_V_O_Ins_Carrier_Rig_Light","CUP_H_ChDKZ_Cap"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		icon = "iconManMedic";
	};
	class CUP_O_INS_Commander: CUP_Creatures_Military_CHDKZ_Soldier_02
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		displayName = "Commander";
		accuracy = 3.6;
		weapons[] = {"hlc_rifle_aks74u","CUP_hgun_Makarov","Binocular","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74u","CUP_hgun_Makarov","Binocular","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M"};
		cost = 600000;
		linkedItems[] = {"ItemGPC","ItemRadio","ItemWatch","ItemCompass","ItemMap","CUP_H_ChDKZ_Beret","CUP_NVG_PVS7"};
		respawnLinkedItems[] = {"ItemGPC","ItemRadio","ItemWatch","ItemCompass","ItemMap","CUP_H_ChDKZ_Beret","CUP_NVG_PVS7"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_officer_s"};
				speechPlural[] = {"veh_infantry_officer_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_officer_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_officer_p";
		icon = "iconManOfficer";
	};
	class CUP_O_INS_Soldier_AR: CUP_Creatures_Military_CHDKZ_Soldier_05
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		displayName = "Automatic Rifleman";
		backpack = "CUP_B_INS_Backpack_AR";
		accuracy = 3.7;
		cost = 80000;
		weapons[] = {"hlc_rifle_rpk74n","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_rpk74n","Throw","Put"};
		magazines[] = {"hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","SmokeShell","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk"};
		respawnMagazines[] = {"hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","SmokeShell","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk"};
		linkedItems[] = {"ItemRadio","ItemWatch","ItemCompass","ItemMap","CUP_V_O_Ins_Carrier_Rig","CUP_H_ChDKZ_Beanie"};
		respawnLinkedItems[] = {"ItemRadio","ItemWatch","ItemCompass","ItemMap","CUP_V_O_Ins_Carrier_Rig","CUP_H_ChDKZ_Beanie"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_MG_s"};
				speechPlural[] = {"veh_infantry_MG_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
		nameSound = "veh_infantry_MG_s";
		icon = "iconManMG";
	};
	class CUP_O_INS_Soldier_MG;
	class CUP_O_INS_Soldier_AT: CUP_Creatures_Military_CHDKZ_Soldier_04
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		displayName = "AT Specialist";
		backpack = "CUP_B_INS_RPG_Backpack";
		accuracy = 3.5;
		camouflage = 1.6;
		threat[] = {1,0.9,0.1};
		cost = 120000;
		weapons[] = {"hlc_rifle_akm","CUP_launch_RPG7V_PGO7V","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akm","CUP_launch_RPG7V_PGO7V","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","CUP_PG7VL_M"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","CUP_PG7VL_M"};
		linkedItems[] = {"ItemRadio","ItemWatch","ItemCompass","ItemMap","CUP_V_O_Ins_Carrier_Rig","CUP_H_ChDKZ_Beanie"};
		respawnLinkedItems[] = {"ItemRadio","ItemWatch","ItemCompass","ItemMap","CUP_V_O_Ins_Carrier_Rig","CUP_H_ChDKZ_Beanie"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
		icon = "iconManAT";
	};
	class CUP_O_INS_Soldier_AA: CUP_Creatures_Military_CHDKZ_Soldier_05
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		displayName = "AA Specialist";
		accuracy = 3.5;
		camouflage = 1.7;
		threat[] = {1,0.5,0.9};
		cost = 100000;
		weapons[] = {"hlc_rifle_akm","CUP_launch_9K32Strela","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akm","CUP_launch_9K32Strela","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","CUP_Strela_2_M"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","CUP_Strela_2_M"};
		linkedItems[] = {"ItemRadio","ItemWatch","ItemCompass","ItemMap","CUP_V_O_Ins_Carrier_Rig","CUP_H_ChDKZ_Beanie"};
		respawnLinkedItems[] = {"ItemRadio","ItemWatch","ItemCompass","ItemMap","CUP_V_O_Ins_Carrier_Rig","CUP_H_ChDKZ_Beanie"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
		icon = "iconManAT";
	};
	class CUP_O_INS_Sniper: CUP_Creatures_Military_CHDKZ_Soldier_08
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		displayName = "Sniper";
		accuracy = 3.9;
		camouflage = 0.5;
		threat[] = {1,0.1,0.1};
		cost = 250000;
		weapons[] = {"CUP_srifle_SVD_pso","Throw","Put","Binocular"};
		respawnWeapons[] = {"CUP_srifle_SVD_pso","Throw","Put","Binocular"};
		magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","SmokeShellOrange"};
		respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","SmokeShellOrange"};
		linkedItems[] = {"ItemRadio","ItemWatch","ItemCompass","ItemMap","CUP_V_O_Ins_Carrier_Rig","G_Balaclava_oli"};
		respawnLinkedItems[] = {"ItemRadio","ItemWatch","ItemCompass","ItemMap","CUP_V_O_Ins_Carrier_Rig","G_Balaclava_oli"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_sniper_s"};
				speechPlural[] = {"veh_infantry_sniper_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
		nameSound = "veh_infantry_sniper_s";
	};
	class CUP_O_INS_Soldier_Exp: CUP_Creatures_Military_CHDKZ_Soldier_04
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		displayName = "Sapper";
		backpack = "CUP_B_INS_AlicePack_Mines";
		camouflage = 1;
		accuracy = 3.9;
		cost = 45000;
		canDeactivateMines = 1;
		detectSkill = 80;
		weapons[] = {"hlc_rifle_akm","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akm","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"ItemRadio","ItemWatch","ItemCompass","ItemMap","CUP_V_O_Ins_Carrier_Rig","CUP_H_ChDKZ_Beanie"};
		respawnLinkedItems[] = {"ItemRadio","ItemWatch","ItemCompass","ItemMap","CUP_V_O_Ins_Carrier_Rig","CUP_H_ChDKZ_Beanie"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		icon = "iconManEngineer";
	};
	class CUP_O_INS_Story_Lopotev: CUP_O_INS_Commander
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		displayName = "Boss";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\CUP_Ins_Lopotev.p3d";
		uniformClass = "CUP_U_O_CHDKZ_Lopotev";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\ins_lopotev_co.paa"};
		accuracy = 1000;
		weapons[] = {"hlc_rifle_G36C","Binocular","Throw","Put","CUP_hgun_Makarov"};
		respawnWeapons[] = {"hlc_rifle_G36C","Binocular","Throw","Put","CUP_hgun_Makarov"};
		magazines[] = {"hlc_30rnd_556x45_EPR_G36","hlc_30rnd_556x45_EPR_G36","hlc_30rnd_556x45_EPR_G36","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M"};
		respawnMagazines[] = {"hlc_30rnd_556x45_EPR_G36","hlc_30rnd_556x45_EPR_G36","hlc_30rnd_556x45_EPR_G36","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M"};
		cost = 600000;
		linkedItems[] = {"ItemRadio","ItemWatch","ItemCompass","ItemMap","ItemGPS"};
		respawnLinkedItems[] = {"ItemRadio","ItemWatch","ItemCompass","ItemMap","ItemGPS"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_officer_s"};
				speechPlural[] = {"veh_infantry_officer_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_officer_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_officer_p";
		icon = "iconManOfficer";
	};
	class CUP_O_INS_Crew: CUP_Creatures_Military_CHDKZ_Soldier_06
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		displayName = "Crewman";
		accuracy = 3.4;
		camouflage = 1.4;
		cost = 20000;
		weapons[] = {"hlc_rifle_aks74u","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74u","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		linkedItems[] = {"ItemRadio","ItemWatch","ItemCompass","ItemMap","CUP_V_O_Ins_Carrier_Rig_Light","CUP_H_TK_TankerHelmet","CUP_NVG_PVS7"};
		respawnLinkedItems[] = {"ItemRadio","ItemWatch","ItemCompass","ItemMap","CUP_V_O_Ins_Carrier_Rig_Light","CUP_H_TK_TankerHelmet","CUP_NVG_PVS7"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
	};
	class CUP_O_INS_Pilot: CUP_Creatures_Military_CHDKZ_Soldier_12
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		displayName = "Pilot";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_pilot_s"};
				speechPlural[] = {"veh_infantry_pilot_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_pilot_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_pilot_p";
		nameSound = "veh_infantry_pilot_s";
		accuracy = 3.2;
		camouflage = 0.8;
		cost = 20000;
		weapons[] = {"hlc_rifle_aks74u","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74u","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","SmokeShellOrange","SmokeShellBlue"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","SmokeShellOrange","SmokeShellBlue"};
		uniformClass = "CUP_U_O_Pilot_01";
		linkedItems[] = {"H_Cap_headphones","ItemWatch"};
		respawnLinkedItems[] = {"H_Cap_headphones","ItemWatch"};
	};
	class CUP_O_INS_Worker2: CUP_Creatures_Military_CHDKZ_Soldier_13
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		vehicleClass = "CUP_O_Men_ChDKZ_GUER";
		editorSubcategory = "CUP_EdSubcat_Personel_Chedaki_ArmedCiv";
		displayName = "Local";
		uniformClass = "CUP_U_O_Worker_02";
		weapons[] = {"hlc_rifle_akm","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akm","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak"};
		icon = "iconMan";
		linkedItems[] = {"CUP_H_C_Beanie_02","ItemWatch","ItemMap","ItemCompass"};
		respawnlinkedItems[] = {"CUP_H_C_Beanie_02","ItemWatch","ItemMap","ItemCompass"};
	};
	class CUP_O_INS_Woodlander1: CUP_Creatures_Military_CHDKZ_Soldier_14
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		vehicleClass = "CUP_O_Men_ChDKZ_GUER";
		editorSubcategory = "CUP_EdSubcat_Personel_Chedaki_ArmedCiv";
		displayName = "Woodman";
		uniformClass = "CUP_U_O_Woodlander_01";
		weapons[] = {"hlc_rifle_akm","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akm","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak"};
		icon = "iconMan";
		linkedItems[] = {"CUP_H_C_Ushanka_01","ItemWatch","ItemMap","ItemCompass"};
		respawnlinkedItems[] = {"CUP_H_C_Ushanka_01","ItemWatch","ItemMap","ItemCompass"};
	};
	class CUP_O_INS_Woodlander2: CUP_Creatures_Military_CHDKZ_Soldier_15
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		vehicleClass = "CUP_O_Men_ChDKZ_GUER";
		editorSubcategory = "CUP_EdSubcat_Personel_Chedaki_ArmedCiv";
		displayName = "Gamekeeper";
		uniformClass = "CUP_U_O_Woodlander_02";
		weapons[] = {"CUP_srifle_CZ550","Throw","Put"};
		respawnWeapons[] = {"CUP_srifle_CZ550","Throw","Put"};
		magazines[] = {"CUP_5x_22_LR_17_HMR_M","CUP_5x_22_LR_17_HMR_M","CUP_5x_22_LR_17_HMR_M","CUP_5x_22_LR_17_HMR_M"};
		respawnMagazines[] = {"CUP_5x_22_LR_17_HMR_M","CUP_5x_22_LR_17_HMR_M","CUP_5x_22_LR_17_HMR_M","CUP_5x_22_LR_17_HMR_M"};
		icon = "iconMan";
		linkedItems[] = {"CUP_H_C_Ushanka_02","ItemWatch","ItemMap","ItemCompass"};
		respawnlinkedItems[] = {"CUP_H_C_Ushanka_02","ItemWatch","ItemMap","ItemCompass"};
	};
	class CUP_O_INS_Woodlander3: CUP_Creatures_Military_CHDKZ_Soldier_16
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		vehicleClass = "CUP_O_Men_ChDKZ_GUER";
		editorSubcategory = "CUP_EdSubcat_Personel_Chedaki_ArmedCiv";
		displayName = "Forester";
		uniformClass = "CUP_U_O_Woodlander_03";
		weapons[] = {"hlc_rifle_ak47","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak47","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak"};
		icon = "iconMan";
		linkedItems[] = {"CUP_H_C_Ushanka_03","ItemWatch","ItemMap","ItemCompass"};
		respawnlinkedItems[] = {"CUP_H_C_Ushanka_03","ItemWatch","ItemMap","ItemCompass"};
	};
	class CUP_O_INS_Villager3: CUP_Creatures_Military_CHDKZ_Soldier_17
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		vehicleClass = "CUP_O_Men_ChDKZ_GUER";
		editorSubcategory = "CUP_EdSubcat_Personel_Chedaki_ArmedCiv";
		displayName = "Farmer";
		uniformClass = "CUP_U_O_Villager_03";
		weapons[] = {"CUP_srifle_CZ550","Throw","Put"};
		respawnWeapons[] = {"CUP_srifle_CZ550","Throw","Put"};
		magazines[] = {"CUP_5x_22_LR_17_HMR_M","CUP_5x_22_LR_17_HMR_M","CUP_5x_22_LR_17_HMR_M","CUP_5x_22_LR_17_HMR_M"};
		respawnMagazines[] = {"CUP_5x_22_LR_17_HMR_M","CUP_5x_22_LR_17_HMR_M","CUP_5x_22_LR_17_HMR_M","CUP_5x_22_LR_17_HMR_M"};
		icon = "iconMan";
		linkedItems[] = {"CUP_H_C_Beret_03","ItemWatch","ItemMap","ItemCompass"};
		respawnlinkedItems[] = {"CUP_H_C_Beret_03","ItemWatch","ItemMap","ItemCompass"};
	};
	class CUP_O_INS_Villager4: CUP_Creatures_Military_CHDKZ_Soldier_18
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		vehicleClass = "CUP_O_Men_ChDKZ_GUER";
		editorSubcategory = "CUP_EdSubcat_Personel_Chedaki_ArmedCiv";
		displayName = "Villager";
		uniformClass = "CUP_U_O_Villager_04";
		weapons[] = {"CUP_srifle_CZ550","Throw","Put"};
		respawnWeapons[] = {"CUP_srifle_CZ550","Throw","Put"};
		magazines[] = {"CUP_5x_22_LR_17_HMR_M","CUP_5x_22_LR_17_HMR_M","CUP_5x_22_LR_17_HMR_M","CUP_5x_22_LR_17_HMR_M"};
		respawnMagazines[] = {"CUP_5x_22_LR_17_HMR_M","CUP_5x_22_LR_17_HMR_M","CUP_5x_22_LR_17_HMR_M","CUP_5x_22_LR_17_HMR_M"};
		icon = "iconMan";
		linkedItems[] = {"CUP_H_C_Beret_04","ItemWatch","ItemMap","ItemCompass"};
		respawnlinkedItems[] = {"CUP_H_C_Beret_04","ItemWatch","ItemMap","ItemCompass"};
	};
};
class cfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	class VestItem: InventoryItem_Base_F
	{
		type = 701;
		hiddenSelections[] = {};
		armor = "5*0";
		passThrough = 1;
		hitpointName = "HitBody";
	};
	class CUP_Vest_Ins_Camo_Base: ItemCore
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
	class CUP_V_O_Ins_Carrier_Rig: CUP_Vest_Ins_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_O_Ins_Carrier_Rig_ARM: CUP_Vest_Ins_Camo_Base
	{
		scope = 2;
		dlc = "CUP_Units";
		author = "$STR_CUP_AUTHOR_STRING";
		displayName = "Pouch Carrier Rig";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\ui\icon_v_pouch_carrier_MG_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\CUP_Ins_Vest1.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\lifcik_body_1_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\equip_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\lifcik_body_1_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\equip_co.paa"};
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\CUP_Ins_Vest1.p3d";
			containerClass = "Supply140";
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
	class CUP_V_O_Ins_Carrier_Rig_MG: CUP_Vest_Ins_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_O_Ins_Carrier_Rig_MG_ARM: CUP_Vest_Ins_Camo_Base
	{
		scope = 2;
		dlc = "CUP_Units";
		author = "$STR_CUP_AUTHOR_STRING";
		displayName = "Pouch Carrier Rig (MG)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\ui\icon_v_pouch_carrier_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\CUP_Ins_Vest2.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\smersh_body_1_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\equip_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\smersh_body_1_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\equip_co.paa"};
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\CUP_Ins_Vest2.p3d";
			containerClass = "Supply140";
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
	class CUP_V_O_Ins_Carrier_Rig_Com: CUP_Vest_Ins_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_O_Ins_Carrier_Rig_Com_ARM: CUP_Vest_Ins_Camo_Base
	{
		scope = 2;
		dlc = "CUP_Units";
		author = "$STR_CUP_AUTHOR_STRING";
		displayName = "Pouch Carrier Rig (Commander)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\ui\icon_v_pouch_carrier_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\CUP_Ins_Vest3.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\smersh_body_1_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\equip_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\smersh_body_1_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\equip_co.paa"};
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\CUP_Ins_Vest3.p3d";
			containerClass = "Supply140";
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
	class CUP_V_O_Ins_Carrier_Rig_Light: CUP_Vest_Ins_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_O_Ins_Carrier_Rig_Light_ARM: CUP_Vest_Ins_Camo_Base
	{
		scope = 2;
		dlc = "CUP_Units";
		author = "$STR_CUP_AUTHOR_STRING";
		displayName = "Pouch Carrier Rig (Light)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\ui\icon_v_pouch_carrier_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\CUP_Ins_Vest4.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\smersh_body_1_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\equip_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\smersh_body_1_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\data\equip_co.paa"};
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Chedaki\CUP_Ins_Vest4.p3d";
			containerClass = "Supply140";
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

};

