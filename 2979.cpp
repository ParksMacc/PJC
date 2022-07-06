#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main()
{
	vector <int> vecArr(100);
	vector <pair<int, int>> time(3);
	vector <int> vecFee(4);
	int num;
	int reached_time;
	int last_time;
	int value_out=0;
	int tsize;

	
	for (int i = 0; i < 3; i++) //fee input
	{
		cin >> num;
		vecFee[i+1] = num;
	}

	tsize = time.size();

	for (int i = 0; i < tsize; i++) //interval time input
	{
		cin >> reached_time >> last_time;
		time[i].first = reached_time;
		time[i].second = last_time;
	}
	
	for (int j = 0; j < tsize; j++) //interval time counting
	{
		for (int i = time[j].first; i < time[j].second; i++)
		{
			vecArr[i]++;
		}
	}

	for (int i = 0; i < vecArr.size(); i++) //price output
	{
		value_out += vecArr[i]*vecFee.at(vecArr[i]);
	}
	cout << value_out << endl;
	
	return 0;	
	//vecArr.push_back(make_pair(reached_time, last_time));
	//stable_sort(vecArr.begin(), vecArr.end());
	//cout << vecArr[0].first << vecArr[0].second;
}