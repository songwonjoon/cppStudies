#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const int CONVERSION_FEET = 12;
    const double CONVERSION_INCH = 0.0254;
    const double CONVERSION_POUND = 2.2;

    int feet, inch, found;
    cout << "키를 피트단위로 입력하세요: ";
    cin >> feet;
    cout << "키를 인치단위로 입력하세요: ";
    cin >> inch;
    cout << "체중을 파운드 단위로 입력하세요: ";
    cin >> found;

    double inchToMeter = (feet * CONVERSION_FEET + inch) * CONVERSION_INCH;
    double poundToKg = found / CONVERSION_POUND;

    double bmi = poundToKg / pow(inchToMeter, 2);

    cout << "bmi = " << bmi << endl;

    return 0;
}