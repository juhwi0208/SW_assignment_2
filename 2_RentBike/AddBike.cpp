/*
 * AddBike.cpp
 * �����ڰ� �Է��� ������ ������ BikeCollection�� �߰��ϴ� ����� �����մϴ�.
 */

#include "AddBike.h"
#include "Bike.h"

 //����ڰ� ���������� Ȯ���ϴ� �Լ�
bool AddBike::isAutorized(User* user) {
    return user && user->isAdmin();
}

// ������ ������ ��ü�� �����ϰ� BikeCollection�� �߰��ϴ� �Լ�
void AddBike::saveBike(BikeCollection& collection, std::string bikeId, std::string name) {
    Bike newBike(bikeId, name);
    collection.addBike(newBike);
}