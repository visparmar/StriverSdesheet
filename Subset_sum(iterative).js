
class Solution {
    subsetSums(array) {
      let ans = [[]];
     array.forEach((item1) => {
         let dummy = ans.map(item2 => {
            return  item2.concat(item1)
             ans2.push(sum+item)
         })
         ans =ans.concat(dummy);
     })
     return ans.map((item)=> item.reduce((acc,curr)=>curr+acc, 0))
        
    }
}
