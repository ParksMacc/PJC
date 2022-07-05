#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> hist_alpha(26);
	vector<int> S_int(100);
	string S;
	int S_len;
	

	cin >> S;

	S_len = size(S);
	
	for (int i = 0; i < S_len; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if ((int(S[i]) - 97) == j)
			{
				hist_alpha[j] += 1;
			}
		}
	}

	for (int i = 0; i < 26; i++)
	{
		cout << hist_alpha[i] << " ";
	}
	cout << endl;

	return 0;
}