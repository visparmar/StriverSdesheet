#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector < int > arr) {

    map<int,int> mp;
    int sum=0;
    int maxu=0;
    for(int i=0;i<arr.size();i++)
    {
        sum+=arr[i];
        
        if(sum==0)
        {
            maxu=i+1;
        }
        else
        {
            if(mp.find(sum)!=mp.end())
            {
                maxu=max(maxu,i-mp[sum]);
            }
            else
                 mp[sum]=i;
        }
       
        
    }
  return maxu;

}
