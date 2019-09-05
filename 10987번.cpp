#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int count = 0;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
			count++;
	}
	cout << count << endl;
	return 0;
}
