#include <iostream>

using namespace std;

int main()
{
    int start, end, sum = 0;

    cin >> start >> end;

    for (int i = start; i <= end; i++) {
        sum += i;
    }

    cout << sum << endl;

    return 0;
}