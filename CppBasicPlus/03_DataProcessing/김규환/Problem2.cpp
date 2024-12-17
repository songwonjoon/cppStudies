#include <iostream>

using namespace std;

int main() {        
    float feet = 0;
    float inch = 0;
    float pound = 0;

    float m = 0;
    float kg = 0;

    float bmi = 0;

    const float inch_to_m = 0.0254;
    const float feet_to_inch = 12;

    cout << "feet, inch, pound를 공백으로 구분해서 입력해주세요.\n";
    cin >> feet, inch, pound;
    
    inch = inch + feet * 12;
    
    m = inch * inch_to_m;
    kg = pound / feet_to_inch;

    bmi = kg / (m*m);

    cout << "bmi : "<< bmi << endl;
    return 0;
}
