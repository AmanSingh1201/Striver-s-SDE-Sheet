#include <bits/stdc++.h> 

int maximumProfit(vector<int> &prices)
{
    int n = prices.size() ;
    
    int costPrice = prices[0] ;
    
    int maxProfit = 0 ;

    for(int i = 1 ; i < n ; i++)
    {
        if(costPrice <= prices[i] )  maxProfit = max(maxProfit , prices[i] - costPrice) ;

        else  costPrice = prices[i] ;
    }

    return maxProfit ;
}