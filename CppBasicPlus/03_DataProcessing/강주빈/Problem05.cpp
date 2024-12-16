#include <iostream>

using namespace std;

int main()
{
    long long world, korea;

    cout << "세계 인구수를 입력하세요. : " << endl;
    cin >> world;
    
    cout << "한국 인구수를 입력하세요. : " << endl;
    cin >> korea;

    cout << "세계 인구수에서 한국 인구수가 차지하는 비중은 " << double (korea) / double(world) * 100 << "%이다. " << endl;

    return 0;
}