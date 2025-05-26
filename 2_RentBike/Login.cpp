/*
* Login.cpp
* 사용자로부터 전달받은 ID와 비밀번호를 사용하여
* 사용자 인증을 처리하는 기능 구현
*/
#include "Login.h"

// 사용자 인증을 처리하는 함수입니다.
User* Login::authenticateUser(UserCollection& users, std::string id, std::string pwd) {
    return users.authenticateUser(id, pwd);
}