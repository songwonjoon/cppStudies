#include <iostream>

using namespace std;

int age;

int main()
{
    cout << "당신의 나이를 입력하시오. " << endl;
    cin >> age;

    cout << "당신이 입력한 나이는 " << age << "이며, 개월수로는 " << age * 12 << "입니다." << endl;

    return 0;    
}