

void preOrder(TreeNode* root,vector<int>& ans){

    if(root==NULL)return;

      ans.push_back(root->data);
     preOrder(root->left,ans);
    preOrder(root->right,ans);

}

vector<int> getPreOrderTraversal(TreeNode *root)
{
    vector<int> ans;
    preOrder(root,ans);
    return ans;
}
