#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N,M;
	int cnt = 0;

	cin >> N;
	cin >> M;
	vector <int> uniNum(N);


	for (int i = 0; i < N; i++)
	{
		cin >> uniNum[i];
	}
	sort(uniNum.begin(), uniNum.end());
	
	if (M > 200000) cout << 0 << "\n";
	else 
	{
		for (int i = 0; i < N; i++)
		{
			for (int j = i + 1; j < N; j++)
			{
				if (uniNum[i] + uniNum[j] == M)
				{
					cnt++;
				}
			}
		}
		cout << cnt << "\n";
	}
	return 0;
}