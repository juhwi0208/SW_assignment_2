/*
* LoginUI.h
* �α��� UI Ŭ����. ����ڷκ��� ID�� ��й�ȣ�� �Է¹޾� ��Ʈ�ѿ� �����մϴ�.
*/

#ifndef LOGINUI_H
#define LOGINUI_H

#include <string>
#include <fstream>
#include "Login.h"

// �α��� �������̽��� ���� UI Ŭ�����Դϴ�.
class LoginUI {
public:

    /*
    * �α��� ��û ����
    * @param out ��� ��Ʈ��
    *  @param control �α��� ��Ʈ��
    * @param users ����� �����
    * @param id ����� ID
    * @param pwd ��й�ȣ
    * @param currentUser ���� �α��ε� ����� ������ (�α��� ���� �� ����)
    */

    void requestLogin(std::ofstream& out, Login& control, UserCollection& users, std::string id, std::string pwd, User*& currentUser);
};

#endif
