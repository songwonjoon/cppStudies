#include <iostream>

using namespace std;

int main()
{
    const int PERCENT = 100;

    long long world_population, usa_population;
    cout << "세계 인구수를 입력하시오: ";
    cin >> world_population;
    cout << "미국 인구수를 입력하시오: ";
    cin >> usa_population;

    double usa_percent = static_cast<double>(usa_population) / world_population * PERCENT;

    cout << "세계 인구수에서 미국이 차지하는 비중은 " << usa_percent << "%이다" << endl;

    return 0;
}