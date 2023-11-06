#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

class filehandler
{
protected:
    int counter;
    /* data */
public:

    // default constructor
    filehandler(/* args */);

    ~filehandler();

    void write_to_file(std::stringstream& data);

    void read_file();

    std::string load_save();

    void delete_datafile();

    void delete_file();

};

