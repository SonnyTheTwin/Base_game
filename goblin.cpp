#include <iostream>
#include <string>
#include <cstdlib>

#include "goblin.h"

    // Default Constructor 
    // Memory Allocationen needs to be added!
    Goblin::Goblin() 
    {
        _Name = "Lurtz"; 
        _Dmg = 0;
        _Hp = 100; 
        //std::cout << "Default Goblin has been Created" << std::endl;
    } //FIX

    //  Constructor with Parameters
    // Goblin(); //FIX (Do we need this?)

    //  Deconstructor
    Goblin::~Goblin(){} // Wonder if we need to do a if statement to delete the current "Goblin" when game resets and not during the loop?

    // Member functions
    int Goblin::Take_Dmg() // For its attck, If Goblin had different attacks we make different member functions
    {
        // Put randomizer here for dmg between 5-50
        int x = time(0); // sets the psudo seed according to the time (This will make it so a new seed will be created every time)
        srand(x);
        int random; // Veriabel were we will store a random number between 5-50
        int lb = 5, ub = 50; // Lower Bracket/Upper Bracket
        random = rand() % (ub - lb + 1) + lb;
        //std::cout << "RANDOM NR ÄR: " << random << std::endl; // TEST // 
        return random;
    }

    int Goblin::Set_Hp(const int& dmg) // function to set current hp for the Goblin
    {
        int currentHp = _Hp-dmg;
        _Hp = currentHp;
        return currentHp;
    }

