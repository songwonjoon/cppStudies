#include <iostream>

using namespace std;

double toAstronomical(double i);

int main()
{
    double light_years;

    cout << "광년 수를 입력 하시오: " << endl;
    cin >> light_years;

    double astronomica = toAstronomical(light_years);
    cout << light_years << " 광년은 " << astronomica <<" 천문 단위입니다.";

    return 0;
}

double toAstronomical(double i)
{
    return i * 63240;
}