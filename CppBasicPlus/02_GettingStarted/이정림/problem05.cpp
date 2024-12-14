#include <iostream>

int main(){
	float celcius;
	
	std::cout << "Please Enter a Celsius Value : ";
	std::cin >> celcius;
	std::cout << celcius << " dgrees Celcius is " << (celcius*1.8)+32.0 << "degrees Fahrenheit";
	std::cout << std::endl;
	
	return 0;
}
