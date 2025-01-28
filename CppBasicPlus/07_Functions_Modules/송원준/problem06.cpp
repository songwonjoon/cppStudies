#include <iostream>

using namespace std;

int Fill_array(double arr[], int size);
void Show_array(const double arr[], int size);
void Reverse_array(double arr[], int size);

int main() {
    const int MaxSize = 10;
    double arr[MaxSize];

    int size = Fill_array(arr, MaxSize);

    cout << "배열의 내용:" << endl;
    Show_array(arr, size);

    Reverse_array(arr, size);
    cout << "\n배열의 순서를 뒤집은 결과:" << endl;
    Show_array(arr, size);

    if (size > 2) {
        Reverse_array(arr + 1, size - 2); 
        cout << "\n첫 번째와 마지막 원소를 제외한 나머지를 뒤집은 결과:" << endl;
        Show_array(arr, size);
    }

    return 0;
}

int Fill_array(double arr[], int size) {
    int count = 0;
    double input;

    cout << "배열에 저장할 값을 입력하세요 (최대 " << size << "개, 숫자가 아닌 입력으로 종료):" << endl;
    while (count < size) {
        cout << "값 #" << (count + 1) << ": ";
        if (!(cin >> input)) {
            cin.clear();
            while (cin.get() != '\n');
            cout << "입력을 종료합니다.\n";
            break;
        }
        arr[count++] = input;
    }

    return count;
}

void Show_array(const double arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << "값 #" << (i + 1) << ": " << arr[i] << endl;
    }
}

void Reverse_array(double arr[], int size) {
    for (int i = 0; i < size / 2; ++i) {
        double temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}