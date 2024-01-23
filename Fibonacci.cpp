#include<iostream>
using namespace std;

// 0 1 
// 1 1
// 1 2
// 2 3
// 3 5
void print_fibonacci_numbers_less_than_N(int N){
	int f0 = 0, f1 = 1, current_fibonacci = 0;
	cout << f0 << " " << f1 << " ";
	
	while(current_fibonacci <= N){
		current_fibonacci = f0 + f1;
		f0 = f1;
		f1 = current_fibonacci;
		cout << current_fibonacci << " ";
	}
	cout << endl;
}

int cal_fib(int N){
	if(N <=0 ){
		return 0;
	}
	else if(N == 1) return 1;
	else {
		int f0 = 0, f1 =1, next_fib;
		for(int i = 2; i <= N; i++){
			next_fib = f0 + f1;
			f0 = f1;
			f1 = next_fib;
		}
		return next_fib;
	}
}

void print_N_fibonacci(int N){
	for(int i = 0 ; i < N; i++){
		cout << cal_fib(i) << " "; 
	}
	cout << endl;
}

// ra cho -> mua trung -> dat vao tu lanh
// ->void: ra cho -> mua trung -> dat vao tu lanh
// ->int : ra cho -> mua trung -> dat vao tu lanh -> return(thong bao) mua dc 5 qua trung/ 6 qua trung   
// ->bool: ra cho -> mua trung -> dat vao tu lanh -> return true/false: thanh cong/that bai 

int main(){
	int N;
	cin >> N;
	print_fibonacci_numbers_less_than_N(N);
	print_N_fibonacci(N);
	
	return 0;
}
