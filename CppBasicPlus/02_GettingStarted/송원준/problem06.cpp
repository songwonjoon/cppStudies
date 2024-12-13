#include <iostream>

using namespace std;

double lightYearsToAstronomicalUnits(double light_years);

int main()
{
    double light_years;

    cout << "광년 수를 입력하고 Enter 키를 누르십시오: ";
    cin >> light_years;

    double astro_nomica = lightYearsToAstronomicalUnits(light_years);
    cout << light_years << " 광년은 " << astro_nomica <<" 천문 단위입니다.";
    
    return 0;
}

double lightYearsToAstronomicalUnits(double light_years)
{
    return light_years * 63240;
}