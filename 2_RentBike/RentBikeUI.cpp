/*
* RentBikeUI.cpp
* 자전거 대여 요청을 받고 컨트롤 클래스에 전달합니다.
*/
#include "RentBikeUI.h"


// 대여 요청 출력 및 컨트롤에 전달
void RentBikeUI::requestRental(std::ofstream& out, RentBike& control, User* user, BikeCollection& bikes, std::string bikeId) {
    out << "4.1. 자전거 대여\n";

    if (control.isAutorized(user)) {
        Bike* b = bikes.findBikeById(bikeId);
        if (b != nullptr) {
            out << "> " << b->getId() << " " << b->getProductName() << "\n";
            control.rentBikeToUser(bikes, bikeId, user->getId());
        }
    }
    out << "\n";

}