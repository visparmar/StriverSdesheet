#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    vector<int> ans;
    map<int,int> count;
    int n=arr.size();
    int check=floor(n/3);
    for(int i=0;i<arr.size();i++)
    {
        count[arr[i]]++;
    }

    for( auto &pr : count)
    {
        if(pr.second>check)
        {
            ans.push_back(pr.first);
            
        }
    }
    
    return ans;
    
}
