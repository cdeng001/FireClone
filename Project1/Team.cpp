#include "Team.h"
#include "SDL.h"
#include <SDL_ttf.h>
#include <SDL_mixer.h>
#include <SDL_image.h>
#include "LTexture.h"
#include "Consts.h"
#include "stdlib.h"
#include <iostream>

Team::Team():
max_capacity(TEAM_SIZE), cur_capacity(0)
{
	for (int i = 0; i < TEAM_SIZE; i++)
	{
		team[i] = NULL;
	}
}

Team::~Team()
{
	for (int i = 0; i < TEAM_SIZE; i++)
	{
		delete team[i];
		team[i] = NULL;
	}
}

void Team::addMonster(int i, int x, int y)
{
	if (cur_capacity >= TEAM_SIZE)
	{
		return;
	}

	if (cur_capacity < TEAM_SIZE)
	{
		Monster* temp;
		switch (i)
		{
		case Illidan_Stormrage:
			temp = new Monster(x, y, 10, 5, 1, 1, DARK_DAMAGE_TYPE, 2, "Illidan Stormrage", i);
			team[cur_capacity] = temp;
			break;
		case Akama:
			temp = new Monster(x, y, 10, 5, 1, 1, HOLY_DAMAGE_TYPE, 2, "Akama", i);
			team[cur_capacity] = temp;
			break;
		case Magni_Bronzebeard:
			temp = new Monster(x, y, 10, 5, 1, 1, LIGHTING_DAMAGE_TYPE, 2, "Magni Bronzebeard", i);
			team[cur_capacity] = temp;
			break;
		case Tyrande_Whisperwind:
			temp = new Monster(x, y, 10, 5, 1, 1, FIRE_DAMAGE_TYPE, 2, "Tyrande Whisperwind", i);
			team[cur_capacity] = temp;
			break;
		case Lich_King:
			temp = new Monster(x, y, 10, 5, 1, 1, ICE_DAMAGE_TYPE, 2, "Lich King", i);
			team[cur_capacity] = temp;
			break;
		case Maiev_Shadowsong:
			temp = new Monster(x, y, 10, 5, 1, 1, POISON_DAMAGE_TYPE, 2, "Maiev Shadowsong", i);
			team[cur_capacity] = temp;
			break;
		case Baine_Bloodhoof:
			temp = new Monster(x, y, 10, 5, 1, 1, MELEE_DAMAGE_TYPE, 2, "Baine Bloodhoof", i);
			team[cur_capacity] = temp;
			break;
		case Sylvanas_Windrunner:
			temp = new Monster(x, y, 10, 5, 1, 1, MELEE_DAMAGE_TYPE, 2, "Sylvanas Windrunner", i);
			team[cur_capacity] = temp;
			break;
		case Glenn_Greymane:
			temp = new Monster(x, y, 10, 5, 2, 2, MELEE_DAMAGE_TYPE, 2, "Glenn Greymane", i);
			team[cur_capacity] = temp;
			break;
		case Garrosh_Hellscream:
			temp = new Monster(x, y, 10, 5, 1, 1, RANGED_DAMAGE_TYPE, 2, "Garrosh Hellscream", i);
			team[cur_capacity] = temp;
			break;
		case Varian_Wrynn:
			temp = new Monster(x, y, 10, 5, 1, 1, RANGED_DAMAGE_TYPE, 2, "Varian Wrynn", i);
			team[cur_capacity] = temp;
			break;
		case Prophet_Velen:
			temp = new Monster(x, y, 10, 5, 1, 1, RANGED_DAMAGE_TYPE, 2, "Prophet Velen", i);
			team[cur_capacity] = temp;
			break;
		case Goblin_Trade_Prince:
			temp = new Monster(x, y, 10, 5, 1, 1, RANGED_DAMAGE_TYPE, 2, "Goblin Trade Prince", i);
			team[cur_capacity] = temp;
			break;
		case Voljin:
			temp = new Monster(x, y, 10, 5, 1, 1, RANGED_DAMAGE_TYPE, 2, "Vol'jin", i);
			team[cur_capacity] = temp;
			break;
		case Lorthemar_Theron:
			temp = new Monster(x, y, 10, 5, 1, 1, RANGED_DAMAGE_TYPE, 2, "Lorthemar Theron", i);
			team[cur_capacity] = temp;
			break;
		case Gelbin_Mekkatorque:
			temp = new Monster(x, y, 10, 5, 1, 1, RANGED_DAMAGE_TYPE, 2, "Gelbin Mekkatorque", i);
			team[cur_capacity] = temp;
			break;
		case Diablo:
			temp = new Monster(x, y, 10, 5, 1, 1, RANGED_DAMAGE_TYPE, 2, "Diablo Lord of Hatred", i);
			team[cur_capacity] = temp;
			break;
		case Mephisto:
			temp = new Monster(x, y, 10, 5, 1, 1, RANGED_DAMAGE_TYPE, 2, "Mephisto Lord of Terror", i);
			team[cur_capacity] = temp;
			break;
		case Baal:
			temp = new Monster(x, y, 10, 5, 1, 1, RANGED_DAMAGE_TYPE, 2, "Baal Lord of Destruction", i);
			team[cur_capacity] = temp;
			break;
		case King_Leoric:
			temp = new Monster(x, y, 10, 5, 1, 1, RANGED_DAMAGE_TYPE, 2, "Leoric Skeleton King", i);
			team[cur_capacity] = temp;
			break;
		case Imperius:
			temp = new Monster(x, y, 10, 5, 1, 1, RANGED_DAMAGE_TYPE, 2, "Imperius Archangel of Valor", i);
			team[cur_capacity] = temp;
			break;
		case Tyrael:
			temp = new Monster(x, y, 10, 5, 1, 1, RANGED_DAMAGE_TYPE, 2, "Tyreal Aspect of Wisdom", i);
			team[cur_capacity] = temp;
			break;
		case Malthael:
			temp = new Monster(x, y, 10, 5, 1, 1, RANGED_DAMAGE_TYPE, 2, "Malthael The Reaper", i);
			team[cur_capacity] = temp;
			break;
		case Izual:
			temp = new Monster(x, y, 10, 5, 1, 1, RANGED_DAMAGE_TYPE, 2, "Izual The Betrayer", i);
			team[cur_capacity] = temp;
			break;
		case Mephiston:
			temp = new Monster(x, y, 10, 5, 1, 1, RANGED_DAMAGE_TYPE, 2, "Mephiston Lord of Death", i);
			team[cur_capacity] = temp;
			break;
		case Swarm_Lord:
			temp = new Monster(x, y, 10, 5, 1, 1, RANGED_DAMAGE_TYPE, 2, "Behemoth Swarm Lord", i);
			team[cur_capacity] = temp;
			break;
		case Deathleaper:
			temp = new Monster(x, y, 10, 5, 1, 1, RANGED_DAMAGE_TYPE, 2, "Leviathan Deathleaper", i);
			team[cur_capacity] = temp;
			break;
		case Typhus:
			temp = new Monster(x, y, 10, 5, 1, 1, RANGED_DAMAGE_TYPE, 2, "Typhus the Traveller", i);
			team[cur_capacity] = temp;
			break;
		case Kharn:
			temp = new Monster(x, y, 10, 5, 1, 1, RANGED_DAMAGE_TYPE, 2, "Kharn Champion of Khorn", i);
			team[cur_capacity] = temp;
			break;
		case Ahriman:
			temp = new Monster(x, y, 10, 5, 1, 1, RANGED_DAMAGE_TYPE, 2, "Ahriman of Thousand Suns", i);
			team[cur_capacity] = temp;
			break;
		case Lucius:
			temp = new Monster(x, y, 10, 5, 1, 1, RANGED_DAMAGE_TYPE, 2, "Lucius the Eternal", i);
			team[cur_capacity] = temp;
			break;
		case Kaela_Meinsha_Khaine:
			temp = new Monster(x, y, 10, 5, 1, 1, RANGED_DAMAGE_TYPE, 2, "Kaela Eldar Avatar of War", i);
			team[cur_capacity] = temp;
			break;
		case Astrubael_Vect:
			temp = new Monster(x, y, 10, 5, 1, 1, RANGED_DAMAGE_TYPE, 2, "Astrubael Vect", i);
			team[cur_capacity] = temp;
			break;
		case O_Shovah:
			temp = new Monster(x, y, 10, 5, 1, 1, RANGED_DAMAGE_TYPE, 2, "O\'Shovah Commander Farsight", i);
			team[cur_capacity] = temp;
			break;
		case Imotekh_Stormlord:
			temp = new Monster(x, y, 10, 5, 1, 1, RANGED_DAMAGE_TYPE, 2, "Imotekh the Stormlord", i);
			team[cur_capacity] = temp;
			break;
		case Snagrod:
			temp = new Monster(x, y, 10, 5, 1, 1, RANGED_DAMAGE_TYPE, 2, "Snagrod", i);
			team[cur_capacity] = temp;
			break;
		case Sebastian_Yarrick:
			temp = new Monster(x, y, 10, 5, 1, 1, RANGED_DAMAGE_TYPE, 2, "Sebastian Yarrick", i);
			team[cur_capacity] = temp;
			break;
		case Darnath_Lysander:
			temp = new Monster(x, y, 10, 5, 1, 1, RANGED_DAMAGE_TYPE, 2, "Darnath Lysander", i);
			team[cur_capacity] = temp;
			break;
		case Logan_Grimnar:
			temp = new Monster(x, y, 10, 5, 1, 1, RANGED_DAMAGE_TYPE, 2, "Logan Grimnar", i);
			team[cur_capacity] = temp;
			break;
		case Kaldor_Draigo:
			temp = new Monster(x, y, 10, 5, 1, 1, RANGED_DAMAGE_TYPE, 2, "Kaldor Draigo", i);
			team[cur_capacity] = temp;
			break;
		default:
			break;
		}
	}
	cur_capacity++;
}

Monster*& Team::getMonster(int i)
{
	return this->team[i];
}

int Team::getCurr()
{
	return this->cur_capacity;
}

void Team::damageMonster(int i, Monster* target)
{
	target->doDamageTo(team[i]);
}

bool Team::checkFull()
{
	return cur_capacity >= max_capacity;
}