#include "Signup.h"
#include "User.h"

void Signup::saveUser(UserCollection& users, std::string id, std::string pwd, std::string phone) {
    User newUser(id, pwd, phone);
    users.addUser(newUser);
}