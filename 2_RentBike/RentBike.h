/*
RentBike.h
������ �뿩 ��û�� ó���ϴ� ��Ʈ�� Ŭ���� ����.
ȸ�� ���� Ȯ�� �� �뿩 ó�� ������ �մϴ�.
*/
#ifndef RENTBIKE_H
#define RENTBIKE_H

#include <string>
#include "User.h"
#include "BikeCollection.h"

// ������ �뿩 ����� ����ϴ� ��Ʈ�� Ŭ�����Դϴ�.
class RentBike {
public:
    /*
    * �뿩 ��û�� ����ڰ� ȸ������ Ȯ���մϴ�.
    * @param user ���� �α��ε� �����
    */
    bool isAutorized(User* user);

    /*
   * �����Ÿ� ����ڿ��� �뿩 ó���մϴ�.
   * @param bikes ������ �÷���
   * @param bikeId ������ ID
   * @param productName ������ �̸�
   */
    void rentBikeToUser(BikeCollection& bikes, std::string bikeId, std::string userId);
};

#endif