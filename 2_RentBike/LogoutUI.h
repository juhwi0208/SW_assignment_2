#ifndef LOGOUTUI_H
#define LOGOUTUI_H

#include <fstream>
#include "Logout.h"

class LogoutUI {
public:
    void requestLogout(std::ofstream& out, Logout& control, User*& currentUser);
};

#endif