
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int temp = 0;
    string month[12] = {"01","02","03","04","05","06","07","08","09","10","11","12"};
    int bookCount[12] = {};
    
    for(int i=0;i<sizeof(month) / sizeof(month[0]);i++)
    {
        cout << month[i]<<"월";
        cin >> bookCount[i];
    }

    for(int i=0;i<sizeof(bookCount) / sizeof(bookCount[0]);i++)
    {
        temp = temp + (int)bookCount[i];
    }
    
    cout << temp <<"권"<< endl;

    return 0;
}
