#include <iostream>

using namespace std;

int main()
{
    const int DAY = 86400;
    const int HOUR = 3600;
    const int MINUTE = 60;

    long nsecond;
    cout << "초 수를 입력하시오. : " << endl;
    cin >> nsecond;

    int day = nsecond / DAY;
    int hour = (nsecond % DAY) / HOUR;
    int minute = ((nsecond % DAY) % HOUR / MINUTE);
    int second = nsecond % MINUTE;

    cout << second << "초 = " << day << "일, " << hour << "시간, " << minute << "분, " << second << "초" << endl;

    return 0;
}