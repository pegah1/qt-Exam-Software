#include "testlist.h"
#include <QDir>
#include <QFile>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <cstdlib>

std::vector<test> testlist::_vec;
std::vector<std::string> testlist::_datafile;
int testlist::_lastid;

using std::rand;
using std::string;
using std::ifstream;
using std::ofstream;
using std::getline;
using std::endl;
using std::exit;

testlist::testlist() { }

void testlist::guard_directory() {
    QDir cur;
    if(!cur.exists("data")) {
        cur.mkdir("data");
    }
}

bool testlist::file_exists(std::string const& filename) {
    QDir dir("data");
    return QFile::exists(dir.filePath(filename.c_str()));
}

std::string testlist::generate_datafile() {   //????????????
    guard_directory();

    const int maxlen = 10;
    char name[maxlen + 5];
    while(true) {
        int len = 1 + (rand() % (maxlen));
        for(int i = 0; i < len; ++i) name[i] = 'a' + rand() % ('z' - 'a' + 1);
        strcpy(name+len, ".dat");
        string ret = name;;
        if(!file_exists(ret)) {
            return ret;
        }
    }
}

void testlist::save() {
    guard_directory();
    ofstream out("test.txt");
    if(out.bad() || out.fail()) {
        exit(0);
    }
    out << _lastid << endl;
    QDir dir("data");
    for(int i = 0, _i = (int)_vec.size(); i != _i; ++i) {
        out << _datafile[i] << endl;
        _vec[i].save( dir.filePath(_datafile[i].c_str()).toAscii().constData() );
    }
}

bool testlist::load() {
    _vec.clear();
    _datafile.clear();

    guard_directory();

    ifstream in("test.txt");
    if(in.bad() || in.fail() || !in.good()) {
        return false;
    }
    if(!(in >> _lastid)) return false;
    QDir dir("data");
    while(true) {
        string s;
        if(!(getline(in, s))) break;
        if(s == "") continue;

        _datafile.push_back(s);
        test x;
        if(!x.load(dir.filePath(s.c_str()).toAscii().constData())) //???
            return false;
        if(x.empty()) x.add();
        _vec.push_back(x);
    }

    return true;
}

void testlist::create() {
    _vec.clear();
    _datafile.clear();
    _lastid = 0;
    save();
}

void testlist::guard() {
    if(_vec.empty()) {
        if(!load()) {
            create();
        }
    }
}

test& testlist::add() {
    guard();
    _datafile.push_back(generate_datafile());
    _vec.push_back(test());
    test& ret = _vec.back();
    char buff[1024];
    ++_lastid;
    sprintf(buff, "Contest %d", _lastid);
    ret.name = buff;
    save();
    return ret;
}

void testlist::remove(test const& x) {
    guard();
    int index = (((size_t)&x) - ((size_t)_vec.data())) / sizeof(test);
    if(index >= (int)_vec.size() || index < 0) {
        exit(0);
    }
    _vec.erase(_vec.begin() + index);
    _datafile.erase(_datafile.begin() + index);
    save();
}

int testlist::size() {
    guard();
    return (int) _vec.size();
}

test& testlist::at(int index) {
    guard();
    return _vec[index];
}

bool testlist::empty() {
    guard();
    return _vec.empty();
}

