/*
 RentalList.h
 사용자의 자전거 대여 정보 조회를 처리하는 컨트롤 클래스 정의.
*/
#ifndef RENTALLIST_H
#define RENTALLIST_H

#include <vector>
#include <string>
#include "User.h"
#include "Bike.h"
#include "BikeCollection.h"

// 자전거 대여 목록 조회를 담당하는 컨트롤 클래스입니다.
class RentalList {
public:

    /*    
    해당 사용자의 대여 자전거 목록을 반환합니다.  
	@param user: 대여 목록을 조회할 사용자 포인터
	@param bikes: 자전거 컬렉션 객체
	@return: 사용자가 대여한 자전거 목록을 담은 벡터
    */
    std::vector<Bike> showRentalList(User* user, BikeCollection& bikes);
};

#endif