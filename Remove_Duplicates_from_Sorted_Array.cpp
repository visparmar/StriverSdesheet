int removeDuplicates(vector<int> &arr, int n) {
    int count=1;
    int check=arr[0];
	for(int i=1;i<n;i++)
    {
        if(arr[i]!=check)
        {
            count++;
            check=arr[i];
        }
        
    }
    return count;
}
