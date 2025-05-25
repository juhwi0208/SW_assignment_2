#ifndef SIGNUP_H
#define SIGNUP_H

#include "UserCollection.h"

class Signup {
public:
    void saveUser(UserCollection& users, std::string id, std::string pwd, std::string phone);
};

#endif