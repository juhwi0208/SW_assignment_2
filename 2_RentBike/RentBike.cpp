/*
* RentBike.cpp
* ������ �뿩 ����� �����մϴ�. 
*/
#include "RentBike.h"

//ȸ������ Ȯ���ϴ� �Լ�
bool RentBike::isAutorized(User* user) {
    return user && user->isMember();
}

// �����Ÿ� ����� ID�� �뿩 ó���մϴ�.
void RentBike::rentBikeToUser(BikeCollection& bikes, std::string bikeId, std::string userId) {
    Bike* b = bikes.findBikeById(bikeId);
    if (b != nullptr) {
        b->rentToUser(userId);
    }
}