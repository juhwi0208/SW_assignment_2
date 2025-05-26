/*
 UserCollection.h
 ����� ����� ���� �� �����ϴ� Ŭ�����Դϴ�.
*/
#ifndef USERCOLLECTION_H
#define USERCOLLECTION_H

#include <vector>
#include "User.h"

// ��ü ����� ����� �����ϰ� ����� ����, �ʱ�ȭ ����� �����մϴ�.
class UserCollection {
private:
    std::vector<User> ownedUsers;

public:

    //����� �߰�
    void addUser(const User& user);

    //����� ����
    User* authenticateUser(std::string id, std::string pwd);

	// ����� ��� �ʱ�ȭ
    void clear();
};

#endif