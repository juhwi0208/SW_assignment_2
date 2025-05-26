/*
 Exit.h
 시스템 종료를 처리하는 컨트롤 클래스 정의.
 전체 사용자 및 자전거 데이터를 초기화합니다.
*/
#ifndef EXIT_H
#define EXIT_H

#include "UserCollection.h"
#include "BikeCollection.h"

// 사용자와 자전거 데이터를 초기화하고 종료하는 컨트롤 클래스
class Exit {
public:

    /*
     사용자 및 자전거 데이터를 초기화하고 종료 처리합니다.
	 @param users 사용자 데이터 컬렉션
     @param bikes 자전거 데이터 컬렉션
     @return void
	 @note 프로그램 종료 시 호출되어야 합니다.
     @details 이 메서드는 프로그램 종료 시 모든 사용자와 자전거 데이터를 초기화합니다.
	 사용자와 자전거 컬렉션의 모든 데이터를 삭제하고, 프로그램을 안전하게 종료합니다.
    */
    void terminateProgram(UserCollection& users, BikeCollection& bikes);
};

#endif
