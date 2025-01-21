#include <iostream>

using namespace std;

struct CandyBar
{
    char brand[20];
    double weight;
    int kcal;
};

int main()
{
    CandyBar* snack = new CandyBar[3]; // 세 개의 CandyBar 구조체를 동적으로 할당
    snack[0] = {"Mocha Munch", 2.3, 350};
    snack[1] = {"Spicy", 3.0, 500};
    snack[2] = {"Honey", 2.0, 700};

    cout << "Snack0 Brand : " << snack[0].brand << endl;
    cout << "Snack0 Weight : " << snack[0].weight << endl;
    cout << "Snack0 kcal : " << snack[0].kcal << endl;
    cout << endl;
    cout << "Snack1 Brand : " << snack[1].brand << endl;
    cout << "Snack1 Weight : " << snack[1].weight << endl;
    cout << "Snack1 kcal : " << snack[1].kcal << endl;
    cout << endl;
    cout << "Snack2 Brand : " << snack[2].brand << endl;
    cout << "Snack2 Weight : " << snack[2].weight << endl;
    cout << "Snack2 kcal : " << snack[2].kcal << endl;

    delete[] snack;
    return 0;
}