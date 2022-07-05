#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> small_man(9);
		
	int sum=0;
	int exceed;
	int fidx, sidx;

	for (int idx = 0; idx < 9; idx++)
	{
		cin >> small_man[idx];
		sum += small_man[idx];
	}
	
	sort(small_man.begin(), small_man.end());

	exceed = sum - 100;
	
	for (int i = 8; i != 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (exceed == (small_man[i] + small_man[j]))
			{				
				fidx = i;
				sidx = j;
			}
		}
	}
	small_man.erase(small_man.begin()+fidx);
	small_man.erase(small_man.begin()+sidx);

	for (int idx = 0; idx < 7; idx++)
	{
		cout << small_man[idx] << endl;
	}

}