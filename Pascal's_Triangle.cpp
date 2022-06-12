#include <bits/stdc++.h>
vector<vector<long long int>> printPascal(int n)
{
  vector<vector<long long>> tri(n);

    for(int i=0;i<n;i++)
    {
        tri[i].resize(i+1);
        tri[i][0]=tri[i][i]=1;



        for(int j=1;j<i;j++)
        {
            tri[i][j]=tri[i-1][j-1]+tri[i-1][j];
        }

    }

   return tri;

}
