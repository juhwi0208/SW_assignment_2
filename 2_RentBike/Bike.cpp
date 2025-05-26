/*
 Bike.cpp
 Bike Ŭ���� ����: ������, �뿩 ó��, getter
*/
#include "Bike.h"

// ������ ID, ��ǰ��, �뿩 ����� ID�� �����ϴ� �������Դϴ�
Bike::Bike(std::string id, std::string name)
    : bikeId(id), productName(name) {
}

//������ ID ��ȯ
std::string Bike::getId() const {
    return bikeId;
}

// ��ǰ�� ��ȯ
std::string Bike::getProductName() const {
    return productName;
}

// �뿩���� ������� ID ��ȯ
std::string Bike::getRentedUserId() const {
    return rentedUserId;
}

// �����ſ� �뿩�� ������� ID�� �ο�
void Bike::rentToUser(std::string userId) {
    rentedUserId = userId;
}