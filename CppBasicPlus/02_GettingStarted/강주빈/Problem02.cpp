#include <iostream>

using namespace std;

double distance1, kilometer;

int main()
{
    cout << "거리를 입력하시오. " << endl;
    cin >> distance1;
    kilometer = distance1 * 1.60934;

    cout << "입력한 거리는 " << distance1 << "마일이며, " << kilometer << "Km 입니다." << endl;
    
    return 0;
}