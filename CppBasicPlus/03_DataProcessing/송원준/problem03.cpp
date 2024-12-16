#include <iostream>

using namespace std;

int main()
{
    const int CONVERSION_ARCMINUTE = 60;
    const int CONVERSION_ARCSECOND = 60;

    int degree, arcminute, arcsecond;
    cout << "위도를 도, 분, 초 단위로입력하시오: " << endl;
    cout << "먼저, 도각을 입력하시오: ";
    cin >> degree;
    cout << "다음에, 분각을 입력하시오:  ";
    cin >> arcminute;
    cout << "끝으로, 초각을 입력하시오: ";
    cin >> arcsecond;

    double latitude = degree + (static_cast<double>(arcminute) / CONVERSION_ARCMINUTE) + (static_cast<double>(arcsecond) / (CONVERSION_ARCMINUTE * CONVERSION_ARCSECOND));

    cout << degree << "도, " << arcminute << "분, " << arcsecond << "초 = " << latitude << "도" << endl; 

    return 0;
}