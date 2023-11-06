#pragma once
#include <string>
#include "entity.h"

class Goblin : Entity
{
private:
    std::string _Name;
    int _Dmg; // 5-50
    int _Hp; // 100

public:
// Default Constructor 
    // Memory Allocationen needs to be added!
    Goblin();

    //  Deconstructor
    ~Goblin(); // Wonder if we need to do a if statement to delete the current "Goblin" when game resets and not during the loop?

    // Member functions
    virtual int Take_Dmg(); // For its attck, If Goblin had different attacks we make different member functions
    virtual int Set_Hp(const int& dmg); // function to set current hp for the Goblin
};
