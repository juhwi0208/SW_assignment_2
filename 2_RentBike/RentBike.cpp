/*
* RentBike.cpp
* 자전거 대여 기능을 구현합니다. 
*/
#include "RentBike.h"

//회원인지 확인하는 함수
bool RentBike::isAutorized(User* user) {
    return user && user->isMember();
}

// 자전거를 사용자 ID로 대여 처리합니다.
void RentBike::rentBikeToUser(BikeCollection& bikes, std::string bikeId, std::string userId) {
    Bike* b = bikes.findBikeById(bikeId);
    if (b != nullptr) {
        b->rentToUser(userId);
    }
}