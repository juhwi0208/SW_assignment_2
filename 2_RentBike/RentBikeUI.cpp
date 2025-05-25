#include "RentBikeUI.h"

void RentBikeUI::requestRental(std::ofstream& out, RentBike& control, User* user, BikeCollection& bikes, std::string bikeId) {
    out << "4.1. 자전거 대여\n";

    if (control.checkAuthority(user)) {
        Bike* b = bikes.findBikeById(bikeId);
        if (b != nullptr) {
            out << "> " << b->getId() << " " << b->getProductName() << "\n";
            control.rentBikeToUser(bikes, bikeId, user->getId());
        }
    }
    out << "\n";

}