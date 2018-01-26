#ifndef USERLIST_H
#define USERLIST_H

#include "user.h"
#include <vector>

class userlist {

    userlist();

    static std::vector< user > _users;
    static int _logged;

    static void save();
    static bool load();
    static void create();
    static void guard();

    static int find(std::string const& username);

public:

    static bool add(user const& u);
    //static bool remove(user const& u);
    static int size();
    static user& at(int index);
    static user& at(std::string const& name);
    static bool exists(std::string const& name);
    static void logon(user const& u);
    static void logoff();
    static user& current_user();

};

#endif // USERLIST_H
