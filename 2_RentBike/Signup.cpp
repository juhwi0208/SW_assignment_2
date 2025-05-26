/*
* Signup.cpp
* ����ڷκ��� ���޹��� ������ �������� User ��ü�� �����ϰ�
* userCollection�� �����ϴ� ����� ����
*/
#include "Signup.h"
#include "User.h"

// User ��ü�� �����ϰ� userCollection�� �����ϴ� �Լ�
void Signup::saveUser(UserCollection& users, std::string id, std::string pwd, std::string phone) {
    User newUser(id, pwd, phone);
    users.addUser(newUser);
}