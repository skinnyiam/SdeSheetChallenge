class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
       if(p==NULL && q==NULL){
           return true;
       }
        if(p==NULL || q==NULL){
             return false;
        }
       return helper(p,q);
    }
    public:
   bool  helper(TreeNode* l,TreeNode* r){
          if(l==NULL && r==NULL){
           return true;
       }
        if(l==NULL || r==NULL){
             return false;
        }
       return ((l->val==r->val) && helper(l->left,r->left) && helper(l->right,r->right));
     }
};
