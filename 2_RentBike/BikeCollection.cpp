#include "BikeCollection.h"

void BikeCollection::addBike(const Bike& bike) {
    ownedBikes.push_back(bike);
}

Bike* BikeCollection::findBikeById(const std::string& id) {
    for (Bike& b : ownedBikes) {
        if (b.getId() == id) {
            return &b;
        }
    }
    return nullptr;
}

std::vector<Bike> BikeCollection::getRentingList(const std::string& userId) {
    std::vector<Bike> result;
    for (const Bike& b : ownedBikes) {
        if (b.getRentedUserId() == userId) {
            result.push_back(b);
        }
    }
    return result;
}



Bike* BikeCollection::findFirst() {
    if (ownedBikes.empty()) return nullptr;
    currentBikeIndex = 0;
    return &ownedBikes[currentBikeIndex];
}

Bike* BikeCollection::getNext() {
    if (currentBikeIndex + 1 < (int)ownedBikes.size()) {
        currentBikeIndex++;
        return &ownedBikes[currentBikeIndex];
    }
    return nullptr;
}
