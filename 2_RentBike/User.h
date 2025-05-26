/*
 * User.h
 * 사용자 정보를 나타내는 클래스입니다. 
 * ID, 비밀번호, 전화번호 및 사용자 유형을 저장합니다.
 */
#ifndef USER_H
#define USER_H

#include <string>

//시스템 내 사용자 정보를 관리하는 클래스입니다.
class User {
private:
    std::string userId;
    std::string password;
    std::string phone;
    std::string userType = "member";  // "admin" or "member"

public:
	// 생성자: 사용자 ID, 비밀번호, 전화번호, 사용자 유형
    User(std::string id, std::string pwd, std::string phone, std::string type = "member");
   
    // 사용자 ID 반환 (내부 참조용)
    std::string getId();

    // 비밀번호 일치 여부 확인
    bool isPasswordCorrect(std::string pwd);

    // 관리자 여부 확인
    bool isAdmin();

    // 회원 여부 확인
    bool isMember();
};

#endif