
#include <iostream>
#include <string>

using namespace std;

struct CAR
{
    string makeCompany;
    int makeYear;
};


int main()
{   
    int count = 0;
    
    cout << "몇 대의 차를 목록으로 관리하시겠습니까?";
    cin >> count;

    // 이부분을 몰랐음
    // CAR car[count];
    // car[i]= new CAR(); 자바처럼 생각함....

    CAR* car = new CAR[count];

    for(int i =0; i < count;i++)
    {           
        cout << "자동차 #: " << i+1 <<endl;
        cout << "제작업체: ";
        cin >> car[i].makeCompany;
        cout << "제작년도: ";
        cin >> car[i].makeYear;
    }

    cout << "현재 귀하가 보유하고 있는 자동차 목록은 다음과 같습니다."<<endl;
    for(int i =0; i < count;i++)
    {           
        
        cout << car[i].makeYear<<"년형 "<< car[i].makeCompany<<endl;        
    }


    return 0;
}
