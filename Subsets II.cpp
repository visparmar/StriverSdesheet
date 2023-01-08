
class Solution {
public:

void sud(int index , vector<int> nums,set<vector<int>>& ans,vector<int> temp){

   if(index==nums.size()){
      sort(temp.begin(),temp.end());
       ans.insert(temp);
       return;
   }

   temp.push_back(nums[index]);
   sud(index+1,nums,ans,temp);
   temp.pop_back();
   sud(index+1,nums,ans,temp);

}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> res;
        vector<int>temp;
        sud(0,nums,res,temp);
        for(auto it:res){
            ans.push_back(it);

        }
        return ans;
    }
};
