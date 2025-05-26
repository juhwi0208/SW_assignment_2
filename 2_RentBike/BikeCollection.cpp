/*
* BikeCollection.cpp
* BikeCollection Ŭ���� ����: ������ �߰�, �˻�, �뿩 ��� ��ȸ, �ʱ�ȭ
*/
#include "BikeCollection.h"


//���ο� ������ ���
void BikeCollection::addBike(const Bike& bike) {
    ownedBikes.push_back(bike);
}

// ������ ID�� �����Ÿ� �˻��մϴ�.
Bike* BikeCollection::findBikeById(const std::string& id) {
    for (Bike& b : ownedBikes) {
        if (b.getId() == id) {
            return &b;
        }
    }
    return nullptr;
}

// Ư�� ����ڰ� �뿩 ���� ������ ����� ��ȯ�մϴ�.
std::vector<Bike> BikeCollection::getRentingList(const std::string& userId) {
    std::vector<Bike> result;
    for (const Bike& b : ownedBikes) {
        if (b.getRentedUserId() == userId) {
            result.push_back(b);
        }
    }
    return result;
}

// ������ ��� �ʱ�ȭ
void BikeCollection::clear() {
    ownedBikes.clear();
}