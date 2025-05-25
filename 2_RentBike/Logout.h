#ifndef LOGOUT_H
#define LOGOUT_H

#include "User.h"

class Logout {
public:
    void endSession(User*& currentUser);
};

#endif