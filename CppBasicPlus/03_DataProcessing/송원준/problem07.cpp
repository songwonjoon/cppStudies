#include <iostream>

using namespace std;


int main()
{
    const double CONVERSION_MILE = 62.14;
    const double CONVERSION_LITER = 3.875;

    double gallon;
    cout << "유럽 스타일 휘발유 소비량을 리터단위로 입력하시오: ";
    cin >> gallon;

    double usa_gallon = CONVERSION_MILE / (gallon / CONVERSION_LITER);

    cout << "미국 스타일 휘발유 소비량은 " << usa_gallon << "입니다." << endl;

    return 0;
}
