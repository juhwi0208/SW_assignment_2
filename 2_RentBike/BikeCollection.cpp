/*
* BikeCollection.cpp
* BikeCollection 클래스 구현: 자전거 추가, 검색, 대여 목록 조회, 초기화
*/
#include "BikeCollection.h"


//새로운 자전거 등록
void BikeCollection::addBike(const Bike& bike) {
    ownedBikes.push_back(bike);
}

// 자전거 ID로 자전거를 검색합니다.
Bike* BikeCollection::findBikeById(const std::string& id) {
    for (Bike& b : ownedBikes) {
        if (b.getId() == id) {
            return &b;
        }
    }
    return nullptr;
}

// 특정 사용자가 대여 중인 자전거 목록을 반환합니다.
std::vector<Bike> BikeCollection::getRentingList(const std::string& userId) {
    std::vector<Bike> result;
    for (const Bike& b : ownedBikes) {
        if (b.getRentedUserId() == userId) {
            result.push_back(b);
        }
    }
    return result;
}

// 자전거 목록 초기화
void BikeCollection::clear() {
    ownedBikes.clear();
}