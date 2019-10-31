#include <iostream>
#include <string>

using namespace std;

string s, t;

int main(void)

{
	ios_base::sync_with_stdio(0);

	cin.tie(0); 

	getline(cin, s);
	getline(cin, t);

	int result = 0;

	for (int i = 0; i < s.size() - t.size() + 1; i++)
	{
		bool same = true;

		for (int j = 0; j < t.size(); j++)

			if (s[i + j] != t[j])
			{
				same = false;
				break;
			}

		if (same)
		{
			result++;
			i += t.size() - 1;
		}
	}
	cout << result << "\n";

	return 0;
}
