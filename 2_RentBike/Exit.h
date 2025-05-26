/*
 Exit.h
 �ý��� ���Ḧ ó���ϴ� ��Ʈ�� Ŭ���� ����.
 ��ü ����� �� ������ �����͸� �ʱ�ȭ�մϴ�.
*/
#ifndef EXIT_H
#define EXIT_H

#include "UserCollection.h"
#include "BikeCollection.h"

// ����ڿ� ������ �����͸� �ʱ�ȭ�ϰ� �����ϴ� ��Ʈ�� Ŭ����
class Exit {
public:

    /*
     ����� �� ������ �����͸� �ʱ�ȭ�ϰ� ���� ó���մϴ�.
	 @param users ����� ������ �÷���
     @param bikes ������ ������ �÷���
     @return void
	 @note ���α׷� ���� �� ȣ��Ǿ�� �մϴ�.
     @details �� �޼���� ���α׷� ���� �� ��� ����ڿ� ������ �����͸� �ʱ�ȭ�մϴ�.
	 ����ڿ� ������ �÷����� ��� �����͸� �����ϰ�, ���α׷��� �����ϰ� �����մϴ�.
    */
    void terminateProgram(UserCollection& users, BikeCollection& bikes);
};

#endif
