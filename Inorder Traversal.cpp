


void Inorder(TreeNode* root,vector<int>&ans){

    if(root==NULL){
        
        return;
    }

      Inorder(root->left,ans);
     ans.push_back(root->data);
      Inorder(root->right,ans);

}

vector<int> getInOrderTraversal(TreeNode *root)
{
    vector<int> ans;
    Inorder( root,ans);
    return ans;
}
