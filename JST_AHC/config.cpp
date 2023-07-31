class CfgPatches
{
	class JST_AHC
	{
		addonRootClass="A3_Static_F";
		requiredAddons[]=
		{
			"A3_Static_F"
		};
		requiredVersion=0.1;
		units[]=
		{
			"JST_AHC",
		};
		weapons[]={};
	};
};

class CfgAmmo
{
	class R_230mm_fly;
	class tnk_propanetank_fly: R_230mm_fly
	{
		model="\JST_AHC\projectile\JST_AHC_projectile";
		soundHit1[] = {"\A3\Sounds_F\weapons\Explosion\expl_big_1",5,1,2400};
		soundHit2[] = {"\A3\Sounds_F\weapons\Explosion\expl_big_2",5,1,2400};
		soundHit3[] = {"\A3\Sounds_F\weapons\Explosion\expl_big_3",5,1,2400};
		soundHit4[] = {"\A3\Sounds_F\weapons\Explosion\expl_shell_1",5,1,2400};
		soundHit5[] = {"\A3\Sounds_F\weapons\Explosion\expl_shell_2",5,1,2400};
		multiSoundHit[] = {"soundHit1",1,"soundHit2",1,"soundHit3",1,"soundHit4",1,"soundHit5",1};
		soundfly[]=
		{
			"\JST_AHC\data\sounds\flysound.ogg",
			100,
			1,
			700
		};
		soundFakeFall0[] = {"\JST_AHC\data\sounds\fal11.ogg",100,1,1000};
		soundFakeFall1[] = {"\JST_AHC\data\sounds\fal12.ogg",100,1,1000};
		soundFakeFall2[] = {"\JST_AHC\data\sounds\fal13.ogg",100,1,1000};
		soundFakeFall[] = {"soundFakeFall0",1,"soundFakeFall1",1,"soundFakeFall2",1};
		whistleDist=300;
		CraterEffects="BombCrater";
		explosionEffects="BombExplosion";
	};
	class R_230mm_HE;
	class tnk_propanetank: R_230mm_HE
	{
		descriptionShort = "A propane tank packed with local explosives.";
		displayNameShort = "300mm";
		hit=320;
		indirectHit=10;
		indirectHitRange=20;
		model="\JST_AHC\projectile\JST_AHC_projectile";
		initTime=0.050000001;
		explosive=1;
		timeToLive=180;
		cost=400;
		maxSpeed=1200;
		thrustTime=1;
		thrust=850;
		fuseDistance=2;
		CraterEffects="BombCrater";
		explosionEffects="BombExplosion";
		effectsMissile="";
		effectsMissileInit="";
		whistleOnFire = 1;
		whistleDist=300;
		submunitionAmmo="tnk_propanetank_fly";
		simulation="shotShell";
		soundfly[]=
		{
			"\JST_AHC\data\sounds\flysound.ogg",
			100,
			1,
			700
		};
		soundFakeFall0[] = {"\JST_AHC\data\sounds\fal11.ogg",100,1,1000};
		soundFakeFall1[] = {"\JST_AHC\data\sounds\fal12.ogg",100,1,1000};
		soundFakeFall2[] = {"\JST_AHC\data\sounds\fal13.ogg",100,1,1000};
		soundFakeFall[] = {"soundFakeFall0",1,"soundFakeFall1",1,"soundFakeFall2",1};
	};
};

class CfgMagazines
{
	class 14Rnd_80mm_rockets;
	class tnk_propane_mag: 14Rnd_80mm_rockets
	{
		scope=2;
		author="Jester504 & tanaKa";
		descriptionShort = "A propane tank packed with local explosives";
		displayNameShort = "300mm";
		model="\JST_AHC\projectile\JST_AHC_projectile";
		displayName="Propane Tank";
		ammo="tnk_propanetank";
		count=8;
		type="3 * 256";
		initSpeed=316;
		nameSound="heat";
	};
};
	
class CfgWeapons 
{
	class RocketPods;
	class rockets_230mm_GAT;
	class tnk_hellcannon: rockets_230mm_GAT
	{
		scope=2;
		displayName="Propane Tank";
		type=65536;
		reloadTime=5;
		magazineReloadTime=20;
		modelOptics="";
		magazines[]=
		{
			"tnk_propane_mag"
		};
		ballisticscomputer=2;
		drySound[]=
		{
			"",
			9.9999997e-005,
			1,
			10
		};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_magazine_Mortar",1,1,20};
		reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_magazine_Mortar",1,1,20};
		cursor="Rocket";
		cursorSize=1;
		modes[]=
		{
			"Close"
		};
		class GunParticles
		{
			class FirstEffect
			{
				effectName="CannonFired";
				directionName="Konec hlavne";
				positionName="Usti hlavne";
			};
		};
		class Close: RocketPods
		{
			displayName="Simplified Charge";
			minRange=300;
			minRangeProbab=0.15000001;
			midRange=2200;
			midRangeProbab=0.64999998;
			maxRange=4000;
			maxRangeProbab=0.050000001;
			reloadTime=20;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"\JST_AHC\data\sounds\launchhard.ogg",
					2,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				weaponSoundEffect="DefaultRifle";
			};
			burst=1;
			autoFire=0;
			artilleryDispersion=0.5;
			artilleryCharge=0.25;
			soundBurst=0;
			aiRateOfFire=0.80000001;
			aiRateOfFireDistance=2500;
		};
	};
};

class CfgVehicles
{
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class StaticMortar: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class AndoksHellCannon: StaticMortar
	{
		features="Randomization: No						<br />Camo selections: 1 - the whole weapon with pod						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: Just the weapon						<br />Slingload: Yes						<br />Cargo proxy indexes: None";
		author="Jester504 & tanaKa";
		_generalMacro="JST_AHC";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="BLU_F";
		crew="B_Soldier_F";
		availableForSupportTypes[]=
		{
			"Artillery"
		};
		displayname="Andok's Hell Cannon";
		transportSoldier=0;
		cargoAction[]=
		{
			"Mortar_Gunner"
		};
		getInAction="GetInMortar";
		getOutAction="GetOutLow";
		unitInfoType="RscUnitInfoMortar";
		editorPreview="\JST_AHC\data\preview\preview.paa";
		editorSubcategory="EdSubcat_Turrets";
		picture="\A3\Static_f\Mortar_01\data\UI\Mortar_01_ca.paa";
		icon="\A3\Static_f\Mortar_01\data\UI\map_Mortar_01_CA.paa";
		cost=20000;
		accuracy=0.25;
		EPEImpulseDamageCoef=5;
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3\Static_f\Mortar_01\data\Mortar_01.rvmat",
				"A3\Static_f\Mortar_01\data\Mortar_01_damage.rvmat",
				"A3\Static_f\Mortar_01\data\Mortar_01_destruct.rvmat"
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerAction="Mortar_Gunner";
				gunnergetInAction="";
				gunnergetOutAction="";
				weapons[]=
				{
					"tnk_hellcannon"
				};
				elevationMode=1;
				initCamElev=0;
				minCamElev=-35;
				maxCamElev=35;
				initElev=0;
				minTurn=-180;
				maxTurn=180;
				initTurn=0;
				cameraDir="look";
				discreteDistance[]={100,200,300,400,500,700,1000,1600,2000,2400,2800};
				discreteDistanceCameraPoint[]=
				{
					"eye"
				};
				discreteDistanceInitIndex=5;
				turretInfoType="RscWeaponRangeArtillery";
				gunnerForceOptics=0;
				memoryPointGunnerOptics="eye";
				gunnerOpticsModel="\A3\Weapons_F\acc\reticle_Mortar_01_F.p3d";
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.17399999;
					minFov=0.0077777999;
					maxFov=0.14;
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
				};
				minelev=-30;
				maxelev=21;
				magazines[]=
				{
					"tnk_propane_mag"
				};
				ejectDeadGunner=1;
				usepip=2;
			};
		};
		class EventHandlers
		{
			fired="_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
		htMin=1;
		htMax=480;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		class DestructionEffects
		{
			class Smoke
			{
				simulation="particles";
				type="WeaponWreckSmoke";
				position="destructionEffect";
				intensity=1;
				interval=1;
				lifeTime=5;
			};
		};
		model="\JST_AHC\JST_AHC";
		artilleryScanner=0;
	};
};