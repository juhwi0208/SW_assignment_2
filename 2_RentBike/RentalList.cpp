#include "RentalList.h"

std::vector<Bike> RentalList::showRentalList(User* user, BikeCollection& bikes) {
    if (user && user->isMember()) {  // 1.1.1
        return bikes.getRentingList(user->getId());  // 1.1.2
    }
    return {};
}