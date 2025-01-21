#include <iostream>

using namespace std;

const double compound_interest = 0.05;
const double simple_interest = 0.10;

int main()
{
    int A = 100000, B = 100000;
    int year = 0;

    while(A >= B)
    {
        A += 100000 * simple_interest;

        B += B * compound_interest;

        year++;

    }

    cout << year << "년" << endl;
    
}