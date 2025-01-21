#include <iostream>
#include <string>

using namespace std;

const int yearSize = 3;
const int monthSize = 12;

int main()
{
    string month[monthSize] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int salesCount[yearSize][monthSize];

    int total_sum = 0;

    for (int i = 0; i < yearSize; i++) {
        int sum = 0;

        for (int j = 0; j < monthSize; i++) {
            cin >> salesCount[i][j]; 
            sum += salesCount[i][j];
        }

        cout << "연간 총 판매량은 "  << sum << "권 입니다." << endl;
        total_sum += sum;
    }

    cout << "2 ~ 3년동안 누적 판매량은 " << total_sum << "권 입니다." << endl;
}