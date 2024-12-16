#include <iostream>

using namespace std;

float cToF(float f){
    return 1.8 * f + 32.0;
}

int main() {        
    float f = 0;
    float c = 0;
    cout << "썹씨 온도를 입력하고 Enter 키를 누르십시오: ";
    cin >> c;
    f = cToF(c);
    cout << "썹씨 "<<c<<"도는 화씨로 "<<f<<"도 입니다."<<endl;
    return 0;
}
