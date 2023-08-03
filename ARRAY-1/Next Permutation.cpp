#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    // 1. TO FIND the BreakPoint
    
    int ind = -1 ;

    for(int i = n - 2 ; i >= 0 ; i--)
    {
        if(permutation[i] < permutation[i + 1])
        {
            ind = i ; break ;
        }
    }

    // 2. If we didn't find any BreakPoint, Then it simply means we are at the Lexicographically Largest Permutation
    // We should just reverse the given vector and return ;

    if(ind == -1) 
    {
        reverse(permutation.begin() , permutation.end() ) ;  
        
        return permutation ;
    }

    // 3. We need to swap the first largest element greater than BreakPoint Element and swap their places

    for(int i = n - 1 ; i > ind ; i--)
    {
        if(permutation[i] > permutation[ind])
        {
            swap(permutation[i] , permutation[ind] ) ;  break ;
        }
    }

    // 4. Lastly, we need to reverse the remaining part of the array so that it becomes smallest from (ind + 1 , n]

    reverse(permutation.begin() + ind + 1 , permutation.end() ) ;

    return permutation ;

}