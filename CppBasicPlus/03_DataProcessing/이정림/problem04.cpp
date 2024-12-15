#include <iostream>
using namespace std;

const int CONVERSION_VAL_M = 60;
const int CONVERSION_VAL_H = 60 * CONVERSION_VAL_M;
const int CONVERSION_VAL_D = 24 * CONVERSION_VAL_H;

int main(){
	long fseconds;
	int seconds, minute, hours, days;
	
	cout << "Enter the number of seconds : ";
	cin >> fseconds;
	
	days = fseconds / CONVERSION_VAL_D;
	hours = (fseconds % CONVERSION_VAL_D) / CONVERSION_VAL_H;
	minute = ((fseconds % CONVERSION_VAL_D) % CONVERSION_VAL_H) / CONVERSION_VAL_M;
	seconds = fseconds % CONVERSION_VAL_M;
	
	cout << fseconds << " seconds = " << days << " days, " << hours << " hours, " << minute << " minute, " << seconds << " seconds";
	cout << endl;
	
	return 0;
}
