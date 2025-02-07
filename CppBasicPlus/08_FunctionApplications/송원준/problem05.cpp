#include <iostream>

using namespace std;

template <typename T>
T max5(const T arr[5]) {
    T maxValue = arr[0];
    for (int i = 1; i < 5; ++i) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }
    return maxValue;
}

int main() {
    int intArray[5] = {1, 3, 5, 2, 4};
    double doubleArray[5] = {1.1, 3.3, 5.5, 2.2, 4.4};

    cout << "int 배열에서 가장 큰 값: " << max5(intArray) << endl;

    cout << "double 배열에서 가장 큰 값: " << max5(doubleArray) << endl;

    return 0;
}