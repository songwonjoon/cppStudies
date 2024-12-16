#include <iostream>

using namespace std;

double C;

double CtoF(double C);

int main()
{
    cout << "섭씨 온도를 입력하시오." << endl;
    cin >> C;
    double F = CtoF(C);

    cout << "입력하신 섭씨 온도는 " << C << "도 이며, 화씨로는 " << F << "도 입니다." << endl;
    
    return 0;
}

double CtoF(double C)
{
    return 1.8 * C +32.0;
}