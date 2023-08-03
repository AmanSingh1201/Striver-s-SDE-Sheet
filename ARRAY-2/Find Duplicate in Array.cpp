#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n)
{
	vector<int> visited(n , 0) ;

	for(int i = 0 ; i < n ; i++)  visited[arr[i]] += 1 ;

	for(int i = 1 ; i < n ; i++)
	{
		if(visited[i] > 1)  return i ;
	}

	return 0 ;
}