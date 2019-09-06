#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b, aa, bb;
	int num1, num2, large;
	cin >> a >> b;
	aa = a;
	bb = b;
	int j = a.size() - 1;
	for (int i = 0; i < a.size(); i++) {
		aa[i] = a[j--];
	}
	num1 = stoi(aa);
	j = b.size() - 1;
	for (int i = 0; i < b.size(); i++) {
		bb[i] = b[j--];
	}
	num2 = stoi(bb);
	large = num1 < num2 ? num2 : num1;
	cout << large << endl;
	return 0;
}
