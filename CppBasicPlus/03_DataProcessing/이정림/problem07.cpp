#include <iostream>
using namespace std;

const float CONVERSION_VAL_M = 62.14;
const float CONVERSION_VAL_G = 3.875;

int main(){
	float lPk;
	
	cout << "Enter the liters per kilometers : ";
	cin >> lPk;
	
	float mPg = CONVERSION_VAL_M / (lPk * CONVERSION_VAL_G);
	
	cout << "Liters per Kilometers " << lPk << " is " << mPg << " in Miles per Gallons";
	
	return 0;
}
