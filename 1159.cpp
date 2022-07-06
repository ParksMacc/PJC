#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<string> name(150);
	vector<int> number(26);
	vector<char> alpha(26);

	int gsig = 0;
	int N;
	
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> name[i];
	}

	for (int i = 0; i < N; i++)
	{
		number[name[i][0] - 'a']++;
	}

	for (int i = 0; i < number.size(); i++)
	{
		if (number[i] >= 5)
		{
			alpha[gsig] = i + 'a';
			gsig++;
		}
	}

	if (gsig == 0)
	{
		cout << "PREDAJA";
	}
	else
	{
		for (int i = 0; i < gsig; i++)
		{
			cout << alpha[i];

		}
	}
	return 0;
}