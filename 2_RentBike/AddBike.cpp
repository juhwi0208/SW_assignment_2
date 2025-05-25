#include "AddBike.h"
#include "Bike.h"

bool AddBike::checkAuthority(User* user) {
    return user && user->isAdmin();
}

void AddBike::saveBike(BikeCollection& collection, std::string bikeId, std::string name) {
    Bike newBike(bikeId, name);
    collection.addBike(newBike);
}