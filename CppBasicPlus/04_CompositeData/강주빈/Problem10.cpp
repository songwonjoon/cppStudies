#include <iostream>

using namespace std;

int main()
{
    double times[3]; // 3번의 달리기 기록 저장

    cout << "3번의 40야드/40미터 달리기 기록을 입력하세요 (초 단위): " << endl;
    for(int i=0; i<3; i++)
    {
        cout << "기록 # " << i + 1 << ": ";
        cin >> times[i];
    }

    double total = 0;
    for(int i=0; i<3; i++)
    {
        total += times[i];
    }

    double average = total / 3;

    cout << "\n===== 달리기 기록 =====" << endl;
    for(int i=0; i<3; i++)
    {
        cout << "기록 #" << i + 1 << ": " << times[i] << " 초" << endl;
    }
    cout << "평균 기록: " << average << " 초" << endl;

    return 0;
}