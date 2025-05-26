/*
    Login.h
    �α��� ��û�� ó���ϴ� ��Ʈ�� Ŭ���� ����.
	�� Ŭ������ ����� ������ ����ϸ�, UserCollection���� ����ڸ� �˻��մϴ�.
*/
#ifndef LOGIN_H
#define LOGIN_H

//�α��� ��û�� ó���ϴ� ��Ʈ�� Ŭ����
// �� Ŭ������ ����� ������ ����ϸ�, UserCollection���� ����ڸ� �˻��մϴ�.
#include <string>
#include "UserCollection.h"
#include "User.h"

class Login {
public:
    /*
    ���� ����ڰ� �α����� �� �ִ��� ������ Ȯ��
	@param users UserCollection ��ü, ����� ������ �����ϴ� �÷���
	@param id �α����Ϸ��� ����� ID
	@param pwd �α����Ϸ��� ����� ��й�ȣ
	@return User ��ü, ������ ����� ���� �Ǵ� nullptr (���� ���� ��)
    */
    User* authenticateUser(UserCollection& users, std::string id, std::string pwd);
};

#endif
