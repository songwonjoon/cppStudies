#include <iostream>
#include <string>

struct Pizza {
	std::string compName;
	float radius;
	int weight;
};

int main(){
	using namespace std;
	
	Pizza pizza;
	
	cout << "Enter pizza company: ";
    getline(cin, pizza.compName);
    cout << "Enter pizza radius: ";
    cin >> pizza.radius;
    cout << "Enter pizza weight: ";
    cin >> pizza.weight;
    
    cout << "=================" << endl;

    cout << "Company: " << pizza.compName << endl;
    cout << "Radius: " << pizza.radius << endl;
    cout << "Weight: " << pizza.weight << endl;
	
	return 0;
}
