#include "RentBike.h"

bool RentBike::checkAuthority(User* user) {
    return user && user->isMember();
}

void RentBike::rentBikeToUser(BikeCollection& bikes, std::string bikeId, std::string userId) {
    Bike* b = bikes.findBikeById(bikeId);
    if (b != nullptr) {
        b->rentTo(userId);
    }
}