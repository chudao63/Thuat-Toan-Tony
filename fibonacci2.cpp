#include<iostream>
using namespace std;

int main(){
	
	int input;
	cin >> input;
	int x;
	int f0 = 0;
	int f1 = 1;
	
	if (input == 1){
		cout << f0;
	}
	if (input == 2){
		cout << f0 << " " << f1;
	}
	if (input > 2){
		cout << f0 << " " << f1 << " ";
		for (x = 2; x < input; x++){
			f1 = f1 + f0;
    		f0 = f1 - f0;
    		cout << f1 << " ";
		}
		
	}
	
	return 0;
}
