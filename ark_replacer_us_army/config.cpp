class CfgPatches
{
	class Ark_Replacer_US_Army
	{
		units[] = {"CUP_B_US_Soldier","CUP_B_US_Soldier_UAV","CUP_B_US_Soldier_Backpack","CUP_B_US_Soldier_AMG","CUP_B_US_Soldier_AAR","CUP_B_US_Soldier_AHAT","CUP_B_US_Soldier_AAT","CUP_B_US_Soldier_Light","CUP_B_US_Soldier_GL","CUP_B_US_Officer","CUP_B_US_Soldier_SL","CUP_B_US_Soldier_TL","CUP_B_US_Soldier_LAT","CUP_B_US_Soldier_AT","CUP_B_US_Soldier_HAT","CUP_B_US_Soldier_AA","CUP_B_US_Medic","CUP_B_US_Soldier_AR","CUP_B_US_Soldier_MG","CUP_B_US_Spotter","CUP_B_US_Sniper","CUP_B_US_Sniper_M110_TWS","CUP_B_US_Sniper_M107","CUP_B_US_Soldier_Marksman","CUP_B_US_Soldier_Engineer_Sapper","CUP_B_US_Soldier_Engineer_EOD","CUP_B_US_Soldier_Engineer","CUP_B_US_Crew","CUP_B_US_Pilot","CUP_B_US_Pilot_Light","CUP_B_US_SpecOps","CUP_B_US_SpecOps_UAV","CUP_B_US_SpecOps_TL","CUP_B_US_SpecOps_Medic","CUP_B_US_SpecOps_Assault","CUP_B_US_SpecOps_SD","CUP_B_US_SpecOps_MG","CUP_B_US_SpecOps_AR","CUP_B_US_SpecOps_Night","CUP_B_US_SpecOps_M","CUP_B_US_SpecOps_M14","CUP_B_US_SpecOps_JTAC","CUP_B_USArmy_Medic","CUP_B_USArmy_AR","CUP_B_USArmy_MG","CUP_B_USArmy_MG_SpecOp","CUP_B_USArmy_AR_SpecOp","CUP_B_USArmy_MinePack","CUP_B_USArmy_EOD","CUP_B_USArmy_Engineer","CUP_B_AssaultPack_ACU_Ammo","CUP_B_AssaultPack_ACU_AmmoSAW","CUP_B_AssaultPack_ACU_AT","CUP_B_AssaultPack_ACU_AT_1","CUP_B_AssaultPack_ACU_Explosives","CUP_B_AssaultPack_ACU_MG","CUP_B_AssaultPack_Coyote_Ammo","CUP_B_AssaultPack_Coyote_Specops","CUP_B_USPack_Coyote_AmmoMG","CUP_B_USPack_Coyote_AT","CUP_B_USPack_Coyote_Specops","CUP_B_USPack_Coyote_SL","CUP_B_USArmy_Soldier_01","CUP_B_USArmy_Soldier_02","CUP_B_USArmy_Soldier_03","CUP_B_USArmy_Soldier_04","CUP_B_USArmy_Soldier_05","CUP_B_USArmy_Soldier_06"};
		weapons[] = {"CUP_U_B_USArmy_Base","CUP_U_B_USArmy_TwoKnee","CUP_U_B_USArmy_UBACS","CUP_U_B_USArmy_Soft","CUP_U_B_USArmy_Ghillie","CUP_U_B_USArmy_PilotOverall","CUP_V_B_IOTV_SL","CUP_V_B_IOTV_Medic","CUP_V_B_IOTV_Rifleman","CUP_V_B_IOTV_AT","CUP_V_B_IOTV_MG","CUP_V_B_IOTV_saw","CUP_V_B_IOTV_tl","CUP_V_B_IOTV_gl","CUP_V_B_USArmy_PilotVest","CUP_V_B_Interceptor_Rifleman","CUP_H_USA_Cap","CUP_H_USArmy_HelmetMICH","CUP_H_USArmy_HelmetMICH_ESS","CUP_H_USArmy_HelmetMICH_earpro","CUP_H_USArmy_HelmetMICH_earpro_ess","CUP_H_USArmy_HelmetMICH_headset","CUP_H_USArmy_HelmetMICH_headset_ess","CUP_H_USArmy_HelmetMICH_wdl","CUP_H_USArmy_Helmet_ECH1_Sand","CUP_H_USArmy_Helmet_ECH2_Sand","CUP_H_USArmy_Helmet_ECH1_Black","CUP_H_USArmy_Helmet_ECH2_Black","CUP_H_USArmy_Helmet_ECH1_Green","CUP_H_USArmy_Helmet_ECH2_GREEN","CUP_H_USArmy_Helmet_Pro","CUP_H_USArmy_Helmet_Pro_gog","CUP_H_USArmy_Helmet_M1_Olive","CUP_H_USArmy_Helmet_M1_Vine","CUP_H_USArmy_Helmet_M1_m81","CUP_H_USArmy_Helmet_M1_btp"};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_Creatures_Military_USArmy"};
	};
};
class UniformSlotInfo;
class CfgVehicles
{
	class Man;
	class CAManBase;
	class SoldierWB;
	class CUP_B_MedicPack_ACU;
	class CUP_B_USPack_Coyote;
	class CUP_B_USArmy_Medic;
	class CUP_B_USArmy_AR;
	class CUP_B_USArmy_MG;
	class CUP_B_USArmy_MG_SpecOp;
	class CUP_B_USArmy_AR_SpecOp;
	class CUP_B_USArmy_MinePack;
	class CUP_B_USArmy_EOD;
	class CUP_B_USArmy_Engineer;
	class CUP_B_AssaultPack_ACU;
	class CUP_B_AssaultPack_ACU_Ammo: CUP_B_AssaultPack_ACU
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 1;
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 4;
			};
			class _xx_CUP_1Rnd_HEDP_M203
			{
				magazine = "CUP_1Rnd_HEDP_M203";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 1;
			};
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 1;
			};
		};
	};
	class CUP_B_AssaultPack_ACU_AmmoSAW;
	class CUP_B_AssaultPack_ACU_AT;
	class CUP_B_AssaultPack_ACU_AT_1;
	class CUP_B_AssaultPack_ACU_Explosives;
	class CUP_B_AssaultPack_ACU_MG;
	class CUP_B_AssaultPack_Coyote;
	class CUP_B_AssaultPack_Coyote_Ammo;
	class CUP_B_AssaultPack_Coyote_Specops;
	class CUP_B_USPack_Coyote_AmmoMG;
	class CUP_B_USPack_Coyote_AT;
	class CUP_B_USPack_Coyote_Specops;
	class CUP_B_USPack_Coyote_SL;
	class CUP_Creatures_Military_USA_Soldier_Base;
	class CUP_B_USArmy_Soldier_01;
	class CUP_B_USArmy_Soldier_02;
	class CUP_B_USArmy_Soldier_03;
	class CUP_B_USArmy_Soldier_04;
	class CUP_B_USArmy_Soldier_05;
	class CUP_B_USArmy_Soldier_06;
	class CUP_B_US_Soldier: CUP_B_USArmy_Soldier_01
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "Rifleman";
		weapons[] = {"hlc_rifle_M4","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_M4","Throw","Put"};
		linkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		respawnLinkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class CUP_B_US_Soldier_UAV: CUP_B_USArmy_Soldier_01
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "UAV Operator";
		weapons[] = {"hlc_rifle_M4","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_M4","Throw","Put"};
		linkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","B_UavTerminal","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		respawnLinkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","B_UavTerminal","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class CUP_B_US_Soldier_Backpack: CUP_B_USArmy_Soldier_01
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "Rifleman(Backpack)";
		backpack = "CUP_B_AssaultPack_ACU_Ammo";
		weapons[] = {"hlc_rifle_M4","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_M4","Throw","Put"};
		linkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		respawnLinkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class CUP_B_US_Soldier_AMG: CUP_B_USArmy_Soldier_01
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "Asst. Machinegunner";
		backpack = "CUP_B_USPack_Coyote_AmmoMG";
		weapons[] = {"hlc_rifle_M4","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_M4","Throw","Put"};
		linkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		respawnLinkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH_wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class CUP_B_US_Soldier_AAR: CUP_B_USArmy_Soldier_01
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "Asst. Auto Rifleman";
		backpack = "CUP_B_AssaultPack_ACU_AmmoSAW";
		weapons[] = {"hlc_rifle_M4","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_M4","Throw","Put"};
		linkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		respawnLinkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class CUP_B_US_Soldier_AHAT: CUP_B_USArmy_Soldier_01
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "Asst. AT Specialist (Javelin)";
		backpack = "CUP_B_USPack_Coyote_AT";
		weapons[] = {"hlc_rifle_M4","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_M4","Throw","Put"};
		linkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		respawnLinkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH_wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class CUP_B_US_Soldier_AAT: CUP_B_USArmy_Soldier_01
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "Asst. AT Specialist";
		backpack = "CUP_B_AssaultPack_ACU_AT";
		weapons[] = {"hlc_rifle_M4","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_M4","Throw","Put"};
		linkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		respawnLinkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
	};
	class CUP_B_US_Soldier_Light: CUP_B_USArmy_Soldier_03
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "Rifleman (Light)";
		weapons[] = {"hlc_rifle_M4","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_M4","Throw","Put"};
		linkedItems[] = {"V_Rangemaster_belt","CUP_H_USA_cap","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		respawnLinkedItems[] = {"V_Rangemaster_belt","CUP_H_USACap","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_HandGrenade_M67"};
	};
	class CUP_B_US_Soldier_GL: CUP_B_USArmy_Soldier_03
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "Grenadier";
		weapons[] = {"hlc_rifle_m4m203","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_m4m203","Throw","Put"};
		linkedItems[] = {"CUP_V_B_IOTV_GL","CUP_H_USArmy_HelmetMICH_ess","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		respawnLinkedItems[] = {"CUP_V_B_IOTV_GL","CUP_H_USArmy_HelmetMICH_ess","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SmokeShell","SmokeShell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67","SmokeShell","SmokeShell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
	};
	class CUP_B_US_Officer: CUP_B_USArmy_Soldier_01
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "Officer";
		weapons[] = {"hlc_rifle_M4","CUP_hgun_Colt1911","Throw","Put","CUP_Vector21Nite"};
		respawnWeapons[] = {"hlc_rifle_M4","CUP_hgun_Colt1911","Throw","Put","CUP_Vector21Nite"};
		linkedItems[] = {"V_Rangemaster_belt","CUP_H_USA_cap","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		respawnLinkedItems[] = {"V_Rangemaster_belt","CUP_H_USA_cap","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","B_IR_Grenade","SmokeShellRed","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","B_IR_Grenade","SmokeShellRed","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
	};
	class CUP_B_US_Soldier_SL: CUP_B_USArmy_Soldier_02
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "Squad Leader";
		weapons[] = {"hlc_rifle_m4m203","Throw","Put","CUP_Vector21Nite","CUP_hgun_M9"};
		respawnWeapons[] = {"hlc_rifle_m4m203","Throw","Put","CUP_Vector21Nite","CUP_hgun_M9"};
		linkedItems[] = {"CUP_V_B_IOTV_SL","CUP_H_USArmy_HelmetMICH_headset_ess","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		respawnLinkedItems[] = {"CUP_V_B_IOTV_GL","CUP_H_USArmy_HelmetMICH_headset_ess","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67","B_IR_Grenade","SmokeShellGreen","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","CUP_1Rnd_Smoke_M203","CUP_1Rnd_SmokeGreen_M203","CUP_15Rnd_9x19_M9"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67","B_IR_Grenade","SmokeShellGreen","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","CUP_1Rnd_Smoke_M203","CUP_1Rnd_SmokeGreen_M203","CUP_15Rnd_9x19_M9"};
		backpack = "CUP_B_USPack_Coyote_SL";
	};
	class CUP_B_US_Soldier_TL: CUP_B_USArmy_Soldier_02
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "Team Leader";
		weapons[] = {"hlc_rifle_m4m203","Throw","Put","CUP_Vector21Nite"};
		respawnWeapons[] = {"hlc_rifle_m4m203","Throw","Put","CUP_Vector21Nite"};
		linkedItems[] = {"CUP_V_B_IOTV_TL","CUP_H_USArmy_HelmetMICH_headset","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		respawnLinkedItems[] = {"CUP_V_B_IOTV_TL","CUP_H_USArmy_HelmetMICH_headset","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","B_IR_Grenade","SmokeShellRed","CUP_HandGrenade_M67","CUP_HandGrenade_M67","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_SmokeRed_M203","CUP_1Rnd_SmokeRed_M203"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","B_IR_Grenade","SmokeShellRed","CUP_HandGrenade_M67","CUP_HandGrenade_M67","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_SmokeRed_M203","CUP_1Rnd_SmokeRed_M203"};
		backpack = "CUP_B_USPack_Coyote_SL";
	};
	class CUP_B_US_Soldier_LAT: CUP_B_USArmy_Soldier_01
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "Rifleman (AT)";
		linkedItems[] = {"CUP_V_B_IOTV_AT","CUP_H_USArmy_HelmetMICH_earpro","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		respawnLinkedItems[] = {"CUP_V_B_IOTV_AT","CUP_H_USArmy_HelmetMICH_earpro","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		weapons[] = {"hlc_rifle_M4","Throw","Put","CUP_launch_M136"};
		respawnWeapons[] = {"hlc_rifle_M4","Throw","Put","CUP_launch_M136"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_M136_M"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_M136_M"};
	};
	class CUP_B_US_Soldier_AT: CUP_B_USArmy_Soldier_01
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "AT Specialist";
		linkedItems[] = {"CUP_V_B_IOTV_AT","CUP_H_USArmy_HelmetMICH_earpro_ess","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		respawnLinkedItems[] = {"CUP_V_B_IOTV_AT","CUP_H_USArmy_HelmetMICH_earpro_ess","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		weapons[] = {"hlc_rifle_M4","Throw","Put","CUP_launch_MAAWS_Scope"};
		respawnWeapons[] = {"hlc_rifle_M4","Throw","Put","CUP_launch_MAAWS_Scope"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_MAAWS_HEAT_M","CUP_MAAWS_HEDP_M","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_MAAWS_HEAT_M","CUP_MAAWS_HEDP_M","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		backpack = "CUP_B_AssaultPack_ACU_AT_1";
	};
	class CUP_B_US_Soldier_HAT: CUP_B_USArmy_Soldier_01
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "AT Specialist (Javelin)";
		linkedItems[] = {"CUP_V_B_IOTV_AT","CUP_H_USArmy_HelmetMICH_earpro_ess","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		respawnLinkedItems[] = {"CUP_V_B_IOTV_AT","CUP_H_USArmy_HelmetMICH_earpro_ess","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		weapons[] = {"hlc_rifle_M4","Throw","Put","CUP_launch_Javelin"};
		respawnWeapons[] = {"hlc_rifle_M4","Throw","Put","CUP_launch_Javelin"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_Javelin_M"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_Javelin_M"};
		threat[] = {1,1,0.1};
	};
	class CUP_B_US_Soldier_AA: CUP_B_USArmy_Soldier_04
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "AA Specialist";
		linkedItems[] = {"CUP_V_B_IOTV_rifleman","CUP_H_USArmy_HelmetMICH_ess","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		respawnLinkedItems[] = {"CUP_V_B_IOTV_rifleman","CUP_H_USArmy_HelmetMICH_ess","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		weapons[] = {"hlc_rifle_M4","CUP_launch_FIM92Stinger","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_M4","CUP_launch_FIM92Stinger","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_Stinger_M"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_Stinger_M"};
		threat[] = {1,0.1,1};
	};
	class CUP_B_US_Medic: CUP_B_USArmy_Soldier_01
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		scope = 2;
		scopeCurator = 2;
		displayName = "Medic";
		accuracy = 3.7;
		cost = 100000;
		attendant = 1;
		backpack = "CUP_B_USArmy_Medic";
		linkedItems[] = {"CUP_V_B_IOTV_medic","CUP_H_USArmy_HelmetMICH_ess","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		respawnLinkedItems[] = {"CUP_V_B_IOTV_medic","CUP_H_USArmy_HelmetMICH_ess","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		weapons[] = {"hlc_rifle_M4","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_M4","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShell"};
	};
	class CUP_B_US_Soldier_AR: CUP_B_USArmy_Soldier_04
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "Automatic Rifleman";
		linkedItems[] = {"CUP_V_B_IOTV_SAW","CUP_H_USArmy_HelmetMICH_headset_ess","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		respawnLinkedItems[] = {"CUP_V_B_IOTV_saw","CUP_H_USArmy_HelmetMICH_headset_ess","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		cost = 115000;
		weapons[] = {"CUP_lmg_M249_Laser","Throw","Put"};
		respawnWeapons[] = {"CUP_lmg_M249_Laser","Throw","Put"};
		magazines[] = {"CUP_100Rnd_TE4_Green_Tracer_556x45_M249","CUP_100Rnd_TE4_Green_Tracer_556x45_M249","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_100Rnd_TE4_Green_Tracer_556x45_M249","CUP_100Rnd_TE4_Green_Tracer_556x45_M249","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		threat[] = {1,0.1,0.3};
		backpack = "CUP_B_USArmy_AR";
	};
	class CUP_B_US_Soldier_MG: CUP_B_USArmy_Soldier_04
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "Machinegunner";
		linkedItems[] = {"CUP_V_B_IOTV_mg","CUP_H_USArmy_HelmetMICH_earpro_ess","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		respawnLinkedItems[] = {"CUP_V_B_IOTV_mg","CUP_H_USArmy_HelmetMICH_earpro_ess","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		cost = 115000;
		weapons[] = {"CUP_lmg_M240","Throw","Put"};
		respawnWeapons[] = {"CUP_lmg_M240","Throw","Put"};
		magazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_HandGrenade_M67","CUP_HandGrenade_M67"};
		threat[] = {1,0.1,0.6};
		backpack = "CUP_B_USArmy_MG";
	};
	class CUP_B_US_Spotter: CUP_B_USArmy_Soldier_05
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "Spotter";
		linkedItems[] = {"V_HarnessO_gry","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		respawnLinkedItems[] = {"V_HarnessO_gry","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		cost = 115000;
		weapons[] = {"hlc_rifle_m4m203","Throw","Put","CUP_Vector21Nite"};
		respawnWeapons[] = {"hlc_rifle_m4m203","Throw","Put","CUP_Vector21Nite"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67","B_IR_Grenade","smokeshellYellow","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","CUP_1Rnd_SmokeYellow_M203","CUP_1Rnd_SmokeYellow_M203"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67","B_IR_Grenade","smokeshellYellow","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","CUP_1Rnd_SmokeYellow_M203","CUP_1Rnd_SmokeYellow_M203"};
	};
	class CUP_B_US_Sniper;
	class CUP_B_US_Sniper_M110_TWS;
	class CUP_B_US_Sniper_M107;
	class CUP_B_US_Soldier_Marksman;
	class CUP_B_US_Soldier_Engineer_Sapper: CUP_B_USArmy_Soldier_02
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "Sapper";
		linkedItems[] = {"CUP_V_B_IOTV_SL","CUP_H_USArmy_HelmetMICH_earpro_ess","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		respawnLinkedItems[] = {"CUP_V_B_IOTV_SL","CUP_H_USArmy_HelmetMICH_earpro_ess","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		cost = 60000;
		threat[] = {1,0.5,0.1};
		canDeactivateMines = 1;
		weapons[] = {"hlc_rifle_M4","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_M4","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_HandGrenade_M67","SmokeShell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_HandGrenade_M67","SmokeShell"};
		backpack = "CUP_B_USArmy_MinePack";
	};
	class CUP_B_US_Soldier_Engineer_EOD: CUP_B_USArmy_Soldier_02
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "EOD Engineer";
		linkedItems[] = {"CUP_V_B_IOTV_SL","CUP_H_USArmy_HelmetMICH_earpro_ess","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		respawnLinkedItems[] = {"CUP_V_B_IOTV_SL","CUP_H_USArmy_HelmetMICH_earpro_ess","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		cost = 60000;
		threat[] = {1,0.5,0.1};
		canDeactivateMines = 1;
		weapons[] = {"hlc_rifle_M4","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_M4","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_HandGrenade_M67","SmokeShell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_HandGrenade_M67","SmokeShell"};
		backpack = "CUP_B_USArmy_EOD";
	};
	class CUP_B_US_Soldier_Engineer: CUP_B_USArmy_Soldier_02
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "Engineer";
		linkedItems[] = {"CUP_V_B_IOTV_SL","CUP_H_USArmy_HelmetMICH_earpro_ess","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		respawnLinkedItems[] = {"CUP_V_B_IOTV_SL","CUP_H_USArmy_HelmetMICH_earpro_ess","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		cost = 60000;
		threat[] = {1,0.5,0.1};
		engineer = 1;
		weapons[] = {"hlc_rifle_M4","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_M4","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_HandGrenade_M67","SmokeShell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_HandGrenade_M67","SmokeShell"};
		backpack = "CUP_B_USArmy_Engineer";
	};
	class CUP_B_US_Crew: CUP_B_USArmy_Soldier_01
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "Crewman";
		linkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USMC_Crew_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		respawnLinkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USMC_Crew_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		weapons[] = {"hlc_rifle_M4","CUP_hgun_Colt1911","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_M4","CUP_hgun_Colt1911","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
	};
	class CUP_B_US_Pilot: CUP_B_USArmy_Soldier_06
	{
		author = "$STR_CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		scope = 2;
		scopeCurator = 2;
		accuracy = 3.9;
		displayName = "Pilot";
		linkedItems[] = {"CUP_V_B_USArmy_PilotVest","CUP_H_USMC_Helmet_Pilot","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		respawnLinkedItems[] = {"CUP_V_B_USArmy_PilotVest","CUP_H_USMC_Helmet_Pilot","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		weapons[] = {"hlc_rifle_M4","CUP_hgun_Colt1911","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_M4","CUP_hgun_Colt1911","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_HandGrenade_M67","CUP_HandGrenade_M67","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","SmokeShell","SmokeShellRed"};
	};
	class CUP_B_US_Pilot_Light;
	class CUP_B_US_SpecOps;
	class CUP_B_US_SpecOps_UAV;
	class CUP_B_US_SpecOps_TL;
	class CUP_B_US_SpecOps_Medic;
	class CUP_B_US_SpecOps_Assault;
	class CUP_B_US_SpecOps_SD;
	class CUP_B_US_SpecOps_MG;
	class CUP_B_US_SpecOps_AR;
	class CUP_B_US_SpecOps_Night;
	class CUP_B_US_SpecOps_M;
	class CUP_B_US_SpecOps_M14;
	class CUP_B_US_SpecOps_JTAC;
};
class cfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	class UniformItem: InventoryItem_Base_F
	{
		type = 801;
	};
	class CUP_U_B_USA06_Officer_m81: ItemCore
	{
		dlc = "CUP_Units";
		author = "Community Upgrade Project";
		scope = 0;
		allowedSlots[] = {901};
		displayName = "US Army (M81)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\data\ui\icon_u_b_marpat_wdl_officer_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\USA06_officer_m81.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CUP_B_USA06_Soldier_02";
			containerClass = "Supply60";
			mass = 20;
		};
	};
	class CUP_U_B_USArmy_Base: ItemCore
	{
		dlc = "CUP_Units";
		author = "Community Upgrade Project";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "US Army (Modern/ACU)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\data\ui\icon_u_b_marpat_wdl_officer_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\tex1_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\tex4_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CUP_B_USArmy_Soldier_01";
			containerClass = "Supply60";
			mass = 20;
		};
	};
	class CUP_U_B_USArmy_TwoKnee: ItemCore
	{
		dlc = "CUP_Units";
		author = "Community Upgrade Project";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "US Army (ACU/Knees)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\data\ui\icon_u_b_marpat_wdl_officer_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\tex1_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\tex4_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CUP_B_USArmy_Soldier_02";
			containerClass = "Supply60";
			mass = 20;
		};
	};
	class CUP_U_B_USArmy_UBACS: ItemCore
	{
		dlc = "CUP_Units";
		author = "Community Upgrade Project";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "US Army (UBACS/ACU)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\data\ui\icon_u_b_marpat_wdl_officer_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo","Camo2"};
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\tex1_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\ubacs_acu.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CUP_B_USArmy_Soldier_03";
			containerClass = "Supply60";
			mass = 20;
		};
	};
	class CUP_U_B_USArmy_Soft: ItemCore
	{
		dlc = "CUP_Units";
		author = "Community Upgrade Project";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "US Army (Soft Shell)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\data\ui\icon_u_b_marpat_wdl_officer_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\usarmy_softshell_acu_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CUP_B_USArmy_Soldier_04";
			containerClass = "Supply60";
			mass = 20;
		};
	};
	class CUP_U_B_USArmy_Ghillie: ItemCore
	{
		author = "Community Upgrade Project";
		dlc = "CUP_Units";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "US Army Ghillie (desert)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\ui\icon_u_o_tk_ghillie_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CUP_B_USArmy_Soldier_05";
			containerClass = "Supply60";
			mass = 20;
		};
	};
	class CUP_U_B_USArmy_PilotOverall: ItemCore
	{
		author = "Community Upgrade Project";
		dlc = "CUP_Units";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "US Army Pilot Overall";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\data\ui\icon_u_b_usmc_pilotoverall_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CUP_B_USArmy_Soldier_06";
			containerClass = "Supply60";
			mass = 20;
		};
	};
};

