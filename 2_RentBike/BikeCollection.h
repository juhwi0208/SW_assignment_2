#ifndef BIKECOLLECTION_H
#define BIKECOLLECTION_H

#include <vector>
#include <string>
#include "Bike.h"

class BikeCollection {
private:
    std::vector<Bike> ownedBikes;
    int currentBikeIndex = -1;  // getNext()¿¡ »ç¿ë

public:
    void addBike(const Bike& bike);
    Bike* findBikeById(const std::string& id);
    std::vector<Bike> getRentingList(const std::string& userId);

    Bike* findFirst(); 
    Bike* getNext();   
};

#endif
