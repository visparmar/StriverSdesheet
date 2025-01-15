// Check_if_two_tree_are_identical_or_Not(Same_tree)


var isSameTree = function(p, q) {
    let tree1=[];
    let tree2=[];
    traversal(p,tree1)
    traversal(q,tree2)
    if(tree1.length != tree2.length) return false;

for(let i=0;i<tree1.length;i++){
    if(tree1[i]!=tree2[i]) return false
}
return true;
};

function traversal (root,tree){
    if(root == null) {
        tree.push("null")
        return;
        }

tree.push(root.val);
traversal(root.left,tree);
traversal(root.right,tree)
}
