#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void solve()
{
}//end of solve




int main()
{
  int n,k;

  cin >> n >> k;

	for(int i =0; i<k; i++)
	{
		if(n %10 != 0)
		{
			n--;
		}
		else
		{
			n /= 10;
		}	
	}

cout << n;	
   

    return 0;
}

