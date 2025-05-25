#ifndef ADDBIKE_H
#define ADDBIKE_H

#include <string>
#include "User.h"
#include "BikeCollection.h"

class AddBike {
public:
    bool checkAuthority(User* user);
    void saveBike(BikeCollection& collection, std::string bikeId, std::string name);
};

#endif