/*
* UserCollection.cpp
* UserCollection 클래스 구현: 사용자 추가, 인증, 초기화
*/
#include "UserCollection.h"


//사용자 추가
void UserCollection::addUser(const User& user) {
    ownedUsers.push_back(user);
}


//사용자 인증
User* UserCollection::authenticateUser(std::string id, std::string pwd) {
    for (User& user : ownedUsers) {
        if (user.getId() == id && user.isPasswordCorrect(pwd)) {
            return &user;
        }
    }
    return nullptr;
}

//사용자 목록 초기화
void UserCollection::clear() {
    ownedUsers.clear();
}