#include "LoginUI.h"

void LoginUI::requestLogin(std::ofstream& out, Login& control, UserCollection& users, std::string id, std::string pwd, User*& currentUser) {
    out << "2.1. ·Î±×ÀÎ\n";
    out << "> " << id << " " << pwd << "\n\n";
    currentUser = control.authenticateUser(users, id, pwd);
}