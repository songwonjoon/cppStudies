#include <iostream>
#include <string>

const int strsize = 50;

// Benevolent Order of Programmers 회원 구조체
struct bop {
    char fullname[strsize]; // 실명
    char title[strsize];    // 직함
    char bopname[strsize];  // BOP 아이디
    int preference;         // 열람 우선순위 (0: 실명, 1: 직함, 2: BOP 아이디)
};

void displayMenu() {
    std::cout << "Benevolent Order of Programmers\n";
    std::cout << "a. 실명으로 열람\n";
    std::cout << "b. 직함으로 열람\n";
    std::cout << "c. BOP 아이디로 열람\n";
    std::cout << "d. 회원이 지정한 것으로 열람\n";
    std::cout << "q. 종료\n";
    std::cout << "원하는 것을 선택하십시오: ";
}

void displayByPreference(const bop members[], int size) {
    for (int i = 0; i < size; ++i) {
        switch (members[i].preference) {
        case 0:
            std::cout << members[i].fullname << std::endl;
            break;
        case 1:
            std::cout << members[i].title << std::endl;
            break;
        case 2:
            std::cout << members[i].bopname << std::endl;
            break;
        default:
            std::cout << "Unknown preference" << std::endl;
        }
    }
}

int main() {
    // 회원 데이터 초기화
    bop members[] = {
        {"Wimp Macho", "Junior Programmer", "MIPS", 0},
        {"Raki Rhodes", "Software Engineer", "RAKI", 1},
        {"Celia Laiter", "Analyst Trainee", "CECE", 2},
        {"Hoppy Hipman", "Senior Developer", "LOOPY", 1},
        {"Pat Hand", "Manager", "PATH", 0}
    };

    const int memberCount = sizeof(members) / sizeof(members[0]);
    char choice;

    while (true) {
        displayMenu();
        std::cin >> choice;

        if (choice == 'q') {
            std::cout << "프로그램을 종료합니다." << std::endl;
            break;
        }

        switch (choice) {
        case 'a':
            for (int i = 0; i < memberCount; ++i) {
                std::cout << members[i].fullname << std::endl;
            }
            break;
        case 'b':
            for (int i = 0; i < memberCount; ++i) {
                std::cout << members[i].title << std::endl;
            }
            break;
        case 'c':
            for (int i = 0; i < memberCount; ++i) {
                std::cout << members[i].bopname << std::endl;
            }
            break;
        case 'd':
            displayByPreference(members, memberCount);
            break;
        default:
            std::cout << "잘못된 입력입니다. 다시 시도하십시오." << std::endl;
        }

        std::cout << std::endl; // 출력 후 줄바꿈
    }

    return 0;
}
