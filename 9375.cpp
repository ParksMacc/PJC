#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <set>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, M, K;
	
	string tmp, kind;

	cin >> N;

	for (int i = 0; i < N; i++)
	{	map <string, int> mapArr;
		cin >> M;
		for (int j = 0; j < M; j++)
		{
			cin >> tmp >> kind;
			mapArr[kind]++;
		}
		long long ret = 1;
		for (auto c : mapArr)
		{
			ret *= ((long long)c.second + 1);
		}
		ret--;
		cout << ret << "\n";

	}
	return 0;
}