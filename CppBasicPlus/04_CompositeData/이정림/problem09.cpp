#include <iostream>
#include <cstring>

struct CandyBar{
	char compName[20];
	float weight;
	int kcal;
};

int main(){
	using namespace std;
	
	CandyBar * candy = new CandyBar[3];
	
	strcpy(candy[0].compName, "Mocha Munch");
    candy[0].weight = 2.3;
    candy[0].kcal = 350;

    strcpy(candy[1].compName, "Wenny Benny");
    candy[1].weight = 4.2;
    candy[1].kcal = 450;

    strcpy(candy[2].compName, "Trolly");
    candy[2].weight = 2.1;
    candy[2].kcal = 650;
	
	cout << "Snack1 Brand: " << candy[0].compName << endl;
    cout << "Snack1 Weight: " << candy[0].weight << endl;
    cout << "Snack1 kcal: " << candy[0].kcal << endl;
    cout << endl;
    cout << "Snack2 Brand: " << candy[1].compName << endl;
    cout << "Snack2 Weight: " << candy[1].weight << endl;
    cout << "Snack2 kcal: " << candy[1].kcal << endl;
    cout << endl;
    cout << "Snack3 Brand: " << candy[2].compName << endl;
    cout << "Snack3 Weight: " << candy[2].weight << endl;
    cout << "Snack3 kcal: " << candy[2].kcal << endl;
	
	return 0;
}
