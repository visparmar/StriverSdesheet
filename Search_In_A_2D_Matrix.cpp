#include <bits/stdc++.h>


bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    int i=0,j=n-1;

    while(i<m && j>=0 )
    {
        if(mat[i][j]==target) return true;
        else
        {
            if(mat[i][j]<target)
            {
                i++;
            }
            else
            {
                j--;
            }

       }
    }
    return false;
}
