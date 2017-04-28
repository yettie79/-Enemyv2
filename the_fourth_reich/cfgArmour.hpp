/*
	Name: The_Fourth_Reich Mod
	Author: Yettie
	Date: 25/04/17
	Description: CfgArmour.hpp
*/



class I_MBT_03_BASE_F;
class B_APC_Tracked_01_AA_F;
class MRAP_03_base_F;
class I_MRAP_03_F;

class Nazi_MBT_Kuma: I_MBT_03_BASE_F 
{
	scope = 2;
	displayName = "Nazi MBT";
	side = 0;
	crew = "Reich_Crew_Black";
	faction = "the_fourth_reich";
	hiddenSelections[] = 
	{
		"Camo1",
		"Camo2",
		"Camo3",
		"HideHull",
		"HideTurret",
		"pasoffsetl",
		"pasoffsetp"
	};
	hiddenSelectionsTextures[] = 
	{
		"the_fourth_reich\data\TankBodyTexture.paa",
		"the_fourth_reich\data\TankTurretTexture.paa",
		"the_fourth_reich\data\TankTurretMGTexture.paa",
		"the_fourth_reich\data\TankTurretTexture.paa",
		"the_fourth_reich\data\TankTurretTexture.paa",
		"the_fourth_reich\data\TankTrackTexture.paa",
		"the_fourth_reich\data\TankTrackTexture.paa"
		
	};
	class TransportItems
	{

	};
	class TransportWeapons
	{

	};
	class TransportMagazines
	{
		
	};
	class TransportBackpacks
	{
		
	};
	class EventHandlers {
		init = "if (local (_this select 0)) then {{(_this select 0) animate [_x, 1]} forEach ['HideHull','HideTurret']}";
};
};
class Nazi_AAA: B_APC_Tracked_01_AA_F
{
	scope=2;
	displayName="reich AAA";
	faction="the_fourth_reich";
	crew="Reich_Crew_Black";
	typicalCargo[]=	{"Reich_Crew_Black"};
	side=0;
	hiddenSelections[]=	
	{
		"camo1",
		"camo2",
		"camo3"
	};
	hiddenSelectionsTextures[]=	
	{
		"\the_fourth_reich\Data\nazi_aaa_body.paa",
		"\the_fourth_reich\Data\MBT_body.paa",
		"\the_fourth_reich\Data\Nazi_AA_Tower.paa"
	};		
	class TransportWeapons
	{

	};
	class TransportMagazines
	{
		
	};
	class TransportBackpacks
	{
		
	};
};

class SS_Blitz: I_MRAP_03_F
{
	scope=2;
	_generalMacro = "I_MRAP_03_F";
	displayName="SS Blitz";
	faction="the_fourth_reich";
	crew="Reich_Crew_Black";
	typicalCargo[]=	{"Reich_Crew_Black"};
	side=0;
	vehicleClass="Car";
	hiddenSelectionsTextures[]=
	{
		"\the_fourth_reich\Data\SS_Striker.paa",
		"\the_fourth_reich\Data\SS_Turret.paa"
	};
	class TransportWeapons
	{

	};
	class TransportMagazines
	{
		
	};
	class TransportBackpacks
	{
		
	};
};

