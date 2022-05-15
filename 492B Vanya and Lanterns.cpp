#include <bits/stdc++.h>

using namespace std;

int main(){


	int n,l;

	cin >> n >> l;

	int arr[n];

	for(int i =0 ;i<n;i++)
	{
		//fill array full of lamps.
		 cin>> arr[i];
	}
	//sort the array of lamps
	sort(arr,arr+n);
	
	// distance is 2 times the largest number in arr
	int d = 2 * max(arr[0],1-arr[n-1]);
	
	//for the entire array
	for(int i = 1;i<n;i++)
	{
		// distance = max distance of all lamps
		// get the largest light distance
		d = max(d,(arr[i]-arr[i-1]));
	}
	//output largest d / 2 with fixed point double
	cout <<fixed<<setprecision(9)<<(double) d/2;
	
	return 0;	
}
