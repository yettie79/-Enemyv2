/*
	Name: The_Fourth_Reich Mod
	Author: Yettie
	Date: 25/04/17
	Description: CfgHelmets.hpp
*/

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