#include <iostream>
#include <string>

using namespace std;

struct Pizza
{
    string companyName;
    double diameter;
    double weight;
};

int main()
{
    Pizza* pizza = new Pizza; // 구조체 동적 할당

    cout << "피자의 지름(cm)을 입력하세요: ";
    cin >> pizza->diameter; 
    cin.ignore(); // 이전 입력으로 남은 줄바꿈 제거

    cout << "피자 회사의 이름을 입력하세요: ";
    getline(cin, pizza->companyName); 

    cout << "피자의 중량(kg)을 입력하세요: ";
    cin >> pizza->weight;

    cout << "\n===== 피자 정보 =====" << endl;
    cout << "피자의 지름: " << pizza->diameter << " cm" << endl;
    cout << "피자 회사의 이름: " << pizza->companyName << endl;
    cout << "피자의 중량: " << pizza->weight << " kg" << endl;

    delete pizza;

    return 0;
}