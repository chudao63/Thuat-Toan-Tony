#include<iostream>
using namespace std;

//	0    1	  1	  2	  3	   5	8	  13	21
//           f0       f1

int main(){
	
	int input;
	cin >> input;
	
	int f0 = 0;
	int f1 = 1;
	
	cout << f0 << " " << f1 << " ";
	
	while (f0 + f1 <= input){
		f1 = f1 + f0;
		f0 = f1 - f0;
		cout << f1 << " ";
	}
		
		return 0;
}

// 0 1 1

//x+y=z
