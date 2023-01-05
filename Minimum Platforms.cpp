 ******************************TC-> O(NlogN) SC-> O(1)************************************
 
 int findPlatform(int arr[], int dep[], int n)
    {
       sort(arr,arr+n);
       sort(dep,dep+n);
       
       int man=0;
       int cnt=0;
       int i=0,j=0;
       
       while(i<n){
           
           if(arr[i]<=dep[j]){
               cnt++;i++;
               man=max(cnt,man);
           }else{
               cnt--;
               j++;
           }
           
           
           
       }
       
      
        
        return man;
            
    }
    
    *********************** TC-> O(NlogN) SC-> O(N)*************************
    
    int findPlatform(int arr[], int dep[], int n)
    {
       vector<pair<int,char>> v1;
       
       for(int i=0;i<n;i++){
           pair<int,char> ar=make_pair(arr[i],'A');
           v1.push_back(ar);
           pair<int,char> dr=make_pair(dep[i],'D');
           v1.push_back(dr);
       }
        
        sort(v1.begin(),v1.end());
        
        int cnt=0,man=0;
        for(int i=0;i<v1.size();i++){
            
            if(v1[i].second=='A') cnt++;
            else cnt--;
            
            
            if(cnt>man){
                man=cnt;
            }
            
        }
        
      
        
        return man;
            
    }
