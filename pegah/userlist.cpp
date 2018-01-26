#include "userlist.h"
#include <cctype>
#include <cstdlib>

using std::vector;
using std::ifstream;
using std::ofstream;
using std::tolower;
using std::string;
using std::exit;

userlist::userlist() { }

std::vector< user > userlist::_users;
int userlist::_logged = -1;

void userlist::save() {
    ofstream out("passwords.dat");
    if(out.bad() || out.fail()) {
        exit(0);
    }
    for(int i = 0, _i = (int)_users.size(); i != _i; ++i) {
        _users[i].save(out);
    }
}

bool userlist::load() {
    ifstream in("passwords.dat");
    if(in.bad() || in.fail() || in.eof()) {
        return false;
    }
    while(true) {
        user x;
        if(!x.load(in)) break;
        _users.push_back(x);
    }
    return true;
}

void userlist::create() {
    _users.clear();
    _users.push_back(user("admin", "1234", USER_LEVEL_ADMIN));
    _users.push_back(user("designer", "abcd", USER_LEVEL_DESIGNER));
    _users.push_back(user("student", "efgh", USER_LEVEL_CONTESTANT));
    save();
}

void userlist::guard() {
    if(_users.empty()) {
        if(!load()) {
            create();
            save();
        }
    }
}

int userlist::find(std::string const& username) {
    for(int i = 0, _i = (int)_users.size(); i != _i; ++i) {
        if(_users[i].username() == username) {
            return (int) i;
        }
    }
    return -1;
}

bool userlist::add(const user &u) {
    guard();
    if(find(u.username()) >= 0) {
        return false;
    }
    _users.push_back(u);
    save();
    return true;
}

/**
bool userlist::remove(const user &u) {
    guard();

    int index = (int) (((unsigned int)&u) - ((unsigned int)_users.data())) / sizeof(user);
    if(index >= (int)_users.size() || index < 0) {
        return false;
    }
    if(index == _logged) return false;
    if(index < _logged) --_logged;
    _users.erase(_users.begin() + index);
    save();
    return true;
}
*/

int userlist::size() {
    guard();
    return (int) _users.size();
}

user& userlist::at(int index) {
    return _users[index];
}

user& userlist::at(std::string const& name) {
    string temp = name;
    for(int i = 0, _i = (int)name.size(); i != _i; ++i) {
        temp[i] = tolower(name[i]);
    }
    int index = find(temp);
    if(index < 0) {
        exit(0);
    }
    return _users[index];
}

void userlist::logon(user const& u) {
    int index = (int) (((unsigned int)&u) - ((unsigned int)_users.data())) / sizeof(user);
    if(index >= (int)_users.size() || index < 0) {
        exit(0);
    }
    _logged = index;
}

bool userlist::exists(std::string const& name) {
    guard();
    string temp = name;
    for(int i = 0, _i = (int)name.size(); i != _i; ++i) {
        temp[i] = tolower(name[i]);
    }
    return find(temp) >= 0;
}

void userlist::logoff() {
    _logged = -1;
}

user& userlist::current_user() {
    if(_logged < 0) {
        exit(0);
    }
    return _users[_logged];
}
