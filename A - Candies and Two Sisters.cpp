#include <bits/stdc++.h>

using namespace std;

int main(){


	int t;
	int n;
	int a,b;
	cin >> t;

	for(int i =0; i<t; i++)
	{
		cin >> n;
		a = (n/2)+1;
		b = n-a;
		// 3/2+1 = 2      3-2 = 1
		// 2/2   = 2      2-2 = 0
		// 1/1     2      1-2
		if(a<b)
			cout << 0 << endl;
		else
			cout << b << endl;
	}	
	return 0;	
}
