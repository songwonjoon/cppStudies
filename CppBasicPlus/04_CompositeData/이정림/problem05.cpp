#include <iostream>
#include <string>

struct CandyBar{
	char compName[20];
	float weight;
	int kcal;
};

int main(){
	using namespace std;
	
	CandyBar snack = {"Mocha Munch", 2.3, 350};
	
	cout << "Company : " << snack.compName << endl;
	cout << "Weight : " << snack.weight << endl;
	cout << "Calorie : " << snack.kcal << endl;
	
	return 0;
}
