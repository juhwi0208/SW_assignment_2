/*
* AddBikeUI.cpp
* ������ ��� ������ �Է� �޾� AddBike ��Ʈ�ѿ� �����մϴ�.
*/
#include "AddBikeUI.h"

// ������ ��� ��û�� ó���ϰ� ��� ���
void AddBikeUI::requestAddBike(std::ofstream& out, AddBike& control, User* user, BikeCollection& collection, std::string id, std::string name) {
    out << "3.1. ������ ���\n";
    out << "> " << id << " " << name << "\n\n";
    if (control.isAutorized(user)) {
        control.saveBike(collection, id, name);
    }
}