#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;

	vector<vector<char>> v(26, vector<char>(0));	// 26개의 char elemnet를 만듬
	//알파벳의 코드를 사용하기 쉽게 char로 함


	for (int i = 0; i < N; i++) {
		string name;
		cin >> name;
		v[int(name[0] - 97)].push_back('a');
		//a는 코드 97, b는 코드 98
		//만약 name[0]이 a이면 v[int(0)]이되어 v[0]에 a가 들어가게된다.
	}


	//해당 알파벳으로 시작하는 선수들이 5명 이상인 경우
	string result;
	for (int i = 0; i < 26; i++) {
		if (v[i].size() >= 5)
			result += char(i + 97);
	}

	if (result.empty())
		cout << "PREDAJA" << endl;
	else
		cout << result << endl;

	return 0;
}
