vector<vector<int>> threeSum(vector<int>& nums) {
         int n=nums.size();
vector<vector<int>> ans;
sort(nums.begin(),nums.end());
         for(int i=0;i<n-2;i++){
              
          if(i==0 ||( i>0 && nums[i]!=nums[i-1]))
           {  
               int first=i+1;
              int last=n-1;
              int sum=0-nums[i];

              while(first<last){
                   
                  if(nums[first]+nums[last]==sum){
                       vector<int> temp;
                      temp.push_back(nums[i]);
                      temp.push_back(nums[first]);
                      temp.push_back(nums[last]);
                      ans.push_back(temp);
                       while(first<last && nums[first]==nums[first+1])first++;
                            while(last>first && nums[last]==nums[last-1])last--;

                            first++;last--;
                  }else if(nums[first]+nums[last]<sum) first++;
                  else last--;

              }
              } 
         }
       return ans;
    }
