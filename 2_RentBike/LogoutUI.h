/*
* LogoutUI.h
* �α׾ƿ� UI Ŭ����. ���� �α��ε� ������� �α׾ƿ��� ��û�մϴ�.
*/
#ifndef LOGOUTUI_H
#define LOGOUTUI_H

#include <fstream>
#include "Logout.h"
//�α׾ƿ� �������̽��� ���� UI Ŭ�����Դϴ�.
class LogoutUI {
public:
    /*
    * �α׾ƿ� ��û ����    
	* @param out �α׾ƿ� ����� ����� ��Ʈ��
	* @param control �α׾ƿ� �������̽� ��Ʈ�ѷ�
	* @param currentUser ���� �α��ε� ����� ������
    */
    void requestLogout(std::ofstream& out, Logout& control, User*& currentUser);
};

#endif