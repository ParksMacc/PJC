#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	string str;
	map<char, int>mapArr;

	int len_str;
	int mod2=0, pmod=0;
	int cidx = 0;

	cin >> str;
	sort(str.begin(), str.end());
	len_str = str.size();

	
	for (int i = 0; i < len_str; i++)
	{
		mapArr[str[i]]++;
	}
	
	vector<char>vecChar(len_str);
	vector<char>vecChar2(mapArr.size());

	mod2 = len_str % 2;
	int k = 0;
	for (auto c : mapArr)
	{
		vecChar2[k] = c.first;
		pmod += c.second % 2;
		
		if (c.second % 2 == 1)
		{
			cidx = k;
		}
		k++;
	}

	int q = 0;
	if ((mod2==0)&&(pmod)==0)
	{
		for (auto c : mapArr)
		{
			for (int i = q; i < (c.second / 2)+q; i++)
			{
				vecChar[i] = c.first;
				vecChar[len_str - i - 1] = c.first;
			}
			q += c.second / 2;
		}
		for (int z = 0; z < len_str; z++)
		{
			cout << vecChar[z];
		}
	}
	else if((mod2 == 1) && (pmod == 1))
	{
		for (auto c : mapArr)
		{
			for (int i = q; i < (c.second / 2)+q; i++)
			{
				vecChar[i] = c.first;
				vecChar[len_str - i-1] = c.first;
			}
			q += c.second / 2;
		}
		vecChar[len_str / 2] = vecChar2[cidx];

		for (int z = 0; z < len_str; z++)
		{
			cout << vecChar[z];
		}
	}
	else
	{
		cout << "I'm Sorry Hansoo";
	}
	cout << "\n";

	return 0;
}