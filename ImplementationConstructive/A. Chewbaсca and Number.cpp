#include <bits/stdc++.h>

using namespace std;

int main(){

	 
	string s;

	cin >> s;

	//cant start at 0
	for(int i =0; i<s.size();i++)
	{
		if(s[i] == '9' && i == 0)
		{
			continue;
		}

		if(s[i] > '4')
		{
			s[i] = '9' - s[i] + '0';
		}
	}

	cout << s << endl;


	return 0;	
}
