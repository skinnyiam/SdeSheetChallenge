class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int ans=0;
        height(root,ans);
        return ans;
    }
    int height(TreeNode* root,int&ans){
      if(root==NULL) return 0;
        int lh=height(root->left,ans);
        int rh=height(root->right,ans);
        ans=max(ans,rh+lh);
        return 1+max(lh,rh);
    }
};
