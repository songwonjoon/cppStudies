#include <iostream>

using namespace std;

// 함수 정의
double add(double x, double y) {
    return x + y;
}

double subtract(double x, double y) {
    return x - y;
}

double multiply(double x, double y) {
    return x * y;
}

double calculate(double x, double y, double (*operation)(double, double)) {
    return operation(x, y);
}

int main() {
    double (*pf[3])(double, double) = {add, subtract, multiply};

    cout << "두 수를 입력하고 연산 유형을 선택하십시오:\n";
    cout << "0: 덧셈, 1: 뺄셈, 2: 곱셈 (음수 입력으로 종료)\n";

    double x, y;
    int choice;

    while (true) {
        cout << "첫 번째 숫자: ";
        if (!(cin >> x)) break;

        cout << "두 번째 숫자: ";
        if (!(cin >> y)) break;

        cout << "연산 선택 (0, 1, 2): ";
        if (!(cin >> choice) || choice < 0 || choice >= 3) {
            cout << "잘못된 선택입니다. 프로그램을 종료합니다.\n";
            break;
        }

        // 선택된 연산 수행
        double result = calculate(x, y, pf[choice]);
        cout << "결과: " << result << endl;
    }

    cout << "프로그램을 종료합니다.\n";
    return 0;
}
