#ifndef TESTLIST_H
#define TESTLIST_H

#include <string>
#include "test.h"
#include <vector>
#include <cstddef>

class testlist {

    testlist();

    static std::vector<test> _vec;
    static std::vector<std::string> _datafile;
    static int _lastid;

    static void guard_directory();
    static bool file_exists(std::string const& filename);
    static std::string generate_datafile();

    static bool load();
    static void guard();
    static void create();

public:

    static test& add();
    static void remove(test const& x);
    static int size();
    static test& at(int index);
    static bool empty();

    static void save();
};

#endif // TESTLIST_H
