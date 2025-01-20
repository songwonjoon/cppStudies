
#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int i = 0;

    while(true)
    {
        cout <<"숫자를 입력하세요 : ";
        cin >> i;

        if(i == 0)
        {
            break;
        }
        else
        {
            sum = sum + i;
        }

    }

    cout <<"지금까지 입력한 수의 합은 :" << sum <<"입니다."<<endl;

    return 0;
}   
