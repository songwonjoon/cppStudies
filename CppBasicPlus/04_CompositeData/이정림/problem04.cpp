#include <iostream>
#include <string>
#include <cstring>

int main(){
	using namespace std;
	
	string firstName;
	string lastName;
	string fullName;
	
	cout << "퍼스트 네임 (이름) 을 입력하시오: ";
    getline(cin, firstName);
    cout << "라스트 네임 (성) 을 입력하시오: ";
    getline(cin, lastName);
	
	fullName = firstName + ", " + lastName;
	
	cout << "하나의 문자열로 만들면 : " << fullName << endl;
	
	return 0;
}
