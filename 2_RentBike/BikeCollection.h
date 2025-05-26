#ifndef BIKECOLLECTION_H
#define BIKECOLLECTION_H

/*
 BikeCollection.h
 전체 자전거 목록을 저장하고 대여 처리 및 조회 기능을 제공합니다.
*/
#include <vector>
#include <string>
#include "Bike.h"

// 자전거 목록을 저장하고 대여 및 조회 기능을 제공하는 클래스입니다.
class BikeCollection {
private:
    std::vector<Bike> ownedBikes;

public:
    //새로운 자전거 등록
    void addBike(const Bike& bike);

	// 자전거 ID로 자전거를 검색합니다.
    Bike* findBikeById(const std::string& id);

	// 특정 사용자가 대여 중인 자전거 목록을 반환합니다.
    std::vector<Bike> getRentingList(const std::string& userId);

    // 자전거 목록 초기화
    void clear();
    
};

#endif
