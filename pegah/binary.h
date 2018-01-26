#ifndef BINARY_H
#define BINARY_H

#include <fstream>
#include <string>

class binary {
    binary();

public:

    static void write(std::ofstream& f, std::string const& s);
    static bool read(std::ifstream& f, std::string& ret);

    static void write(std::ofstream& f, int i);
    static bool read(std::ifstream& f, int& i);

};

#endif // BINARY_H
