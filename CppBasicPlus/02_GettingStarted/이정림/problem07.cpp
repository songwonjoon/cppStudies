#include <iostream>

void time(int hour, int minute);

int main(){
	int h=0;
	int m=0;
	
	std::cout << "Enter an Hour : ";
	std::cin >> h;
	std::cout << "Enter a Minute : ";
	std::cin >> m;
	
	time(h, m);
}

void time(int hour, int minute){
	std::cout << "Time : " << hour << ":" <<  minute << std::endl;
}
