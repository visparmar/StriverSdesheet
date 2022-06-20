vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<int> v1;
    vector<vector<int>> v2;

    for(int i=0;i<arr.size();i++)
    {
        for(int j=i+1;j<arr.size();j++)
        {
            v1.clear();
            if((arr[i]+arr[j])==s)
            {
                v1.push_back(arr[i]);
                v1.push_back(arr[j]);
                sort(v1.begin(),v1.end());
                v2.push_back(v1);
            }

        }

    }
    sort(v2.begin(),v2.end());
    return v2;
}
