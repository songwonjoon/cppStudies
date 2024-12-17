#include <iostream>

using namespace std;

int main() {        
    float mi = 0;
    float gal = 0;

    cout << "마일을 입력하시오 : ";
    cin >> mi;

    cout << "갤런 입력하시오 : ";
    cin >> gal;
    
    cout << "갤런당 마일수는 "<< (mi/gal) << " 입니다."<< endl;
    return 0;
}
