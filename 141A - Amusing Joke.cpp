#include <bits/stdc++.h>

using namespace std;

int main(){

	
	//input threel ines 
	string gname;
	string hname;
	string pile;
	string no = "NO";
	string yes = "YES";

	
	//get inputs
	cin >> gname >> hname >> pile;

	//add the two names into one string s
	string  s = gname + hname;

	//sort the string s
	sort(s.begin(), s.end());
	//sort the pile.
	sort(pile.begin(), pile.end());

	//if the pile and the string are equal then yes
	if(s == pile)
		cout << yes << endl;
	else
		cout << no << endl;

	
	return 0;	
}
