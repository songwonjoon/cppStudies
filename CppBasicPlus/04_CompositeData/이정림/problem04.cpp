#include <iostream>
#include <string>
#include <cstring>

int main(){
	using namespace std;
	
	string firstName;
	string lastName;
	string fullName;
	
	cout << "�۽�Ʈ ���� (�̸�) �� �Է��Ͻÿ�: ";
    getline(cin, firstName);
    cout << "��Ʈ ���� (��) �� �Է��Ͻÿ�: ";
    getline(cin, lastName);
	
	fullName = firstName + ", " + lastName;
	
	cout << "�ϳ��� ���ڿ��� ����� : " << fullName << endl;
	
	return 0;
}
