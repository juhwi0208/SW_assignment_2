/*
Logout.h
�α׾ƿ� ��û�� ó���ϴ� ��Ʈ�� Ŭ���� ����.
�� Ŭ������ ���� �α��ε� ������� ������ �����ϴ� ����� �����մϴ�.
*/
#ifndef LOGOUT_H
#define LOGOUT_H

#include "User.h"

//�α׾ƿ��� ����ϴ� ��Ʈ�� Ŭ�����Դϴ�
// ���� �α��ε� ����ڸ� �α׾ƿ� ó��
class Logout {
public:

    /*
    * ������ �����մϴ�.
    *  @param user ���� �α��ε� ����� ������
    */
    void endSession(User*& currentUser);
};

#endif