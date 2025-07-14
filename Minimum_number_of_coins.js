class Solution {

    minPartition(N) {
       let array = [2000,500,200,100,50,20,10,5,2,1];
       let ans =[];
       let i=0;
       
       while(i<=9){
           if(array[i]<=N){
               ans.push(array[i]);
               N = N-array[i];
           }else{
               i++;
           }
       }       
        return ans;
        
    }
}
