#include <iostream>
#include <cstring>

int main(){
	using namespace std;
	
	char firstName[20];
	char lastName[20];
	char fullName[30];
	
	cout << "�۽�Ʈ ���� (�̸�) �� �Է��Ͻÿ�: ";
    cin.getline(firstName, 20);
    cout << "��Ʈ ���� (��) �� �Է��Ͻÿ�: ";
    cin.getline(lastName, 20);
	
	strcpy(fullName, lastName);
    strcat(fullName, ", ");
    strcat(fullName, firstName);
	
	cout << "�ϳ��� ���ڿ��� ����� : " << fullName << endl;
	
	return 0;
}
