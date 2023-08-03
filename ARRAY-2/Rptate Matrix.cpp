#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat , int m , int n)
{
    int val ;

    int startRow = 0 ;   int startCol = 0 ;
    int endRow = m - 1 ; int endCol = n - 1 ;

    while(startRow < endRow && startCol < endCol)
    {
        val = mat[startRow][startCol] ;
        
        for(int index = startCol + 1 ; index <= endCol ; index++)
        {
            int temp = mat[startRow][index] ; mat[startRow][index] = val ; val = temp ;
        }

        startRow++ ;

        for(int index = startRow ; index <= endRow ; index++)
        {
            int temp = mat[index][endCol] ; mat[index][endCol] = val ; val = temp ; 

        }

        endCol-- ;

        for(int index = endCol ; index >= startCol ; index--)
        {   
            int temp = mat[endRow][index] ;  mat[endRow][index] = val ; val = temp ; 
    
        }

        endRow-- ;

        for(int index = endRow ; index >= startRow ; index--)
        {

            int temp = mat[index][startCol] ; mat[index][startCol] = val ; val = temp ; 

        }

        startCol++ ;  mat[startRow - 1][startCol - 1] = val ;
    }   
    
    return ;
}
