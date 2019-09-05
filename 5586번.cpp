#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int joi = 0;
	int ioi = 0;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'J'&& s[i + 1] == 'O'&&s[i + 2] == 'I')
			joi++;
		if (s[i] == 'I'&& s[i + 1] == 'O'&&s[i + 2] == 'I')
			ioi++;
	}
	cout << joi << endl;
	cout << ioi << endl;
	return 0;
}
