/*
 Bike.h
 ������ ������ �����ϴ� Ŭ�����Դϴ�.
*/
#ifndef BIKE_H
#define BIKE_H

#include <string>


// ������ ID, ��ǰ��, �뿩 ����� ID ������ �����ϴ� Ŭ�����Դϴ�.
class Bike {
private:
    std::string bikeId;
    std::string productName;
    std::string rentedUserId = "";

public:
	// ������: ������ ID, ������ ��ǰ��
    Bike(std::string id, std::string name);

    //������ ID ��ȯ
    std::string getId() const;

	// ��ǰ�� ��ȯ
    std::string getProductName() const;

	// �뿩���� ������� ID ��ȯ
    std::string getRentedUserId() const;

	// �����ſ� �뿩�� ������� ID�� �ο�
    void rentToUser(std::string userId);
};

#endif