#include <iostream>

using namespace std;

int main() {        
    long long people = 0;
    long long korea = 0;

    cout << "세계 인구수를 입력하시오 : ";
    cin >> people;

    cout << "한국의 인구수를 입력하시오 : ";
    cin >> korea;
    
    // long long cal = (korea/people)*100; 오답
    
    double cal = (static_cast<double>(korea) / people) * 100;

    cout << "세계 인구수에서 한국이 차지하는 비중은 "<< cal << " %이다."<< endl;

    // 세계 인구수를 입력하시오 : 6898758899
    // 한국의 인구수를 입력하시오 : 310789781
    // 세계 인구수에서 한국이 차지하는 비중은 0 %이다.

    return 0;
}
