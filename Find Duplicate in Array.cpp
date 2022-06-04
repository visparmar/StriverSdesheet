#include <bits/stdc++.h>
int findDuplicate(vector<int> &arr, int n){
    int countarr[n]={0};

    for(int i=0;i<n;i++)
    {
        countarr[arr[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(countarr[i]>1)
            return i;

    }


}
