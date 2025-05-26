/*
* AddBike.h
* 자전거 등록 요청을 처리하는 컨트롤 클래스 정의.  
* 관리자 권한을 검증한 뒤 자전거를 등록합니다.
*/
#ifndef ADDBIKE_H
#define ADDBIKE_H

#include <string>
#include "User.h"
#include "BikeCollection.h"

// 자전거 등록 기능을 담당하는 컨트롤 클래스입니다.
class AddBike {
public:
    /*
    * 현재 사용자가 관리자인지 권한을 확인합니다.
    *  @param user 현재 로그인된 사용자 포인터
    *  @return true: 관리자일 경우
    */
    bool isAutorized(User* user);

    /*
    * 자전거 정보를 저장합니다.
    * @param bikes 자전거 컬렉션
    * @param bikeId 자전거 ID
    * @param productName 자전거 이름
    */
    void saveBike(BikeCollection& collection, std::string bikeId, std::string name);
};

#endif