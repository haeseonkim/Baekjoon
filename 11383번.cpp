#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> v;


int main(void) {
	int M, N;
	cin >> N >> M;
	bool eyfa = true;
	v.resize(2*N);  
	
	for (int i = 0; i < 2 * N; i++)
		cin >> v[i];
	
	for (int i = 0; i < N; i++) {
		int k = 0;
		for (int j = 0; j < M; j++) {
			if (v[i][j] == v[i + N][j + k] && v[i][j] == v[i + N][j + k + 1]) {
				k++;
			}
			else {
				eyfa = false;
				break;
			}
		}
		if (!eyfa)
			break;
	}

	if (!eyfa)
		cout << "Not Eyfa" << endl;
	else
		cout << "Eyfa" << endl;

	return 0;
}
