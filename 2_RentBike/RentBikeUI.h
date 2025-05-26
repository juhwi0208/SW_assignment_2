/*
* RentBikeUI.h
* 자전거 대여 UI 클래스. 사용자가 대여할 자전거 ID를 입력하면 컨트롤에 전달합니다.
*/
#ifndef RENTBIKEUI_H
#define RENTBIKEUI_H

#include <string>
#include <fstream>
#include "RentBike.h"

//자전거 대여 UI 클래스
class RentBikeUI {
public:

	// 사용자에게 자전거 ID를 입력받아 대여 요청을 처리합니다.
	/*
	* @param out 출력 스트림, 대여 요청 결과를 기록합니다.
	* @param control RentBike 컨트롤 객체, 대여 요청을 처리합니다.
	* @param user 대여를 요청하는 사용자 객체.
	* @param bikes 자전거 컬렉션 객체, 대여 가능한 자전거 목록을 관리합니다.
	* @param bikeId 대여할 자전거의 ID.
	*/
    void requestRental(std::ofstream& out, RentBike& control, User* user, BikeCollection& bikes, std::string bikeId);
};

#endif
