


#include<bits/stdc++.h>

static bool cmp(pair<int,int> a,pair<int,int> b){
    return (a.second<b.second);
}
int maximumActivities(vector<int> &start, vector<int> &finish) {
    // Write your code here.
    vector<pair<int,int>> v1;
    
    for(int i=0;i<start.size();i++){
        pair<int,int> p=make_pair(start[i],finish[i]);
        v1.push_back(p);
    }
    
    sort(v1.begin(),v1.end(),cmp);
    int temp=v1[0].second;
    int cnt=1;
    for(int i=1;i<v1.size();i++){
        if(v1[i].first>=temp){
            cnt++;
            temp=v1[i].second;
        }
    }
    return cnt;
}
