#include <iostream>

using namespace std;

void printDateTime(int hour, int minute);

int main()
{
    int hour, minute;

    cout << "시간 값을 입력하시오: ";
    cin >> hour;

    cout << "분 값을 입력하시오: ";
    cin >> minute;

    printDateTime(hour, minute);

    return 0;
}

void printDateTime(int hour, int minute)
{
    cout << "시각: " << hour << ":" << minute << endl;
}