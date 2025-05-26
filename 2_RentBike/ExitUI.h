#ifndef EXITUI_H
#define EXITUI_H

#include <fstream>
#include "Exit.h"
#include "UserCollection.h"
#include "BikeCollection.h"

// 프로그램 종료 요청을 UI에서 처리하고 Exit 컨트롤러에 전달
class ExitUI {
public:
    void requestExit(std::ofstream& out, Exit& control, UserCollection& users, BikeCollection& bikes);
};

#endif