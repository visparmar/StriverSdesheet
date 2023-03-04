
********************LEETCODE SOLUTION********************
Q:-110. Balanced Binary Tree


class Solution {
public:

int isCheck(TreeNode* root){
if(root==NULL){
    return 0;
}


 int lh= isCheck(root->left);
   int  rh=isCheck(root->right);

 if(lh==-1 || rh==-1)return -1;
  if(abs(lh-rh)>1)return -1;
   return 1+max(lh,rh);
    

}
    bool isBalanced(TreeNode* root) {
          int  temp=isCheck(root);
          if(temp==-1) return false;
          else return true;
        
    }
};
