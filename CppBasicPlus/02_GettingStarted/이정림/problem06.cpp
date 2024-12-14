#include <iostream>

double toAstronomical(double light_year);

int main(){
	double lightYear=0;
	double astronom = 0;
	
	std::cout << "Enter the number of light years : ";
	std::cin >> lightYear;
	astronom = toAstronomical(lightYear);
	std::cout << lightYear << " light year = " << astronom << "astronomical units";
	std::cout << std::endl;
	
	return 0;
}

double toAstronomical(double light_year){
	return light_year*63240;
}
