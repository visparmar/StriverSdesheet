// Left view of Binary tree

// Iterative Approach

var rightSideView = function(root) {
    if(root==null) return []
    let queue=[root];
 let ans=[];
 
 while(queue.length > 0){
    let levellength=queue.length;     
     for(let i=0;i<levellength;i++){
          let currentNode=queue.shift();
          if(i==0){
              ans.push(currentNode.val)
          }
       if(currentNode.left){
          queue.push(currentNode.left) 
     }
     if(currentNode.right){
          queue.push(currentNode.right)
     }
     }    
 }
     return ans;   
};

// Recursive Approach.............


var rightSideView = function(root) {
   if(root==null) return [];
    var result=[];
    recursion(root,0,result)
    return result;
}
function recursion (root,level,result){
     if(root==null) return;
if(result.length == level) {
    result.push(root.val);
}
    recursion(root.right,level+1,result)
    recursion(root.left,level+1,result)

}
