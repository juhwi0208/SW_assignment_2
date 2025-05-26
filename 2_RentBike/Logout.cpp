/*
*  Logout.cpp
* 로그아웃 기능을 수행합니다. 
* 현재 사용자 세션을 종료합니다.
*/
#include "Logout.h"

// 로그아웃 기능을 수행합니다.
void Logout::endSession(User*& currentUser) {
    currentUser = nullptr;
}