 bool find(TreeNode* A, int B,vector<int>& res){
     if(A==NULL) return false;
     res.push_back(A->val);
     if(A->val==B){
         return true;
     }
    if(find(A->left,B,res) || find(A->right,B,res)) 
     {
         return true;
     }
     res.pop_back();
     return false;
 }
 
vector<int> Solution::solve(TreeNode* A, int B) {
    vector<int> res;
    find(A,B,res);
    return res;
}
