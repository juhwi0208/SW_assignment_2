/*
RentBike.h
자전거 대여 요청을 처리하는 컨트롤 클래스 정의.
회원 권한 확인 및 대여 처리 역할을 합니다.
*/
#ifndef RENTBIKE_H
#define RENTBIKE_H

#include <string>
#include "User.h"
#include "BikeCollection.h"

// 자전거 대여 기능을 담당하는 컨트롤 클래스입니다.
class RentBike {
public:
    /*
    * 대여 요청한 사용자가 회원인지 확인합니다.
    * @param user 현재 로그인된 사용자
    */
    bool isAutorized(User* user);

    /*
   * 자전거를 사용자에게 대여 처리합니다.
   * @param bikes 자전거 컬렉션
   * @param bikeId 자전거 ID
   * @param productName 자전거 이름
   */
    void rentBikeToUser(BikeCollection& bikes, std::string bikeId, std::string userId);
};

#endif