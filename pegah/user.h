#ifndef USER_H
#define USER_H

#include <string>
#include <fstream>
#include "userlevel.h"

class user {

    std::string _username;
    std::string _password;
    userlevel_t _level;

public:

    user();
    user(std::string const& username, std::string const& password, userlevel_t level);
    user(user const& x);
    user& operator = (user const& x);

    void save(std::ofstream& f);
    bool load(std::ifstream& f);

    std::string const& username() const;
    std::string const& password() const;
    userlevel_t level() const;
    void setLevel(userlevel_t level);
};

#endif // USER_H
