

class Solution {
public:
       
        void cs(int index,vector<int>& candidates,vector<vector<int>>& ans,int target,vector<int> ds){

            if(index==candidates.size()){
                if(target==0){
                    ans.push_back(ds);
                }
                return;
            }

             if(candidates[index]<=target){
            ds.push_back(candidates[index]);
            cs(index,candidates,ans,target-candidates[index],ds);
            ds.pop_back();
             }

            cs(index+1,candidates,ans,target,ds);


        }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        cs(0,candidates,ans,target,ds);
        return ans;
        
    }
};
