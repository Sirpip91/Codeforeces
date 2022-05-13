#include <bits/stdc++.h>

using namespace std;

int main(){

	string dub;

	cin >> dub;

	int flag = 1;
	//this will increase by 1 until it finds a dub then increases by 3.
	//if it does not find a dub it will output the pointer until it does.
	for(int i = 0; i< dub.size(); i++)
	{
		//if we find a WUB
		if(dub[i] == 'W' && dub[i+1] =='U' &&dub[i+2] == 'B'){
			//skip the wub aka i+2 +1 = 3
			i+=2;
			//replace wub with space
			if(!flag){
				cout << " ";
			}
			//continue loop
			continue;
		}else
		{
			//if we dont find a wub flag and output current pointer and increase by 1
			flag =0;
			cout << dub[i];
		}
	}
	return 0;	
}
