#include <iostream>
#include <algorithm>
#include <vector>
#include <string>


using namespace std;

int main()
{
	vector<string> plain(1);
	vector<string> cyper(1);
	int psize;

	getline(cin, plain[0]);   //only one line func
	
	psize = size(plain[0]);   //string size

	cyper = plain;            //copy

	for (int i = 0; i < psize; i++) // ROT 13
	{
		if ((plain[0][i] >= 'A') && (plain[0][i] <= 'M'))
			cyper[0][i] += 13;
		else if ((plain[0][i] >= 'N') && (plain[0][i] <= 'Z'))
			cyper[0][i] -= 13;
		else if ((plain[0][i] >= 'a') && (plain[0][i] <= 'm'))
			cyper[0][i] += 13;
		else if ((plain[0][i] >= 'n') && (plain[0][i] <= 'z'))
			cyper[0][i] -= 13;
	}

	cout << cyper[0] << endl; // output

	return 0;
}