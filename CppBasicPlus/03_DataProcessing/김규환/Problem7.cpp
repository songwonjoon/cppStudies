#include <iostream>

using namespace std;

int main() {        
    float EU = 0;
    float USA = 0;

    float km = 100;
    float L = 0;

    cout << "유럽스타일 소비량을 입력하시오 : ";
    cin >> EU;

    L = EU;

    // 100 km -> 62.14 mi , 1km = 0.6214 mi    
    // 3.875L -> 1gal    1L = 0.2580 gal

    float gal = 0.2580 * L;
    float mi = 0.6214 * km;

    cout << "미국 스타일 소비량은 "<< mi/gal<< " 입니다."<< endl;

    //0.4 정도 오차가 발생
    return 0;
}
