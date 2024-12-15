#include <iostream>
using namespace std;

const int SECONDS_PER_MINUTE = 60;
const int MINUTES_PER_DEGREE = 60;

int main(){
	int degrees, minutes, seconds;
	
	cout << "Enter a latitude in degrees, minutes, seconds : \n";
	cout << "Enter the degrees : ";
	cin >> degrees;
	cout << "Enter the minutes : ";
	cin >> minutes;
	cout << "Enter the seconds : ";
	cin >> seconds;
	
	float decimal_degrees = degrees + (static_cast<float>(minutes) / MINUTES_PER_DEGREE) + (static_cast<float>(seconds) / (MINUTES_PER_DEGREE * SECONDS_PER_MINUTE));
	
	cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = ";
	cout << decimal_degrees << " degrees";
	
	return 0;
}
