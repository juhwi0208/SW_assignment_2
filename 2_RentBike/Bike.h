#ifndef BIKE_H
#define BIKE_H

#include <string>

class Bike {
private:
    std::string bikeId;
    std::string productName;
    std::string rentedUserId = "";

public:
    Bike(std::string id, std::string name);
    std::string getId() const;
    std::string getProductName() const;
    std::string getRentedUserId() const;
    void rentTo(std::string userId);
};

#endif