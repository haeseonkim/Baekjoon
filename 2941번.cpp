#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string word) {
	int count = 0;
	for (int i = 0; i < word.size(); i++) {
		if (word[i] == 'c') {
			if (word[i + 1] == '=' || word[i + 1] == '-')
				i++;
		}
		else if (word[i] == 'd') {
			if (word[i + 1] == 'z'&& word[i + 2] == '=') {
				i++;
				i++;
			}
			else if (word[i + 1] == '-')
				i++;
		}
		else if (word[i] == 'l'&&word[i + 1] == 'j')
			i++;
		else if (word[i] == 'n'&& word[i + 1] == 'j')
			i++;
		else if (word[i] == 's' && word[i + 1] == '=')
			i++;
		else if (word[i] == 'z' && word[i + 1] == '=')
			i++;
		count++;
	}
	return count;
}

int main(void){
	string word;
	cin >> word;
	
	int result;
	result = solution(word);

	cout << result;
	return 0;
}
