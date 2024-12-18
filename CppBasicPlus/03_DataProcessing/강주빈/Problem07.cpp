#include <iostream>

using namespace std;

const float KM_TO_MILES = 62.14; // 100킬로미터 = 62.14마일
const float LITER_TO_GALLON = 3.875; // 1갤런 = 3.875리터

int main()
{
    float litersPer100Km; // 100km당 리터 소비량
	
	cout << "Enter the liters per kilometers : ";
	cin >> litersPer100Km;
	
	float milesPerGallon = KM_TO_MILES / (litersPer100Km / LITER_TO_GALLON);
	
	cout << "Liters per Kilometers " << litersPer100Km << " is " << milesPerGallon << " in Miles per Gallons" << endl;
	
	return 0;    
}