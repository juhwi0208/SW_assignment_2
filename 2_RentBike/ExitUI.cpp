#include "ExitUI.h"

void ExitUI::requestExit(std::ofstream& out, Exit& control, UserCollection& users, BikeCollection& bikes) {
    out << "6.1. ����\n";
    control.terminateProgram(users, bikes);
}