#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
 
	
	int t,a,b,c,d;
	// a is timur
	cin >>t;
	int count =0;
 
	for(int i =0; i<t; i++)
	{
		cin >> a >> b >> c >>d;
		
		if(b>a)
			count++;
		 if(c>a)
			count++;
		 if(d>a){
			count++;
		}
 
		cout << count <<endl;
		count =0;
 
	}
	
	return 0;
}
