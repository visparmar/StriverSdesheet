// Maximum Depth of Binary Tree

var maxDepth = function(root) {
    return findmaximumdepth(root)
};

function findmaximumdepth(root){

if(root==null) return 0;

let result1=findmaximumdepth(root.left);
let result2=findmaximumdepth(root.right);
return Math.max(result1,result2) +1;

}
