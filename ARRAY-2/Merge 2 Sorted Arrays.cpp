#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) 
{
	int i = m - 1 ,  j = n - 1 , k = (m + n - 1) ;

	while(i >= 0 && j >= 0)
	{
		if(arr1[i] < arr2[j])
		{
			arr1[k] = arr2[j] ; k-- ; j-- ;
		}

		else  
		{
			arr1[k] = arr1[i] ; k-- ; i-- ;
		}
	}

	for(; i >= 0 ; i--)  arr1[k--] = arr1[i] ;
	
	for(; j >= 0 ; j--)  arr1[k--] = arr2[j] ;

	return arr1 ;  
}