#include <iostream>

using namespace std;

int main()
{
    double distance, gallon;
    cout << "주행한 거리를 마일 단위로 입력하시오: ";
    cin >> distance;
    cout << "소비한 휘발유의 양을 갤런 단위로 입력하시오: ";
    cin >> gallon;

    cout << "갤런당 마일수는 " << distance / gallon << "mile 입니다." << endl;
}