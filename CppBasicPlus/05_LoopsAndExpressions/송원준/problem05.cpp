#include <iostream>
#include <string>

using namespace std;

const int ArSize = 12;

int main()
{
    string month[ArSize] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int salesCount[ArSize];

    int sum = 0;

    for (int i = 0; i < ArSize; i++) {
        cout << i + 1 << "월";
        cin >> salesCount[i]; 
        sum += salesCount[i];
    }

    cout << "연간 총 판매량은 " << sum << "권 입니다." << endl;
}