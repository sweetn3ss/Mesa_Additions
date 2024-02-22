//######################################################################################################
//######################################################################################################
//###### STOP!! DO NOT TOUCH THESE PLEASE!! THEY ARE THE BASIS OF DEBUGGING THIS MOD!###################
//######################################################################################################
//######################################################################################################

//debug specific manipulation 
#define LABELDEF(LABEL) "["+LABEL+"]"
#define QLINE(LINE) "(Line " + #LINE + ")"
#define LOG(DATA) diag_log (DATA)
#define QLOG(DATA) LOG(#DATA)

//actual debug macros
#define RPTDEBUG(FILE,LINE,LABEL,INFO) LOG(QJOIN(QJOIN(FILE,QLINE(LINE)),QJOIN(LABELDEF(LABEL),INFO)))
#define HINTDEBUG(LABEL,INFO) hint QJOIN(LABELDEF(LABEL),INFO)