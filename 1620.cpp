#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, M;
	
	string dogam;
	string idx;
	map<string, string> mapArr1;
	
	cin >> N >> M;
	vector<string> test(M);

	for (int i = 0; i < N; i++)
	{
		cin >> dogam;
		idx = to_string(i + 1);
		mapArr1.insert({ dogam,idx });
		mapArr1.insert({ idx, dogam });
	}

	
	for (int i = 0; i < M; i++)
	{
		string tmp;
		cin >> tmp;
		test[i] =  mapArr1[tmp];
	}		

	for (int i = 0; i < M; i++)
	{
		cout << test[i] << "\n";
	}

	return 0;

}