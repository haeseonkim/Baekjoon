#include <iostream>
using namespace std;

int main() {
	
	int N;
	cin >> N;
	if (N < 3 || N > 5000) {
		cout << "잘못된 입력" << endl; 
		return -1;
	}
	int five = 0;
	int three = 0;
	int sum = 0;

	for (; five <= N / 5; five++) {
		if ((N - 5*five) % 3 == 0 ) {
			three = (N - 5 * five) / 3;
			sum = five + three;
		}
	}

	if (sum == 0)
		cout << -1 << endl;
	else cout << sum << endl;
	
 }
