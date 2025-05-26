/*
* RentalListUI.h
* ������ �뿩 ��� ��ȸ UI Ŭ����. ���� �α��ε� ������� �뿩 ������ ����մϴ�.
*/
#ifndef RENTALLISTUI_H
#define RENTALLISTUI_H

#include <fstream>
#include "RentalList.h"

//������ �뿩 ��� ��ȸ UI Ŭ����
class RentalListUI {
public:

    //�뿩��� ���
    /*
	* @param out ��� ��Ʈ��
	* @param control �뿩 ��� ��Ʈ�� ��ü
	* @param user ���� �α��ε� ����� ��ü
	* @param bikes ������ �÷��� ��ü
    */
    void showRentalList(std::ofstream& out, RentalList& control, User* user, BikeCollection& bikes);
};

#endif