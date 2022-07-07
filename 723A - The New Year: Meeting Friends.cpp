#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main(void) {

	int x,y,z;


    cin >> x >> y >> z;

    int minimum = min({x,y,z});
    int maximum = max({x,y,z});

    int ans = minimum - maximum;

    cout << abs(ans);
return 0;
}
