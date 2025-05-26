/*
* LogoutUI.cpp
* 사용자의 로그아웃 요청을 처리하는 UI 클래스 구현
*/
#include "LogoutUI.h"

// 로그아웃 메뉴 출력 및 세션 종료
void LogoutUI::requestLogout(std::ofstream& out, Logout& control, User*& currentUser) {
    out << "2.2. 로그아웃\n";
    out << "> " << currentUser->getId() << "\n\n";
    control.endSession(currentUser);
}