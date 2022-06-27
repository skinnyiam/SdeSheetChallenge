class Solution {
public:
    
    void helper(TreeNode* root, vector<int>& ans){
        if(root==NULL) return;
      ans.push_back(root->val);
        helper(root->left,ans);
        helper(root->right,ans);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        
        //iterative
      // stack<TreeNode*>s;
      //   vector<int>ans;
      //   if(root==NULL){
      //       return ans;
      //   }
      //   s.push(root);
      //   while(!s.empty()){
      //       TreeNode* temp=s.top();
      //       s.pop();
      //       ans.push_back(temp->val);
      //       if(temp->right){
      //           s.push(temp->right);
      //       }
      //       if(temp->left){
      //           s.push(temp->left);
      //       }
      //   }
      //   return ans; 
        
        //recursive
          vector<int>ans;
        helper(root,ans);
        return ans;
    }
   
};
