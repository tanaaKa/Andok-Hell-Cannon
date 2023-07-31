Ambient[]={1,1,1,1};
Diffuse[]={1,1,1,1};
ForcedDiffuse[]={0,0,0,0}; 
emmisive[]={0,0,0,0}; 
specular[]={0.01,0.01,0.01,1};
specularPower=8;
PixelShaderID="Super";
VertexShaderID="Super";
class StageTI
{
	texture="a3\data_f\default_vehicle_ti_ca.paa";
};
class Stage1
{
	texture="JST_AHC\cinderBlock\JST_AHC_block_nohq.tga";
	uvSource="tex";
	class uvTransform
	{
		aside[]={1,0,0};
		up[]={0,1,0};
		dir[]={0,0,0};
		pos[]={0,0,0};
	};
};
class Stage2
{
	texture="#(argb,8,8,3)color(0.5,0.5,0.5,1,DT)";
	uvSource="tex";
	class uvTransform
	{
		aside[]={10,0,0};
		up[]={0,10,0};
		dir[]={0,0,0};
		pos[]={0,0,0};
	};
};
class Stage3
{
	texture="#(argb,8,8,3)color(0,0,0,0,MC)";
	uvSource="tex";
	class uvTransform
	{
		aside[]={1,0,0};
		up[]={0,1,0};
		dir[]={0,0,0};
		pos[]={0,0,0};
	};
};
class Stage4
{
	texture="JST_AHC\cinderBlock\JST_AHC_block_as.tga";
	uvSource="tex";
	class uvTransform
	{
		aside[]={1,0,0};
		up[]={0,1,0};
		dir[]={0,0,0};
		pos[]={0,0,0};
	};
};
class Stage5
{
	texture="JST_AHC\cinderBlock\JST_AHC_block_smdi.tga";
	uvSource="tex";
	class uvTransform
	{
		aside[]={1,0,0};
		up[]={0,1,0};
		dir[]={0,0,0};
		pos[]={0,0,0};
	};
};
class Stage6
{
	texture="#(ai,64,64,1)fresnel(0.45,0.35)";
	uvSource="none";
};
class Stage7
{
	texture="a3\data_f\env_land_co.paa";
	uvSource="tex";
	class uvTransform
	{
		aside[]={1,0,0};
		up[]={0,1,0};
		dir[]={0,0,0};
		pos[]={0,0,0};
	};
};