#include <iostream>
#include <cstring>

using namespace std;

template <typename T>
T maxn(const T arr[], int n) {
    T maxValue = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }
    return maxValue;
}

const char* maxn(const char* arr[], int n) {
    const char* longest = arr[0];
    for (int i = 1; i < n; ++i) {
        if (strlen(arr[i]) > strlen(longest)) {
            longest = arr[i];
        }
    }
    return longest;
}

int main() {
    int intArray[6] = {1, 3, 5, 2, 4, 6};
    cout << "int 배열에서 가장 큰 값: " << maxn(intArray, 6) << endl;

    double doubleArray[4] = {1.1, 3.3, 5.5, 2.2};
    cout << "double 배열에서 가장 큰 값: " << maxn(doubleArray, 4) << endl;

    const char* stringArray[5] = {"Hello", "World", "C++", "Programming", "Templates"};
    cout << "가장 긴 문자열: " << maxn(stringArray, 5) << endl;

    return 0;
}
