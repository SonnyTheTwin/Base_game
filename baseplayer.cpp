#include <iostream>
#include <string>

#include "baseplayer.h"

// Default Constructor
    // Memory Allocationen needs to be added!
    Player::Player() 
    {
        _Name = " <Empty> ";
        _Dmg = 10;
        _Hp = 100;
    }
    //  Deconstructor
    Player::~Player(){}
    // Member functions: //
    int Player::Take_Dmg() 
    {
        int dmg = _Dmg;
        return dmg;
    }
    // Function to set hp during battle
    int Player::Set_Hp(const int& dmg)
    {
        int currentHp = _Hp-dmg;
        _Hp = currentHp;
        return currentHp;
    }

    void Player::pause()
    {
    std::string input;
    std::getline(std::cin, input);
    }
    // Lets the player set name for their Character
    std::string Player::SetName()
    { 
        std::string playerName;
        std::getline(std::cin,playerName);
        _Name = playerName; 
        return _Name;
    }

    std::stringstream Player::Save_Entity()
    {
        std::string name = _Name;
        int dmg = _Dmg;
        int hp = _Hp;
        std::stringstream saved_character;
        saved_character << name << dmg << hp;
        return saved_character;
    }

