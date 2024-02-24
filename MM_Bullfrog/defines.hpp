#define SJUMP_COST 25       // short jump cost  (energy)
#define LJUMP_COST 100      // long jump cost   (energy)

// fallback defines for if CBA settings borked
#define MM_Bullfrog_enabled	true
#define MM_Bullfrog_time	1
#define MM_Bullfrog_amnt	2

#include "\MM_Bullfrog\debug_macros.hpp"

#define JETPACK(CLASS,AUTHOR,SCOPE,SCOPEA,DN,MODEL,PIC,TEX,LOAD,MASS,JETP,STYPE,LTYPE,MCHG) \
	class ##CLASS## : MM_Bullfrog_Base \
	{ \
		author = ##AUTHOR##; \
		scope=##SCOPE##; \
		scopeArsenal=##SCOPEA##; \
		displayName= ##DN##; \
		model = ##MODEL##; \
		picture = ##PIC##; \
		hiddenSelectionsTextures[] = { ##TEX## }; \
		maximumLoad=##LOAD##; \
		mass=##MASS##; \
		isJetpack=##JETP##; \
		shortType=##STYPE##; \
		longType=##LTYPE##; \
		maxCharge=##MCHG##; \
	}; 
#define SJETPACK(CLASS,AUTHOR,SCOPE,SCOPEA,DN,MODEL,PIC,TEX,LOAD,MASS,JETP,STYPE,LTYPE,MCHG) \
	class ##CLASS## : MM_Bullfrog_Base \
	{ \
		author = ##AUTHOR##; \
		scope=##SCOPE##; \
		scopeArsenal=##SCOPEA##; \
		displayName= ##DN##; \
		model = ##MODEL##; \
		picture = ##PIC##; \
		hiddenSelectionsTextures[] = { ##TEX## }; \
		maximumLoad=##LOAD##; \
		mass=##MASS##; \
		isJetpack=##JETP##; \
		shortType=##STYPE##; \
		longType=##LTYPE##; \
		maxCharge=##MCHG##; \
	}; 