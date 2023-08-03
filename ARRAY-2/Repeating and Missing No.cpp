#include <bits/stdc++.h>
using ll = long long int ;

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	ll N = n ;

	ll totalSum = (N * (N + 1) ) / 2 ;  ll currSum = 0 ;

	ll totalSqSum = (N * (N + 1) * (2 * N + 1) ) / 6 ;  ll currSqSum = 0 ;

	for(int i = 0 ; i < n ; i++)
	{
		ll val = arr[i] ;
		currSum += val ;
		currSqSum += (val * val) ;
	}

	ll missing , repeating ;

	ll valA = currSum - totalSum ;
	ll valB = (currSqSum - totalSqSum) / valA ;

	repeating = (valA + valB) / 2 ;
	missing = repeating - valA ;

	return { missing , repeating} ;
}
