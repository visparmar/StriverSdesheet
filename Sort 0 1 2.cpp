#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
    int low=0,mid=0,high=n-1;
    
    while(mid<=high)
    {
        if(arr[mid]==1)
        {
            mid++;
        }
       else if(arr[mid]==2)
        {
            swap(arr[mid],arr[high]);
            high--;
        }
        else
        {
            swap(arr[mid],arr[low]);
            mid++;low++;
        }
        
    }
   
}
