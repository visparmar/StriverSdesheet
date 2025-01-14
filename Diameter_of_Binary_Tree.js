// Diameter of Binary Tree

var diameterOfBinaryTree = function(root) {
let max={value:0};
findDiameter(root,max);
return max.value;
    
};

function findDiameter(root,max){
    if(root == null) return 0;
    let lh=findDiameter(root.left,max)
    let rh=findDiameter(root.right,max)
    max.value=Math.max(max.value,(lh+rh))
    return 1+Math.max(lh,rh);
}

