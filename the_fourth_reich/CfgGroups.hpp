/*
	Name: The_Fourth_Reich Mod
	Author: Yettie
	Date: 25/04/17
	Description: CfgGroups.hpp
*/

class CfgGroups
{
	class East
	{
		class reich_groups
		{
			name = "The Fourth Reich";
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