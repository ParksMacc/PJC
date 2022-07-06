#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{	
	vector <string> sVec(1);
	vector <string> rVec(1);
	bool Pdrome;

	cin >> sVec[0];            //string input

	rVec = sVec;
	reverse(rVec[0].begin(), rVec[0].end()); //copy and reverse

	Pdrome = sVec == rVec;                 //palindrome check
	cout << Pdrome << endl;                //output

	return 0;
}