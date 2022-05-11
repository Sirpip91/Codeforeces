//Codeforces Round #629 (Div. 3) Divisibility problem
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	
	int a = 0 ;
	int b = 0 ;
	
	//10%4 = 2 which is not 0, thus increase 10 to 11 and try again until =0
int cnt = 0;
int n;
cin>>n;
for(int i = 0; i<n; i++){
	cin >> a >> b;

	if(a % b ==0)
	{
		cout << 0 << endl;
	}
	else 
	{
		cnt = a %b;
		cout << b - cnt << endl;
	}
}
}
