/*
* RentBikeUI.h
* ������ �뿩 UI Ŭ����. ����ڰ� �뿩�� ������ ID�� �Է��ϸ� ��Ʈ�ѿ� �����մϴ�.
*/
#ifndef RENTBIKEUI_H
#define RENTBIKEUI_H

#include <string>
#include <fstream>
#include "RentBike.h"

//������ �뿩 UI Ŭ����
class RentBikeUI {
public:

	// ����ڿ��� ������ ID�� �Է¹޾� �뿩 ��û�� ó���մϴ�.
	/*
	* @param out ��� ��Ʈ��, �뿩 ��û ����� ����մϴ�.
	* @param control RentBike ��Ʈ�� ��ü, �뿩 ��û�� ó���մϴ�.
	* @param user �뿩�� ��û�ϴ� ����� ��ü.
	* @param bikes ������ �÷��� ��ü, �뿩 ������ ������ ����� �����մϴ�.
	* @param bikeId �뿩�� �������� ID.
	*/
    void requestRental(std::ofstream& out, RentBike& control, User* user, BikeCollection& bikes, std::string bikeId);
};

#endif
