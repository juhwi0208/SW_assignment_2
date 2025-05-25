#ifndef LOGINUI_H
#define LOGINUI_H

#include <string>
#include <fstream>
#include "Login.h"

class LoginUI {
public:
    void requestLogin(std::ofstream& out, Login& control, UserCollection& users, std::string id, std::string pwd, User*& currentUser);
};

#endif
