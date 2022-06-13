#include <bits/stdc++.h>


vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
   vector<vector<int>> ans;
    if(intervals.size()==0) return ans;
    else
    {
        sort(intervals.begin(),intervals.end());
        vector<int> temp=intervals[0];
        for(int i=0;i<intervals.size();i++)
        {
            if(intervals[i][0]>temp[1])
            {
                ans.push_back(temp);
                temp=intervals[i];
            }
            else
            {
                temp[1]=max(temp[1],intervals[i][1]);
            }
        }


        ans.push_back(temp);
    }
    return ans;
}
