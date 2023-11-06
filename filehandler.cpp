
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "filehandler.h"


    filehandler::filehandler(/* args */)
    {
        int counter = 0;  
    }

    filehandler::~filehandler(){};
// writes data onto the file
    void filehandler::write_to_file(std::stringstream& data)
    {   
        // add counter to use for wich line we put our save on!
        std::ofstream Save_File;
        Save_File.open("myfile.txt", std::ios::app); // ::app appends new data to the old one
        //std::string data = "Test Data";
        //std::cout << "Händer detta?" << std::endl;
        Save_File << data.str() <<
         std::endl;
        Save_File.close();
        counter++;
    }

// Reads whole File and cout its content
    void filehandler::read_file()
    {
        std::ifstream Save_Files("myfile.txt");
        std::string output;
        while (Save_Files.good())
        {
            std::getline(Save_Files,output);
            std::cout << output << std::endl;
        }
        Save_Files.close();
    }

    std::string filehandler::load_save()
    {
        std::ifstream Save_Files("myfile.txt");
        std::string output;
        int row_choice = 5; // this will be user input eventually
        std::cin >> row_choice;
        for (int i = 0; i < row_choice; i++)
        {
            std::getline(Save_Files,output);
            std::cout << output << std::endl;
        }
        Save_Files.close();
        return output; // output is the last line in the for loop = the one thats searched for
    }

    // Functions to be made 
    void filehandler::delete_datafile(){}

    void filehandler::delete_file(){}





//  # DEV TESTING !!! # 
// functions and calls simulating rest of program

/*
std::stringstream Save_Entity()
    {
        std::string _Name = "HEJ";
        int _Dmg = 10;
        int _Hp = 100;
        std::stringstream saved_character;
        saved_character << _Name << _Dmg << _Hp;
        return saved_character;
    }
    void load_Entity(std::string save)
    {
        std::stringstream ss{ save };
        std::string c;
        int x;
        int d;
        ss >> c >> x >> d;
        std::cout << c << ' ' << x << ' ' << d << ' ';

    }


int main()
{
    
    std::stringstream data = Save_Entity();
    filehandler new_save;
    new_save.write_to_file(data);
    //new_save.read_file();
    //std::string char_load = new_save.load_save();
    load_Entity(new_save.load_save());

    return 0;
}



/* DONT FORGET TO MAKE A SAVE ENTITY CLASS MEMBER THAT TALKS TO THIS ONE*/




