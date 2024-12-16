#include <iostream>

using namespace std;

int main()
{
    const int CONVERSION_INCH = 100;

    int height;
    cout << "키를 센치미터 단위로 입력해주세요.___\b\b\b";
    cin >> height;

    cout << height / CONVERSION_INCH << "m" << endl;
    cout << height % CONVERSION_INCH << "cm" << endl;

    return 0 ;
}