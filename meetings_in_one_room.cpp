GFG....................meetings_in_one_room..............................................
  
   static bool sortbysec( pair<int,int> a, pair<int,int> b){
        return (a.second < b.second);
        
    }
    
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>> container;
        
        for(int i=0;i<n;i++){
            pair<int,int> p=make_pair(start[i],end[i]);
            container.push_back(p);
        }
        
        sort(container.begin(),container.end(), sortbysec);
        
        int cnt=1;
        
        int fst=container[0].second;
        
        
        for(int i=1;i<container.size();i++){
            if(container[i].first>fst){
                cnt++;
                fst=container[i].second;
            }
        }
        
        return cnt;
        
    }

Code_studio............................Maximum meetings........................Coding Ninja...
  
  #include <bits/stdc++.h> 
struct Meeting
{
    int start;
    int end;
    int pos;
};
static bool compare(Meeting m1, Meeting m2)
{
    if(m1.end < m2.end) return true;
    else if(m1.end > m2.end) return false;
    else if(m1.pos < m2.pos) return true;
    else return false;
}
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    int n = start.size();
    Meeting arr[n];
    for(int i = 0; i < n; i++)
    {
        arr[i].start = start[i];
        arr[i].end = end[i];
        arr[i].pos = i+1;
    }
    sort(arr, arr+n, compare);
    
    vector<int> ans;
    ans.push_back(arr[0].pos);
    int temp = arr[0].end;
    for(int i = 1; i < n; i++)
    {
        if(arr[i].start > temp)
        {
            ans.push_back(arr[i].pos);
            temp = arr[i].end;
        }
    }
    return ans;
}
  
  
  
