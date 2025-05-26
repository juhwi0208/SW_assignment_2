
/*
* SignupUI.h
* ȸ������ UI Ŭ����.
* ����ڷκ��� ȸ������ ������ �Է¹޾� ��Ʈ�� Ŭ������ �����մϴ�.

*/
#ifndef SIGNUPUI_H
#define SIGNUPUI_H

#include <string>
#include <fstream>
#include "Signup.h"

// ȸ������ �������̽��� ���� UI Ŭ�����Դϴ�.
class SignupUI {
public:
    /*
    * ȸ������ ��û�� ��Ʈ�ѿ� �����մϴ�.
	* @param out: ȸ������ ����� ����� ��Ʈ��
	* @param control: ȸ�������� ó���ϴ� ��Ʈ�� Ŭ����
	* @param users: ����� �÷���
	* @param userId: ����� ID
	* @param password: ����� ��й�ȣ
	* @param phone: ����� ��ȭ��ȣ
    */
    void requestSignup(std::ofstream& out, Signup& control, UserCollection& users, std::string userId, std::string password, std::string phone);
};

#endif
