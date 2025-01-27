#include <iostream>
#include <limits>

using namespace std;

int main() {
    double income;

    cout << "뉴트로니아 왕국 소득세 계산 프로그램\n";
    cout << "소득을 입력하세요 (음수를 입력하면 종료): ";

    while (std::cin >> income && income >= 0) {
        double tax = 0.0;

        if (income > 35000) {
            tax += (income - 35000) * 0.20;
            income = 35000;
        }
        if (income > 15000) {
            tax += (income - 15000) * 0.15;
            income = 15000;
        }
        if (income > 5000) {
            tax += (income - 5000) * 0.10;
            income = 5000;
        }

        cout << "내야 할 세금: " << tax << " 트바프\n";
        cout << "소득을 입력하세요 (음수를 입력하면 종료): ";
    }

    if (cin.fail()) {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
        cout << "잘못된 입력입니다. 프로그램을 종료합니다.\n";
    } else {
        cout << "프로그램을 종료합니다.\n";
    }

    return 0;
}
