#include "Bike.h"

Bike::Bike(std::string id, std::string name)
    : bikeId(id), productName(name) {
}

std::string Bike::getId() const {
    return bikeId;
}

std::string Bike::getProductName() const {
    return productName;
}

std::string Bike::getRentedUserId() const {
    return rentedUserId;
}

void Bike::rentTo(std::string userId) {
    rentedUserId = userId;
}