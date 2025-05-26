/*
* Signup.cpp
* 사용자로부터 전달받은 정보를 바탕으로 User 객체를 생성하고
* userCollection에 저장하는 기능을 구현
*/
#include "Signup.h"
#include "User.h"

// User 객체를 생성하고 userCollection에 저장하는 함수
void Signup::saveUser(UserCollection& users, std::string id, std::string pwd, std::string phone) {
    User newUser(id, pwd, phone);
    users.addUser(newUser);
}