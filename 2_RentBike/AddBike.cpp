/*
 * AddBike.cpp
 * 관리자가 입력한 자전거 정보를 BikeCollection에 추가하는 기능을 구현합니다.
 */

#include "AddBike.h"
#include "Bike.h"

 //사용자가 관리자인지 확인하는 함수
bool AddBike::isAutorized(User* user) {
    return user && user->isAdmin();
}

// 자전거 정보를 객체로 생성하고 BikeCollection에 추가하는 함수
void AddBike::saveBike(BikeCollection& collection, std::string bikeId, std::string name) {
    Bike newBike(bikeId, name);
    collection.addBike(newBike);
}