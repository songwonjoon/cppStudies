#include <iostream>

using namespace std;

void printTime(int hour, int minute);

int main()
{
    int hour, minute;

    cout << "시간 값을 입력하세요. :" << endl;
    cin >> hour;

    cout << "분 값을 입력하세요. :" << endl;
    cin >> minute;

    printTime(hour, minute);

    return 0;
}

void printTime(int hour, int minute)
{
    cout << "시각: " << hour << ":" << minute << endl;
}

