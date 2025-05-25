#ifndef ADDBIKEUI_H
#define ADDBIKEUI_H

#include <string>
#include <fstream>
#include "AddBike.h"

class AddBikeUI {
public:
    void requestAddBike(std::ofstream& out, AddBike& control, User* user, BikeCollection& collection, std::string id, std::string name);
};

#endif