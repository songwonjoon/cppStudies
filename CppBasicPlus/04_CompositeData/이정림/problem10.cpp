#include <iostream>
#include <array>

int main(){
	using namespace std;
	
	float time[3];
	
	for(int i=0; i<3; i++){
		cout << "Enter " << i+1 << "th 40-meter running result in sec : ";
		cin >> time[i];
	}
	
	for(int i=0; i<3; i++){
		cout << "Your " << i + 1 << "th 40m running result: " << time[i] << " sec" << endl;
	}
	
	return 0;
}
