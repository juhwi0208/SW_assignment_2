/*
* Login.cpp
* ����ڷκ��� ���޹��� ID�� ��й�ȣ�� ����Ͽ�
* ����� ������ ó���ϴ� ��� ����
*/
#include "Login.h"

// ����� ������ ó���ϴ� �Լ��Դϴ�.
User* Login::authenticateUser(UserCollection& users, std::string id, std::string pwd) {
    return users.authenticateUser(id, pwd);
}