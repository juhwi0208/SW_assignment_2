#include "AddBikeUI.h"

void AddBikeUI::requestAddBike(std::ofstream& out, AddBike& control, User* user, BikeCollection& collection, std::string id, std::string name) {
    out << "3.1. 자전거 등록\n";
    out << "> " << id << " " << name << "\n\n";
    if (control.checkAuthority(user)) {
        control.saveBike(collection, id, name);
    }
}