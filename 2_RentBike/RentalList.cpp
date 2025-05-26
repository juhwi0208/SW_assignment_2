/*
* RentalList.cpp
* 회원의 자전거 대여 정보를 조회합니다.
*/
#include "RentalList.h"

// 현재 사용자가 대여 중인 자전거 리스트를 반환합니다.
std::vector<Bike> RentalList::showRentalList(User* user, BikeCollection& bikes) {
    if (user && user->isMember()) {  // 1.1.1
        return bikes.getRentingList(user->getId());  // 1.1.2
    }
    return {};
}