#include <iostream>

using namespace std;

const int CM_METER = 100;

int main()
{
    int cm;
    int meter, centimeter;

    cout << "키를 센티미터 단위로 입력하시오. : ___\b\b\b";
    cin >> cm;
    cout << "입력하신 센티미터 값은 " << cm << "이며, " << endl;

    meter = cm / CM_METER;
    centimeter = cm % CM_METER;

    cout << "키는 " << meter << "미터 " << centimeter << "센티미터입니다. " << endl;

    return 0;
}