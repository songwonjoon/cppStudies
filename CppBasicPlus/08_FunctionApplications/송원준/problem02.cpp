#include <iostream>
#include <string>

using namespace std;

struct CandyBar {
    string brand;
    double weight;
    int calories;
};

void setCandyBar(CandyBar& candy, const char* brand = "Millennium Munch", double weight = 2.85, int calories = 350) {
    candy.brand = brand;
    candy.weight = weight;
    candy.calories = calories;
}

void displayCandyBar(const CandyBar& candy) {
    cout << "Brand: " << candy.brand << endl;
    cout << "Weight: " << candy.weight << " g" << endl;
    cout << "Calories: " << candy.calories << " kcal" << endl;
}

int main() {
    CandyBar myCandy;
    setCandyBar(myCandy);
    displayCandyBar(myCandy);
    
    return 0;
}