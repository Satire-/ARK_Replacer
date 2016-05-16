class CfgPatches
{
    class ARK_Replacer_Chutes
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Air_F","A3_Air_F_Beta"};
    };
};
class CfgVehicles
{
    class Steerable_Parachute_F
    class ARK_Steerable_Parachute_F_ocamo: Steerable_Parachute_F
    {
        displayName = "Carryall Backpack Chute (Hex)";
        picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_hex.paa";
        hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_hex_co.paa"};
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
        isbackpack = 1;
        vehicleClass = "Air"; //"Backpack"
        allowedSlots[] = {901};
        armor = 200;
        maximumLoad = 320;
        mass = 60;
    };

    class ARK_Steerable_Parachute_F_oucamo: Steerable_Parachute_F
    {
        displayName = "Carryall Backpack Chute (Urban)";
        picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_oucamo.paa";
        hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_oucamo_co.paa"};
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
        isbackpack = 1;
        vehicleClass = "Air"; //"Backpack"
        allowedSlots[] = {901};
        armor = 200;
        maximumLoad = 320;
        mass = 60;
    };

    class ARK_Steerable_Parachute_F_mcamo: Steerable_Parachute_F
    {
        displayName = "Carryall Backpack Chute (MTP)";
        picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_mcamo.paa";
        hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_mcamo_co.paa"};
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
        isbackpack = 1;
        vehicleClass = "Air"; //"Backpack"
        allowedSlots[] = {901};
        armor = 200;
        maximumLoad = 320;
        mass = 60;
    }; 

    class ARK_Steerable_Parachute_F_khk: Steerable_Parachute_F
    {
        displayName = "Carryall Backpack Chute (Khaki)";
        picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_khk.paa";
        hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_khk_co.paa"};
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
        isbackpack = 1;
        vehicleClass = "Air"; //"Backpack"
        allowedSlots[] = {901};
        armor = 200;
        maximumLoad = 320;
        mass = 60;
    }; 
    
    class ARK_Steerable_Parachute_F_cbr: Steerable_Parachute_F
    {
        displayName = "Carryall Backpack Chute (Coyote)";
        picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_cbr.paa";
        hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_cbr_co.paa"};
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
        isbackpack = 1;
        vehicleClass = "Air"; //"Backpack"
        allowedSlots[] = {901};
        armor = 200;
        maximumLoad = 320;
        mass = 60;
    }; 
};