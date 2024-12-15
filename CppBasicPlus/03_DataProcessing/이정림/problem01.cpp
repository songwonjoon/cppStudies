#include <iostream>
using namespace std;

int main(){
	const int CONVERSION_FACTOR = 12;
	int heightInInches=0;
	
	cout << "Enter your height in Inches : _";
	cin >> heightInInches;
	
	int feetHeight = heightInInches / CONVERSION_FACTOR;
	int inchHeight = heightInInches % CONVERSION_FACTOR;
	
	cout << "Your Height is " << feetHeight << " feet and " << inchHeight << "inches." << endl;
	
	return 0;
}
