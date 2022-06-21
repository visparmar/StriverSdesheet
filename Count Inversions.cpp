#include <bits/stdc++.h> 
long long inversion=0;
void mergee(long long  *arr,long long  lb,long long  mid,long long  ub)
{
   

   long long  a1=mid-lb+1;
   long long  a2=ub-mid;

   long long  a[a1],b[a2];

    for(int i=0;i<a1;i++)
    {
        a[i]=arr[lb+i];
       

    }

    for(int j=0;j<a2;j++)
    {
        b[j]=arr[mid+1+j];
       

    }

    int i=0,j=0,k=lb;

    while(i<a1 && j<a2)
    {
        if(a[i]<=b[j])
        {
            arr[k]=a[i];
           i++;
        }
        else
        {
            inversion+=a1-i;
            arr[k]=b[j];
           j++;
        }
             k++;
    }


    while(i<a1)
    {
        arr[k]=a[i];
        k++;i++;

    }
    while(j<a2)
    {
        arr[k]=b[j];
        k++;j++;

    }

}

void mergeSort(long long *arr,long long lb,long long  ub)
{
if(lb<ub)
{
int mid=(lb+ub)/2;
mergeSort(arr,lb,mid);
mergeSort(arr,mid+1,ub);
mergee(arr,lb,mid,ub);
}
}



long long getInversions(long long *arr, int n){
    mergeSort(arr,0,n-1);
    
    return inversion;
    
}