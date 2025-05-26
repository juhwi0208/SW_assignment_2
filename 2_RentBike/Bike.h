/*
 Bike.h
 자전거 정보를 저장하는 클래스입니다.
*/
#ifndef BIKE_H
#define BIKE_H

#include <string>


// 자전거 ID, 제품명, 대여 사용자 ID 정보를 포함하는 클래스입니다.
class Bike {
private:
    std::string bikeId;
    std::string productName;
    std::string rentedUserId = "";

public:
	// 생성자: 자전거 ID, 자전거 제품명
    Bike(std::string id, std::string name);

    //자전거 ID 반환
    std::string getId() const;

	// 제품명 반환
    std::string getProductName() const;

	// 대여중인 사용자의 ID 반환
    std::string getRentedUserId() const;

	// 자전거에 대여한 사용자의 ID를 부여
    void rentToUser(std::string userId);
};

#endif