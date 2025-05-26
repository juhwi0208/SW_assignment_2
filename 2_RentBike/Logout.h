/*
Logout.h
로그아웃 요청을 처리하는 컨트롤 클래스 정의.
이 클래스는 현재 로그인된 사용자의 세션을 종료하는 기능을 제공합니다.
*/
#ifndef LOGOUT_H
#define LOGOUT_H

#include "User.h"

//로그아웃을 담당하는 컨트롤 클래스입니다
// 현재 로그인된 사용자를 로그아웃 처리
class Logout {
public:

    /*
    * 세션을 종료합니다.
    *  @param user 현재 로그인된 사용자 포인터
    */
    void endSession(User*& currentUser);
};

#endif