#include <iostream>
#include <algorithm>
#include <vector>
#include <string>


using namespace std;

int main()
{
	int N, pos;
	string s, ori_s, pre, suf;     //declare
	
	cin >> N;
	cin >> ori_s;                  //pattern input
	pos = ori_s.find('*');
	pre = ori_s.substr(0, pos);    //pre pattern cut
	suf = ori_s.substr(pos + 1);   //post pattern cut
	
	for (int i = 0; i < N; i++)
	{
		cin >> s;
		if (pre.size() + suf.size() > s.size())  //size check
		{
			cout << "NE" << endl;
		}
		else
		{
			if (pre == s.substr(0, pre.size()) && suf == s.substr(s.size() - suf.size())) // pre pattern, post pattern check
			{
				cout << "DA" << endl;
			}
			else
			{
				cout << "NE" << endl;
			}
		}
	}

	return 0;
}