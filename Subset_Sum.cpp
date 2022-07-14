 void SubsetSum(int index,vector<int> &num,vector<int> &ans,int sum)
{
    if(index>=num.size())
    
    {
        ans.push_back(sum);
        return;
    }

    
    sum+=num[index];
    SubsetSum(index+1,num,ans,sum);
    sum-=num[index];
    SubsetSum(index+1,num,ans,sum);

}
vector<int> subsetSum(vector<int> &num)
{ vector<int> ans;
    SubsetSum(0,num,ans,0);
 sort(ans.begin(),ans.end());
  return ans;
}