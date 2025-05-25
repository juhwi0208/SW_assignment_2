#ifndef SIGNUPUI_H
#define SIGNUPUI_H

#include <string>
#include <fstream>
#include "Signup.h"

class SignupUI {
public:
    void requestSignup(std::ofstream& out, Signup& control, UserCollection& users, std::string userId, std::string password, std::string phone);
};

#endif
