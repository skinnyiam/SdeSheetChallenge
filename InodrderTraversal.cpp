public:
    
    void recursive(TreeNode* root, vector<int>& inorder){
        if(root==NULL) return;
        recursive(root->left,inorder);
        inorder.push_back(root->val);
        recursive(root->right,inorder);
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        
        //iterative
        // vector<int> inorder;
        // stack<TreeNode*> st;
        // TreeNode* node=root;
        // while(true){
        //     if(node!=NULL){
        //         st.push(node);
        //         node=node->left;
        //     }
        //     else{
        //         if(st.empty()==true) break;
        //         node=st.top();
        //         st.pop();
        //         inorder.push_back(node->val);
        //         node=node->right;
        //     }
        // }
        // return inorder;
        
        //recursive
         vector<int> inorder;
        recursive(root,inorder);
        return inorder;
    }
};

O(N) both space and time
