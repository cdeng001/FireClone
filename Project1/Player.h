#pragma once

#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include "math.h"
#include "Consts.h"
#include "Monster.h"
#include "LTexture.h"
#include "Tile.h"
#include "Dot.h"
#include "Icon.h"
#include "Button.h"
#include "ButtonFunctions.h"
#include "Menu.h"
#include "SelectScreen.h"
#include "Team.h"
#include "Globals.h"
#include <vector>

class Player 
{
public:
	void getTeam();

protected:
	Team team;
};