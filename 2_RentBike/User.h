/*
 * User.h
 * ����� ������ ��Ÿ���� Ŭ�����Դϴ�. 
 * ID, ��й�ȣ, ��ȭ��ȣ �� ����� ������ �����մϴ�.
 */
#ifndef USER_H
#define USER_H

#include <string>

//�ý��� �� ����� ������ �����ϴ� Ŭ�����Դϴ�.
class User {
private:
    std::string userId;
    std::string password;
    std::string phone;
    std::string userType = "member";  // "admin" or "member"

public:
	// ������: ����� ID, ��й�ȣ, ��ȭ��ȣ, ����� ����
    User(std::string id, std::string pwd, std::string phone, std::string type = "member");
   
    // ����� ID ��ȯ (���� ������)
    std::string getId();

    // ��й�ȣ ��ġ ���� Ȯ��
    bool isPasswordCorrect(std::string pwd);

    // ������ ���� Ȯ��
    bool isAdmin();

    // ȸ�� ���� Ȯ��
    bool isMember();
};

#endif