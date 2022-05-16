#include <bits/stdc++.h>

using namespace std;

int main(){
	

	int n;
	cin >> n;
	int ans = 0;
	//1 5 10 20 100

	//array of dollars to use
	int a [] = {100,20,10,5,1};
	
	//while we still have dolllars
	for(int i = 0; i<5; i++)
	{
		//ans = ans + number/dollar pointer
		//how many 100's 50's... go into number
		ans += n/a[i];
		//n = remainder of number / pointer.
		n = n%a[i];
		//go down a bill
	}	

	//cout how many bills used.
	cout << ans << endl;
	return 0;	
}
