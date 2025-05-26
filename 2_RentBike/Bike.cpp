/*
 Bike.cpp
 Bike 클래스 구현: 생성자, 대여 처리, getter
*/
#include "Bike.h"

// 자전거 ID, 제품명, 대여 사용자 ID를 설정하는 생성자입니다
Bike::Bike(std::string id, std::string name)
    : bikeId(id), productName(name) {
}

//자전거 ID 반환
std::string Bike::getId() const {
    return bikeId;
}

// 제품명 반환
std::string Bike::getProductName() const {
    return productName;
}

// 대여중인 사용자의 ID 반환
std::string Bike::getRentedUserId() const {
    return rentedUserId;
}

// 자전거에 대여한 사용자의 ID를 부여
void Bike::rentToUser(std::string userId) {
    rentedUserId = userId;
}