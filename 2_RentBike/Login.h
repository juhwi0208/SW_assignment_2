#ifndef LOGIN_H
#define LOGIN_H

#include <string>
#include "UserCollection.h"
#include "User.h"

class Login {
public:
    User* authenticateUser(UserCollection& users, std::string id, std::string pwd);
};

#endif
