#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    int n = intervals.size() ;
    
    vector<vector<int>> ans ;

    sort(intervals.begin() , intervals.end() ) ;

    int start = intervals[0][0] ;  int end = intervals[0][1] ;

    for(int i = 1 ; i < n ; i++)
    {
        int newSt = intervals[i][0] ; int newEnd = intervals[i][1] ;

        if(newSt >= start && newSt <= end)
        {
            start = min(start ,newSt) ;  end = max(end , newEnd) ;
        }

        else
        {
            ans.push_back({start , end}) ;

            start = newSt ; end = newEnd ;
        }
    }

    ans.push_back({start , end}) ;

    return ans ;
}
/*