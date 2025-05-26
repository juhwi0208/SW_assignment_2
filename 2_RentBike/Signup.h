/*
Signup.h
회원가입 요청을 처리하는 컨트롤 클래스 정의.
사용자 정보를 받아 UserCollection에 저장합니다.
*/ 
#ifndef SIGNUP_H
#define SIGNUP_H

#include "UserCollection.h"

//회원가입 요청을 처리하는 컨트롤 클래스
// Signup 클래스는 사용자 정보를 받아 UserCollection에 저장하는 기능을 제공합니다.
class Signup {
public:
    /*
        saveUser
        사용자 정보를 UserCollection에 저장합니다.
        @param users UserCollection 객체
        @param id 사용자 ID
        @param pwd 사용자 비밀번호
        @param phone 사용자 전화번호
		@return void
    */
    void saveUser(UserCollection& users, std::string id, std::string pwd, std::string phone);
};

#endif