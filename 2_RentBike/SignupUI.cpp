/*
* SignupUI.cpp
* 사용자로부터 회원가입 정보를 입력받고 Signup 컨트롤에 전달합니다.
*/
#include "SignupUI.h"


// 회원가입 메뉴 헤더 출력 및 요청 처리
void SignupUI::requestSignup(std::ofstream& out, Signup& control, UserCollection& users, std::string userId, std::string password, std::string phone) {
    out << "1.1. 회원가입\n";
    out << "> " << userId << " " << password << " " << phone << "\n\n";
    control.saveUser(users, userId, password, phone);
}