#include <bits/stdc++.h>
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
   int i=0;
 for(int i=0;i<m;i++)
 {

      arr2.push_back(arr1[i]);

  }
    sort(arr2.begin(),arr2.end());
    return arr2;


}
