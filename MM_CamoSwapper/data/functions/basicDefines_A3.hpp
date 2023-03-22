#define true 1
#define false 0

#define VSOFT 0
#define VARMOR 1
#define VAIR 2

// type scope
#define private 0
#define protected 1
#define public 2

#define CANSEERADAR 1
#define CANSEEEYE 2
#define CANSEEOPTICS 4
#define CANSEEEAR 8
#define CANSEECOMPASS 16
#define CANSEERADARC CANSEERADAR+CANSEECOMPASS
#define CANSEEALL 31
#define CANSEEPERIPHERAL 32

//lock acquiring
#define MANUALLA      0
#define AUTOMATICLA   1

//lockable target type
#define LOCKGROUNDTT      0
#define LOCKAIRGROUNDTT   1
#define LOCKAIRTT         2
#define LOCKGROUND      0
#define LOCKAIRGROUND   1
#define LOCKAIR         2

//missile lock type
#define FIREANDFORGETLT   0
#define KEEPLOCKEDLT      1
#define MANUALLT          2

#define SPEED_STATIC 1e10

#define LOCKNO		0
#define LOCKCADET	1
#define LOCKYES		2

enum {STABILIZEDINAXESNONE,STABILIZEDINAXISX,STABILIZEDINAXISY,STABILIZEDINAXESBOTH,STABILIZEDINAXESXYZ};

#define STABILIZEDINAXESNONE 0
#define STABILIZEDINAXISX 1
#define STABILIZEDINAXISY 2
#define STABILIZEDINAXESBOTH 3
#define STABILIZEDINAXESXYZ 4

#define CM_NONE        0
#define CM_LOCK_VISUAL 1
#define CM_LOCK_IR     2
#define CM_LOCK_LASER  4
#define CM_LOCK_RADAR  8
#define CM_MISSILE     16


#define CMIMMUNITY_GOOD 0.9
#define CMIMMUNITY_MIDDLE 0.65
#define CMIMMUNITY_BAD    0.5

#define MAG_XX(a,b) class _xx_##a {magazine = a; count = b;}
#define WEAP_XX(a,b) class _xx_##a {weapon = a; count = b;}
#define ITEM_XX(a,b) class _xx_##a {name = a; count = b;}
#define BAG_XX(a,b) class _xx_##a {backpack = a; count = b;}

#define DEFAULT_SLOT 0
#define MUZZLE_SLOT 101
#define OPTICS_SLOT 201
#define FLASHLIGHT_SLOT 301
#define NVG_SLOT 602
#define GOGGLE_SLOT 603
#define HEADGEAR_SLOT 605
#define UNIFORM_SLOT 801

#define HMD_SLOT       616
#define BINOCULAR_SLOT 617
#define MEDIKIT_SLOT   619
#define RADIO_SLOT    611

#define VEST_SLOT      701
#define BACKPACK_SLOT  901

#define LOAD(weight,capacity) maximumLoad = ##capacity##; \
							  mass = ##weight##;
							  
#define HEADARMOURCOEF 2.5
#define BODYARMOURCOEF 10
#define HANDARMOURCOEF 5
#define LEGARMOURCOEF 5