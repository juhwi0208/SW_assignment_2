/*
* LogoutUI.cpp
* ������� �α׾ƿ� ��û�� ó���ϴ� UI Ŭ���� ����
*/
#include "LogoutUI.h"

// �α׾ƿ� �޴� ��� �� ���� ����
void LogoutUI::requestLogout(std::ofstream& out, Logout& control, User*& currentUser) {
    out << "2.2. �α׾ƿ�\n";
    out << "> " << currentUser->getId() << "\n\n";
    control.endSession(currentUser);
}