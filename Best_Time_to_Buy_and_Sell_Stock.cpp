int maximumProfit(vector<int> &prices){
    int min=INT_MAX;int ans=0;
    for(int i=0;i<prices.size();i++)
    {
        if(prices[i]<min)
        {
            min=prices[i];
        }

        if((prices[i]-min) >ans)
        {
            ans=prices[i]-min;
        }
    }

    return ans;
}
