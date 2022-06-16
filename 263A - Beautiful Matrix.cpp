#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void solve()
{
}



int main(){
	
	int matrix[5][5];
	int ans = 0;
	int row = 0, col = 0;
	//get matrix
	for(int i =1;i<6;i++)
		{
			for(int j = 1; j<6; j++)
			{
				cin >> matrix[i][j];
			}
		}
	//i is row    j is col
	for(int i =1; i<6;i++)
	{
		for(int j =1;j<6; j++)
		{
				//matrix[3][3] is center
				//matrix[5][5]
                //       2  2
		if(matrix[i][j] == 1)
		{
			if(i>=3)
			{
				row = i-3;
			}else
				row = 3-i;

			if(j>=3)
			{
				col = j-3;
			}
			else
				col = 3-j;

			ans = col+row;
		}


		}
	}

	cout <<ans << endl;

}

			

