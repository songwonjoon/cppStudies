#include <iostream>

using namespace std;

void print1();
void print2();

int main()
{
    print1();
    print1();
    print2();
    print2();

    return 0;
}

void print1()
{
    cout << "Three blind mice" << endl;
}

void print2()
{
    cout << "See how they run" << endl;
}