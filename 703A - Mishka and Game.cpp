#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void solve()
{
}//end of solve




int main()
{

int n;
int m,c;
int mcounter = 0;
int	ccounter = 0;
cin >>n;

for(int i =0 ;i<n; i++)
{
	cin >> m >>c;

	if(m<c)
		ccounter++;

	if(m>c)
		mcounter++;

}

if(mcounter == ccounter)
	cout << "Friendship is magic!^^"<<endl;
if(mcounter > ccounter)
	cout << "Mishka" <<endl;
if(mcounter < ccounter)
	cout << "Chris" << endl;

return 0;
}

