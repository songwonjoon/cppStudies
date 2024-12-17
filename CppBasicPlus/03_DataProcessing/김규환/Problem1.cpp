#include <iostream>

using namespace std;

int main() {        
    const float cm_to_m = 0.01;
    const float m_to_cm = 100;
    float cm;

    cout << "키를 cm 단위로 입력하세요 ______: ";
    cin >> cm;
    cout << "cm :"<< cm <<"m"<< cm*cm_to_m;
    return 0;
}
