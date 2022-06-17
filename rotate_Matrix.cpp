void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    int prev=0,curr=0;
     int top=0,left=0,right=m-1,bottom=n-1;
    if(n!=1 && m!=1 ) {
    while(top<bottom && left<right)
    {
         prev=mat[top+1][left];
        for(int i=left;i<=right;i++)
        {curr=mat[top][i];

          mat[top][i]=prev;
         prev=curr;
        }
        top++;
         for(int i=top;i<=bottom;i++)
        {curr=mat[i][right];

          mat[i][right]=prev;
         prev=curr;
        } right--;

       if(top<=bottom) {  for(int i=right;i>=left;i--)
        {curr=mat[bottom][i];

          mat[bottom][i]=prev;
         prev=curr;
        }} bottom--;

        if(left<=right)
        for(int i=bottom;i>=top;i--)
        {curr=mat[i][left];

          mat[i][left]=prev;
         prev=curr;
        }left++;


    }

    }
}
