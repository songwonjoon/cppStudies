#include <iostream>  

using namespace std; 

int main() {         
    int mi = 0;
    cout << "변환할 마일을 입력하세요 : ";  
    cin >> mi;
    cout << mi <<" 마일 변환값 : " << mi * 1.60934 << "km" << endl;  
    return 0;        
}
