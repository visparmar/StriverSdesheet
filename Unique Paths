
//Recursion Solution.......................................

class Solution {
public:
   int  path(int row,int col,int m,int n){
      
        if(row>m || col>n){
            return 0;
        }

        if(row==m && col==n){
            return 1;
        }

        // down side + right side........
         return path(row+1,col,m,n)+path(row,col+1,m,n);

       
         

    }
    
    int uniquePaths(int m, int n) {
        int ans= path(1,1,m,n);
        return ans;
    }
};









//............................................Dp Solution....................................

class Solution {
public:
   int  path(vector<vector<int>> &arr,int row,int col,int m,int n){
      
        if(row>m || col>n){
            return 0;
        }

        if(row==m && col==n){
            return 1;
        }

        // down side + right side........
        if(arr[row][col]!=-1){
                 return arr[row][col];
        }else return arr[row][col]= path(arr,row+1,col,m,n)+path(arr,row,col+1,m,n);
  
    }
    
    int uniquePaths(int m, int n) {
        vector<vector<int>> arr( m , vector<int> (n, -1));

   
        int ans= path(arr,0,0,m-1,n-1);
        return ans;
    }
};
