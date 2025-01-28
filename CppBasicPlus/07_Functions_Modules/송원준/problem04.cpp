#include <iostream>

using namespace std;

long double probability(unsigned numbers, unsigned picks);

int main() {
    double total1, choices1;
    double total2, choices2;

    // 사용자 입력
    cout << "첫 번째 범위의 전체 수와 뽑을 수의 개수를 입력하세요:" << endl;
    cin >> total1 >> choices1;

    cout << "두 번째 범위의 전체 수와 뽑을 수의 개수를 입력하세요:" << endl;
    cin >> total2 >> choices2;

    // 첫 번째 범위와 두 번째 범위의 확률 계산
    long double probability1 = probability(total1, choices1);
    long double probability2 = probability(total2, choices2);

    // 전체 승률 계산
    long double totalProbability = probability1 * probability2;

    // 결과 출력
    cout << "첫 번째 범위에서 " << choices1 << "개를 바르게 뽑을 확률: " << probability1 << endl;
    cout << "두 번째 범위에서 " << choices2 << "개를 바르게 뽑을 확률: " << probability2 << endl;
    cout << "전체 범위 승률은: " << totalProbability << " 입니다." << endl;

    return 0;
}

long double probability(unsigned numbers, unsigned picks) {
    long double result = 1.0;
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--) {
        result = result * n / p;
    }
    return result;
}
