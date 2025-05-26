/*
* AddBikeUI.h
* 자전거 등록 UI 클래스.
* 자전거 정보를 입력받아 컨트롤에 전달합니다.
*/
#ifndef ADDBIKEUI_H
#define ADDBIKEUI_H

#include <string>
#include <fstream>
#include "AddBike.h"

// 자전거 등록 유스케이스를 위한 UI 클래스입니다.
class AddBikeUI {
public:

    /*
	* 자전거 등록 요청을 처리
	* @param out 출력 스트림
	* @param control AddBike 컨트롤 객체
	* @param user 현재 사용자 객체 (관리자 여부 판단)
	* @param collection 자전거 컬렉션 객체
	* @param id 자전거 ID
	* @param name 자전거 이름
	*/
    void requestAddBike(std::ofstream& out, AddBike& control, User* user, BikeCollection& collection, std::string id, std::string name);
};

#endif