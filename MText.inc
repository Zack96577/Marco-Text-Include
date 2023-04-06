#if defined _MText_included
	#endinput
#endif

#if !defined _samp_included
	#tryinclude <a_samp>
	#if !defined _samp_included
		#error could not locate a_samp.inc file
	#endif
#endif

/*  Marco GameText V1.0.1  

   Remake Version Of LText.inc ( Luminouz Text )

*/

#include <a_samp>

new PlayerText:GameTextTd[MAX_PLAYERS][3];

stock CreatePlayerGameText(playerid)
{
	GameTextTd[playerid][0] = CreatePlayerTextDraw(playerid, 245.000000, 180.000000, "TYPE 1");
	PlayerTextDrawFont(playerid, GameTextTd[playerid][0], 2);
	PlayerTextDrawLetterSize(playerid, GameTextTd[playerid][0], 1.000000, 4.000000);
	PlayerTextDrawTextSize(playerid, GameTextTd[playerid][0], 400.000000, 17.000000);
	PlayerTextDrawSetOutline(playerid, GameTextTd[playerid][0], 2);
	PlayerTextDrawSetShadow(playerid, GameTextTd[playerid][0], 0);
	PlayerTextDrawAlignment(playerid, GameTextTd[playerid][0], 1);
	PlayerTextDrawColor(playerid, GameTextTd[playerid][0], -1);
	PlayerTextDrawBackgroundColor(playerid, GameTextTd[playerid][0], 255);
	PlayerTextDrawBoxColor(playerid, GameTextTd[playerid][0], 50);
	PlayerTextDrawUseBox(playerid, GameTextTd[playerid][0], 0);
	PlayerTextDrawSetProportional(playerid, GameTextTd[playerid][0], 1);
	PlayerTextDrawSetSelectable(playerid, GameTextTd[playerid][0], 0);

	GameTextTd[playerid][1] = CreatePlayerTextDraw(playerid, 500.000000, 270.000000, "TYPE 2");
	PlayerTextDrawFont(playerid, GameTextTd[playerid][1], 1);
	PlayerTextDrawLetterSize(playerid, GameTextTd[playerid][1], 0.600000, 4.000000);
	PlayerTextDrawTextSize(playerid, GameTextTd[playerid][1], 400.000000, 17.000000);
	PlayerTextDrawSetOutline(playerid, GameTextTd[playerid][1], 2);
	PlayerTextDrawSetShadow(playerid, GameTextTd[playerid][1], 0);
	PlayerTextDrawAlignment(playerid, GameTextTd[playerid][1], 1);
	PlayerTextDrawColor(playerid, GameTextTd[playerid][1], -1);
	PlayerTextDrawBackgroundColor(playerid, GameTextTd[playerid][1], 255);
	PlayerTextDrawBoxColor(playerid, GameTextTd[playerid][1], 50);
	PlayerTextDrawUseBox(playerid, GameTextTd[playerid][1], 0);
	PlayerTextDrawSetProportional(playerid, GameTextTd[playerid][1], 1);
	PlayerTextDrawSetSelectable(playerid, GameTextTd[playerid][1], 0);

	GameTextTd[playerid][2] = CreatePlayerTextDraw(playerid, 245.000000, 150.000000, "TYPE 3");
	PlayerTextDrawFont(playerid, GameTextTd[playerid][2], 3);
	PlayerTextDrawLetterSize(playerid, GameTextTd[playerid][2], 1.000000, 4.000000);
	PlayerTextDrawTextSize(playerid, GameTextTd[playerid][2], 400.000000, 17.000000);
	PlayerTextDrawSetOutline(playerid, GameTextTd[playerid][2], 2);
	PlayerTextDrawSetShadow(playerid, GameTextTd[playerid][2], 0);
	PlayerTextDrawAlignment(playerid, GameTextTd[playerid][2], 1);
	PlayerTextDrawColor(playerid, GameTextTd[playerid][2], -1);
	PlayerTextDrawBackgroundColor(playerid, GameTextTd[playerid][2], 255);
	PlayerTextDrawBoxColor(playerid, GameTextTd[playerid][2], 50);
	PlayerTextDrawUseBox(playerid, GameTextTd[playerid][2], 0);
	PlayerTextDrawSetProportional(playerid, GameTextTd[playerid][2], 1);
	PlayerTextDrawSetSelectable(playerid, GameTextTd[playerid][2], 0);

	return 1;
}

stock GameTextSetString(playerid, text[], type)
{
        if(text == 1) PlayerTextDrawSetString(playerid, GameTextTd[playerid][0], text);
        else if(text == 2) PlayerTextDrawSetString(playerid, GameTextTd[playerid][1], text);
        else if(text == 3) PlayerTextDrawSetString(playerid, GameTextTd[playerid][2], text);
        return 1;
}

stock ShowGameText(playerid, type)
{
        if(type == 1) PlayerTextDrawShow(playerid, GameTextTd[playerid][0]);
        else if(type == 2) PlayerTextDrawShow(playerid, GameTextTd[playerid][1]);
        else if(type == 3) PlayerTextDrawShow(playerid, GameTextTd[playerid][2]);
        return 1;
}

stock PlayerGameTextShow(playerid, text[], type, time)
{
        new default = time*1000;
        CreatePlayerGameText(playerid);
        GameTextSetString(playerid, text, type);
        ShowGameText(playerid, type);

        SetTimerEx("PlayerGameTextHide", default, false, "i", playerid); 
        return 1;
}

forward PlayerGameTextHide(playerid);
public PlayerGameTextHide(playerid)
{
        PlayerTextDrawHide(playerid, GameTextTd[playerid][0]);
        PlayerTextDrawHide(playerid, GameTextTd[playerid][1]);
        PlayerTextDrawHide(playerid, GameTextTd[playerid][2]);
        return 1;
}
