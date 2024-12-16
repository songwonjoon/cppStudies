#include <iostream>

using namespace std;

const int MINUTES_PER_DEGREE = 60; // 1도각은 60분각
const int SECONDS_PER_MINUTES = 60; // 1분각은 60초각

int main()
{
    int degrees, minutes, seconds;
    double decimal_degrees;
    
    cout << "위도를 도, 분, 초 단위로 입력하시오. " << endl;
    
    cout << "먼저 도각을 입력하시오. " << endl;
    cin >> degrees;

    cout << "다음에 분각을 입력하시오. " << endl;
    cin >> minutes;

    cout << "끝으로 초각을 입력하시오. " << endl;
    cin >> seconds;

    decimal_degrees = degrees + (static_cast<double>(minutes) / MINUTES_PER_DEGREE) + 
                        (static_cast<double>(seconds) / (MINUTES_PER_DEGREE * SECONDS_PER_MINUTES));
    
    cout << degrees << "도, " << minutes << "분, " << seconds << "초 = " << decimal_degrees << "도" << endl;


    return 0;
}