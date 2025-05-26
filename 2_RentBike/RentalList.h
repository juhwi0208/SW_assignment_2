/*
 RentalList.h
 ������� ������ �뿩 ���� ��ȸ�� ó���ϴ� ��Ʈ�� Ŭ���� ����.
*/
#ifndef RENTALLIST_H
#define RENTALLIST_H

#include <vector>
#include <string>
#include "User.h"
#include "Bike.h"
#include "BikeCollection.h"

// ������ �뿩 ��� ��ȸ�� ����ϴ� ��Ʈ�� Ŭ�����Դϴ�.
class RentalList {
public:

    /*    
    �ش� ������� �뿩 ������ ����� ��ȯ�մϴ�.  
	@param user: �뿩 ����� ��ȸ�� ����� ������
	@param bikes: ������ �÷��� ��ü
	@return: ����ڰ� �뿩�� ������ ����� ���� ����
    */
    std::vector<Bike> showRentalList(User* user, BikeCollection& bikes);
};

#endif