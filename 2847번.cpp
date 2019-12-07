#include <iostream>
#include <vector>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	
	vector<int> v;

	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}

	int minus = 0;
	for (int i = N - 1; i > 0; i--) {
		if (v[i] <= v[i - 1]) {
			minus = minus + (v[i - 1] - v[i] + 1);
			v[i - 1] = v[i - 1] - (v[i - 1] - v[i] + 1);
		}
	}

	cout << minus << endl;

	return 0;
}
