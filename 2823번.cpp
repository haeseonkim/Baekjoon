#include <iostream>
#include <vector>
#include <string>
using namespace std;

int R, C;
vector<string> v;

typedef struct {
	int y, x;
}Dir;

Dir moveDir[4] = { {1,0},{-1,0},{0,1},{0,-1} };

int noUturn() {
	bool cycle = false;
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			if (v[i][j] == 'X')
				continue;
			int openPath = 0;
			for (int k = 0; k < 4; k++) {
				int nextY = i + moveDir[k].y;	//다음행
				int nextX = j + moveDir[k].x;	//다음열

				if (0 <= nextY && nextY < R && 0 <= nextX && nextX < C)	
					//다음번째 길이 유효한 자리일때
					if (v[nextY][nextX] == '.')
						openPath++;	
			}

			if (openPath <= 1) {	// 뚫린길이 하나이하 일 경우 (= 막다른 길일 경우)
				cycle = true;
				break;	// 막다른 길을 발견했으니 나머지 볼 필요 없이 반복문을 나감
			}
		}
	}

	return cycle ? 1 : 0;	//막다른 길이 있으면 1 아니면 0을 리턴
}


int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> R >> C;
	
	v.resize(R);

	for (int i = 0; i < R; i++) {
		cin >> v[i];
	}

	cout << noUturn() << endl;

	return 0;
}
