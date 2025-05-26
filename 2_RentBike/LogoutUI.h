/*
* LogoutUI.h
* 로그아웃 UI 클래스. 현재 로그인된 사용자의 로그아웃을 요청합니다.
*/
#ifndef LOGOUTUI_H
#define LOGOUTUI_H

#include <fstream>
#include "Logout.h"
//로그아웃 유스케이스를 위한 UI 클래스입니다.
class LogoutUI {
public:
    /*
    * 로그아웃 요청 수행    
	* @param out 로그아웃 결과를 출력할 스트림
	* @param control 로그아웃 유스케이스 컨트롤러
	* @param currentUser 현재 로그인된 사용자 포인터
    */
    void requestLogout(std::ofstream& out, Logout& control, User*& currentUser);
};

#endif