#include "test.h"
#include <cstddef>
#include <cstdlib>
#include <binary.h>

using std::ifstream;
using std::ofstream;
using std::exit;
using std::endl;
using std::getline;

test::test() : duration(20) { }
test::test(test const& x) : v(x.v), name(x.name), duration(x.duration) { }
test& test::operator =(test const& x) {
    if(this != &x) {
        v = x.v;
        name = x.name;
        duration = x.duration;
    }
    return *this;
}

bool test::empty() const { return v.empty(); }

int test::size() const { return (int) v.size(); }

question& test::at(int index) { return v[index]; }

question& test::add() {
    v.push_back( question() );
    return v.back();
}

void test::save(std::string const& filename) {

    ofstream f(filename.c_str(), std::ios::binary);
    if(f.bad() || f.fail()) {
        exit(0);
    }

    binary::write(f, name);
    binary::write(f, duration);

    for(int i = 0, _i = (int)v.size(); i != _i; ++i) {
        v[i].save(f);
    }
}

bool test::load(std::string const& filename) {
    ifstream f(filename.c_str(), std::ios::binary);
    if(f.bad() || f.fail() || f.eof()) {
        return false;
    }
    v.clear();

    if(!binary::read(f, name)) return false;
    if(!binary::read(f, duration)) return false;

    while(true) {
        question q;
        if(!q.load(f)) break;
        v.push_back(q);
    }
    return true;
}

