#ifndef RENTBIKE_H
#define RENTBIKE_H

#include <string>
#include "User.h"
#include "BikeCollection.h"

class RentBike {
public:
    bool checkAuthority(User* user);
    void rentBikeToUser(BikeCollection& bikes, std::string bikeId, std::string userId);
};

#endif