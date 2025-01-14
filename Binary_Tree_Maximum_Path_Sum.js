//Binary Tree Maximum Path Sum

var maxPathSum = function(root) {
    let maxi={value:-Infinity }
    findMaximumpath(root,maxi);
    return maxi.value;
};

function findMaximumpath (root,maxi){  
if(root==null) return 0;
//always Return A Positive Number 
let lh=Math.max(findMaximumpath(root.left,maxi),0);
let rh=Math.max(findMaximumpath(root.right,maxi),0);
maxi.value=Math.max(maxi.value,(root.val+lh+rh))
console.log(lh,rh,"->")
return root.val+ Math.max(lh,rh); 

}
