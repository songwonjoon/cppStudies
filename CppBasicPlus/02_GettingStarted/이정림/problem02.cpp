#include <iostream>

int main(){
	float dis;
	std::cout << "Please enter the distance in miles : ";
	std::cin >> dis;
	std::cout << dis << " miles equivalent to " << dis*1.60934 << " killometers" << std::endl;
	
	return 0;
}
