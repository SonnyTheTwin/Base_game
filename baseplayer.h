#pragma once
#include <string>
#include "entity.h"

class Player : Entity
{
public:

// Default Constructor
    // Memory Allocationen needs to be added!
    Player();
    //  Deconstructor
    ~Player();
    // Member functions: //
    virtual int Take_Dmg();
    // Function to set hp during battle
    virtual int Set_Hp(const int& dmg);

    void pause();
    // Lets the player set name for their Character
    std::string SetName();

    std::stringstream Save_Entity();
};
