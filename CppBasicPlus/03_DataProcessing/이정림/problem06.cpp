#include <iostream>
using namespace std;

int main(){
	float kilometers, liters;
	cout << "Enter the distance you driven in kilometers : ";
	cin >> kilometers;
	cout << "Enter the liters of gasoline you used : ";
	cin >> liters;
	
	float liter_per_kilometer = (liters / kilometers) * 100;
	
	cout << "Your car's liters per 100kilometer is " << liter_per_kilometer;
	
	return 0;
}
