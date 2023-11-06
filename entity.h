#pragma once
#include <string>
#include <sstream>
#include <iostream>

class Entity
{
protected:
    std::string _Name;
    int _Dmg; 
    int _Hp; 
public:
    // Default Constructor
    // Memory Allocationen needs to be added!
    Entity()
    {
        // default constructor
    }

    //  Deconstructor
    ~Entity(){} // deconstuctor could me made virtual just like member classes. 

    virtual int Set_Hp(const int& dmg) = 0; // Abstract class, doesnt exits by itself, other classes inherits from it

    virtual int Take_Dmg() = 0; // virtual = 0  == while compiles checks if the function been implemented in derived class if not error will ocour! 
    
    std::stringstream Save_Entity()// this can be epmpty and be virtual insted! // for future
    {
        std::stringstream saved_character;
        saved_character << _Name << _Dmg << _Hp;
        return saved_character;
    }
    
    /* member function not implemented yet! */
    void load_Entity(std::string save)// this can be epmpty and be virtual insted! // for future // needs to have a return type //stringstream!
    {
        std::stringstream load_data{ save };
        load_data >> _Name >> _Dmg >> _Hp;
        std::cout << _Name << ' ' << _Dmg << ' ' << _Hp << ' '; // just a test 
    }
};