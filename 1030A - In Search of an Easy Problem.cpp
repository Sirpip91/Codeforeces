#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void solve()
{
}//end of solve




int main()
{
 
	vector<int>v;

 	int n;
	int count = 0;
   cin >> n;
	
   for(int i =0; i<n; i++)
	{
		int a;
		cin >> a;
		if(a == 1){
			cout << "HARD" <<endl;	
			count++;	
			break;
		}
		
	}

   if(count == 0)
	   cout << "EASY" <<endl;

   
   

    return 0;
}

