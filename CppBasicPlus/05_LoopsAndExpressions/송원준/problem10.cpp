#include <iostream>

using namespace std;

int main()
{
    int count;

    cout << "출력할 행 수를 입력하시오: ";
    cin >> count;

    for (int i = 1; i <= count; ++i) {
        // 마침표 출력
        for (int j = 0; j < count - i; ++j) {
            cout << "-";
        }

        for (int k = 0; k < i; ++k) {
            cout << "*";
        }

        cout << endl;
    }
}