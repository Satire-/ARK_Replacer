class CfgPatches
{
	class ARK_Replacer_TKA
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_Creatures_Military_Taki"};
	};
};
class UniformSlotInfo;
class CfgVehicles
{
	class Man;
	class CAManBase;
	class SoldierWB;
	class CUP_B_CivPack_WDL;
	class CUP_B_AlicePack_Khaki;
	class CUP_B_RPGPack_Khaki;
	class CUP_B_TK_Medic_Desert;
	class CUP_B_TK_AssaultPack_Medic: CUP_B_TK_Medic_Desert
	{
		scope = 1;
		displayName = "Takistani Assault Pack (Medic)";
		class TransportItems
		{
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
	};
	class CUP_B_TK_AlicePack_Khaki_Explosives: CUP_B_AlicePack_Khaki
	{
		author = "Community Upgrade Project";
		scope = 1;
		class TransportMagazines
		{
			class _xx_CUP_MineE_M
			{
				magazine = "CUP_MineE_M";
				count = 3;
			};
			class _xx_CUP_PipeBomb_M
			{
				magazine = "CUP_PipeBomb_M";
				count = 3;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
		};
	};
	class CUP_B_TK_CivPack_WDL_RPK: CUP_B_CivPack_WDL
	{
		author = "Community Upgrade Project";
		scope = 1;
		class TransportMagazines
		{
			class _xx_hlc_45Rnd_545x39_t_rpk
			{
				magazine = "hlc_45Rnd_545x39_t_rpk";
				count = 3;
			};
			class _xx_CUP_HandGrenade_RGD5
			{
				magazine = "CUP_HandGrenade_RGD5";
				count = 2;
			};
		};
	};
	class CUP_B_TK_CivPack_WDL_Ammo: CUP_B_CivPack_WDL
	{
		author = "Community Upgrade Project";
		scope = 1;
		class TransportMagazines
		{
			class _xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = 2;
			};
			class _xx_CUP_10Rnd_762x54_SVD_M
			{
				magazine = "CUP_10Rnd_762x54_SVD_M";
				count = 2;
			};
			class _xx_CUP_1Rnd_HEDP_M203
			{
				magazine = "CUP_1Rnd_HEDP_M203";
				count = 2;
			};
			class _xx_CUP_HandGrenade_RGD5
			{
				magazine = "CUP_HandGrenade_RGD5";
				count = 2;
			};
		};
	};
	class CUP_B_TK_RPG_Backpack: CUP_B_RPGPack_Khaki
	{
		author = "Community Upgrade Project";
		scope = 1;
		class TransportMagazines
		{
			class _xx_CUP_PG7VL_M
			{
				magazine = "CUP_PG7VL_M";
				count = 2;
			};
			class _xx_CUP_PG7V_M
			{
				magazine = "CUP_PG7V_M";
				count = 2;
			};
		};
	};
	class CUP_B_TK_RPG_Backpack_Single: CUP_B_RPGPack_Khaki
	{
		author = "Community Upgrade Project";
		scope = 1;
		class TransportMagazines
		{
			class _xx_CUP_PG7VL_M
			{
				magazine = "CUP_PG7VL_M";
				count = 1;
			};
		};
	};
	class CUP_B_TK_AlicePack_Khaki_AmmoMG: CUP_B_AlicePack_Khaki
	{
		author = "Community Upgrade Project";
		scope = 1;
		class TransportMagazines
		{
			class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
				count = 5;
			};
			class _xx_CUP_HandGrenade_RGD5
			{
				magazine = "CUP_HandGrenade_RGD5";
				count = 2;
			};
		};
	};
	class CUP_B_TK_AlicePack_Khaki_Ammo: CUP_B_AlicePack_Khaki
	{
		author = "Community Upgrade Project";
		scope = 1;
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 6;
			};
			class _xx_CUP_1Rnd_HEDP_M203
			{
				magazine = "CUP_1Rnd_HEDP_M203";
				count = 4;
			};
			class _xx_smokeshellOrange
			{
				magazine = "smokeshellOrange";
				count = 2;
			};
		};
	};
	class CUP_Creatures_Military_TK_Soldier_Base;
	class CUP_O_TK_Soldier_01;
	class CUP_O_TK_Soldier_02;
	class CUP_O_TK_Soldier_03;
	class CUP_O_TK_Soldier_04;
	class CUP_O_TK_Soldier_05;
	class CUP_O_TK_Soldier: CUP_O_TK_Soldier_03
	{
		author = "Community Upgrade Project";
		weapons[] = {"hlc_rifle_FAL5061","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_FAL5061","Throw","Put"};
		magazines[] = {"hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class CUP_O_TK_Soldier_GL: CUP_O_TK_Soldier_03
	{
		author = "Community Upgrade Project";
		weapons[] = {"CUP_arifle_M16A2_GL","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_M16A2_GL","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class CUP_O_TK_Soldier_Backpack;
	class CUP_O_TK_Soldier_AAT;
	class CUP_O_TK_Soldier_AMG;
	class CUP_O_TK_Soldier_LAT: CUP_O_TK_Soldier_03
	{
		author = "Community Upgrade Project";
		weapons[] = {"hlc_rifle_FAL5061","CUP_launch_RPG18","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_FAL5061","CUP_launch_RPG18","Throw","Put"};
		magazines[] = {"hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","CUP_RPG18_M"};
		respawnMagazines[] = {"hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","CUP_RPG18_M"};
	};
	class CUP_O_TK_Soldier_AT: CUP_O_TK_Soldier_03
	{
		author = "Community Upgrade Project";
		weapons[] = {"hlc_rifle_FAL5061","CUP_launch_RPG7V","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_FAL5061","CUP_launch_RPG7V","Throw","Put"};
		magazines[] = {"hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","CUP_PG7VL_M"};
		respawnMagazines[] = {"hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","CUP_PG7VL_M"};
	};
	class CUP_O_TK_Soldier_HAT: CUP_O_TK_Soldier_03
	{
		author = "Community Upgrade Project";
		weapons[] = {"hlc_rifle_FAL5061","CUP_launch_Metis","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_FAL5061","CUP_launch_Metis","Throw","Put"};
		magazines[] = {"hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","CUP_AT13_M"};
		respawnMagazines[] = {"hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","CUP_AT13_M"};
	};
	class CUP_O_TK_Soldier_AA: CUP_O_TK_Soldier_03
	{
		author = "Community Upgrade Project";
		weapons[] = {"hlc_rifle_FAL5061","CUP_launch_Igla","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_FAL5061","CUP_launch_Igla","Throw","Put"};
		magazines[] = {"hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","CUP_Igla_M"};
		respawnMagazines[] = {"hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","CUP_Igla_M"};
	};
	class CUP_O_TK_Engineer: CUP_O_TK_Soldier_03
	{
		author = "Community Upgrade Project";
		weapons[] = {"hlc_rifle_FAL5061","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_FAL5061","Throw","Put"};
		magazines[] = {"hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class CUP_O_TK_Soldier_MG;
	class CUP_O_TK_Soldier_AR: CUP_O_TK_Soldier_03
	{
		author = "Community Upgrade Project";
		weapons[] = {"hlc_rifle_rpk","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_rpk","Throw","Put"};
		magazines[] = {"hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class CUP_O_TK_Medic: CUP_O_TK_Soldier_03
	{
		author = "Community Upgrade Project";
		weapons[] = {"hlc_rifle_FAL5061","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_FAL5061","Throw","Put"};
		magazines[] = {"hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class CUP_O_TK_Soldier_SL: CUP_O_TK_Soldier_03
	{
		author = "Community Upgrade Project";
		weapons[] = {"hlc_rifle_FAL5061","Binocular","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_FAL5061","Binocular","Throw","Put"};
		magazines[] = {"hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","smokeshell","smokeshellOrange"};
		respawnMagazines[] = {"hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","smokeshell","smokeshellOrange"};
	};
	class CUP_O_TK_Officer: CUP_O_TK_Soldier_01
	{
		author = "Community Upgrade Project";
		weapons[] = {"hlc_rifle_aks74u","Binocular","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74u","Binocular","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","smokeshell","smokeshellOrange"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","smokeshell","smokeshellOrange"};
	};
	class CUP_O_TK_Spotter: CUP_O_TK_Soldier_05
	{
		author = "Community Upgrade Project";
		weapons[] = {"hlc_rifle_FAL5061","Binocular","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_FAL5061","Binocular","Throw","Put"};
		magazines[] = {"hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","smokeshellBlue"};
		respawnMagazines[] = {"hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","smokeshellBlue"};
	};
	class CUP_O_TK_Sniper;
	class CUP_O_TK_Sniper_KSVK;
	class CUP_O_TK_Sniper_SVD_Night;
	class CUP_O_TK_Soldier_AKS_Night;
	class CUP_O_TK_Soldier_FNFAL_Night;
	class CUP_O_TK_Soldier_AKS_74_GOSHAWK;
	class CUP_O_TK_Crew: CUP_O_TK_Soldier_02
	{
		author = "Community Upgrade Project";
		weapons[] = {"hlc_rifle_aks74u","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74u","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class CUP_O_TK_Pilot: CUP_O_TK_Soldier_02
	{
		author = "Community Upgrade Project";
		weapons[] = {"hlc_rifle_aks74u","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74u","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","SmokeShell","smokeshellBlue"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","SmokeShell","smokeshellBlue"};
	};
	class CUP_O_TK_Commander: CUP_O_TK_Soldier_01
	{
		author = "Community Upgrade Project";
		weapons[] = {"hlc_rifle_FAL5061","CUP_hgun_TaurusTracker455_gold","Throw","Put","Binocular"};
		respawnWeapons[] = {"hlc_rifle_FAL5061","CUP_hgun_TaurusTracker455_gold","Throw","Put","Binocular"};
		magazines[] = {"hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","SmokeShell","SmokeShellBlue","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M"};
		respawnMagazines[] = {"hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","SmokeShell","SmokeShellBlue","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M"};
	};
	class CUP_O_TK_Story_Aziz;
	class CUP_O_TK_SpecOps;
	class CUP_O_TK_SpecOps_TL: CUP_O_TK_SpecOps
	{
		author = "Community Upgrade Project";
		weapons[] = {"hlc_rifle_FAL5061","Binocular","Throw","Put","CUP_hgun_PB6P9_snds"};
		respawnWeapons[] = {"hlc_rifle_FAL5061","Binocular","Throw","Put","CUP_hgun_PB6P9_snds"};
		magazines[] = {"hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","smokeshellBlue","smokeshellOrange","CUP_8Rnd_9x18_MakarovSD_M","CUP_8Rnd_9x18_MakarovSD_M","CUP_8Rnd_9x18_MakarovSD_M","CUP_8Rnd_9x18_MakarovSD_M"};
		respawnMagazines[] = {"hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","smokeshellBlue","smokeshellOrange","CUP_8Rnd_9x18_MakarovSD_M","CUP_8Rnd_9x18_MakarovSD_M","CUP_8Rnd_9x18_MakarovSD_M","CUP_8Rnd_9x18_MakarovSD_M"};
	};
	class CUP_O_TK_SpecOps_MG;
};
class cfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	class UniformItem: InventoryItem_Base_F
	{
		type = 801;
	};
	class VestItem: InventoryItem_Base_F
	{
		type = 701;
		hiddenSelections[] = {};
		armor = "5*0";
		passThrough = 1;
		hitpointName = "HitBody";
	};
	class CUP_Vest_TK_Camo_Base: ItemCore
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
	class CUP_V_O_TK_CrewBelt: CUP_Vest_TK_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_O_TK_CrewBelt_ARM: CUP_Vest_TK_Camo_Base
	{
		scope = 2;
		author = "Community Upgrade Project";
		dlc = "CUP_Units";
		displayName = "Takistani Crewman Belt";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\ui\icon_v_crew_belt_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_CrewmanBelt.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\tak_soldier_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\tak_soldier_equip_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\tak_soldier_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\tak_soldier_equip_co.paa"};
			containerClass = "Supply80";
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_CrewmanBelt.p3d";
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
	class CUP_V_O_TK_OfficerBelt: CUP_V_O_TK_CrewBelt
	{
		scope = 1;
	};
	class CUP_V_O_TK_OfficerBelt_ARM: CUP_V_O_TK_CrewBelt
	{
		scope = 2;
		author = "Community Upgrade Project";
		dlc = "CUP_Units";
		displayName = "Takistani Officer Pistol Belt";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_OfficerBelt.p3d";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\ui\icon_v_officer_belt_ca.paa";
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply60";
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_OfficerBelt.p3d";
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
	class CUP_V_O_TK_OfficerBelt2: CUP_V_O_TK_CrewBelt
	{
		scope = 1;
	};
	class CUP_V_O_TK_OfficerBelt2_ARM: CUP_V_O_TK_CrewBelt
	{
		scope = 2;
		dlc = "CUP_Units";
		author = "Community Upgrade Project";
		displayName = "Takistani Officer Belt (Binocs)";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_BinocsBelt.p3d";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\ui\icon_v_tk_binoc_belt_ca.paa";
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply60";
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_BinocsBelt.p3d";
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
	class CUP_V_O_TK_Vest_1: CUP_Vest_TK_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_O_TK_Vest_1_ARM: CUP_Vest_TK_Camo_Base
	{
		scope = 2;
		dlc = "CUP_Units";
		author = "Community Upgrade Project";
		displayName = "Takistani Combat Vest";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\ui\icon_v_tk_combat_vest_ca";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_Vest1.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\tak_soldier_equip_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\tak_soldier_equip_co.paa"};
			containerClass = "Supply190";
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_Vest1.p3d";
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
	class CUP_V_O_TK_Vest_2: CUP_Vest_TK_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_O_TK_Vest_2_ARM: CUP_Vest_TK_Camo_Base
	{
		scope = 2;
		dlc = "CUP_Units";
		author = "Community Upgrade Project";
		displayName = "Takistani Combat Vest (Medic)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\ui\icon_v_tk_combat_vest_ca";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_Vest2.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\tak_soldier_equip_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\tak_soldier_equip_co.paa"};
			containerClass = "Supply170";
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_Vest2.p3d";
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