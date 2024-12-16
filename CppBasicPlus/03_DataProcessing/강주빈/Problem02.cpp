#include <iostream>

using namespace std;

int main()
{
    int feet, inch, pound;
    const double InchPerFeet = 12;  // 1 피트 = 12 인치
    const double PoundPerKg = 2.2;  // 1 킬로그램 = 2.2 파운드
    const double InchToMeter = 0.0254;  // 1 인치 = 0.0254 미터

    cout << "당신의 키를 feet과 inch로 입력하세요." << endl;
    cout << "입력하신 키의 feet은 :" << endl;
    cin >> feet;
    cout << "입력하신 키의 inch는 : " << endl;
    cin >> inch;

    cout << "몸무게를 파운드로 입력하세요." << endl;
    cin >> pound;

    double heightToMeter = (feet * InchPerFeet + inch) * InchToMeter; // 키를 미터로 변환
    double weightToKg = pound / PoundPerKg; // 몸무게를 킬로그램으로 변환
    double bmi = weightToKg / (heightToMeter * heightToMeter);

    cout << "당신의 BMI는 " << bmi << "입니다." << endl;

    return 0;
}