#include <iostream>

using namespace std;

double harmonicMean(int a, int b)
{
    return (2.0 * a * b) / (a + b);
}

int main()
{
    int a, b;

    while (a != 0 && b != 0)
    {
        cout << "a를 입력하세요: ";
        cin >> a;

        cout << "b를 입력하세요: ";
        cin >> b;

        double harmonic_avg = harmonicMean(a, b);

        cout << harmonic_avg << endl;
    }
    
    return 0;
}