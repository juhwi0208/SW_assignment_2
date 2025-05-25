#ifndef USERCOLLECTION_H
#define USERCOLLECTION_H

#include <vector>
#include "User.h"

class UserCollection {
private:
    std::vector<User> userList;

public:
    void addUser(const User& user);
    User* authenticateUser(std::string id, std::string pwd);
};

#endif