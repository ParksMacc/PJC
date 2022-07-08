#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int main()
{
	int N, K;
	int ret = -10000004;
	int temp;

	cin >> N >> K;
		
	vector<int> sumTemp(N+1);

	for (int i = 1; i < N+1; i++)
	{
		cin >> temp;
		sumTemp[i] = sumTemp[i-1] + temp;
	}

	for (int i = K; i < N + 1; i++)
	{
		ret = max(ret, sumTemp[i] - sumTemp[i - K]);
	}
	cout << ret << endl;

	return 0;
}