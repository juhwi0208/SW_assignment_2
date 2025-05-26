/*
* AddBike.h
* ������ ��� ��û�� ó���ϴ� ��Ʈ�� Ŭ���� ����.  
* ������ ������ ������ �� �����Ÿ� ����մϴ�.
*/
#ifndef ADDBIKE_H
#define ADDBIKE_H

#include <string>
#include "User.h"
#include "BikeCollection.h"

// ������ ��� ����� ����ϴ� ��Ʈ�� Ŭ�����Դϴ�.
class AddBike {
public:
    /*
    * ���� ����ڰ� ���������� ������ Ȯ���մϴ�.
    *  @param user ���� �α��ε� ����� ������
    *  @return true: �������� ���
    */
    bool isAutorized(User* user);

    /*
    * ������ ������ �����մϴ�.
    * @param bikes ������ �÷���
    * @param bikeId ������ ID
    * @param productName ������ �̸�
    */
    void saveBike(BikeCollection& collection, std::string bikeId, std::string name);
};

#endif