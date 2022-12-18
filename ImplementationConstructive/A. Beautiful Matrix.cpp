#include <bits/stdc++.h>

using namespace std;

int main(){
	
//rows are i
//col are j
//



	int arr[5][5];

	for(int i=0; i<5;i++)
	{
		for(int j = 0; j<5;j++)
		{
			cin >> arr[i][j];
		}
	}
	int row =0, col=0;
	int ans =0;
	for(int i=0; i<5;i++)
	{
		for(int j = 0; j<5;j++)
		{
			if(arr[i][j] == 1)
			{
				row = abs(2-i);
				col = abs(2-j);
				ans = row+col;
				break;
			}
		}
	}

	cout << ans << endl;

	



	return 0;	
}
