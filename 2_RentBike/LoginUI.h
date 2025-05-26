/*
* LoginUI.h
* 로그인 UI 클래스. 사용자로부터 ID와 비밀번호를 입력받아 컨트롤에 전달합니다.
*/

#ifndef LOGINUI_H
#define LOGINUI_H

#include <string>
#include <fstream>
#include "Login.h"

// 로그인 유스케이스를 위한 UI 클래스입니다.
class LoginUI {
public:

    /*
    * 로그인 요청 수행
    * @param out 출력 스트림
    *  @param control 로그인 컨트롤
    * @param users 사용자 저장소
    * @param id 사용자 ID
    * @param pwd 비밀번호
    * @param currentUser 현재 로그인된 사용자 포인터 (로그인 성공 시 갱신)
    */

    void requestLogin(std::ofstream& out, Login& control, UserCollection& users, std::string id, std::string pwd, User*& currentUser);
};

#endif
