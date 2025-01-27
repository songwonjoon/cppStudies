#include <iostream>
#include <string>

const int strsize = 50;

using namespace std;

// Benevolent Order of Programmers 회원 구조체
struct bop {
    char fullname[strsize]; // 실명
    char title[strsize];    // 직함
    char bopname[strsize];  // BOP 아이디
    int preference;         // 열람 우선순위 (0: 실명, 1: 직함, 2: BOP 아이디)
};

void displayMenu() {
    cout << "Benevolent Order of Programmers\n";
    cout << "a. 실명으로 열람\n";
    cout << "b. 직함으로 열람\n";
    cout << "c. BOP 아이디로 열람\n";
    cout << "d. 회원이 지정한 것으로 열람\n";
    cout << "q. 종료\n";
    cout << "원하는 것을 선택하십시오: ";
}

void displayByPreference(const bop members[], int size) {
    for (int i = 0; i < size; ++i) {
        switch (members[i].preference) {
        case 0:
            cout << members[i].fullname << endl;
            break;
        case 1:
            cout << members[i].title << endl;
            break;
        case 2:
            cout << members[i].bopname << endl;
            break;
        default:
            cout << "Unknown preference" << endl;
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
        cin >> choice;

        if (choice == 'q') {
            cout << "프로그램을 종료합니다." << endl;
            break;
        }

        switch (choice) {
        case 'a':
            for (int i = 0; i < memberCount; ++i) {
                cout << members[i].fullname << endl;
            }
            break;
        case 'b':
            for (int i = 0; i < memberCount; ++i) {
                cout << members[i].title << endl;
            }
            break;
        case 'c':
            for (int i = 0; i < memberCount; ++i) {
                cout << members[i].bopname << endl;
            }
            break;
        case 'd':
            displayByPreference(members, memberCount);
            break;
        default:
            cout << "잘못된 입력입니다. 다시 시도하십시오." << endl;
        }

        cout << endl;
    }

    return 0;
}
