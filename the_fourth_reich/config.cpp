class CfgPatches 
{ 
    class the_fourth_reich
    { 
        units[] = {"Custom_Uniform_Mod";}; 
        weapons[] = {}; 
        requiredVersion = 0.1; 
 requiredAddons[] = {"a3_characters_F","a3_characters_F_beta", "A3_Characters_F_Common", "task_force_radio_items", "a3_characters_f_beta", "a3_characters_f_gamma","rhs_weapons","rhs_weapons2","rhs_weapons3","rhsusf_weapons","rhsusf_weapons2","rhsusf_weapons3","rhs_infantry","rhs_infantry2","rhsusf_infantry","rhsusf_infantry2","rhsgref_infantry","rhsgref_c_weapons"};
    }; 
}; 

//************************************************************************************************************************************************************************************************
//*****        Factions                  *********************************************************************************************************************************************************
//************************************************************************************************************************************************************************************************
class cfgFactionClasses 
{ 
    class the_fourth_reich
    { 
        displayName = "The Fourth Reich"; 
        priority = 3; // Position in list. 
        side = 0; // Opfor = 0, Blufor = 1, Indep = 2. 
        icon = "\the_fourth_reich\ui\NAZIFLAG.paa"; //Custom Icon 
    };  
}; 

class UniformSlotInfo 
{ 
    slotType = 0; 
    linkProxy = "-"; 
}; 

class CfgVehicles 
{     
    //************************************************************************************************************************************************************************************************
    //*****             Units                *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    class O_T_Recon_F; 
    
    class Reich_Commander: O_T_Recon_F {
        author = "Yettie"; 
        _generalMacro = "O_T_Recon_F"; 
        scope = 2; 
        displayName = "Reich Commander"; 
        identityTypes[] = {"Head_NATO", "G_NATO_default"}; 
        genericNames = "NATOMen"; 
        faction = "the_fourth_reich";
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; //Default NATO 
        uniformClass = "Nazi_Uniform_desert"; 
        hiddenSelections[] = {"Camo","Insignia"}; 
        hiddenSelectionsTextures[] = {"the_fourth_reich\data\Nazi_Uniform_desert.paa"}; 
        weapons[] = {"arifle_MX_ACO_pointer_F","hgun_Rook40_F","Binocular","Throw","Put"}; 
        respawnWeapons[] = {"arifle_MX_ACO_pointer_F","hgun_Rook40_F","Binocular","Throw","Put"}; ///match weapons[]
        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","MiniGrenade","MiniGrenade"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","MiniGrenade","MiniGrenade"}; // match magazines[]
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","Nazi_Vest_desert","Nazi_Helmet_desert"};
        respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","Nazi_Vest_desert","Nazi_Helmet_desert"};
    };

    class Reich_Grenadier: O_T_Recon_F {
        author = "Yettie"; 
        _generalMacro = "O_T_Recon_F"; 
        scope = 2; 
        displayName = "Reich Grenadier"; 
        identityTypes[] = {"Head_NATO", "G_NATO_default"}; 
        genericNames = "NATOMen"; 
        faction = "the_fourth_reich";
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; //NATO Rolled Up Sleeves 
        uniformClass = "Nazi_Uniform_desert"; 
        hiddenSelections[] = {"Camo","Insignia"}; 
        hiddenSelectionsTextures[] = {"the_fourth_reich\data\Nazi_Uniform_desert.paa"}; 
		weapons[] = {"arifle_MX_GL_ACO_F","Throw","Put"}; 
        respawnWeapons[] = {"arifle_MX_GL_ACO_F","Throw","Put"}; ///match weapons[]
        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell"}; // match

    };

    class Reich_Gunner: Reich_Grenadier {
        author = "Yettie"; 
        _generalMacro = "O_T_Recon_F"; 
        scope = 2; 
        displayName = "Reich Gunner"; 
        identityTypes[] = {"Head_NATO", "G_NATO_default"}; 
        genericNames = "NATOMen"; 
        faction = "the_fourth_reich";
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; //NATO Rolled Up Sleeves 
        uniformClass = "Nazi_Uniform_desert"; 
        hiddenSelections[] = {"Camo","Insignia"}; 
        hiddenSelectionsTextures[] = {"the_fourth_reich\data\Nazi_Uniform_desert.paa"}; 
		weapons[] = {"LMG_Mk200_MRCO_F","Throw","Put"}; 
        respawnWeapons[] = {"LMG_Mk200_MRCO_F","Throw","Put"}; ///match weapons[]
        magazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box"};
        respawnMagazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box"}; // match
    };

    class Reich_AT_Rifleman: Reich_Grenadier {
        author = "Yettie"; 
        _generalMacro = "O_T_Recon_F"; 
        scope = 2; 
        displayName = "Reich AT Rifleman"; 
        identityTypes[] = {"Head_NATO", "G_NATO_default"}; 
        genericNames = "NATOMen"; 
        faction = "the_fourth_reich";
		backpack = ""; // backpack
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; //NATO Rolled Up Sleeves 
        uniformClass = "Nazi_Uniform_desert"; 
        hiddenSelections[] = {"Camo","Insignia"}; 
        hiddenSelectionsTextures[] = {"the_fourth_reich\data\Nazi_Uniform_desert.paa"}; 
		weapons[] = {"arifle_MX_ACO_pointer_F","launch_NLAW_F","Binocular","Throw","Put"}; 
        respawnWeapons[] = {"arifle_MX_ACO_pointer_F","launch_NLAW_F","Throw","Put"}; ///match weapons[]
        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag"}; // match magazines[]

    };
	    class Reich_Heavy_MG: Reich_Grenadier {
        author = "Yettie"; 
        _generalMacro = "O_T_Recon_F"; 
        scope = 2; 
        displayName = "Reich HMG"; 
        identityTypes[] = {"Head_NATO", "G_NATO_default"}; 
        genericNames = "NATOMen"; 
        faction = "the_fourth_reich";
		backpack = ""; // backpack
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; //NATO Rolled Up Sleeves  
        hiddenSelections[] = {"Camo","Insignia"}; 
        hiddenSelectionsTextures[] = {"the_fourth_reich\data\Nazi_Uniform_desert.paa"}; 
		weapons[] = {"MMG_01_tan_F","Throw","Put"}; 
        respawnWeapons[] = {"MMG_01_tan_F","Throw","Put"}; ///match weapons[]
        magazines[] = {"150Rnd_93x64_Mag","150Rnd_93x64_Mag"};
        respawnMagazines[] = {"150Rnd_93x64_Mag","150Rnd_93x64_Mag"}; // match magazines[]

    
	    };
	    class Reich_MM: Reich_Grenadier {
        author = "Yettie"; 
        _generalMacro = "O_T_Recon_F"; 
        scope = 2; 
        displayName = "Reich Marksman"; 
        identityTypes[] = {"Head_NATO", "G_NATO_default"}; 
        genericNames = "NATOMen"; 
        faction = "the_fourth_reich";
		backpack = ""; // backpack
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; //NATO Rolled Up Sleeves  
        hiddenSelections[] = {"Camo","Insignia"}; 
        hiddenSelectionsTextures[] = {"the_fourth_reich\data\Nazi_Uniform_desert.paa"}; 
		weapons[] = {"arifle_MXM_Hamr_pointer_F","Binocular","Throw","Put"}; 
        respawnWeapons[] = {"arifle_MXM_Hamr_pointer_F","Throw","Put"}; ///match weapons[]
        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag"}; // match magazines[]

    };
	
    class Reich_Crew_Black: Reich_Grenadier {
        author = "Yettie"; 
        _generalMacro = "O_T_Recon_F"; 
        scope = 2; 
        displayName = "Vehicle Crewman"; 
        identityTypes[] = {"Head_NATO", "G_NATO_default"}; 
        genericNames = "NATOMen"; 
        faction = "the_fourth_reich";
		backpack = ""; // backpack
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; //NATO Rolled Up Sleeves 
        uniformClass = "Nazi_Crew_Black"; 
        hiddenSelections[] = {"Camo","Insignia"}; 
        hiddenSelectionsTextures[] = {"the_fourth_reich\data\Nazi_Crew_Black"}; 
		weapons[] = {"arifle_MXC_Black_F","Throw","Put"}; 
        respawnWeapons[] = {"arifle_MXC_Black_F","Throw","Put"}; ///match weapons[]
        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","NLAW_F","NLAW_F"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","NLAW_F","NLAW_F"}; // match magazines[]
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","V_Chestrig_blk","rhsusf_protech_helmet_rhino_ess"};
        respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","V_Chestrig_blk","rhsusf_protech_helmet_rhino_ess"};
    };
    class Reich_Commander_Black: Reich_Crew_Black {
        author = "Yettie"; 
        _generalMacro = "O_T_Recon_F"; 
        scope = 2; 
        displayName = "Vehicle Commander"; 
        identityTypes[] = {"Head_NATO", "G_NATO_default"}; 
        genericNames = "NATOMen"; 
        faction = "the_fourth_reich";
		backpack = ""; // backpack
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d"; //NATO Rolled Up Sleeves 
        hiddenSelections[] = {"Camo","Insignia"}; 
        hiddenSelectionsTextures[] = {"the_fourth_reich\data\Nazi_Crew_Black"}; 
		
    };

    class SS_Commander: Reich_Crew_Black {
        author = "Yettie"; 
        _generalMacro = "O_T_Recon_F"; 
        scope = 2; 
        displayName = "SS Commander"; 
        identityTypes[] = {"Head_NATO", "G_NATO_default"}; 
        genericNames = "NATOMen"; 
        faction = "the_fourth_reich";
		backpack = ""; // backpack
		uniformClass = "SS_Uniform"; 
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; //NATO Rolled Up Sleeves 
        hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"the_fourth_reich\data\SS_Uniform"};  
		weapons[] = {"SMG_05_F","Throw","Put"}; 
        respawnWeapons[] = {"SMG_05_F","hgun_Rook40_F","Throw","Put"}; ///match weapons[]
        magazines[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green"};
        respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green"}; // match magazines[]
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","V_PlateCarrier2_blk","SS_helmet"};
        respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","V_PlateCarrier2_blk","SS_helmet","rhs_ess_black"};	
    };

    class SS_Trooper_MG: SS_Commander {
        author = "Yettie"; 
        _generalMacro = "O_T_Recon_F"; 
        scope = 2; 
        displayName = "SS Trooper MG"; 
        identityTypes[] = {"Head_NATO", "G_NATO_default"}; 
        genericNames = "NATOMen"; 
        faction = "the_fourth_reich";
		uniformClass = "SS_Uniform"; 
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; //NATO Rolled Up Sleeves 
        hiddenSelections[] = {"Camo","Insignia"}; 
        hiddenSelectionsTextures[] = {"the_fourth_reich\data\SS_Uniform"}; 
		weapons[] = {"MMG_02_black_RCO_BI_F","hgun_Rook40_F","Throw","Put"}; 
        respawnWeapons[] = {"MMG_02_black_RCO_BI_F","hgun_Rook40_F","Throw","Put"}; ///match weapons[]
        magazines[] = {"130Rnd_338_Mag","130Rnd_338_Mag"};
        respawnMagazines[] = {"130Rnd_338_Mag","130Rnd_338_Mag"}; // match magazines[]

    };
	
	   class SS_Trooper_EXP: SS_Commander {
        author = "Yettie"; 
        _generalMacro = "O_T_Recon_F"; 
        scope = 2; 
        displayName = "SS Trooper Explosive"; 
        identityTypes[] = {"Head_NATO", "G_NATO_default"}; 
        genericNames = "NATOMen"; 
        faction = "the_fourth_reich";
		backpack = "B_FieldPack_blk"; // backpack
		uniformClass = "SS_Uniform"; 
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; //NATO Rolled Up Sleeves 
        hiddenSelections[] = {"Camo","Insignia"}; 
        hiddenSelectionsTextures[] = {"the_fourth_reich\data\SS_Uniform"}; 
		weapons[] = {"SMG_02_ACO_F","hgun_Rook40_F","Throw","Put"}; 
        respawnWeapons[] = {"SMG_02_ACO_F","hgun_Rook40_F","Throw","Put"}; ///match weapons[]
        magazines[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","ClaymoreDirectionalMine_Remote_Mag","ATMine_Range_Mag","rhsusf_m112_mag","rhsusf_m112_mag"};
        respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","ClaymoreDirectionalMine_Remote_Mag","ATMine_Range_Mag","rhsusf_m112_mag","rhsusf_m112_mag"}; // match magazines[]

    };
	class SS_Trooper_MM: SS_Commander {
        author = "Yettie"; 
        _generalMacro = "O_T_Recon_F"; 
        scope = 2; 
        displayName = "SS Trooper Marksman"; 
        identityTypes[] = {"Head_NATO", "G_NATO_default"}; 
        genericNames = "NATOMen"; 
        faction = "the_fourth_reich";
		uniformClass = "SS_Uniform"; 
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; //NATO Rolled Up Sleeves 
        hiddenSelections[] = {"Camo","Insignia"}; 
        hiddenSelectionsTextures[] = {"the_fourth_reich\data\SS_Uniform"}; 
		weapons[] = {"srifle_DMR_03_DMS_F","hgun_Rook40_F","Throw","Put"}; 
        respawnWeapons[] = {"srifle_DMR_03_DMS_F","hgun_Rook40_F","Throw","Put"}; ///match weapons[]
        magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","SmokeShell","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","SmokeShell","SmokeShell","SmokeShell"}; // match magazines[]
    };
		class SS_Trooper_BR: SS_Commander {
        author = "Yettie"; 
        _generalMacro = "O_T_Recon_F"; 
        scope = 2; 
        displayName = "SS Trooper Breacher"; 
        identityTypes[] = {"Head_NATO", "G_NATO_default"}; 
        genericNames = "NATOMen"; 
        faction = "the_fourth_reich";
		uniformClass = "SS_Uniform"; 
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; //NATO Rolled Up Sleeves 
        hiddenSelections[] = {"Camo","Insignia"}; 
        hiddenSelectionsTextures[] = {"the_fourth_reich\data\SS_Uniform"}; 
		weapons[] = {"rhs_weap_M590_8RD","hgun_Rook40_F","Throw","Put"}; 
        respawnWeapons[] = {"rhs_weap_M590_8RD","hgun_Rook40_F","Throw","Put"}; ///match weapons[]
        magazines[] = {"rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_Slug","rhsusf_8Rnd_Slug","rhsusf_8Rnd_Slug","rhsusf_8Rnd_Slug","ACE_M84","ACE_M84","ACE_M84","ACE_M84"};
        respawnMagazines[] = {"rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_Slug","rhsusf_8Rnd_Slug","rhsusf_8Rnd_Slug","rhsusf_8Rnd_Slug","ACE_M84","ACE_M84","ACE_M84","ACE_M84"}; // match magazines[]
    };
};

class cfgWeapons 
{ 
    //********************************************************************************************************************************************************************************************
    //*****            Uniforms              *****************************************************************************************************************************************************
    //********************************************************************************************************************************************************************************************
    class ItemCore; 
    class UniformItem; 
    class Uniform_Base: ItemCore 
    { 
        class ItemInfo; 
    }; 

    class Nazi_Uniform_desert: Uniform_Base 
    { 
        scope = 2; 
        displayName = "Nazi Uniform desert"; 
        picture = "-"; 
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; 
        class ItemInfo : UniformItem { 
            uniformClass = "Nazi_Uniform_desert"; 
            containerClass = "Supply50"; 
            mass = 50; 
        }; 
    }; 
    class Nazi_Uniform_desert_SS: Uniform_Base 
    { 
        scope = 2; 
        displayName = "Nazi Uniform desert(Rolled Sleeves)"; 
        picture = "-"; 
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d"; 
        class ItemInfo : UniformItem { 
            uniformClass = "Nazi_Uniform_desert_ss"; 
            containerClass = "Supply50"; 
            mass = 50; 
        }; 
    }; 
    class Nazi_Crew_Black: Uniform_Base 
    { 
        scope = 2; 
        displayName = "Crew"; 
        picture = "-"; 
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; 
        class ItemInfo : UniformItem { 
            uniformClass = "Nazi_Crew_Black"; 
            containerClass = "Supply50"; 
            mass = 50; 
        }; 
    }; 
    class Nazi_Crew_Black_SS: Uniform_Base 
    { 
        scope = 2; 
        displayName = "SS Trooper Rolled Sleeves"; 
        picture = "-"; 
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d"; 
        class ItemInfo : UniformItem { 
            uniformClass = "Nazi_Crew_Black_SS"; 
            containerClass = "Supply50"; 
            mass = 50; 
        }; 
	}; 

    class SS_Uniform: Uniform_Base 
    { 
        scope = 2; 
        displayName = "SS Trooper"; 
        picture = "-"; 
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; 
        class ItemInfo : UniformItem { 
            uniformClass = "SS_Uniform"; 
            containerClass = "Supply50"; 
            mass = 50; 
	}; 
 	}; 

    //************************************************************************************************************************************************************************************************
    //*****             Vests                *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    class VestItem; 
    class Vest_Camo_Base: ItemCore 
    { 
        class ItemInfo; 
    }; 
     
    class Nazi_Vest_desert: Vest_Camo_Base 
		{ 
        scope = 2; 
        displayName = "Nazi Vest Desert"; 	
        picture = "-"; 
        model = "A3\Characters_F\common\equip_tacticalvest"; 
        hiddenSelections[] = {"Camo"}; 
        hiddenSelectionsTextures[] = {"the_fourth_reich\Data\Nazi_Vest_desert.paa"}; 
        class ItemInfo: VestItem 
        { 
            uniformModel = "A3\Characters_F\common\equip_tacticalvest.p3d"; 
            containerClass = "Supply120"; 
            mass = 80; 
            armor = "5"; 
            passThrough = 0.3; 
            hiddenSelections[] = {"camo"}; 
        }; 
	};
    class SS_Vest: Vest_Camo_Base 
    	{ 
        scope = 2; 
        displayName = "SS Vest"; 	
        picture = "-"; 
        model = "A3\Characters_F\common\equip_tacticalvest"; 
        hiddenSelections[] = {"Camo"}; 
        hiddenSelectionsTextures[] = {"the_fourth_reich\Data\SS_Vest.paa"}; 
        class ItemInfo: VestItem 
        { 
            uniformModel = "A3\Characters_F\common\equip_tacticalvest.p3d"; 
            containerClass = "Supply120"; 
            mass = 80; 
            armor = "5"; 
            passThrough = 0.3; 
            hiddenSelections[] = {"camo"}; 
        };
    };

//************************************************************************************************************************************************************************************************
//*****            Helmet              *********************************************************************************************************************************************************
//************************************************************************************************************************************************************************************************
	class H_HelmetIA;
	class HeadgearItem;
    	class H_HelmetB: ItemCore 
    { 
        class ItemInfo; 
    }; 
     
	class Nazi_Helmet_desert: H_HelmetB
    {
        displayName = "Nazi Helmet desert";
        picture = "";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"the_fourth_reich\data\Nazi_Helmet_desert.paa"};
        class ItemInfo: ItemInfo
        {
            mass = 20;
            allowedSlots[] = {901,605};
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
            modelSides[] = {3,1};
            hiddenSelections[] = {"Camo"};
            armor = "3*0.4";
            passThrough = 0.65;
        };
    };
	
	class SS_helmet: H_HelmetB
    {
        displayName = "SS helmet";
        picture = "";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"the_fourth_reich\data\SS_Helmet.paa"};
        class ItemInfo: ItemInfo
        {
            mass = 20;
            allowedSlots[] = {901,605};
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
            modelSides[] = {3,1};
            hiddenSelections[] = {"Camo"};
            armor = "3*0.4";
            passThrough = 0.65;
        };
    };
	class SS_helmet2: H_HelmetB
    {
        displayName = "SS helmet2";
        picture = "";
        model = "\A3\characters_f_beta\INDEP\headgear_helmet_canvas";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"the_fourth_reich\data\SS_Helmet2.paa"};
        class ItemInfo: ItemInfo
        {
            mass = 20;
            allowedSlots[] = {901,605};
            uniformModel = "\A3\characters_f_beta\INDEP\headgear_helmet_canvas";
            modelSides[] = {3,1,2,0};
            hiddenSelections[] = {"Camo"};
            armor = "3*0.4";
            passThrough = 0.65;
        };
    };
		

	
class CfgGroups
{
	class East
	{
		class reich_groups
		{
			name = "the fourth reich";
			class Infantry
			{
				name = "Infantry";
				class the_fourth_reich_FT
				{
					name = "Squad";
					side = 0;
					faction = "the_fourth_reich";
					class Unit0
					{
						side = 0;
						vehicle = "Reich_Commander";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "Reich_Grenadier";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "Reich_AT_Rifleman";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "Reich_Heavy_MG";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "Reich_Grenadier";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "Reich_Commander";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};

				};
				class the_fourth_reich_SS_FT
				{
					name = "SS Fire Team";
					side = 0;
					faction = "IP_CSAT_ST";
					class Unit0
					{
						side = 0;
						vehicle = "SS_Commander";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "SS_Trooper_MG";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "SS_Trooper_EXP";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "SS_Trooper_MM";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			};
		};
	};
};
};