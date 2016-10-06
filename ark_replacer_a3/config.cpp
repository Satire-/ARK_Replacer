class CfgPatches
{
	class ARK_Replacer_A3
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F","CUP_Weapons_M136"};
	};
};
class CfgVehicles
{
	class B_Carryall_cbr;
	class B_Kitbag_rgr;
	class SoldierWB;
	class B_Soldier_04_f;
	class B_Soldier_support_base_F;
	class B_Soldier_base_F;
	class B_soldier_LAT_F;
	class B_solider_AT4: B_soldier_LAT_F
	{
        displayName = "AT Rifleman (AT-4)";
		weapons[] = {"arifle_MXC_F","CUP_launch_M136","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MXC_F","CUP_launch_M136","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellBlue","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellBlue","Chemlight_green","Chemlight_green"};
        backpack = "B_Kitbag_rgr";
	};
	class I_Soldier_base_F;
    class I_Soldier_LAT_F;
	class I_Soldier_AT4: I_Soldier_LAT_F
	{
        displayName = "AT Rifleman (AT-4)";
		weapons[] = {"arifle_Mk20_ACO_pointer_F","CUP_launch_M136","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20_ACO_pointer_F","CUP_launch_M136","hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        backpack = "B_Kitbag_rgr";
	};
    class O_Soldier_base_F;
    class O_Soldier_LAT_F;
	class O_Soldier_RPG18: O_Soldier_LAT_F
	{
        displayName = "AT Rifleman (RPG-18)";
		weapons[] = {"arifle_Mk20_ACO_pointer_F","CUP_launch_RPG18","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20_ACO_pointer_F","CUP_launch_RPG18","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        backpack = "B_Kitbag_rgr";
	};
    class B_G_Soldier_LAT_F;
	class B_G_Soldier_RPG7: B_G_Soldier_LAT_F
	{
        displayName = "AT Rifleman (RPG-7)";
		weapons[] = {"arifle_TRG20_F","CUP_launch_RPG7V","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[] = {"arifle_TRG20_F","CUP_launch_RPG7V","hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        backpack = "B_Kitbag_rgr_RPG7_RAT";
	};
    
};
class CfgWeapons
{
	class CUP_launch_M136;
    class CUP_launch_RPG18;
    class UniformItem;
    class U_I_C_Soldier_Bandit_1_F;
    class U_I_C_Soldier_Bandit_1_F_ARK: U_I_C_Soldier_Bandit_1_F
	{
        class ItemInfo: UniformItem
		{
			containerClass = "Supply140";
            uniformClass = "I_C_Soldier_Bandit_1_F";
            uniformModel = "-";
            mass = 20;
		};
	};
    class U_I_C_Soldier_Bandit_2_F;
    class U_I_C_Soldier_Bandit_2_F_ARK: U_I_C_Soldier_Bandit_2_F
	{
        class ItemInfo: UniformItem
		{
			containerClass = "Supply140";
            uniformClass = "I_C_Soldier_Bandit_2_F";
            uniformModel = "-";
            mass = 20;
		};
	};
    class U_I_C_Soldier_Bandit_3_F;
    class U_I_C_Soldier_Bandit_3_F_ARK: U_I_C_Soldier_Bandit_3_F
	{
        class ItemInfo: UniformItem
		{
			containerClass = "Supply140";
            uniformClass = "I_C_Soldier_Bandit_3_F";
            uniformModel = "-";
            mass = 20;
		};
	};
    class U_I_C_Soldier_Bandit_4_F;
    class U_I_C_Soldier_Bandit_4_F_ARK: U_I_C_Soldier_Bandit_4_F
	{
        class ItemInfo: UniformItem
		{
			containerClass = "Supply140";
            uniformClass = "I_C_Soldier_Bandit_4_F";
            uniformModel = "-";
            mass = 20;
		};
	};
    class U_I_C_Soldier_Bandit_5_F;
    class U_I_C_Soldier_Bandit_5_F_ARK: U_I_C_Soldier_Bandit_5_F
	{
        class ItemInfo: UniformItem
		{
			containerClass = "Supply140";
            uniformClass = "I_C_Soldier_Bandit_5_F";
            uniformModel = "-";
            mass = 20;
		};
	};
    class U_I_C_Soldier_Camo_F;
    class U_I_C_Soldier_Camo_F_ARK: U_I_C_Soldier_Camo_F
	{
        class ItemInfo: UniformItem
		{
			containerClass = "Supply140";
            uniformClass = "I_C_Soldier_Camo_F";
            uniformModel = "-";
            mass = 20;
		};
	};
    class U_I_C_Soldier_Para_1_F;
    class U_I_C_Soldier_Para_1_F_ARK: U_I_C_Soldier_Para_1_F
	{
        class ItemInfo: UniformItem
		{
			containerClass = "Supply140";
            uniformClass = "I_C_Soldier_Para_1_F";
            uniformModel = "-";
            mass = 20;
		};
	};
    class U_I_C_Soldier_Para_2_F;
    class U_I_C_Soldier_Para_2_F_ARK: U_I_C_Soldier_Para_2_F
	{
        class ItemInfo: UniformItem
		{
			containerClass = "Supply140";
            uniformClass = "I_C_Soldier_Para_2_F";
            uniformModel = "-";
            mass = 20;
		};
	};
    class U_I_C_Soldier_Para_3_F;
    class U_I_C_Soldier_Para_3_F_ARK: U_I_C_Soldier_Para_3_F
	{
        class ItemInfo: UniformItem
		{
			containerClass = "Supply140";
            uniformClass = "I_C_Soldier_Para_3_F";
            uniformModel = "-";
            mass = 20;
		};
	};
    class U_I_C_Soldier_Para_4_F;
    class U_I_C_Soldier_Para_4_F_ARK: U_I_C_Soldier_Para_4_F
	{
        class ItemInfo: UniformItem
		{
			containerClass = "Supply140";
            uniformClass = "I_C_Soldier_Para_4_F";
            uniformModel = "-";
            mass = 20;
		};
	};
    class U_I_C_Soldier_Para_5_F;
    class U_I_C_Soldier_Para_5_F_ARK: U_I_C_Soldier_Para_5_F
	{
        class ItemInfo: UniformItem
		{
			containerClass = "Supply140";
            uniformClass = "I_C_Soldier_Para_5_F";
            uniformModel = "-";
            mass = 20;
		};
	};
    class U_BG_Guerilla1_1;
    class U_BG_Guerilla1_1_ARK: U_BG_Guerilla1_1
	{
        class ItemInfo: UniformItem
		{
			containerClass = "Supply140";
            uniformClass = "B_G_Soldier_F";
            uniformModel = "-";
            mass = 20;
		};
	};
    class U_BG_Guerilla2_1;
    class U_BG_Guerilla2_1_ARK: U_BG_Guerilla2_1
	{
        class ItemInfo: UniformItem
		{
			containerClass = "Supply140";
            uniformClass = "B_G_Soldier_AR_F";
            uniformModel = "-";
            mass = 20;
		};
	};
    class U_BG_Guerilla2_2;
    class U_BG_Guerilla2_2_ARK: U_BG_Guerilla2_2
	{
        class ItemInfo: UniformItem
		{
			containerClass = "Supply140";
            uniformClass = "B_G_engineer_F";
            uniformModel = "-";
            mass = 20;
		};
	};
    class U_BG_Guerilla2_3;
    class U_BG_Guerilla2_3_ARK: U_BG_Guerilla2_3
	{
        class ItemInfo: UniformItem
		{
			containerClass = "Supply140";
            uniformClass = "B_G_medic_F";
            uniformModel = "-";
            mass = 20;
		};
	};
    class U_BG_Guerilla3_1;
    class U_BG_Guerilla3_1_ARK: U_BG_Guerilla3_1
	{
        class ItemInfo: UniformItem
		{
			containerClass = "Supply140";
            uniformClass = "B_G_Soldier_M_F";
            uniformModel = "-";
            mass = 20;
		};
	};
    class U_BG_Guerilla3_2;
    class U_BG_Guerilla3_2_ARK: U_BG_Guerilla3_2
	{
        class ItemInfo: UniformItem
		{
			containerClass = "Supply140";
            uniformClass = "B_G_Soldier_LAT_F";
            uniformModel = "-";
            mass = 20;
		};
	};
    class U_BG_Guerrilla_6_1;
    class U_BG_Guerrilla_6_1_ARK: U_BG_Guerrilla_6_1
	{
        class ItemInfo: UniformItem
		{
			containerClass = "Supply140";
            uniformClass = "B_G_Soldier_LAT_F";
            uniformModel = "-";
            mass = 20;
		};
	};
    class U_BG_leader;
    class U_BG_leader_ARK: U_BG_leader
	{
        class ItemInfo: UniformItem
		{
			containerClass = "Supply140";
            uniformClass = "B_G_Soldier_TL_F";
            uniformModel = "-";
            mass = 20;
		};
	};
    class U_B_GEN_Commander_F;
    class U_B_GEN_Commander_F_ARK: U_B_GEN_Commander_F
	{
        class ItemInfo: UniformItem
		{
			containerClass = "Supply140";
            uniformClass = "B_GEN_Commander_F";
            uniformModel = "-";
            mass = 20;
		};
	};
    class U_B_GEN_Soldier_F;
    class U_B_GEN_Soldier_F_ARK: U_B_GEN_Soldier_F
	{
        class ItemInfo: UniformItem
		{
			containerClass = "Supply140";
            uniformClass = "B_GEN_Soldier_F";
            uniformModel = "-";
            mass = 20;
		};
	};
};