#include "RentalListUI.h"

void RentalListUI::showRentalList(std::ofstream& out, RentalList& control, User* user, BikeCollection& bikes) {
    out << "5.1. 자전거 대여 정보 조회\n";
    std::vector<Bike> rented = control.showRentalList(user, bikes);  // 1.1

    for (const Bike& b : rented) {
        out << "> " << b.getId() << " " << b.getProductName() << "\n";  // 1.1.2.2
    }
    out << "\n";
}
