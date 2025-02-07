#include <iostream>

using namespace std;

template <typename T>
T SumArray(const T arr[], int n) {
    T sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    return sum;
}

struct Debt {
    char name[50];
    double amount;
};

double SumArray(const Debt arr[], int n) {
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i].amount;
    }
    return sum;
}

int main() {
    int things[6] = {13, 31, 103, 301, 310, 130};
    cout << "정수 배열의 합: " << SumArray(things, 6) << endl;

    Debt debts[3] = {
        {"Person A", 2400.5},
        {"Person B", 1300.75},
        {"Person C", 1900.0}
    };
    cout << "채무의 총합: " << SumArray(debts, 3) << endl;

    return 0;
}
