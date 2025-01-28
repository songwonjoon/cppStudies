#include <iostream>

using namespace std;

int factorial(int n)
{
    if (n == 1) {
        return 1;
    }

    return n * factorial(n-1);
}

int main()
{
    int n, sum;

    cout << "숫자를 입력해주세요.";
    cin >> n;

    sum = factorial(n);

    cout << n << "! = " << sum << endl;
}