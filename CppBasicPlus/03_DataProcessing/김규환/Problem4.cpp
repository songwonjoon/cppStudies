#include <iostream>

using namespace std;

int main() {        
    long seconds = 0;
    
    cout << "초 수를 입력하시오 : ";
    cin >> seconds;
       
    cout << seconds << "초 = ";
    cout << seconds/(24*60*60) << " 일,"<< (seconds%(60*60*60))/(60*60) << " 시간,"<< (seconds%(60*60))/60 << " 분, "<< seconds%60 << " 초"<< endl;
    return 0;
}
