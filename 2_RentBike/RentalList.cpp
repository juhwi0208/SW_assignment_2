/*
* RentalList.cpp
* ȸ���� ������ �뿩 ������ ��ȸ�մϴ�.
*/
#include "RentalList.h"

// ���� ����ڰ� �뿩 ���� ������ ����Ʈ�� ��ȯ�մϴ�.
std::vector<Bike> RentalList::showRentalList(User* user, BikeCollection& bikes) {
    if (user && user->isMember()) {  // 1.1.1
        return bikes.getRentingList(user->getId());  // 1.1.2
    }
    return {};
}