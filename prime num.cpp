#include<iostream>
using namespace std;

int main() {
	
	int entry_num;
	cout << "Type your number here: ";
	cin >> entry_num;
	cout << "\n";
	
	int num_under_entry;
	for (num_under_entry = 2; num_under_entry <= entry_num; num_under_entry++) {
		
		int check_prime_num;
		bool flag = false;

		for (check_prime_num = 2; check_prime_num < num_under_entry; check_prime_num++) {
			if (num_under_entry % check_prime_num == 0) {
				flag = true;
				break;
			}
		}

		if (flag == false) {
			cout << num_under_entry << "\n";
		}
	}
	
	return 0;
}

