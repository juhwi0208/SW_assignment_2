/*
Signup.h
ȸ������ ��û�� ó���ϴ� ��Ʈ�� Ŭ���� ����.
����� ������ �޾� UserCollection�� �����մϴ�.
*/ 
#ifndef SIGNUP_H
#define SIGNUP_H

#include "UserCollection.h"

//ȸ������ ��û�� ó���ϴ� ��Ʈ�� Ŭ����
// Signup Ŭ������ ����� ������ �޾� UserCollection�� �����ϴ� ����� �����մϴ�.
class Signup {
public:
    /*
        saveUser
        ����� ������ UserCollection�� �����մϴ�.
        @param users UserCollection ��ü
        @param id ����� ID
        @param pwd ����� ��й�ȣ
        @param phone ����� ��ȭ��ȣ
		@return void
    */
    void saveUser(UserCollection& users, std::string id, std::string pwd, std::string phone);
};

#endif