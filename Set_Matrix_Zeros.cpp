#include <bits/stdc++.h>
void setZeros(vector<vector<int>> &matrix)
{
	vector<vector<int>> temp;
    vector<int> v1(matrix[0].size());
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[0].size();j++)
        {
            v1[j]=matrix[i][j];
        }
        temp.push_back(v1);
    }

     for(int i=0;i<temp.size();i++)
    {
        for(int j=0;j<temp[0].size();j++)
        {
            if(temp[i][j]==0)
            {
                for(int k=0;k<matrix[i].size();k++)
                {
                    matrix[i][k]=0;
                }
                 for(int k=0;k<matrix.size();k++)
                {
                    matrix[k][j]=0;
                }


            }
            continue;
        }

    }

}
