#include <iostream>
using namespace std;

class star {
private:
	int n;
public:
	star(int n) :n(n) {}	//입력받은 n을 멤버변수 n에 넣겠다.
	
	void callDraw() {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				draw(i, j);
			}
			cout << endl;
		}
	}
	void draw(int di, int dj) {
		while (di != 0) {
			if (di % 3 == 1 && dj % 3 == 1) {
				cout << " ";
				return;
			}
			di /= 3;	// 3의 배수로 나누었을 때 몫이 1이면 
			dj /= 3;	// 몫인 1을 3으로 나눈 나머지도 1이기 때문에 while문 안에서 판별 가능.
						// 이는 여러개의 if문 사용을 줄임.
						// di,dj를 3으로 나눈 나머지의 값이 1이 아닐때 
						// di,dj를 3으로 나누었을 때의 몫으로 값을 바꿔주는 과정이 꼭 필요.
						// ex) 3의 제곱승일 경우 몫이 1이 될때까지 계속 돌게됨 
		}
		cout << "*";
	}
};




int main() {
	int n;
	cin >> n;
	star *s = new star(n);	//생성자함수로 만들어지는 객체의 포인터 선언.
	s->callDraw();
	delete s;
	return 0;
}
