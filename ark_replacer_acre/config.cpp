class CfgPatches
{
	class ARK_Replacer_ACRE
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CBA_MAIN"};
	};
};

class CfgWeapons {
    class Default;
    class ACRE_BaseRadio;
    class ItemCore;

    class ACRE_PRC152 : ACRE_BaseRadio {
        class ItemInfo
        {
            mass = 1;
            type = 0;
            scope = 0;
        };
    };
    class ACRE_PRC148 : ACRE_BaseRadio {
        class ItemInfo
        {
            mass = 1;
            type = 0;
            scope = 0;
        };
    };
    class ACRE_PRC343 : ACRE_BaseRadio {
                class ItemInfo
        {
            mass = 1;
            type = 0;
            scope = 0;
        };
    };
};