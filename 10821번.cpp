#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int count = 0;
	cin >> s;
	if (s.size() > 100)
		return -1;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ',')
			count++;
	}
	cout << count + 1 << endl;;
	return 0;
}
