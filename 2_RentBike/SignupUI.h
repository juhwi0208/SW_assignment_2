
/*
* SignupUI.h
* 회원가입 UI 클래스.
* 사용자로부터 회원가입 정보를 입력받아 컨트롤 클래스에 전달합니다.

*/
#ifndef SIGNUPUI_H
#define SIGNUPUI_H

#include <string>
#include <fstream>
#include "Signup.h"

// 회원가입 유스케이스를 위한 UI 클래스입니다.
class SignupUI {
public:
    /*
    * 회원가입 요청을 컨트롤에 전달합니다.
	* @param out: 회원가입 결과를 출력할 스트림
	* @param control: 회원가입을 처리하는 컨트롤 클래스
	* @param users: 사용자 컬렉션
	* @param userId: 사용자 ID
	* @param password: 사용자 비밀번호
	* @param phone: 사용자 전화번호
    */
    void requestSignup(std::ofstream& out, Signup& control, UserCollection& users, std::string userId, std::string password, std::string phone);
};

#endif
