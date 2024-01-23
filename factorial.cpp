#include<iostream>
using namespace std;

int get_input(){
	int input;
	cout << "Type your number here: ";
	cin >> input;
	while (input < 0){
		cout << "Type your number here: ";
		cin >> input;
	}
	return input;
}

int calculate_factorial(){
	int x;
	int result = 1;
	int input = get_input();
	for (x = 2; x <= input; x++){
		result = result * x; 
	}
	return result;
}

int main(){
	
	int result = calculate_factorial();
	cout << result;
	
	return 0;
}


