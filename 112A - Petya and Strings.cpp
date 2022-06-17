#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void solve()
{
}



int main(){
	
	string one, two;
	cin>> one >> two;
	int count;


	for(int i =0 ;i<one.size();i++)
	{
		one[i] = tolower(one[i]);
		two[i] = tolower(two[i]);

	}

	if(one == two)
	{
		cout << 0 << endl;
	}
	if(one < two)
		cout << -1 << endl;
	if(two <one)
		cout << 1 << endl;
	}

			

