#include <iostream>

const int Seasons = 4;
const char* Sname[Seasons] = {"Spring", "Summer", "Fall", "Winter"};

void fill(double expenses[]);

void show(const double expenses[]);

int main() {
    using namespace std;

    double expenses[Seasons];

    fill(expenses);
    show(expenses);

    return 0;
}

void fill(double expenses[]) {
    using namespace std;
    for (int i = 0; i < Seasons; i++) {
        cout << Sname[i] << "에 소요되는 비용: ";
        cin >> expenses[i];
    }
}

void show(const double expenses[]) {
    using namespace std;
    double total = 0.0;
    cout << "\n계절별 비용\n";
    for (int i = 0; i < Seasons; i++) {
        cout << Sname[i] << ": $" << expenses[i] << endl;
        total += expenses[i];
    }
    cout << "총 비용: $" << total << endl;
}