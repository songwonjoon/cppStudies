#include <iostream>
#include <cmath>
using namespace std;

int main(){
	const int CONVERSION_VALUE = 12;
	const float CONVERSION_VALUEM = 0.0254;
	const float CONVERSION_VALUEW = 2.2;
	int feet=0;
	int inch=0;
	float weight=0;
	
	cout << "Enter Height in feet inch seperated by a space: ";
	cin >> feet >> inch;
	cout << "Enter weight in pound : ";
	cin >> weight;
	
	int heightInInch = feet*CONVERSION_VALUE + inch;
	float heightInMeter = heightInInch*CONVERSION_VALUEM;
	float weightInkg = weight/CONVERSION_VALUEW;
	
	float bmi = weightInkg / pow(heightInMeter, 2);
	cout << "BMI is " << bmi << endl;
	
	return 0;
}
