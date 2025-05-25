#ifndef RENTALLIST_H
#define RENTALLIST_H

#include <vector>
#include <string>
#include "User.h"
#include "Bike.h"
#include "BikeCollection.h"

class RentalList {
public:
    std::vector<Bike> showRentalList(User* user, BikeCollection& bikes);
};

#endif