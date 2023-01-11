
#include<bits/stdc++.h>
string longestCommonPrefix(vector<string> &arr, int n)
{
    sort(arr.begin(),arr.end());
    
    int k=arr[0].size();
    string str=arr[0];
    string str2=arr[n-1];
    string ans;
    for(int i=0;i<k;i++){
        if(str[i]==str2[i]){
            ans.push_back(str[i]);
        }else{
            break;
        }
    }
    return ans;
}


