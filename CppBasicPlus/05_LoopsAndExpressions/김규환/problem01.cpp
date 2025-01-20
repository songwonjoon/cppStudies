#include <iostream>

using namespace std;

int main()
{
    int i1, i2, sum = {};
    cout << "첫번째 수를 입력해 주세요" << endl;
    cin >> i1;
    cout << "두번째 수를 입력해 주세요" << endl;
    cin >> i2;

    for(i1; i1<i2+1; i1++)
    {
        sum = sum + i1;
    }
    cout << "두 수 사이의 숫자의 총 합은 : ";
    cout<< sum <<endl;


    return 0;
}