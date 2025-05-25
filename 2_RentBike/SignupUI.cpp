#include "SignupUI.h"

void SignupUI::requestSignup(std::ofstream& out, Signup& control, UserCollection& users, std::string userId, std::string password, std::string phone) {
    out << "1.1. 회원가입\n";
    out << "> " << userId << " " << password << " " << phone << "\n\n";
    control.saveUser(users, userId, password, phone);
}