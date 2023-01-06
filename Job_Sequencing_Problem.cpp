

class Solution 
{
    public:
    static bool cmp(Job a,Job b){
        return (a.profit>b.profit);
    }
    
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        
        sort(arr,arr+n,cmp);
        
        int maxi=0;
        for(int i=0;i<n;i++){
            maxi=max(maxi,arr[i].dead);
        }
        vector<int> dad(maxi+1,-1);
        
        
        int cnt=0,maxSum=0;
        for(int i=0;i<n;i++){
            
            for(int j=arr[i].dead;j>0;j--){
                
                if(dad[j]==-1){
                    dad[j]=i;
                    cnt++;
                    maxSum+=arr[i].profit;
                    break;
                }
            }
            
            
            
        }
        
        return {cnt,maxSum};
        
    } 
};
