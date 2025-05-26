/*
* UserCollection.cpp
* UserCollection Ŭ���� ����: ����� �߰�, ����, �ʱ�ȭ
*/
#include "UserCollection.h"


//����� �߰�
void UserCollection::addUser(const User& user) {
    ownedUsers.push_back(user);
}


//����� ����
User* UserCollection::authenticateUser(std::string id, std::string pwd) {
    for (User& user : ownedUsers) {
        if (user.getId() == id && user.isPasswordCorrect(pwd)) {
            return &user;
        }
    }
    return nullptr;
}

//����� ��� �ʱ�ȭ
void UserCollection::clear() {
    ownedUsers.clear();
}