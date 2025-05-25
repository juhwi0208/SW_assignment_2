#include <iostream>
#include <fstream>
#include <string>

#include "UserCollection.h"
#include "BikeCollection.h"

#include "Signup.h"
#include "SignupUI.h"
#include "Login.h"
#include "LoginUI.h"
#include "Logout.h"
#include "LogoutUI.h"
#include "AddBike.h"
#include "AddBikeUI.h"
#include "RentBike.h"
#include "RentBikeUI.h"
#include "RentalList.h"
#include "RentalListUI.h"

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

std::ifstream in_fp;
std::ofstream out_fp;

// 상태 객체들
UserCollection users;
BikeCollection bikes;

// 현재 로그인된 사용자
User* currentUser = nullptr;

// 작업 처리 함수
void doTask(std::ifstream& in_fp, std::ofstream& out_fp, UserCollection& users, BikeCollection& bikes, User*& currentUser) {
    int menu1 = 0, menu2 = 0;

    while (true) {
        in_fp >> menu1 >> menu2;

        switch (menu1) {
        case 1:  // 회원
            switch (menu2) {
            case 1: {  // 회원가입
                std::string id, pwd, phone;
                in_fp >> id >> pwd >> phone;
                Signup signupCtrl;
                SignupUI signupUI;
                signupUI.requestSignup(out_fp, signupCtrl, users, id, pwd, phone);
                break;
            }
            }
            break;

        case 2:  // 로그인/로그아웃
            switch (menu2) {
            case 1: {  // 로그인
                std::string id, pwd;
                in_fp >> id >> pwd;
                Login loginCtrl;
                LoginUI loginUI;
                loginUI.requestLogin(out_fp, loginCtrl, users, id, pwd, currentUser); // 로그인된 사용자 저장
                break;
            }
            case 2: {  // 로그아웃
                Logout logoutCtrl;
                LogoutUI logoutUI;
                logoutUI.requestLogout(out_fp, logoutCtrl, currentUser);
                currentUser = nullptr;
                break;
            }
            }
            break;

        case 3:  // 자전거 등록
            switch (menu2) {
            case 1: {
                std::string bikeId, name;
                in_fp >> bikeId >> name;
                AddBike addCtrl;
                AddBikeUI addUI;
                addUI.requestAddBike(out_fp, addCtrl, currentUser, bikes, bikeId, name);
                break;
            }
            }
            break;

        case 4:  // 자전거 대여
            switch (menu2) {
            case 1: {
                std::string bikeId;
                in_fp >> bikeId;
                RentBike rentCtrl;
                RentBikeUI rentUI;
                rentUI.requestRental(out_fp, rentCtrl, currentUser, bikes, bikeId);
                break;
            }
            }
            break;

        case 5:  // 자전거 대여 정보 조회
            switch (menu2) {
            case 1: {
                RentalList listCtrl;
                RentalListUI listUI;
                listUI.showRentalList(out_fp, listCtrl, currentUser, bikes);
                break;
            }
            }
            break;

        case 6:  // 종료
            if (menu2 == 1) {
                out_fp << "6.1. 종료\n";
                return;
            }
            break;

        default:
            // 잘못된 메뉴 입력 시 무시
            break;
        }
    }
}

// main 함수
int main() {
    std::ifstream in_fp(INPUT_FILE_NAME);
    if (!in_fp) {
        std::cerr << "입력 파일 열기 실패\n";
        return 1;
    }

    std::ofstream out_fp(OUTPUT_FILE_NAME);
    if (!out_fp) {
        std::cerr << "출력 파일 열기 실패\n";
        return 1;
    }

    UserCollection users;
    BikeCollection bikes;
    User* currentUser = nullptr;

    // 관리자 계정 등록
    User admin("admin", "admin", "01000000000", "admin");
    users.addUser(admin);

    doTask(in_fp, out_fp, users, bikes, currentUser);

    return 0;
}