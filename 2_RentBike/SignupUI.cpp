/*
* SignupUI.cpp
* ����ڷκ��� ȸ������ ������ �Է¹ް� Signup ��Ʈ�ѿ� �����մϴ�.
*/
#include "SignupUI.h"


// ȸ������ �޴� ��� ��� �� ��û ó��
void SignupUI::requestSignup(std::ofstream& out, Signup& control, UserCollection& users, std::string userId, std::string password, std::string phone) {
    out << "1.1. ȸ������\n";
    out << "> " << userId << " " << password << " " << phone << "\n\n";
    control.saveUser(users, userId, password, phone);
}