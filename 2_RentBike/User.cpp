/*
User.cpp
User Ŭ������ ������ �� �Լ� ����
*/

#include "User.h"

// ������: ����� ID, ��й�ȣ, ��ȭ��ȣ, ����� ����
User::User(std::string id, std::string pwd, std::string phone, std::string type)
    : userId(id), password(pwd), phone(phone), userType(type) {
}

// ����� ID ��ȯ
std::string User::getId() {
    return userId;
}

// ��й�ȣ ��ġ ���� Ȯ��
bool User::isPasswordCorrect(std::string pwd) {
    return password == pwd;
}

// ������ ���� Ȯ��
bool User::isAdmin() {
    return userType == "admin";
}

// ȸ�� ���� Ȯ��
bool User::isMember() {
    return userType == "member";
}