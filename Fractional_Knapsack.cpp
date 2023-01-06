#include <bits/stdc++.h> 

   static bool cmp(pair<int,int> a,pair<int,int> b){
          double r1 = (double) a.second/(double) a.first;
         double r2 = (double) b.second /(double) b.first;
         return r1 > r2;
   }
   
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    sort(items.begin(),items.end(),cmp);
    
    double val=0.0;
    for(int i=0;i<n;i++){
        if(w>=items[i].first){
            w=w-items[i].first;
            val+=items[i].second;
        }else{
            val+=((double)items[i].second/(double)items[i].first) * (double)w;
            break;
        }
        
        
    }
    
    return val;
}
