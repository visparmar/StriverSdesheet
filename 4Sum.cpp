class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
             if(nums.empty()) return ans;
             sort(nums.begin(),nums.end());
           for(int i=0;i<nums.size();i++){

                 for(int j=i+1;j<nums.size();j++){

                      long long int  target_2=(long long)target-(long long)nums[i]-(long long)nums[j];

                      int first=j+1;
                       int last=nums.size()-1;

                       while(first<last){
                           
                          if((nums[first]+nums[last])<target_2){
                            first++;
                          }else if((nums[first]+nums[last])>target_2){
                              last--;
                          }else{

                                 vector<int> vec(4,0);
                                vec[0]=nums[i];
                                vec[1]=nums[j];
                                vec[2]=nums[first];
                                vec[3]=nums[last];
                             ans.push_back(vec);

                                // checking duplicate element in between first and last pointer.....
                            while(first<last && nums[first]==vec[2])first++;
                            while(last>first && nums[last]==vec[3])last--;
                          }
                            
                          

                       }
                       // checking duplicate element for j.....
                         //..2 2 2 3 3...
                        while(j+1<nums.size() && nums[j]==nums[j+1])j++;

                 }
                        
                             // checking duplicate element for i.....
                         //2 2 2 3 3...
                        while(i+1<nums.size() && nums[i]==nums[i+1])i++;
           }
            
         
        return ans;
    }
};
