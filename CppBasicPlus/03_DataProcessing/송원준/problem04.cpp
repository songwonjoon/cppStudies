#include <iostream>

using namespace std;

int main()
{
    const int CONVERSION_DAY = 86400;
    const int CONVERSION_HOUR = 3600;
    const int CONVERSION_MINUTE = 60;

    long nsecond;
    cout << "초 수를 입력하시오: ";
    cin >> nsecond;

    int day = nsecond / CONVERSION_DAY;
    int hour = (nsecond % CONVERSION_DAY) / CONVERSION_HOUR;
    int minute = ((nsecond % CONVERSION_DAY) % CONVERSION_HOUR) / CONVERSION_MINUTE;
    int second = nsecond % CONVERSION_MINUTE;

    cout << nsecond << "초 = " << day << "일, " << hour << "시간, " << minute << "분, " << second << "초" <<  endl;

    return 0;
}