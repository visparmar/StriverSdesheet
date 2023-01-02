// Bruteforce approach.....TC=O(NlogN)


 int longestConsecutive(vector<int>& arr) {
          int n = arr.size(); // extract the size of array
        if(n == 0) return 0; // if length of array is zero, then from here simply return 0
        
        sort(arr.begin(), arr.end()); // sort the array
        
        int mxLen = 0, currLen = 1; // put mxLen = 0, and currLen as 1
        
        for(int i = 1; i < n; i++) // traverse from the array
        {
            if(arr[i] == arr[i - 1] + 1) // this is the part of consecutive sequence
            {
                currLen++; // increase the curr Length by 1
            }
            else if(arr[i] != arr[i - 1]) // but if it is not equal
            {
                mxLen = max(mxLen, currLen); // update our mxLen 
                currLen = 1; // and reset the currLen with 1
            }
            // And if arr[i] == arr[i - 1]
            else{
                continue;
            }
        }
        
        mxLen = max(mxLen, currLen); // update our mxLen 
        return mxLen; // Finally return mxLen   
    }


//Optimized Approach.....TC=O(N).


int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    unordered_set<int> s;
    
  //Insert element into set..
    for(int i=0;i<arr.size();i++){
        s.insert(arr[i]);
        
    }
    int cnt=0,ans=0;
    for(int i=0;i<arr.size();i++){
        if(s.find(arr[i]-1)!=s.end()){     // if arr[i]-1 is present in set the move forward and search for the smallest number
            continue;
        }else{                               
            while(1){                       // if arr[i]-1 is not present                          
            int digit=arr[i];               
           cnt=0;                          // then search for all the consecutive element and store it in cnt.
         if(s.find(digit)==s.end()) break; 
          cnt++;
          digit++;
            }
            ans=max(ans,cnt);                // choosing biggest one...between ans and cnt..
        }
    }
    return ans;
    
}
