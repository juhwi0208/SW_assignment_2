/*
* AddBikeUI.cpp
* 자전거 등록 정보를 입력 받아 AddBike 컨트롤에 전달합니다.
*/
#include "AddBikeUI.h"

// 자전거 등록 요청을 처리하고 결과 출력
void AddBikeUI::requestAddBike(std::ofstream& out, AddBike& control, User* user, BikeCollection& collection, std::string id, std::string name) {
    out << "3.1. 자전거 등록\n";
    out << "> " << id << " " << name << "\n\n";
    if (control.isAutorized(user)) {
        control.saveBike(collection, id, name);
    }
}