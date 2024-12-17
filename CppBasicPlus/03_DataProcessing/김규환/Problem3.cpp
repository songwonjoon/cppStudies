#include <iostream>

using namespace std;

int main() {        
    float degrees = 0;
    float minutes = 0;
    float seconds = 0;

    cout << "위도를 도, 분, 초 단위로 입력하시오 :\n";
    cout << "먼저, 도각을 입력하시오 : ";
    cin >> degrees;
    cout << "다음에, 분각을 입력하시오 : ";
    cin >> minutes;
    cout << "끝으로, 초각을 입력하시오 : ";
    cin >> seconds;

    cout << degrees << " 도,"<< minutes << " 분,"<< seconds << " 도 = "<< degrees + minutes / 60 + seconds / (60*60)<< " 도"<< endl;
    return 0;
}
