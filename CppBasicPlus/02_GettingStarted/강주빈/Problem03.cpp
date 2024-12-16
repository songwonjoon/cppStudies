#include <iostream>

using namespace std;

void exprint1();
void exprint2();

int main()
{
    exprint1();
    exprint1();

    exprint2();
    exprint2();

    return 0;
}

void exprint1()
{
    cout << "Three blind mice" << endl;
}

void exprint2()
{
    cout << "See how they run" << endl;
}