#include <iostream>
#include <cctype>
#include <array>
#include <numeric>

using namespace std;

int avg(array<double, 10> donations);
int compareAverage(array<double, 10> donations, int average);

array <double, 10> donations;
int average = 0;
int reportCount = 0;

int main()
{
    for (int i = 0; i < 10; i++) {
        cin >> donations[i];

        if (cin.fail()) {
            break;
        }
    }

    average = avg(donations);
    cout << "평균: " << average << endl;

    reportCount = compareAverage(donations, average);
    cout << "평균 기부금보다 큰 기부금의 갯수는 " << reportCount << endl;

    return 0;
}

int avg(array<double, 10> arr)
{
    double sum = accumulate(arr.begin(), arr.end(), 0.0);
    return sum / arr.size();
}

int compareAverage(array<double, 10> arr, int average)
{
    int count = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > average) {
            count++;
        }
    }

    return count;
}