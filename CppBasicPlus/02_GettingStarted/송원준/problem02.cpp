#include <iostream>

using namespace std;

int main()
{
    double distance;
    cout << "변환할 mile 단위를 입력해주세요: ";
    cin >> distance;

    cout << "변환된 km는 " << distance * 1.60934 << "입니다." << endl;

    return 0;
}