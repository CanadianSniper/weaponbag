class CfgPatches
{
	class CS_WeaponBag
	{
		units[]=
		{
			"CS_WeaponBag_ColorBase",
			"CS_WeaponBag_Black",
			"CS_WeaponBag_Green",
			"CS_WeaponBag_Tan"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Characters_Backpacks",
			"DZ_Scripts",
			"DZ_Characters"
		};
	};
};
class CfgMods
{
	class CS_WeaponBag
	{	
		dir = "CS_WeaponBag";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "CS_WeaponBag";
		author = "CanadianSniper";
		authorID = "2039448058";
		version = "1.0";
		extra = 0;
		
		type = "mod";
		dependencies[]=
		{
			"Game",
			"World"
		};
		
		class defs
		{
			class gameScriptModule
            {
                value = "";
                files[] = {"CS_WeaponBag/Scripts/3_Game"};
			};

            class worldScriptModule
            {
                value = "";
                files[] = {"CS_WeaponBag/Scripts/4_World"};
			};
		};
	};
};
class cfgWeapons
{
	class RifleCore;
	class Rifle_Base: RifleCore
	{
		inventorySlot[]+=
		{
			"Shoulder",
			"Melee",
			"Shoulder1",
			"Shoulder2"
		};
	};
};
class cfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base{};
	
	class CS_WeaponBag_Base: Clothing_Base
	{
		scope = 0;
		displayName = "Weapon Bag";
		descriptionShort = "A lightweight and versatile Weapon bag capable of carrying multiple weapons.";
		model = "\CS_WeaponBag\WeaponBag_g.p3d";
		inventorySlot[] = {"Back"};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		attachments[]={"Shoulder1","Shoulder2"};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags = 16;
		itemSize[] = {4,6};
		itemsCargoSize[] = {10,20};
		weight=2300;
		varWetMax = 0.79;
		heatIsolation = 0.7;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="Outdoor";
		randomQuantity=4;
		hiddenSelectionsTextures[] = 
		{
			"CS_WeaponBag\data\Weaponbag_Black_co.paa",
			"CS_WeaponBag\data\Weaponbag_Black_co.paa",
			"CS_WeaponBag\data\Weaponbag_Black_co.paa"
		};
		class ClothingTypes
		{
			male = "\CS_WeaponBag\WeaponBag_m.p3d";
			female = "\CS_WeaponBag\WeaponBag_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"CS_WeaponBag\data\WeaponBag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"CS_WeaponBag\data\WeaponBag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"CS_WeaponBag\data\WeaponBag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"CS_WeaponBag\data\WeaponBag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"CS_WeaponBag\data\WeaponBag_destruct.rvmat"
							}
						}
					};
				};
			};
		};		
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Plastic_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Plastic_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="taloonbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class CS_WeaponBag_Black: CS_WeaponBag_Base
	{
		scope=2;
		displayName="Weapon Bag (Black)";
		descriptionShort = "A lightweight and versatile Weapon bag capable of carrying multiple weapons.";
		itemSize[] = {5,7};
		itemsCargoSize[] = {10,20};
		hiddenSelectionsTextures[]=
		{
			"CS_WeaponBag\data\Weaponbag_Black_co.paa",
			"CS_WeaponBag\data\Weaponbag_Black_co.paa",
			"CS_WeaponBag\data\Weaponbag_Black_co.paa"
		};
	};
	class CS_WeaponBag_Green: CS_WeaponBag_Base
	{
		scope=2;
		displayName="Weapon Bag (Green)";
		descriptionShort = "A lightweight and versatile Weapon bag capable of carrying multiple weapons.";
		itemSize[] = {5,7};
		itemsCargoSize[] = {10,20};
		hiddenSelectionsTextures[]=
		{
			"CS_WeaponBag\data\Weaponbag_Green_co.paa",
			"CS_WeaponBag\data\Weaponbag_Green_co.paa",
			"CS_WeaponBag\data\Weaponbag_Green_co.paa"
		};
	};
	class CS_WeaponBag_Tan: CS_WeaponBag_Base
	{
		scope=2;
		displayName="Weapon Bag (Tan)";
		descriptionShort = "A lightweight and versatile Weapon bag capable of carrying multiple weapons.";
		itemSize[] = {5,7};
		itemsCargoSize[] = {10,20};
		hiddenSelectionsTextures[]=
		{
			"CS_WeaponBag\data\Weaponbag_Tan_co.paa",
			"CS_WeaponBag\data\Weaponbag_Tan_co.paa",
			"CS_WeaponBag\data\Weaponbag_Tan_co.paa"
		};
	};
	class CS_WeaponBag_D_Base: Clothing_Base
	{
		scope = 0;
		displayName = "Weapon Bag (Diagonal)";
		descriptionShort = "A lightweight and versatile Weapon bag capable of carrying multiple weapons.";
		model = "\CS_WeaponBag\WeaponBag_D_g.p3d";
		inventorySlot[] = {"Back"};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		attachments[]={"Shoulder1","Shoulder2"};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags = 16;
		itemSize[] = {4,6};
		itemsCargoSize[] = {10,20};
		weight=2300;
		varWetMax = 0.79;
		heatIsolation = 0.7;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="Outdoor";
		randomQuantity=4;
		hiddenSelectionsTextures[] = 
		{
			"CS_WeaponBag\data\Weaponbag_Black_co.paa",
			"CS_WeaponBag\data\Weaponbag_Black_co.paa",
			"CS_WeaponBag\data\Weaponbag_Black_co.paa"
		};
		class ClothingTypes
		{
			male = "\CS_WeaponBag\WeaponBag_D_m.p3d";
			female = "\CS_WeaponBag\WeaponBag_D_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"CS_WeaponBag\data\WeaponBag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"CS_WeaponBag\data\WeaponBag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"CS_WeaponBag\data\WeaponBag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"CS_WeaponBag\data\WeaponBag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"CS_WeaponBag\data\WeaponBag_destruct.rvmat"
							}
						}
					};
				};
			};
		};		
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Plastic_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Plastic_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="taloonbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class CS_WeaponBag_D_Black: CS_WeaponBag_D_Base
	{
		scope=2;
		displayName="Weapon Bag (Diagonal Black)";
		descriptionShort = "A lightweight and versatile Weapon bag capable of carrying multiple weapons.";
		itemSize[] = {5,7};
		itemsCargoSize[] = {10,20};
		hiddenSelectionsTextures[]=
		{
			"CS_WeaponBag\data\Weaponbag_Black_co.paa",
			"CS_WeaponBag\data\Weaponbag_Black_co.paa",
			"CS_WeaponBag\data\Weaponbag_Black_co.paa"
		};
	};
	class CS_WeaponBag_D_Green: CS_WeaponBag_D_Base
	{
		scope=2;
		displayName="Weapon Bag (Diagonal Green)";
		descriptionShort = "A lightweight and versatile Weapon bag capable of carrying multiple weapons.";
		itemSize[] = {5,7};
		itemsCargoSize[] = {10,20};
		hiddenSelectionsTextures[]=
		{
			"CS_WeaponBag\data\Weaponbag_Green_co.paa",
			"CS_WeaponBag\data\Weaponbag_Green_co.paa",
			"CS_WeaponBag\data\Weaponbag_Green_co.paa"
		};
	};
	class CS_WeaponBag_D_Tan: CS_WeaponBag_D_Base
	{
		scope=2;
		displayName="Weapon Bag (Diagonal Tan)";
		descriptionShort = "A lightweight and versatile Weapon bag capable of carrying multiple weapons.";
		itemSize[] = {5,7};
		itemsCargoSize[] = {10,20};
		hiddenSelectionsTextures[]=
		{
			"CS_WeaponBag\data\Weaponbag_Tan_co.paa",
			"CS_WeaponBag\data\Weaponbag_Tan_co.paa",
			"CS_WeaponBag\data\Weaponbag_Tan_co.paa"
		};
	};
};
class CfgSlots
{
	class Slot_Gun1
	{
		name="Shoulder1";
		displayName="Slot";
		ghostIcon="shoulderleft";
		selection="Shoulder1";
	};
	class Slot_Gun2
	{
		name="Shoulder2";
		displayName="Slot";
		ghostIcon="shoulderleft";
		selection="Shoulder2";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyShoulder1: ProxyAttachment
	{
		scope=2;
		inventorySlot="Shoulder1";
		model="\CS_WeaponBag\Proxies\Shoulder1.p3d";
	};
	class ProxyShoulder2: ProxyAttachment
	{
		scope=2;
		inventorySlot="Shoulder2";
		model="\CS_WeaponBag\Proxies\Shoulder2.p3d";
	};
};
