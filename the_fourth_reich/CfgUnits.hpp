/*
	Name: The_Fourth_Reich Mod
	Author: Yettie
	Date: 25/04/17
	Description: CfgUnits.hpp
*/

class O_T_Recon_F; 

class Reich_Commander: O_T_Recon_F 
{
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
	Items[] = {Standard_Meds,SL_Equip};  //define_macros.hpp
	RespawnItems[] = {Standard_Meds,SL_Equip}; //define_macros.hpp
	magazines[] = 
	{
		SL_Mags,			//define_macros.hpp
		Std_Pistol, 		//define_macros.hpp
		"Laserbatteries"
	};
	respawnMagazines[] = 
	{
		SL_Mags,			//define_macros.hpp
		Std_Pistol,			//define_macros.hpp
		"Laserbatteries"
	};
	linkedItems[] = 
	{
		Standard_Equipment	//define_macros.hpp
		"Nazi_Vest_desert",
		"Nazi_Helmet_desert"
	};
	respawnLinkedItems[] = 
	{
		Standard_Equipment	//define_macros.hpp
		"Nazi_Vest_desert",
		"Nazi_Helmet_desert"
	};
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