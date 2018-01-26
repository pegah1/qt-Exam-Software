#include "user.h"
#include <cctype>

using std::string;
using std::ifstream;
using std::tolower;
using std::endl;

user::user() : _username(), _password() { }
user::user(std::string const& username, std::string const& password, userlevel_t level) : _username(username), _password(password), _level(level) {
    for(int i = 0, _i = (int)_username.size(); i != _i; ++i) {
        _username[i] = tolower(_username[i]);
    }
}
user::user(user const& x) : _username(x._username), _password(x._password), _level(x._level) { }
user& user::operator =(user const& x) {
    if(this != &x) {
        _username = x._username;
        _password = x._password;
        _level = x._level;
    }
    return *this;
}

std::string const& user::username() const { return _username; }
std::string const& user::password() const { return _password; }

void user::save(std::ofstream &f) {
    string temp = _password;
    for(int i = 0, _i = (int)temp.size(); i != _i; ++i) {
        temp[i] = (temp[i] + 1);
    }
    f << _username << "\t" << temp << "\t" << (int)_level << endl;
}

bool user::load(std::ifstream &f) {
    int level;
    if(!(f >> _username >> _password >> level)) return false;
    _level = (userlevel_t) level;
    for(int i = 0, _i = (int)_password.size(); i != _i; ++i) {
        _password[i] = (_password[i] - 1);
    }
    return true;
}

userlevel_t user::level() const { return _level; }
void user::setLevel(userlevel_t level) { _level = level; }
