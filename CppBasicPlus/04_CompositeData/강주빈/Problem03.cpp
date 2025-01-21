#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char firstName[20];
    char lastName[20];
    char fullName[40];

    cout << "퍼스트 네임(이름)을 입력하시오 : ";
    cin.getline(firstName, 20);
    cout << "라스트 네임(성)을 입력하시오 : ";
    cin.getline(lastName, 20);
    
    strcpy(fullName, lastName);
    strcat(fullName, ", ");
    strcat(fullName, firstName);

    cout << "하나의 문자열로 만들면 " << fullName << endl;

    return 0;
}