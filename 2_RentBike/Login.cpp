#include "Login.h"

User* Login::authenticateUser(UserCollection& users, std::string id, std::string pwd) {
    return users.authenticateUser(id, pwd);
}