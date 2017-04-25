/*
	Name: The_Fourth_Reich Mod
	Author: Yettie
	Date: 25/04/17
	Description: CfgVests.hpp
*/

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