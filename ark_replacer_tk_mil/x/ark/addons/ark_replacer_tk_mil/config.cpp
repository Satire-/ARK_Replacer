class CfgPatches
{
	class ARK_Replacer_TK_MIL
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_Creatures_Military_TakiInsurgents"};
	};
};
class UniformSlotInfo;
class CfgVehicles
{
	class Man;
	class CAManBase;
	class SoldierWB;
	class CUP_B_RPGPack_Khaki;
	class CUP_B_AlicePack_Khaki;
	class CUP_B_CivPack_WDL;
	class CUP_B_TIK_CivPack_WDL_Ammo: CUP_B_CivPack_WDL
	{
		author = "CUP_AUTHOR_STRING";
		scope = 1;
		dlc = "CUP_Units";
		scopeCurator = 0;
		displayName = "Ammo Pack";
		class TransportMagazines
		{
			class _xx_hlc_20Rnd_762x51_B_fal
			{
				magazine = "hlc_20Rnd_762x51_B_fal";
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
	class CUP_B_TKI_Backpack_RPG: CUP_B_RPGPack_Khaki
	{
		author = "CUP_AUTHOR_STRING";
		scope = 1;
		dlc = "CUP_Units";
		scopeCurator = 0;
		displayName = "RPG pack";
		class TransportMagazines
		{
			class _xx_CUP_PG7VR_M
			{
				magazine = "CUP_PG7VR_M";
				count = 2;
			};
			class _xx_CUP_PG7VL_M
			{
				magazine = "CUP_PG7VL_M";
				count = 1;
			};
		};
	};
	class CUP_B_TKG_Backpack_RPG: CUP_B_RPGPack_Khaki
	{
		author = "CUP_AUTHOR_STRING";
		scope = 1;
		dlc = "CUP_Units";
		scopeCurator = 0;
		displayName = "RPG pack";
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
	class CUP_B_TKI_Backpack_Gunner_RPG: CUP_B_RPGPack_Khaki
	{
		author = "CUP_AUTHOR_STRING";
		scope = 1;
		dlc = "CUP_Units";
		scopeCurator = 0;
		displayName = "RPG pack";
		class TransportMagazines
		{
			class _xx_CUP_PG7VL_M
			{
				magazine = "CUP_PG7VL_M";
				count = 1;
			};
		};
	};
	class CUP_B_TKI_CivPack_WDL_RPK: CUP_B_CivPack_WDL
	{
		author = "CUP_AUTHOR_STRING";
		scope = 1;
		dlc = "CUP_Units";
		scopeCurator = 0;
		class TransportMagazines
		{
			class _xx_hlc_75Rnd_762x39_m_rpk
			{
				magazine = "hlc_75Rnd_762x39_m_rpk";
				count = 5;
			};
			class _xx_CUP_HandGrenade_RGD5
			{
				magazine = "CUP_HandGrenade_RGD5";
				count = 2;
			};
		};
	};
	class CUP_B_TKI_CivPack_WDL_RPK_45: CUP_B_CivPack_WDL
	{
		author = "CUP_AUTHOR_STRING";
		scope = 1;
		dlc = "CUP_Units";
		scopeCurator = 0;
		class TransportMagazines
		{
			class _xx_hlc_45Rnd_545x39_t_rpk
			{
				magazine = "hlc_45Rnd_545x39_t_rpk";
				count = 9;
			};
			class _xx_CUP_HandGrenade_RGD5
			{
				magazine = "CUP_HandGrenade_RGD5";
				count = 2;
			};
		};
	};
	class CUP_B_TKI_AlicePack_Khaki_AmmoAK74: CUP_B_AlicePack_Khaki
	{
		author = "CUP_AUTHOR_STRING";
		scope = 1;
		dlc = "CUP_Units";
		scopeCurator = 0;
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_545x39_AK_M
			{
				magazine = "hlc_30Rnd_545x39_B_AK";
				count = 6;
			};
			class _xx_CUP_1Rnd_HE_GP25_M
			{
				magazine = "CUP_1Rnd_HE_GP25_M";
				count = 2;
			};
			class _xx_CUP_HandGrenade_RGD5
			{
				magazine = "CUP_HandGrenade_RGD5";
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
	class CUP_B_TKG_AlicePack_Khaki_AmmoAK47: CUP_B_AlicePack_Khaki
	{
		author = "CUP_AUTHOR_STRING";
		scope = 1;
		dlc = "CUP_Units";
		scopeCurator = 0;
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_762x39_AK47_M
			{
				magazine = "CUP_30Rnd_762x39_AK47_M";
				count = 6;
			};
			class _xx_CUP_HandGrenade_RGD5
			{
				magazine = "CUP_HandGrenade_RGD5";
				count = 4;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 1;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 1;
			};
		};
	};
	class CUP_B_TKI_AlicePack_MG: CUP_B_AlicePack_Khaki
	{
		author = "CUP_AUTHOR_STRING";
		scope = 1;
		dlc = "CUP_Units";
		scopeCurator = 0;
		class TransportMagazines
		{
			class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
				count = 2;
			};
		};
	};
	class CUP_B_TKI_AlicePack_Mechanic: CUP_B_AlicePack_Khaki
	{
		scope = 1;
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
	class CUP_B_TKI_AlicePack_Exp: CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_CUP_PipeBomb_M
			{
				magazine = "CUP_PipeBomb_M";
				count = 2;
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
	class CUP_Creatures_Military_TKI_Insurgent_Base;
	class CUP_O_TKI_Man_01;
	class CUP_O_TKI_Man_02;
	class CUP_O_TKI_Man_03;
	class CUP_O_TKI_Man_04;
	class CUP_O_TKI_Man_05;
	class CUP_O_TKI_Man_06;
	class CUP_O_TKI_Man_07;
	class CUP_O_TKI_Man_08;
	class CUP_O_TKI_Man_09;
	class CUP_O_TKI_Man_10;
	class CUP_O_TKI_Man_11;
	class CUP_O_TKI_Man_12;
	class CUP_O_TK_INS_Soldier: CUP_O_TKI_Man_01
	{
		weapons[] = {"hlc_rifle_ak74_dirty2","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak74_dirty2","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK"};
	};
	class CUP_O_TK_INS_Soldier_AAT: CUP_O_TKI_Man_02
	{
		weapons[] = {"hlc_rifle_ak74_dirty2","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak74_dirty2","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK"};
	};
	class CUP_O_TK_INS_Soldier_GL: CUP_O_TKI_Man_03
	{
		weapons[] = {"hlc_rifle_aks74_GL","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74_GL","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M"};
	};
	class CUP_O_TK_INS_Soldier_Enfield;
	class CUP_O_TK_INS_Soldier_FNFAL: CUP_O_TKI_Man_04
	{
		weapons[] = {"hlc_rifle_FAL5061","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_FAL5061","Throw","Put"};
		magazines[] = {"hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal"};
		respawnMagazines[] = {"hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal"};
	};
	class CUP_O_TK_INS_Soldier_AA: CUP_O_TKI_Man_08
	{
		weapons[] = {"hlc_rifle_aks74u","CUP_launch_9K32Strela","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74u","CUP_launch_9K32Strela","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_Strela_2_M"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_Strela_2_M"};
	};
	class CUP_O_TK_INS_Soldier_AT: CUP_O_TKI_Man_02
	{
		weapons[] = {"hlc_rifle_ak74_dirty2","CUP_launch_RPG7V","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak74_dirty2","CUP_launch_RPG7V","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_PG7VL_M"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_PG7VL_M"};
	};
	class CUP_O_TK_INS_Soldier_TL: CUP_O_TKI_Man_01
	{
		weapons[] = {"hlc_rifle_aks74_GL","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74_GL","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","SmokeShell","SmokeShellBlue","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","SmokeShell","SmokeShellBlue","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M"};
	};
	class CUP_O_TK_INS_Sniper;
	class CUP_O_TK_INS_Soldier_AR: CUP_O_TKI_Man_03
	{
		backpack = "CUP_B_TKI_CivPack_WDL_RPK_45";
		weapons[] = {"hlc_rifle_rpk74n","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_rpk74n","Throw","Put"};
		magazines[] = {"hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk"};
		respawnMagazines[] = {"hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk"};
	};
	class CUP_O_TK_INS_Soldier_MG;
	class CUP_O_TK_INS_Guerilla_Medic;
	class CUP_O_TK_INS_Commander: CUP_O_TKI_Man_06
	{
		weapons[] = {"hlc_rifle_aks74u","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74u","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","SmokeShellBlue"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShell","SmokeShellBlue"};
	};
	class CUP_O_TK_INS_Mechanic: CUP_O_TKI_Man_03
	{
		weapons[] = {"hlc_rifle_ak74_dirty2","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak74_dirty2","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK"};
	};
	class CUP_O_TK_INS_Bomber: CUP_O_TKI_Man_05
	{
		weapons[] = {"hlc_rifle_ak74_dirty2","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak74_dirty2","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK"};
	};

	class CUP_Creatures_Military_TKG_Guerrilla_Base;
	class CUP_I_TKG_Man_01;
	class CUP_I_TKG_Man_02;
	class CUP_I_TKG_Man_03;
	class CUP_I_TKG_Man_04;
	class CUP_I_TKG_Man_05;
	class CUP_I_TKG_Man_06;
	class CUP_I_TKG_Man_07;
	class CUP_I_TKG_Man_08;
	class CUP_I_TKG_Man_09;
	class CUP_I_TKG_Man_10;
	class CUP_I_TKG_Man_11;
	class CUP_I_TKG_Man_12;
	class CUP_I_TK_GUE_Soldier: CUP_I_TKG_Man_09
	{
		weapons[] = {"hlc_rifle_akm","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akm","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak"};
	};
	class CUP_I_TK_GUE_Soldier_AAT: CUP_I_TKG_Man_08
	{
		weapons[] = {"hlc_rifle_akm","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akm","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak"};
	};
	class CUP_I_TK_GUE_Soldier_AK_47S: CUP_I_TKG_Man_12
	{
		weapons[] = {"hlc_rifle_ak47","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak47","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak"};
	};
	class CUP_I_TK_GUE_Soldier_M16A2;
	class CUP_I_TK_GUE_Soldier_GL;
	class CUP_I_TK_GUE_Guerilla_Enfield;
	class CUP_I_TK_GUE_Soldier_AA: CUP_I_TKG_Man_05
	{
		weapons[] = {"hlc_rifle_akm","CUP_launch_FIM92Stinger","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akm","CUP_launch_FIM92Stinger","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","CUP_Stinger_M"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","CUP_Stinger_M"};
	};
	class CUP_I_TK_GUE_Soldier_AT: CUP_I_TKG_Man_11
	{
		weapons[] = {"hlc_rifle_akm","CUP_launch_RPG7V","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akm","CUP_launch_RPG7V","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","CUP_PG7VL_M"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","CUP_PG7VL_M"};
	};
	class CUP_I_TK_GUE_Soldier_HAT;
	class CUP_I_TK_GUE_Soldier_TL: CUP_I_TKG_Man_07
	{
		weapons[] = {"hlc_rifle_ak47","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak47","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","SmokeShell","SmokeShellBlue"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","SmokeShell","SmokeShellBlue"};
	};
	class CUP_I_TK_GUE_Sniper;
	class CUP_I_TK_GUE_Soldier_AR: CUP_I_TKG_Man_03
	{
		backpack = "CUP_B_TKI_CivPack_WDL_RPK";
		weapons[] = {"hlc_rifle_rpk","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_rpk","Throw","Put"};
		magazines[] = {"hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk"};
		respawnMagazines[] = {"hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk"};
	};
	class CUP_I_TK_GUE_Soldier_MG: CUP_I_TKG_Man_08
	{
		weapons[] = {"CUP_lmg_PKM","Throw","Put"};
		respawnWeapons[] = {"CUP_lmg_PKM","Throw","Put"};
		magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
		respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
	};
	class CUP_I_TK_GUE_Guerilla_Medic;
	class CUP_I_TK_GUE_Commander: CUP_I_TKG_Man_02
	{
		weapons[] = {"hlc_rifle_ak47","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak47","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak"};
	};
	class CUP_I_TK_GUE_Mechanic: CUP_I_TKG_Man_12
	{
		weapons[] = {"hlc_rifle_ak74_dirty2","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak74_dirty2","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK"};
	};
	class CUP_I_TK_GUE_Demo: CUP_I_TKG_Man_09
	{
		weapons[] = {"hlc_rifle_ak74_dirty2","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak74_dirty2","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK"};
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
	class CUP_Vest_TKI_Camo_Base: ItemCore
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
		};
	};
	class CUP_V_OI_TKI_Jacket1_01: CUP_Vest_TKI_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_OI_TKI_Jacket1_01_ARM: CUP_Vest_TKI_Camo_Base
	{
		scope = 2;
		author = "CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		displayName = "Takistani Jacket (Chocolate Chip)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\ui\icon_v_jacket_01_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_opfor01_1_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_opfor01_1_co.paa"};
			containerClass = "Supply140";
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket.p3d";
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
	class CUP_V_OI_TKI_Jacket1_02: CUP_Vest_TKI_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_OI_TKI_Jacket1_02_ARM: CUP_Vest_TKI_Camo_Base
	{
		scope = 2;
		author = "CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		displayName = "Takistani Jacket (Snow)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\ui\icon_v_jacket_02_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_opfor01_2_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_opfor01_2_co.paa"};
			containerClass = "Supply140";
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket.p3d";
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
	class CUP_V_OI_TKI_Jacket1_03: CUP_Vest_TKI_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_OI_TKI_Jacket1_03_ARM: CUP_Vest_TKI_Camo_Base
	{
		scope = 2;
		author = "CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		displayName = "Takistani Jacket (Woodland)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\ui\icon_v_jacket_03_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_opfor01_3_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_opfor01_3_co.paa"};
			containerClass = "Supply140";
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket.p3d";
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
	class CUP_V_OI_TKI_Jacket1_04: CUP_Vest_TKI_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_OI_TKI_Jacket1_04_ARM: CUP_Vest_TKI_Camo_Base
	{
		scope = 2;
		author = "CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		displayName = "Takistani Jacket (Black)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\ui\icon_v_jacket_04_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_ind01_1_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_ind01_1_co.paa"};
			containerClass = "Supply140";
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket.p3d";
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
	class CUP_V_OI_TKI_Jacket1_05: CUP_Vest_TKI_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_OI_TKI_Jacket1_05_ARM: CUP_Vest_TKI_Camo_Base
	{
		scope = 2;
		author = "CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		displayName = "Takistani Jacket (Grey)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\ui\icon_v_jacket_05_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_ind01_2_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_ind01_2_co.paa"};
			containerClass = "Supply140";
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket.p3d";
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
	class CUP_V_OI_TKI_Jacket1_06: CUP_Vest_TKI_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_OI_TKI_Jacket1_06_ARM: CUP_Vest_TKI_Camo_Base
	{
		scope = 2;
		author = "CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		displayName = "Takistani Jacket (Brown)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\ui\icon_v_jacket_06_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_ind01_3_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_ind01_3_co.paa"};
			containerClass = "Supply140";
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket.p3d";
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
	class CUP_V_OI_TKI_Jacket2_01: CUP_Vest_TKI_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_OI_TKI_Jacket2_01_ARM: CUP_Vest_TKI_Camo_Base
	{
		scope = 2;
		author = "CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		displayName = "Takistani Waistcoat w/ pouches (Woodland)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\ui\icon_v_jacket2_01_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket2.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_opfor05_1_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_opfor05_1_co.paa"};
			containerClass = "Supply140";
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket2.p3d";
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
	class CUP_V_OI_TKI_Jacket2_02: CUP_Vest_TKI_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_OI_TKI_Jacket2_02_ARM: CUP_Vest_TKI_Camo_Base
	{
		scope = 2;
		author = "CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		displayName = "Takistani Waistcoat w/ pouches (Faded woodland)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\ui\icon_v_jacket2_02_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket2.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_opfor05_2_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_opfor05_2_co.paa"};
			containerClass = "Supply140";
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket2.p3d";
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
	class CUP_V_OI_TKI_Jacket2_03: CUP_Vest_TKI_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_OI_TKI_Jacket2_03_ARM: CUP_Vest_TKI_Camo_Base
	{
		scope = 2;
		author = "CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		displayName = "Takistani Waistcoat w/ pouches (Desert)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\ui\icon_v_jacket2_03_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket2.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_opfor05_3_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_opfor05_3_co.paa"};
			containerClass = "Supply140";
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket2.p3d";
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
	class CUP_V_OI_TKI_Jacket2_04: CUP_Vest_TKI_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_OI_TKI_Jacket2_04_ARM: CUP_Vest_TKI_Camo_Base
	{
		scope = 2;
		author = "CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		displayName = "Takistani Waistcoat w/ pouches (Black)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\ui\icon_v_jacket2_04_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket2.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_ind05_1_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_ind05_1_co.paa"};
			containerClass = "Supply140";
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket2.p3d";
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
	class CUP_V_OI_TKI_Jacket2_05: CUP_Vest_TKI_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_OI_TKI_Jacket2_05_ARM: CUP_Vest_TKI_Camo_Base
	{
		scope = 2;
		author = "CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		displayName = "Takistani Waistcoat w/ pouches (Grey Tweed)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\ui\icon_v_jacket2_05_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket2.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_ind05_2_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_ind05_2_co.paa"};
			containerClass = "Supply140";
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket2.p3d";
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
	class CUP_V_OI_TKI_Jacket2_06: CUP_Vest_TKI_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_OI_TKI_Jacket2_06_ARM: CUP_Vest_TKI_Camo_Base
	{
		scope = 2;
		author = "CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		displayName = "Takistani Waistcoat w/ pouches (Brown Hemp)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\ui\icon_v_jacket2_06_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket2.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_ind05_3_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_ind05_3_co.paa"};
			containerClass = "Supply140";
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket2.p3d";
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
	class CUP_V_OI_TKI_Jacket3_01: CUP_Vest_TKI_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_OI_TKI_Jacket3_01_ARM: CUP_Vest_TKI_Camo_Base
	{
		scope = 2;
		author = "CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		displayName = "Takistani Utility Jacket (Woodland)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\ui\icon_v_jacket3_01_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket3.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_opfor02_1_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_opfor02_1_co.paa"};
			containerClass = "Supply140";
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket3.p3d";
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
	class CUP_V_OI_TKI_Jacket3_02: CUP_Vest_TKI_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_OI_TKI_Jacket3_02_ARM: CUP_Vest_TKI_Camo_Base
	{
		scope = 2;
		author = "CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		displayName = "Takistani Utility Jacket (Chocolate Chip)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\ui\icon_v_jacket3_02_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket3.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_opfor02_2_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_opfor02_2_co.paa"};
			containerClass = "Supply140";
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket3.p3d";
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
	class CUP_V_OI_TKI_Jacket3_03: CUP_Vest_TKI_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_OI_TKI_Jacket3_03_ARM: CUP_Vest_TKI_Camo_Base
	{
		scope = 2;
		author = "CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		displayName = "Takistani Utility Jacket (Desert)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\ui\icon_v_jacket3_03_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket3.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_opfor02_3_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_opfor02_3_co.paa"};
			containerClass = "Supply140";
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket3.p3d";
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
	class CUP_V_OI_TKI_Jacket3_04: CUP_Vest_TKI_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_OI_TKI_Jacket3_04_ARM: CUP_Vest_TKI_Camo_Base
	{
		scope = 2;
		author = "CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		displayName = "Takistani Utility Jacket (Brown)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\ui\icon_v_jacket3_04_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket3.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_ind02_1_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_ind02_1_co.paa"};
			containerClass = "Supply140";
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket3.p3d";
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
	class CUP_V_OI_TKI_Jacket3_05: CUP_Vest_TKI_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_OI_TKI_Jacket3_05_ARM: CUP_Vest_TKI_Camo_Base
	{
		scope = 2;
		author = "CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		displayName = "Takistani Utility Jacket (Grey)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\ui\icon_v_jacket3_05_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket3.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_ind02_2_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_ind02_2_co.paa"};
			containerClass = "Supply140";
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket3.p3d";
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
	class CUP_V_OI_TKI_Jacket3_06: CUP_Vest_TKI_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_OI_TKI_Jacket3_06_ARM: CUP_Vest_TKI_Camo_Base
	{
		scope = 2;
		author = "CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		displayName = "Takistani Utility Jacket (Light Brown)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\ui\icon_v_jacket3_06_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket3.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_ind02_3_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_ind02_3_co.paa"};
			containerClass = "Supply140";
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket3.p3d";
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
	class CUP_V_OI_TKI_Jacket4_01: CUP_Vest_TKI_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_OI_TKI_Jacket4_01_ARM: CUP_Vest_TKI_Camo_Base
	{
		scope = 2;
		author = "CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		displayName = "Takistani Jacket/pouches (Woodland)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\ui\icon_v_jacket4_01_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket4.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_opfor03_1_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_opfor03_1_co.paa"};
			containerClass = "Supply140";
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket4.p3d";
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
	class CUP_V_OI_TKI_Jacket4_02: CUP_Vest_TKI_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_OI_TKI_Jacket4_02_ARM: CUP_Vest_TKI_Camo_Base
	{
		scope = 2;
		author = "CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		displayName = "Takistani Jacket/pouches (Desert)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\ui\icon_v_jacket4_02_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket4.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_opfor03_2_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_opfor03_2_co.paa"};
			containerClass = "Supply140";
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket4.p3d";
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
	class CUP_V_OI_TKI_Jacket4_03: CUP_Vest_TKI_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_OI_TKI_Jacket4_03_ARM: CUP_Vest_TKI_Camo_Base
	{
		scope = 2;
		author = "CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		displayName = "Takistani Jacket/pouches (Tri-Color Desert)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\ui\icon_v_jacket4_03_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket4.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_opfor03_3_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_opfor03_3_co.paa"};
			containerClass = "Supply140";
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket4.p3d";
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
	class CUP_V_OI_TKI_Jacket4_04: CUP_Vest_TKI_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_OI_TKI_Jacket4_04_ARM: CUP_Vest_TKI_Camo_Base
	{
		scope = 2;
		author = "CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		displayName = "Takistani Jacket/pouches (Blue/Grey)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\ui\icon_v_jacket4_04_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket4.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_ind03_1_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_ind03_1_co.paa"};
			containerClass = "Supply140";
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket4.p3d";
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
	class CUP_V_OI_TKI_Jacket4_05: CUP_Vest_TKI_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_OI_TKI_Jacket4_05_ARM: CUP_Vest_TKI_Camo_Base
	{
		scope = 2;
		author = "CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		displayName = "Takistani Jacket/pouches (Brown)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\ui\icon_v_jacket4_05_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket4.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_ind03_2_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_ind03_2_co.paa"};
			containerClass = "Supply140";
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket4.p3d";
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
	class CUP_V_OI_TKI_Jacket4_06: CUP_Vest_TKI_Camo_Base
	{
		scope = 1;
	};
	class CUP_V_OI_TKI_Jacket4_06_ARM: CUP_Vest_TKI_Camo_Base
	{
		scope = 2;
		author = "CUP_AUTHOR_STRING";
		dlc = "CUP_Units";
		displayName = "Takistani Jacket/pouches (Light Brown)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\ui\icon_v_jacket4_06_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket4.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_ind03_3_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_ind03_3_co.paa"};
			containerClass = "Supply140";
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket4.p3d";
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