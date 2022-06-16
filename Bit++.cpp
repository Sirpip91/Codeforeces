#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void solve()
{
}



int main(){

	int n;
	int ans =0;
	cin >> n;

	for(int i =0; i<n; i++){

	string in;
	cin >> in;
	if(in[1] == '+')
	{
		ans++;
	}
	else
		ans--;
	}
	cout << ans;
}

			

