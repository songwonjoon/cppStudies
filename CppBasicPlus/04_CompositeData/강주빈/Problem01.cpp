#include <iostream>
#include <string>

using namespace std;

int main()
{
    string firstName, lastName, grade;
    int age;

    cout << "영문 퍼스트 네임 (이름) : ";
    cin >> firstName;
    cout << "영문 리스트 네임 (성) : ";
    cin >> lastName;
    cout << "학생이 원하는 학점 : ";
    cin >> grade;
    cout << "나이 : ";
    cin >> age;

    cout << "성명 : " << lastName << ", " << firstName << endl;
    cout << "학점 : " << grade << endl;
    cout << "나이 : " << age << endl;
    
    return 0;
}