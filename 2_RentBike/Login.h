/*
    Login.h
    로그인 요청을 처리하는 컨트롤 클래스 정의.
	이 클래스는 사용자 인증을 담당하며, UserCollection에서 사용자를 검색합니다.
*/
#ifndef LOGIN_H
#define LOGIN_H

//로그인 요청을 처리하는 컨트롤 클래스
// 이 클래스는 사용자 인증을 담당하며, UserCollection에서 사용자를 검색합니다.
#include <string>
#include "UserCollection.h"
#include "User.h"

class Login {
public:
    /*
    현재 사용자가 로그인할 수 있는지 권한을 확인
	@param users UserCollection 객체, 사용자 정보를 포함하는 컬렉션
	@param id 로그인하려는 사용자 ID
	@param pwd 로그인하려는 사용자 비밀번호
	@return User 객체, 인증된 사용자 정보 또는 nullptr (인증 실패 시)
    */
    User* authenticateUser(UserCollection& users, std::string id, std::string pwd);
};

#endif
