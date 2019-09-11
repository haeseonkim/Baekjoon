#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void) {
	string s;
	cin >> s;
	int count[26];

	for (int i = 'a'; i <= 'z'; i++) {
		for (int j = 0; j < s.size(); j++) {
			if (s[j] == i) {
				count[i] = j;
				break;
			}
			else {
				count[i] = -1;
			}
		}

		cout << count[i] << " ";
	}
	
	return 0;
}
