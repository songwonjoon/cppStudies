#include <iostream>
using namespace std;

int main(){
	long long usPopulation, wwPopulation;
	
	cout << "Enter the world's population : ";
	cin >> wwPopulation;
	cout << "Enter the population of the US : ";
	cin >> usPopulation;
	
	double percentage = (static_cast<double>(usPopulation) / wwPopulation) * 100;
	
	cout << "The population of the US is " << percentage << " of the world population" << endl;
	
	return 0;
}
