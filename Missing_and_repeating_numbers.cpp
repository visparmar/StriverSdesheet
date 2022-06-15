pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    long long arrSum=0,rep=0,totalSum=0,miss=0;
	sort(arr.begin(),arr.end());

    for(int i=0;i<n-1;i++)
    {
        arrSum+=arr[i];
        if(arr[i]==arr[i+1])
        {
            rep=arr[i];
            continue;
        }

    }
    arrSum=arrSum+arr[n-1];
	totalSum=(n*(n+1))/2;
    miss=abs(totalSum-(arrSum-rep));

    return {miss,rep};

}
