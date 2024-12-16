#include <iostream>

using namespace std;

int main()
{
    float kilometers, liters;

    cout << "주행한 거리를 입력하세요. " << endl;
    cin >> kilometers;

    cout << "소비한 휘발유의 양을 입력하세요. " << endl;
    cin >> liters;

    float liter_per_100km = (liters / kilometers) * 100;

    cout << "유럽 스타일로 100킬로미터당 리터 수는 " << liter_per_100km << "입니다." << endl;

    return 0;
}