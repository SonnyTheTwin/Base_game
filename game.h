#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include "entity.h"
#include "baseplayer.h"
#include "goblin.h"




class Goblin_Slayer // The Game!
{
private:
    /* data */
public:
Goblin_Slayer();

~Goblin_Slayer();

void pause();

void picture_main_menue();

void picture_choose_name();

void picture_battle_choices();

void picture_player_attack(const std::string& name, const int& player_dmg, const int& goblin_current_hp );

void picture_goblin_attack(const std::string& name, const int& goblin_dmg, const int& player_current_hp );

void picture_player_wins(const std::string& name, const int& player_current_hp );

void picture_goblin_wins(const std::string& name, const int& goblin_current_hp);

void picture_Error();

bool win_condition(const int& goblin_Hp, const int& player_Hp,const std::string& player_name);

std::string main_menue();

std::string choose_character_name(Player& p1);

char character_choice();

int player_attack(Player& p1, Goblin& g1, const std::string& player_name, int& goblin_current_hp);

int goblin_attack(Goblin& g1, Player& p1, std::string& player_name, int& player_current_hp);

void game_loop();
};
