class CfgPatches
{
	class ARK_Replacer_NAPA
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_Creatures_Military_NAPA"};
	};
};
class UniformSlotInfo;

class CfgVehicles
{
	class Man;
	class CAManBase;
	class SoldierWB;
	class CUP_B_HikingPack_Civ;
	class CUP_I_HikingPack_RPK: CUP_B_HikingPack_Civ
	{
		author = "Community Upgrade Project";
		dlc = "CUP_Units";
		scope = 1;
		displayName = "Hiking Pack";
		class TransportMagazines
		{
			class _xx_hlc_45Rnd_545x39_t_rpk
			{
				magazine = "hlc_45Rnd_545x39_t_rpk";
				count = 2;
			};
		};
	};
	class CUP_I_HikingPack_Ammo: CUP_B_HikingPack_Civ
	{
		author = "Community Upgrade Project";
		dlc = "CUP_Units";
		scope = 1;
		displayName = "Hiking Pack";
		class TransportMagazines
		{
			class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
				count = 1;
			};
			class _xx_hlc_45Rnd_545x39_t_rpk
			{
				magazine = "hlc_45Rnd_545x39_t_rpk";
				count = 1;
			};
			class _xx_hlc_30Rnd_762x39_b_ak
			{
				magazine = "hlc_30Rnd_762x39_b_ak";
				count = 6;
			};
			class _xx_hlc_30Rnd_545x39_B_AK
			{
				magazine = "hlc_30Rnd_545x39_B_AK";
				count = 6;
			};
			class _xx_CUP_HandGrenade_RGD5
			{
				magazine = "CUP_HandGrenade_RGD5";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
		};
	};
	class CUP_Creatures_Military_NAPA_Soldier_Base: SoldierWB
	{
		scopeCurator = 0;
	};
	class CUP_Creatures_Military_NAPA_Civilian_Base: CUP_Creatures_Military_NAPA_Soldier_Base
	{
		vehicleClass = "CUP_I_GUER_Napa_Gue";
		editorSubcategory = "CUP_EdSubcat_Personel_Napa_ArmedCiv";
	};
	class CUP_I_GUE_Soldier_01: CUP_Creatures_Military_NAPA_Soldier_Base
	{
		author = "Community Upgrade Project";
	};
	class CUP_I_GUE_Soldier_02: CUP_Creatures_Military_NAPA_Soldier_Base
	{
		author = "Community Upgrade Project";
	};
	class CUP_I_GUE_Soldier_03: CUP_Creatures_Military_NAPA_Soldier_Base
	{
		author = "Community Upgrade Project";
	};
	class CUP_I_GUE_Soldier_04: CUP_Creatures_Military_NAPA_Soldier_Base
	{
		author = "Community Upgrade Project";
	};
	class CUP_I_GUE_Soldier_05: CUP_Creatures_Military_NAPA_Soldier_Base
	{
		author = "Community Upgrade Project";
	};
	class CUP_I_GUE_Soldier_06: CUP_Creatures_Military_NAPA_Soldier_Base
	{
		author = "Community Upgrade Project";
	};
	class CUP_I_GUE_Soldier_07: CUP_Creatures_Military_NAPA_Soldier_Base
	{
		author = "Community Upgrade Project";
	};
	class CUP_I_GUE_Soldier_08: CUP_Creatures_Military_NAPA_Soldier_Base
	{
		author = "Community Upgrade Project";
	};
	class CUP_I_GUE_Soldier_09: CUP_Creatures_Military_NAPA_Soldier_Base
	{
		author = "Community Upgrade Project";
	};
	class CUP_I_GUE_Soldier_10: CUP_Creatures_Military_NAPA_Soldier_Base
	{
		author = "Community Upgrade Project";
	};
	class CUP_I_GUE_Soldier_11: CUP_Creatures_Military_NAPA_Soldier_Base
	{
		author = "Community Upgrade Project";
	};
	class CUP_I_GUE_Soldier_12: CUP_Creatures_Military_NAPA_Soldier_Base
	{
		author = "Community Upgrade Project";
	};
	class CUP_I_GUE_Soldier_13: CUP_Creatures_Military_NAPA_Soldier_Base
	{
		author = "Community Upgrade Project";
	};
	class CUP_I_GUE_Soldier_AKSU: CUP_Creatures_Military_NAPA_Soldier_Base
	{
		weapons[] = {"hlc_rifle_aks74u","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74u","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class CUP_I_GUE_Soldier_AKM: CUP_Creatures_Military_NAPA_Soldier_Base
	{
		weapons[] = {"hlc_rifle_akm","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akm","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class CUP_I_GUE_Soldier_AKS74: CUP_Creatures_Military_NAPA_Soldier_Base
	{
		weapons[] = {"hlc_rifle_aks74","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class CUP_I_GUE_Soldier_GL: CUP_Creatures_Military_NAPA_Soldier_Base
	{
		weapons[] = {"hlc_rifle_aks74_GL","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_AK74_GL","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M"};
	};
	class CUP_I_GUE_Officer: CUP_Creatures_Military_NAPA_Soldier_Base
	{
		weapons[] = {"hlc_rifle_aks74u","Binocular","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74u","Binocular","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","SmokeShell"};
	};
	class CUP_I_GUE_Soldier_AT: CUP_Creatures_Military_NAPA_Soldier_Base
	{
		weapons[] = {"hlc_rifle_akm","CUP_launch_RPG7V","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akm","CUP_launch_RPG7V","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","CUP_PG7VL_M"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","CUP_PG7VL_M"};
	};
	class CUP_I_GUE_Soldier_AA: CUP_Creatures_Military_NAPA_Soldier_Base
	{
		weapons[] = {"hlc_rifle_aks74","CUP_launch_FIM92Stinger","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74","CUP_launch_FIM92Stinger","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M"};
	};
	class CUP_I_GUE_Soldier_AR: CUP_Creatures_Military_NAPA_Soldier_Base
	{
		weapons[] = {"hlc_rifle_rpk74n","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_rpk74n","Throw","Put"};
		magazines[] = {"hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class CUP_I_GUE_Saboteur: CUP_Creatures_Military_NAPA_Soldier_Base
	{
		weapons[] = {"hlc_rifle_aks74u","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74u","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","CUP_PipeBomb_M"};
	};
	class CUP_I_GUE_Medic: CUP_Creatures_Military_NAPA_Soldier_Base
	{
		weapons[] = {"hlc_rifle_aks74","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","CUP_PipeBomb_M"};
	};
	class CUP_I_GUE_Engineer: CUP_Creatures_Military_NAPA_Soldier_Base
	{
		weapons[] = {"hlc_rifle_aks74u","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74u","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class CUP_I_GUE_Ammobearer: CUP_Creatures_Military_NAPA_Soldier_Base
	{
		weapons[] = {"hlc_rifle_aks74u","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74u","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","CUP_PipeBomb_M"};
	};
	class CUP_I_GUE_Soldier_AA2: CUP_Creatures_Military_NAPA_Soldier_Base
	{
		weapons[] = {"hlc_rifle_aks74","CUP_launch_9K32Strela","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74","CUP_launch_9K32Strela","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class CUP_I_GUE_Pilot: CUP_Creatures_Military_NAPA_Soldier_Base
	{
		weapons[] = {"hlc_rifle_aks74u","Binocular","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74u","Binocular","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class CUP_I_GUE_Sniper;
	class CUP_I_GUE_Soldier_Scout: CUP_I_GUE_Sniper
	{
		weapons[] = {"hlc_rifle_aks74u","Binocular","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74u","Binocular","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class CUP_I_GUE_Commander: CUP_Creatures_Military_NAPA_Soldier_Base
	{
		weapons[] = {"hlc_rifle_aks74u","CUP_hgun_Makarov","Binocular","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74u","CUP_hgun_Makarov","Binocular","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M"};
	};
	class CUP_I_GUE_Local: CUP_Creatures_Military_NAPA_Civilian_Base
	{
		weapons[] = {"hlc_rifle_aks74","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M"};
	};
	class CUP_I_GUE_Woodman: CUP_Creatures_Military_NAPA_Civilian_Base
	{
		weapons[] = {"hlc_rifle_akm","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akm","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak"};
	};
	class CUP_I_GUE_Woodman_LE: CUP_Creatures_Military_NAPA_Civilian_Base
	{
        displayName = "Woodsman (Lee-Enfield)";
		weapons[] = {"CUP_srifle_LeeEnfield","Throw","Put"};
		respawnWeapons[] = {"CUP_srifle_LeeEnfield","Throw","Put"};
		magazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M"};
		respawnMagazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M"};
	};
	class CUP_I_GUE_Forester: CUP_Creatures_Military_NAPA_Civilian_Base
	{
		weapons[] = {"hlc_rifle_aks74","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M"};
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
	class CUP_Vest_Camo_Base: ItemCore
	{
		scope = 0;
		allowedSlots[] = {901};
		hiddenSelections[] = {"camo"};
		class ItemInfo: VestItem
		{
			hiddenSelections[] = {"camo"};
			maximumLoad = 0;
			mass = 0;
		};
	};
	class CUP_V_I_Carrier_Belt: CUP_Vest_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_I_Carrier_Belt_ARM: CUP_Vest_Camo_Base
	{
		author = "CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		scope = 2;
		displayName = "Ammo Carrier Belt";
		picture = "\A3\characters_f\Data\UI\icon_V_TacVest_blk_CA.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_NAPA\CUP_Napa_Carrier_Belt.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_NAPA\data\flecktarn_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_NAPA\CUP_Napa_Carrier_Belt.p3d";
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
	class CUP_V_I_Guerilla_Jacket: CUP_Vest_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_I_Guerilla_Jacket_ARM: CUP_Vest_Camo_Base
	{
		author = "CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		scope = 2;
		displayName = "Guerilla Jacket";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_NAPA\data\ui\icon_v_jacket_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_NAPA\CUP_prizrak_jacket.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_NAPA\data\prizrak_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_NAPA\CUP_prizrak_jacket.p3d";
			hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_NAPA\data\prizrak_co.paa"};
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