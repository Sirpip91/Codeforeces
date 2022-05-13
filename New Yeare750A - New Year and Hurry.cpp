#include <bits/stdc++.h>

using namespace std;

int main(){

	int n,k;
	int sum;
	int res;
	int c;
	cin >> n >>k;
	// n problems.
	// k minuts to get to party.
	// //
	res = 240-k;
	sum =0;
	c = 0;

	for(int i =1 ; i<=n; i++)
	{
		sum += 5*i;

		if(sum>res)
			break;

	 c = c+1;
	}

	cout << c << endl;
	

	return 0;	
}
