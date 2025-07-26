function combination (candidates, target, index, sum, ans){

    if(target == 0){
        ans.push([...sum]);
        return ;
    }
    if(index == candidates.length || target < candidates[index]){
        return;
    }
    sum.push(candidates[index]);
    combination (candidates, target-candidates[index], index, sum, ans)
     sum.pop();
    combination (candidates, target, index + 1, sum, ans)

 }
var combinationSum = function(candidates, target) {
 let ans  = []   ;
 candidates.sort((a,b) => a - b );
combination(candidates, target, 0, [], ans )
return ans ;
    
};
