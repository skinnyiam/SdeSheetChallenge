class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        map<int,int> mp;
        queue<pair<Node*,int>> q;
        q.push({root,0});
        while(!q.empty()){
            auto it =q.front();
            q.pop();
            Node* temp=it.first;
            int line=it.second;
            mp[line]=temp->data;
            if(temp->left!=NULL){
                q.push({temp->left,line-1});
            }
            if(temp->right!=NULL){
                q.push({temp->right,line+1});
            }
            
        }
        vector<int> ans;
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
