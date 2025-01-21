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
    CandyBar snack = {"Mocha Munch", 2.3, 350};

    cout << "Snack Brand : " << snack.brand << endl;
    cout << "Snack Weight : " << snack.weight << endl;
    cout << "Snack kcal : " << snack.kcal << endl;

    return 0;
}