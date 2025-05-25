#ifndef RENTBIKEUI_H
#define RENTBIKEUI_H

#include <string>
#include <fstream>
#include "RentBike.h"

class RentBikeUI {
public:
    void requestRental(std::ofstream& out, RentBike& control, User* user, BikeCollection& bikes, std::string bikeId);
};

#endif
