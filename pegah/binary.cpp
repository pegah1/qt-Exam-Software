#include "binary.h"
#include <cstdlib>

using std::exit;
using std::string;

binary::binary() { }

void binary::write(std::ofstream& f, std::string const& s) {
    int len = s.size();
    if(!f.write((char*) &len, sizeof(int))) {
        exit(0);
    }
    if(!f.write(s.c_str(), len)) {
        exit(0);
    }
}

bool binary::read(std::ifstream& f, std::string& ret) {
    int len;
    if(!f.read((char*)&len, sizeof(int))) return false;
    ret = string(len, '_');
    return f.read((char*)ret.c_str(), len);
}

void binary::write(std::ofstream &f, int i) {
    if(!f.write((char*)&i, sizeof(int))) {
        exit(0);
    }
}

bool binary::read(std::ifstream &f, int &i) {
    return f.read((char*)&i, sizeof(int));
}
