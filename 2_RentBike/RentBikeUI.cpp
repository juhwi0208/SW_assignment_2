/*
* RentBikeUI.cpp
* ������ �뿩 ��û�� �ް� ��Ʈ�� Ŭ������ �����մϴ�.
*/
#include "RentBikeUI.h"


// �뿩 ��û ��� �� ��Ʈ�ѿ� ����
void RentBikeUI::requestRental(std::ofstream& out, RentBike& control, User* user, BikeCollection& bikes, std::string bikeId) {
    out << "4.1. ������ �뿩\n";

    if (control.isAutorized(user)) {
        Bike* b = bikes.findBikeById(bikeId);
        if (b != nullptr) {
            out << "> " << b->getId() << " " << b->getProductName() << "\n";
            control.rentBikeToUser(bikes, bikeId, user->getId());
        }
    }
    out << "\n";

}