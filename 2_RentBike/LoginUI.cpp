/*
* LoginUI.cpp
* 사용자로부터 로그인 정보를 입력받고 Login 컨트롤에 전달합니다.
*/
#include "LoginUI.h"

// 로그인 요청 처리 및 결과 출력
void LoginUI::requestLogin(std::ofstream& out, Login& control, UserCollection& users, std::string id, std::string pwd, User*& currentUser) {
    out << "2.1. 로그인\n";
    out << "> " << id << " " << pwd << "\n\n";
    currentUser = control.authenticateUser(users, id, pwd);
}