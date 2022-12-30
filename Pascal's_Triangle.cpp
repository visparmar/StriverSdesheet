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

// another Method......


class Solution {
public:
    vector<vector<int>> generate(int numRows) {         
        vector<vector<int>> ans;
           for(int i=0;i<numRows;i++){
                   vector<int> temp;
                       for(int j=0;j<=i;j++){
          
                        if(j==0 || j==i){
                         temp.push_back(1);
                         }
                        else{
                        int sum=ans[i-1][j]+ans[i-1][j-1];
                        temp.push_back(sum);

                          }


                        }
                    ans.push_back(temp);
                         }
                     return ans;
        
                        }
};
