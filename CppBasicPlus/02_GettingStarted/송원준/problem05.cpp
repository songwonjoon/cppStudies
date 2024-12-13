#include <iostream>

using namespace std;

double convertCtoF(double C);

int main()
{
    double C;
    cout << "섭씨온도를입력하고 Enter 키를누르십시오: ";
    cin >> C;
    double F = convertCtoF(C);

    cout << "섭씨 " << C << "도는화씨로 " << F << "도입니다." << endl;
    
    return 0;
}

double convertCtoF(double C)
{
    return 1.8 * C + 32.0;
}