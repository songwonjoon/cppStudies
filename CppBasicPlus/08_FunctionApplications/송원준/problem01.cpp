#include <iostream>
#include <string>

using namespace std;

void printString(string str, int repeat = 0)
{
    static int callCount = 0;
    callCount++;
    
    if (repeat != 0) {
        for (int i = 0; i < callCount; ++i) {
            cout << str << endl;
        }
    } else {
        cout << str << endl;
    }
}

int main()
{
    printString("테스트");
    printString("테스트");
    printString("테스트");
    printString("테스트", 3);

    return 0;
}