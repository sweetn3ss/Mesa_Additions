#include "CustomControlClasses.h"
class MagMania
{
	idd = 1234;
	onUnload = "['Quit',(_this select 1)] ExecVM 'MaglockM\MagMania\SetStart.sqf';";
	
	class ControlsBackground
	{
		class Backgournd
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.36875;
			y = safeZoneY + safeZoneH * 0.35;
			w = safeZoneW * 0.2625;
			h = safeZoneH * 0.25;
			style = 0;
			text = "";
			colorBackground[] = {0.702,0.702,0.702,0.1985};
			colorText[] = {0.0471,0.1882,0.1216,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		
	};
	class Controls
	{
		class SliderA
		{
			type = 43;
			idc = 100;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.425;
			w = safeZoneW * 0.1375;
			h = safeZoneH * 0.02962963;
			style = 1024;
			arrowEmpty = "\A3\ui_f\data\GUI\Cfg\Slider\arrowEmpty_ca.paa";
			arrowFull = "\A3\ui_f\data\GUI\Cfg\Slider\arrowFull_ca.paa";
			border = "\A3\ui_f\data\GUI\Cfg\Slider\border_ca.paa";
			color[] = {0.302,0.302,0.302,1};
			colorActive[] = {1,1,1,1};
			thumb = "\A3\ui_f\data\GUI\Cfg\Slider\thumb_ca.paa";
			onSliderPosChanged = "ExecVM 'MaglockM\MagMania\Update.sqf'";
			
		};
		class SliderB
		{
			type = 43;
			idc = 101;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.475;
			w = safeZoneW * 0.1375;
			h = safeZoneH * 0.02962963;
			style = 1024;
			arrowEmpty = "\A3\ui_f\data\GUI\Cfg\Slider\arrowEmpty_ca.paa";
			arrowFull = "\A3\ui_f\data\GUI\Cfg\Slider\arrowFull_ca.paa";
			border = "\A3\ui_f\data\GUI\Cfg\Slider\border_ca.paa";
			color[] = {0.302,0.302,0.302,1};
			colorActive[] = {1,1,1,1};
			thumb = "\A3\ui_f\data\GUI\Cfg\Slider\thumb_ca.paa";
			onSliderPosChanged = "ExecVM 'MaglockM\MagMania\Update.sqf'";
			
		};
		class SliderC
		{
			type = 43;
			idc = 102;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.525;
			w = safeZoneW * 0.1375;
			h = safeZoneH * 0.02962963;
			style = 1024+0;
			arrowEmpty = "\A3\ui_f\data\GUI\Cfg\Slider\arrowEmpty_ca.paa";
			arrowFull = "\A3\ui_f\data\GUI\Cfg\Slider\arrowFull_ca.paa";
			border = "\A3\ui_f\data\GUI\Cfg\Slider\border_ca.paa";
			color[] = {0.302,0.302,0.302,1};
			colorActive[] = {1,1,1,1};
			thumb = "\A3\ui_f\data\GUI\Cfg\Slider\thumb_ca.paa";
			onSliderPosChanged = "ExecVM 'MaglockM\MagMania\Update.sqf'";
			
		};
		class Ok
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.56875;
			y = safeZoneY + safeZoneH * 0.575;
			w = safeZoneW * 0.0625;
			h = safeZoneH * 0.025;
			style = 0+2;
			text = "Ok";
			borderSize = 0;
			colorBackground[] = {0,0,0,1};
			colorBackgroundActive[] = {0.4,0.6,0.4,1};
			colorBackgroundDisabled[] = {1,1,1,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.302,0.502,0.302,1};
			colorShadow[] = {1,1,1,0};
			colorText[] = {1,1,1,1};
			font = "PuristaLight";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['Finish'] ExecVM 'MaglockM\MagMania\SetStart.sqf'";
			
		};
		class Preview
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.575;
			w = safeZoneW * 0.1125;
			h = safeZoneH * 0.025;
			style = 0+2;
			text = "Preview";
			borderSize = 0;
			colorBackground[] = {0,0,0,1};
			colorBackgroundActive[] = {0.302,0.4,0.8,1};
			colorBackgroundDisabled[] = {1,1,1,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.302,0.502,0.302,1};
			colorShadow[] = {1,1,1,0};
			colorText[] = {1,1,1,1};
			font = "PuristaLight";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['Prev'] ExecVM 'MaglockM\MagMania\SetStart.sqf'";
			
		};
		class Close
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.36875;
			y = safeZoneY + safeZoneH * 0.575;
			w = safeZoneW * 0.0625;
			h = safeZoneH * 0.025;
			style = 0+2;
			text = "Cancel";
			borderSize = 0;
			colorBackground[] = {0,0,0,1};
			colorBackgroundActive[] = {0.8,0.2,0.2,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.302,0.502,0.302,1};
			colorShadow[] = {1,1,1,0};
			colorText[] = {1,1,1,1};
			font = "PuristaLight";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['Quit',3] ExecVM 'MaglockM\MagMania\SetStart.sqf'";
			
		};
		class Title
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.41875;
			y = safeZoneY + safeZoneH * 0.375;
			w = safeZoneW * 0.1625;
			h = safeZoneH * 0.025;
			style = 0+2;
			text = "Set Vehicle Pos";
			colorBackground[] = {1,1,1,0};
			colorText[] = {0,0,0,1};
			font = "PuristaBold";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class TitleA
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.39375;
			y = safeZoneY + safeZoneH * 0.425;
			w = safeZoneW * 0.0375;
			h = safeZoneH * 0.025;
			style = 0;
			text = "Back";
			colorBackground[] = {1,1,1,0};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class TitleB
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.39375;
			y = safeZoneY + safeZoneH * 0.475;
			w = safeZoneW * 0.0375;
			h = safeZoneH * 0.025;
			style = 0;
			text = "Down";
			colorBackground[] = {1,1,1,0};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class TitleC
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.39375;
			y = safeZoneY + safeZoneH * 0.525;
			w = safeZoneW * 0.04635417;
			h = safeZoneH * 0.025;
			style = 0;
			text = "Rotation";
			colorBackground[] = {1,1,1,0};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class TitleA_copy1
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.59375;
			y = safeZoneY + safeZoneH * 0.425;
			w = safeZoneW * 0.0375;
			h = safeZoneH * 0.025;
			style = 0;
			text = "Front";
			colorBackground[] = {1,1,1,0};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class TitleB_copy1
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.59375;
			y = safeZoneY + safeZoneH * 0.475;
			w = safeZoneW * 0.0375;
			h = safeZoneH * 0.025;
			style = 0;
			text = "Up";
			colorBackground[] = {1,1,1,0};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		
	};
	
};
