class CfgPatches
{
	class ARK_Replacer_SLA
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_Creatures_Military_SLA"};
	};
};
class UniformSlotInfo;

class CfgVehicles
{
	class Man;
	class CAManBase;
	class SoldierWB;
	class CUP_B_SLA_Medicbag;
	class CUP_B_SLA_Medicbag_green: CUP_B_SLA_Medicbag
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
	class CUP_Creatures_Military_SLA_Soldier_Base;
	class CUP_O_SLA_Soldier_01;
	class CUP_O_SLA_Soldier_02;
	class CUP_O_SLA_Soldier_03;
	class CUP_O_SLA_Soldier_04;
	class CUP_O_SLA_Soldier_05;
	class CUP_O_SLA_Soldier_06;
	class CUP_O_SLA_Soldier_07;
	class CUP_O_SLA_Soldier_08;
	class CUP_O_SLA_Soldier_09;
	class CUP_O_SLA_Soldier_Overalls_Pilot;
	class CUP_O_SLA_Soldier_Overalls_Tank;

	class CUP_O_sla_Soldier: CUP_O_sla_Soldier_02
	{
		weapons[] = {"hlc_rifle_ak74_dirty2","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak74_dirty2","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class CUP_O_sla_Soldier_GL: CUP_O_sla_Soldier_02
	{
		weapons[] = {"hlc_rifle_aks74_GL","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74_GL","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class CUP_O_SLA_Soldier_Backpack;
	class CUP_O_sla_Soldier_AAT;
	class CUP_O_sla_Soldier_AMG;

	class CUP_O_sla_Soldier_LAT: CUP_O_sla_Soldier_02
	{
		weapons[] = {"hlc_rifle_ak74_dirty2","CUP_launch_RPG18","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak74_dirty2","CUP_launch_RPG18","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_RPG18_M"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_RPG18_M"};
	};
	class CUP_O_sla_Soldier_AT: CUP_O_sla_Soldier_02
	{
		weapons[] = {"hlc_rifle_aks74","CUP_launch_RPG7V","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74","CUP_launch_RPG7V","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_PG7VL_M"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_PG7VL_M"};
	};
	class CUP_O_sla_Soldier_HAT: CUP_O_sla_Soldier_02
	{
		weapons[] = {"hlc_rifle_aks74","CUP_launch_Metis","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74","CUP_launch_Metis","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_AT13_M"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_AT13_M"};
	};
	class CUP_O_sla_Soldier_AA: CUP_O_sla_Soldier_02
	{
		weapons[] = {"hlc_rifle_aks74","CUP_launch_Igla","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74","CUP_launch_Igla","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_Igla_M"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_Igla_M"};
	};
	class CUP_O_sla_Engineer: CUP_O_sla_Soldier_02
	{
		respawnWeapons[] = {"hlc_rifle_ak74_dirty2","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class CUP_O_sla_Soldier_MG;
	class CUP_O_sla_Soldier_AR: CUP_O_sla_Soldier_02
	{
		weapons[] = {"hlc_rifle_rpk74n","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_rpk74n","Throw","Put"};
		magazines[] = {"hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class CUP_O_sla_Medic: CUP_O_sla_Soldier_02
	{
		weapons[] = {"hlc_rifle_aks74u","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74u","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class CUP_O_sla_Soldier_SL: CUP_O_sla_Soldier_02
	{
		weapons[] = {"hlc_rifle_ak74_dirty2","Binocular","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak74_dirty2","Binocular","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","smokeshell","smokeshellOrange"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","smokeshell","smokeshellOrange"};
	};
	class CUP_O_sla_Officer: CUP_O_sla_Soldier_02
	{
		weapons[] = {"hlc_rifle_aks74u","Binocular","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74u","Binocular","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","smokeshell","smokeshellOrange"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","smokeshell","smokeshellOrange"};
	};
	class CUP_O_SLA_Spotter: CUP_O_sla_Soldier_02
	{
		weapons[] = {"hlc_rifle_ak74_dirty2","Binocular","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak74_dirty2","Binocular","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","smokeshellBlue"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","smokeshellBlue"};
	};
	class CUP_O_sla_Sniper;
	class CUP_O_sla_Sniper_KSVK;
	class CUP_O_SLA_Sniper_SVD_Night;
	class CUP_O_sla_Soldier_AKS_Night;
	class CUP_O_sla_Soldier_AKS_74_GOSHAWK;
    
	class CUP_O_sla_Crew: CUP_O_sla_Soldier_overalls_tank
	{
		weapons[] = {"hlc_rifle_aks74u","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74u","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class CUP_O_sla_Pilot: CUP_O_SLA_Soldier_Overalls_Pilot
	{
		weapons[] = {"hlc_rifle_aks74u","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74u","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","SmokeShell","smokeshellBlue"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","SmokeShell","smokeshellBlue"};
	};
	class CUP_O_sla_Commander: CUP_O_sla_Soldier_01
	{
		weapons[] = {"CUP_hgun_Makarov","Throw","Put","Binocular"};
		respawnWeapons[] = {"CUP_hgun_Makarov","Throw","Put","Binocular"};
		magazines[] = {"CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M"};
		respawnMagazines[] = {"CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M"};
	};
	class CUP_O_sla_SpecOps: CUP_O_sla_Soldier_02
	{
		weapons[] = {"hlc_rifle_aks74_GL","Binocular","Throw","Put","CUP_hgun_Makarov"};
		respawnWeapons[] = {"hlc_rifle_aks74_GL","Binocular","Throw","Put","CUP_hgun_Makarov"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","smokeshellBlue","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","smokeshellBlue","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M"};
	};
	class CUP_O_sla_SpecOps_TL: CUP_O_sla_SpecOps
	{
		weapons[] = {"CUP_arifle_AKS74","Binocular","Throw","Put","CUP_hgun_PB6P9_snds"};
		respawnWeapons[] = {"hlc_rifle_aks74u","Binocular","Throw","Put","CUP_hgun_PB6P9_snds"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","smokeshellBlue","smokeshellOrange","CUP_8Rnd_9x18_MakarovSD_M","CUP_8Rnd_9x18_MakarovSD_M","CUP_8Rnd_9x18_MakarovSD_M","CUP_8Rnd_9x18_MakarovSD_M"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","smokeshellBlue","smokeshellOrange","CUP_8Rnd_9x18_MakarovSD_M","CUP_8Rnd_9x18_MakarovSD_M","CUP_8Rnd_9x18_MakarovSD_M","CUP_8Rnd_9x18_MakarovSD_M"};
	};
	class CUP_O_sla_SpecOps_LAT: CUP_O_sla_SpecOps
	{
		weapons[] = {"hlc_rifle_aks74u","CUP_launch_RPG18","Binocular","Throw","Put","CUP_hgun_PB6P9_snds"};
		respawnWeapons[] = {"hlc_rifle_aks74u","Binocular","Throw","Put","CUP_hgun_PB6P9_snds"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","smokeshellBlue","smokeshellOrange","CUP_8Rnd_9x18_MakarovSD_M","CUP_8Rnd_9x18_MakarovSD_M","CUP_8Rnd_9x18_MakarovSD_M","CUP_8Rnd_9x18_MakarovSD_M","CUP_RPG18_M"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","smokeshellBlue","smokeshellOrange","CUP_8Rnd_9x18_MakarovSD_M","CUP_8Rnd_9x18_MakarovSD_M","CUP_8Rnd_9x18_MakarovSD_M","CUP_8Rnd_9x18_MakarovSD_M","CUP_RPG18_M"};
	};
	class CUP_O_sla_SpecOps_MG: CUP_O_sla_SpecOps
	{
		weapons[] = {"CUP_lmg_PKM","Binocular","Throw","Put","CUP_hgun_Makarov"};
		respawnWeapons[] = {"CUP_lmg_PKM","Binocular","Throw","Put","CUP_hgun_Makarov"};
		magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","SmokeShellBlue","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M"};
		respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","SmokeShellBlue","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M"};
	};
	class CUP_O_sla_SpecOps_Demo: CUP_O_sla_SpecOps
	{
		weapons[] = {"hlc_rifle_aks74u","Binocular","Throw","Put","CUP_hgun_PB6P9_snds"};
		respawnWeapons[] = {"hlc_rifle_aks74u","Binocular","Throw","Put","CUP_hgun_PB6P9_snds"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","smokeshellBlue","smokeshellOrange","CUP_8Rnd_9x18_MakarovSD_M","CUP_8Rnd_9x18_MakarovSD_M","CUP_8Rnd_9x18_MakarovSD_M","CUP_8Rnd_9x18_MakarovSD_M","SatchelCharge_Remote_Mag","SatchelCharge_Remote_Mag","SatchelCharge_Remote_Mag"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","smokeshellBlue","smokeshellOrange","CUP_8Rnd_9x18_MakarovSD_M","CUP_8Rnd_9x18_MakarovSD_M","CUP_8Rnd_9x18_MakarovSD_M","CUP_8Rnd_9x18_MakarovSD_M","CUP_TimeBomb_M","CUP_TimeBomb_M","CUP_TimeBomb_M"};
	};
	class CUP_O_sla_Miltia: CUP_O_sla_Soldier_03
	{
		weapons[] = {"hlc_rifle_ak74_dirty2","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak74_dirty2","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class CUP_O_sla_soldier_urban: CUP_O_sla_Soldier_04
	{
		weapons[] = {"hlc_rifle_ak74_dirty2","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak74_dirty2","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class CUP_O_sla_soldier_desert: CUP_O_sla_Soldier_05
	{
		weapons[] = {"hlc_rifle_ak74_dirty2","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak74_dirty2","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class CUP_O_Partisans_soldier_TTsKO: CUP_O_sla_Soldier_06
	{
		weapons[] = {"hlc_rifle_ak74_dirty2","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak74_dirty2","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class CUP_O_Partisans_soldier_SL: CUP_O_sla_Soldier_07
	{
		weapons[] = {"hlc_rifle_ak74_dirty2","CUP_hgun_Makarov","Throw","Put","Binocular"};
		respawnWeapons[] = {"hlc_rifle_ak74_dirty2","CUP_hgun_Makarov","Throw","Put","Binocular"};
		magazines[] = {"CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class CUP_O_Partisans_Soldier_AT: CUP_O_sla_Soldier_08
	{
		weapons[] = {"hlc_rifle_ak74_dirty2","CUP_launch_RPG7V","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak74_dirty2","CUP_launch_RPG7V","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_PG7VL_M"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_PG7VL_M"};
	};
	class CUP_O_Partisans_Soldier_MG: CUP_O_sla_Soldier_09
	{
		weapons[] = {"CUP_lmg_PKM","Throw","Put"};
		respawnWeapons[] = {"CUP_lmg_PKM","Throw","Put"};
		magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class CUP_O_Partisans_Medic: CUP_O_sla_Soldier_08
	{
		weapons[] = {"hlc_rifle_ak74_dirty2","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak74_dirty2","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class CUP_O_Partisans_Engineer: CUP_O_sla_Soldier_09
	{
		weapons[] = {"hlc_rifle_ak74_dirty2","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak74_dirty2","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
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
	class CUP_V_O_SLA_Carrier_Belt: CUP_Vest_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_O_SLA_Carrier_Belt_ARM: CUP_Vest_Camo_Base
	{
		scope = 2;
		displayName = "SLA Carrier Belt";
		picture = "\A3\characters_f\Data\UI\icon_V_TacVest_blk_CA.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_sla\CUP_sla_Carrier_Belt.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_NAPA\data\flecktarn_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_sla\CUP_sla_Carrier_Belt.p3d";
			containerClass = "Supply80";
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
	class CUP_V_O_SLA_Carrier_Belt02: CUP_Vest_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_O_SLA_Carrier_Belt02_ARM: CUP_Vest_Camo_Base
	{
		scope = 2;
		displayName = "SLA Carrier Belt (2)";
		picture = "\A3\characters_f\Data\UI\icon_V_TacVest_blk_CA.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_sla\CUP_sla_Carrier_Belt02.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_NAPA\data\flecktarn_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_sla\CUP_sla_Carrier_Belt02.p3d";
			containerClass = "Supply80";
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
	class CUP_V_O_SLA_Carrier_Belt03: CUP_Vest_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_O_SLA_Carrier_Belt03_ARM: CUP_Vest_Camo_Base
	{
		scope = 2;
		displayName = "SLA Carrier Belt (GL)";
		picture = "\A3\characters_f\Data\UI\icon_V_TacVest_blk_CA.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_sla\CUP_sla_Carrier_Belt03.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_NAPA\data\flecktarn_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_sla\CUP_sla_Carrier_Belt03.p3d";
			containerClass = "Supply120";
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
	class CUP_V_O_SLA_Flak_Vest01: CUP_Vest_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_O_SLA_Flak_Vest01_ARM: CUP_Vest_Camo_Base
	{
		scope = 2;
		displayName = "6B3 Flak Vest (SLA)";
		picture = "\A3\characters_f\Data\UI\icon_V_TacVest_blk_CA.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_sla\CUP_sla_flak.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_sla\CUP_sla_flak.p3d";
			containerClass = "Supply90";
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
	class CUP_V_O_SLA_Flak_Vest02: CUP_Vest_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_O_SLA_Flak_Vest02_ARM: CUP_Vest_Camo_Base
	{
		scope = 2;
		displayName = "6B3 Flak Vest NCO";
		picture = "\A3\characters_f\Data\UI\icon_V_TacVest_blk_CA.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_sla\CUP_sla_flak_nco.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_sla\CUP_sla_flak_nco.p3d";
			containerClass = "Supply90";
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
	class CUP_V_O_SLA_Flak_Vest03: CUP_Vest_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_O_SLA_Flak_Vest03_ARM: CUP_Vest_Camo_Base
	{
		scope = 2;
		displayName = "6B3 Flak Vest";
		picture = "\A3\characters_f\Data\UI\icon_V_TacVest_blk_CA.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_sla\CUP_sla_flak02.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_sla\CUP_sla_flak02.p3d";
			containerClass = "Supply90";
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