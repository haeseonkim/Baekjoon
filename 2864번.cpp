#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b,aa,bb;
	int min_a, min_b, max_a, max_b;
	cin >> a >> b;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] == '6') 
			a[i] = '5';
	}
	min_a = stoi(a);
	for (int j = 0; j < b.size(); j++) {
		if (b[j] == '6') 
			b[j] = '5';
	}
	min_b = stoi(b);
	for (int i = 0; i < a.size(); i++) {
		if (a[i] == '5')
			a[i] = '6';
	}
	max_a = stoi(a);
	for (int j = 0; j < b.size(); j++) {
		if (b[j] == '5')
			b[j] = '6';
	}
	max_b = stoi(b);

	cout << min_a + min_b <<" "<< max_a + max_b << endl;
	return 0;
}
