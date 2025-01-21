#include <iostream>
#include <cstring>

using namespace std;

struct Car {
    char car_name[50];
    int year;
};

int main()
{
    int carCount;

    cout << "몇 대의 차를 관리하시겠습니까? ";
    cin >> carCount;
    cin.ignore();

    Car* cars = new Car[carCount];

    for (int i = 0; i < carCount; i++) {
        cout << "\n제조사 #" << i + 1 << endl;
        cout << "제작업체: ";
        cin.getline(cars[i].car_name, 50);
        cout << "제작년도: ";
        cin >> cars[i].year;
        cin.ignore();
    }

    cout << "\n현재 귀하가 보유하고 있는 자동차 목록은 다음과 같습니다:\n";
    for (int i = 0; i < carCount; i++) {
        cout << cars[i].year << "년도형 " << cars[i].car_name << endl;
    }

    delete[] cars;

    return 0;
}