
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int temp = 0;
    int bookCount[3][12] = {};
    
    for(int i=0;i<3;i++){
        for(int j=0;j<12;j++)
        {   
            cout << i+1 << "년도 " << j+1 << "월 월간판매량 : ";
            cin >> bookCount[i][j];
        }
    }


    for(int i=0;i<3;i++){
        for(int j=0;j<12;j++)
        {
            temp = temp + (int)bookCount[i][j];;
        }
    }
    
    cout << temp <<"권"<< endl;

    return 0;
}
