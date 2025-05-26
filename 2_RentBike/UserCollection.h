/*
 UserCollection.h
 사용자 목록을 저장 및 관리하는 클래스입니다.
*/
#ifndef USERCOLLECTION_H
#define USERCOLLECTION_H

#include <vector>
#include "User.h"

// 전체 사용자 목록을 저장하고 사용자 인증, 초기화 기능을 제공합니다.
class UserCollection {
private:
    std::vector<User> ownedUsers;

public:

    //사용자 추가
    void addUser(const User& user);

    //사용자 인증
    User* authenticateUser(std::string id, std::string pwd);

	// 사용자 목록 초기화
    void clear();
};

#endif