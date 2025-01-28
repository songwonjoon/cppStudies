#include <iostream>
#include <string>

using namespace std;

const int SLEN = 30;

struct student {
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student* ps);
void display3(const student pa[], int n);

int main() {
    cout << "학급의 학생 수를 입력하십시오: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n') continue;

    student* ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);

    for (int i = 0; i < entered; i++) {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);

    delete[] ptr_stu;
    cout << "프로그램을 종료합니다.\n";
    return 0;
}

int getinfo(student pa[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        cout << "학생 #" << (i + 1) << "의 이름 (빈 줄 입력 시 종료): ";
        cin.getline(pa[i].fullname, SLEN);

        if (pa[i].fullname[0] == '\0') {
            break;
        }

        cout << "학생 #" << (i + 1) << "의 취미: ";
        cin.getline(pa[i].hobby, SLEN);

        cout << "학생 #" << (i + 1) << "의 OOP 수준 (숫자): ";
        cin >> pa[i].ooplevel;
        while (cin.get() != '\n') continue;
    }
    return i;
}

void display1(student st) {
    cout << "\n[display1] 학생 정보:" << endl;
    cout << "이름: " << st.fullname << endl;
    cout << "취미: " << st.hobby << endl;
    cout << "OOP 수준: " << st.ooplevel << endl;
}

void display2(const student* ps) {
    cout << "\n[display2] 학생 정보:" << endl;
    cout << "이름: " << ps->fullname << endl;
    cout << "취미: " << ps->hobby << endl;
    cout << "OOP 수준: " << ps->ooplevel << endl;
}

void display3(const student pa[], int n) {
    cout << "\n[display3] 전체 학생 정보:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "학생 #" << (i + 1) << ":" << endl;
        cout << "  이름: " << pa[i].fullname << endl;
        cout << "  취미: " << pa[i].hobby << endl;
        cout << "  OOP 수준: " << pa[i].ooplevel << endl;
    }
}
