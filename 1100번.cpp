#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void){
	char arr[8][8];
	int count = 0;
	
	for (int i = 0; i <= 7; i++) {
		for (int j = 0; j <= 7; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 'F') {
				if ((i + j) % 2 == 0 || (i + j) % 2 == 2) count++;
			}
		}
	}

	cout << count << endl;
	return 0;
}
