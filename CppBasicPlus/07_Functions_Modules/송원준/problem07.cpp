#include <iostream>

const int Max = 5;

double* fill_array(double* begin, double* end);
void show_array(const double* begin, const double* end);
void revalue(double factor, double* begin, double* end);

int main() {
    using namespace std;
    double properties[Max];

    double* end = fill_array(properties, properties + Max);
    show_array(properties, end);

    if (end != properties) {
        cout << "재평가율을 입력하십시오: ";
        double factor;
        while (!(cin >> factor)) { 
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "잘못 입력했습니다. 수치를 입력하세요: ";
        }
        revalue(factor, properties, end);
        show_array(properties, end);
    }

    cout << "프로그램을 종료합니다.\n";
    cin.get();
    cin.get();
    return 0;
}

double* fill_array(double* begin, double* end) {
    using namespace std;
    double* current = begin;
    double temp;
    int i = 1;

    while (current < end) {
        cout << i++ << "번 부동산의 가격: $";
        cin >> temp;

        if (!cin) { // 입력 불량
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "입력 불량; 입력 과정을 끝내겠습니다.\n";
            break;
        } else if (temp < 0) { 
            break;
        }
        *current++ = temp;
    }

    return current;
}

void show_array(const double* begin, const double* end) {
    using namespace std;
    const double* current = begin;
    int i = 1;

    while (current < end) {
        cout << i++ << "번 부동산: $" << *current++ << endl;
    }
}

void revalue(double factor, double* begin, double* end) {
    double* current = begin;

    while (current < end) {
        *current++ *= factor;
    }
}
