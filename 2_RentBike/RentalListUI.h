/*
* RentalListUI.h
* 자전거 대여 목록 조회 UI 클래스. 현재 로그인된 사용자의 대여 정보를 출력합니다.
*/
#ifndef RENTALLISTUI_H
#define RENTALLISTUI_H

#include <fstream>
#include "RentalList.h"

//자전거 대여 목록 조회 UI 클래스
class RentalListUI {
public:

    //대여목록 출력
    /*
	* @param out 출력 스트림
	* @param control 대여 목록 컨트롤 객체
	* @param user 현재 로그인된 사용자 객체
	* @param bikes 자전거 컬렉션 객체
    */
    void showRentalList(std::ofstream& out, RentalList& control, User* user, BikeCollection& bikes);
};

#endif