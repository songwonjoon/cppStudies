#include <iostream>

using namespace std;

double lyToAU(double ly){
    return ly * 265608;
}

int main() {        
    double ly = 0;
    double AU = 0;
    cout << "광년 수를 입력하고 Enter 키를 누르십시오: ";
    cin >> ly;
    AU = lyToAU(ly);
    cout << ly<<" 광년은 "<< AU <<" 천문 단위입니다."<<endl;
    // 값이 정수형으로 안나옴.... pass
    return 0;
}
