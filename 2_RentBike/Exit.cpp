/*
* Exit.cpp
* 시스템 종료 시 사용자 및 자전거 데이터 초기화를 수행합니다.
*/
#include "Exit.h"

// 사용자와 자전거 컬렉션을 비워 시스템을 종료 준비합니다.
void Exit::terminateProgram(UserCollection& users, BikeCollection& bikes) {
    users.clear();
    bikes.clear();
}
