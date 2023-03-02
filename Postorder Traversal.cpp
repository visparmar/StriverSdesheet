

void post(TreeNode* root,vector<int>&ans){

    if(root==NULL){
        
        return;
    }

      post(root->left,ans);
     
     post(root->right,ans);
      ans.push_back(root->data);

}
vector<int> getPostOrderTraversal(TreeNode *root)
{
    vector<int> ans;
    post(root,ans);

    return ans;
    // Write your code here.
}
