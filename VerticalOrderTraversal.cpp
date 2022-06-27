class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>> ans;
        queue<pair<TreeNode*,pair<int,int>>> q;
        q.push({root,{0,0}});
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            TreeNode* node=it.first;
            int x=it.second.first;
            int y=it.second.second;
            ans[x][y].insert(node->val);
            if(node->left){
                q.push({node->left,{x-1,y+1}});
            }
            if(node->right){
                q.push({node->right,{x+1,y+1}});
            }
        }
        vector<vector<int>> res;
        for(auto it:ans){
            vector<int> col;
            for(auto x:it.second){
                for(auto i:x.second){
                    col.push_back(i);
                }
            }
            res.push_back(col);
        }
        return res;
    }
};
