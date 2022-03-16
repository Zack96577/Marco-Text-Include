#if defined _MText_included
	#endinput
#endif

#if !defined _samp_included
	#tryinclude <a_samp>
	#if !defined _samp_included
		#error could not locate a_samp.inc file
	#endif
#endif

/*  Marco GameText V1.0.1  */

#include <a_samp>

new PlayerText:GameText1[MAX_PLAYERS];
new PlayerText:GameText2[MAX_PLAYERS];
new PlayerText:GameText3[MAX_PLAYERS];
