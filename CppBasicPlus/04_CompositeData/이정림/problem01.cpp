#include <iostream>

int main(){
	using namespace std;
	
	char firstName[20];
    char lastName[20];
    char grade;
    int age;
    
    cout << "���� �۽�Ʈ ���� (�̸�) : ";
    cin.getline(firstName, 20);
    cout << "���� ��Ʈ ���� (��) : ";
    cin >> lastName;
    cout << "�л��� ���ϴ� ����: ";
    cin >> grade;
    cout << "����: ";
    cin >> age;

    cout << "����: " << lastName << ", " << firstName << endl;
    cout << "����: " << (char) (grade+1) << endl;
    cout << "����: " << age << endl;
	
	 return 0;
}
