#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class HHR_h60_skins
	{
		units[]=
		{
      "HHR_mh60m",
      "HHR_uh60m",
      "HHR_uh60m_slick"
		};//Units
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]= { };
	};//Class HHR_h60_skins
};// CfgPatches

class CfgVehicles
{
    //Hatchet Classes
    class vtx_mh60m;
    class vtx_uh60M;
    class vtx_uh60M_SLICK;

    class HHR_mh60m: vtx_mh60m
    {
      textureList[] =
      {
        "JSOK", 1,
        "BUNDESHEER", 0
      };// textureList
			scope=2;
			category="Air";
			side=1;
			faction="BLU_F";

			hiddenselectiontextures[] = {"","","","","","","","","","","","","","","","HHR_2\data\JSOK_Base\Markings_co_JSOK.paa","HHR_2\data\JSOK_Base\Hull_Main_co_JSOK.paa","HHR_2\data\JSOK_Base\Misc_co_JSOK.paa","HHR_2\data\JSOK_Base\Hull_Tail_co_JSOK.paa","","","","","z\vtx\addons\UH60\data\FuelProbe\Fuel_probe_co.paa"};

			class textureSources {
						class JSOK {
							displayName = "JSOK";
							author = "Per_von_Harke"
							textures[] = {"","","","","","","","","","","","","","","","HHR_2\data\JSOK_Base\Markings_co_JSOK.paa","HHR_2\data\JSOK_Base\Hull_Main_co_JSOK.paa","HHR_2\data\JSOK_Base\Misc_co_JSOK.paa","HHR_2\data\JSOK_Base\Hull_Tail_co_JSOK.paa","","","","","z\vtx\addons\UH60\data\FuelProbe\Fuel_probe_co.paa"};
						};//Class JSOK
						class BUNDESHEER {
							displayName = "Bundesheer"
							author = "Per_von_Harke"
							textures[] = {"","","","","","","","","","","","","","","","HHR_2\data\BUNDESHEER_Base\Markings_co_BUNDESHEER.paa","HHR_2\data\BUNDESHEER_Base\Hull_Main_co_BUNDESHEER.paa","HHR_2\data\BUNDESHEER_Base\Misc_co_BUNDESHEER.paa","HHR_2\data\BUNDESHEER_Base\Hull_Tail_co_BUNDESHEER.paa","","","","","z\vtx\addons\UH60\data\FuelProbe\Fuel_probe_co.paa"};
						};//Class BUNDESHEER
			};//Class textureSources

    };//Class HHRR_mh60m
};// CfgVehicles
