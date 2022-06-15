int uniqueSubstrings(string input)
{
    vector<int> chara(26,-1); int ans=0;
    int left=0,right=0;
    for(int i=0;i<input.size();i++)
    {
        if(chara[input[i]-97]!=-1)
       {
            left=max(chara[input[i]-97]+1,left);
        }

        chara[input[i]-97]=i;
        ans=max(ans,i-left+1);

    }
    return ans;
}
