#ifndef USER_H
#define USER_H

#include <string>

class User {
private:
    std::string userId;
    std::string password;
    std::string phone;
    std::string userType = "member";

public:
    User(std::string id, std::string pwd, std::string phone, std::string type = "member");
    std::string getId();
    bool verifyPwd(std::string pwd);
    bool isAdmin();
    bool isMember();
};

#endif