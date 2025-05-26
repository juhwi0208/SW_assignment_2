/*
User.cpp
User 클래스의 생성자 및 함수 구현
*/

#include "User.h"

// 생성자: 사용자 ID, 비밀번호, 전화번호, 사용자 유형
User::User(std::string id, std::string pwd, std::string phone, std::string type)
    : userId(id), password(pwd), phone(phone), userType(type) {
}

// 사용자 ID 반환
std::string User::getId() {
    return userId;
}

// 비밀번호 일치 여부 확인
bool User::isPasswordCorrect(std::string pwd) {
    return password == pwd;
}

// 관리자 여부 확인
bool User::isAdmin() {
    return userType == "admin";
}

// 회원 여부 확인
bool User::isMember() {
    return userType == "member";
}