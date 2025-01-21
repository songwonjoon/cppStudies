#include <iostream>

using namespace std;


int main()
{
    int input;
    int sum = 0;

    while (input != 0)
    {
        cout << "숫자를 입력하시오: ";
        cin >> input;

        sum += input;

        cout << sum << endl;
    }
    
    cout << "프로그램을 종료합니다." << endl;

}