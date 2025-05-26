/*
* AddBikeUI.h
* ������ ��� UI Ŭ����.
* ������ ������ �Է¹޾� ��Ʈ�ѿ� �����մϴ�.
*/
#ifndef ADDBIKEUI_H
#define ADDBIKEUI_H

#include <string>
#include <fstream>
#include "AddBike.h"

// ������ ��� �������̽��� ���� UI Ŭ�����Դϴ�.
class AddBikeUI {
public:

    /*
	* ������ ��� ��û�� ó��
	* @param out ��� ��Ʈ��
	* @param control AddBike ��Ʈ�� ��ü
	* @param user ���� ����� ��ü (������ ���� �Ǵ�)
	* @param collection ������ �÷��� ��ü
	* @param id ������ ID
	* @param name ������ �̸�
	*/
    void requestAddBike(std::ofstream& out, AddBike& control, User* user, BikeCollection& collection, std::string id, std::string name);
};

#endif