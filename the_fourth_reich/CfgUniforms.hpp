/*
	Name: The_Fourth_Reich Mod
	Author: Yettie
	Date: 25/04/17
	Description: CfgUniforms.hpp
*/

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