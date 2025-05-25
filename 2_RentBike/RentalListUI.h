#ifndef RENTALLISTUI_H
#define RENTALLISTUI_H

#include <fstream>
#include "RentalList.h"

class RentalListUI {
public:
    void showRentalList(std::ofstream& out, RentalList& control, User* user, BikeCollection& bikes);
};

#endif