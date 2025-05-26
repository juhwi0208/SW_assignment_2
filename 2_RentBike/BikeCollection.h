#ifndef BIKECOLLECTION_H
#define BIKECOLLECTION_H

/*
 BikeCollection.h
 ��ü ������ ����� �����ϰ� �뿩 ó�� �� ��ȸ ����� �����մϴ�.
*/
#include <vector>
#include <string>
#include "Bike.h"

// ������ ����� �����ϰ� �뿩 �� ��ȸ ����� �����ϴ� Ŭ�����Դϴ�.
class BikeCollection {
private:
    std::vector<Bike> ownedBikes;

public:
    //���ο� ������ ���
    void addBike(const Bike& bike);

	// ������ ID�� �����Ÿ� �˻��մϴ�.
    Bike* findBikeById(const std::string& id);

	// Ư�� ����ڰ� �뿩 ���� ������ ����� ��ȯ�մϴ�.
    std::vector<Bike> getRentingList(const std::string& userId);

    // ������ ��� �ʱ�ȭ
    void clear();
    
};

#endif
