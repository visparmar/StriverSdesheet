
//Binary_Tree_Zigzag_Level_Order_Traversal

var zigzagLevelOrder = function(root) {
    let ans=[]
    levelOrdertraversal(root,ans)
   return ans;
};

function levelOrdertraversal(root,ans){
    if(root==null) return []
    let queue=[];
    let flag=0;
    queue.push(root);


    while(queue.length > 0){
        let levellength=queue.length;
        flag++;
        let dummy=[]
        for(let i=0;i<levellength;i++){
           let node=queue.shift();
               dummy.push(node.val);
               if(node.left!=null){
                 queue.push(node.left);
    }

    if(node.right!=null){
        queue.push(node.right);
    }
        }
// for check the level for reverse the array
        if(flag%2==0){
          ans.push(dummy.reverse());
        }else{
            ans.push(dummy);
        }
   
}
}
