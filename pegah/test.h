#ifndef TEST_H
#define TEST_H

#include "question.h"
#include <vector>

struct test {

    std::vector< question > v;
    std::string name;
    int duration;

    test();
    test(test const& x);
    test& operator = (test const& x);

    void save(std::string const& filename);
    bool load(std::string const& filename);

    bool empty() const;
    int size() const;
    question& at(int index);
    question& add();

};

#endif // TEST_H
