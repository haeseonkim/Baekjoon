#include <iostream>
#include <string>
#include <vector>
using namespace std;

int arr[5];
vector<string> v;


int main(void) {
	int M, N;
	cin >> M >> N;

	v.resize(5 * M + 1);  
	
	for (int i = 0; i < 5 * M + 1; i++) 
		cin >> v[i];
	
	
	
	for (int i = 0; i < 5 * M + 1;i++) {	// 행
		bool window = false;
		for (int j = 0; j < v[i].size();j++) {	//열
			
			if (v[i][j] == '.') {
				window = true;
				arr[0]++;
				j += 3;
			}
			else if (v[i][j] == '*') {
				window = true;
				int k = 0;
				while (1) {		
					k++;
					if (v[i + k][j] != '*')
						break;
				}
				arr[k]++;
				
				j += 3;
			}
		}
		if (window) {
			i += 3;
		}
	}
	for (int i = 0; i < 5; i++){
		cout << arr[i]<<" ";
	}
	cout << endl;

	return 0;
}
