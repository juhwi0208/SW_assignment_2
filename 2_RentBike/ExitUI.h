#ifndef EXITUI_H
#define EXITUI_H

#include <fstream>
#include "Exit.h"
#include "UserCollection.h"
#include "BikeCollection.h"

// ���α׷� ���� ��û�� UI���� ó���ϰ� Exit ��Ʈ�ѷ��� ����
class ExitUI {
public:
    void requestExit(std::ofstream& out, Exit& control, UserCollection& users, BikeCollection& bikes);
};

#endif