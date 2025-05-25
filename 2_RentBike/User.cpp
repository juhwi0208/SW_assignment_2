#include "User.h"

User::User(std::string id, std::string pwd, std::string phone, std::string type)
    : userId(id), password(pwd), phone(phone), userType(type) {
}

std::string User::getId() {
    return userId;
}

bool User::verifyPwd(std::string pwd) {
    return password == pwd;
}

bool User::isAdmin() {
    return userType == "admin";
}

bool User::isMember() {
    return userType == "member";
}