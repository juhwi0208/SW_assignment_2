#include "UserCollection.h"

void UserCollection::addUser(const User& user) {
    userList.push_back(user);
}

User* UserCollection::authenticateUser(std::string id, std::string pwd) {
    for (User& user : userList) {
        if (user.getId() == id && user.verifyPwd(pwd)) {
            return &user;
        }
    }
    return nullptr;
}