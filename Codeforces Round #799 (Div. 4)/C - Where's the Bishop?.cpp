#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void solve()
{
	char g[9][9];
	for(int i =1; i<=8; i++)
	{
		for(int j = 1 ;j<=8; j++)
		{
			cin >> g[i][j];
		}
	}

	for(int i =2;i<=7;i++)
	{
		for(int j = 2;j<=7; j++)
		{	
			if(g[i][j] == '#' && g[i-1][j-1] == '#' &&	g[i-1][j+1] == '#' && g[i+1][j-1] == '#' && g[i+1][j+1] == '#')


			{
				cout << i << ' '<< j << '\n'; return;
			}
		}
	}

}



int main(){

		int t = 1;
		cin >> t;
		while(t--)
		{
			solve();
		}
	
}
