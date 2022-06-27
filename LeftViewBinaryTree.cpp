vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> res;
   if(root==NULL) return res;
   queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
            Node* node=q.front();
            q.pop();
                if(i==0){
                  res.push_back(node->data);  
                }
                
            if(node->left != NULL) {q.push(node->left) ;}
            if(node->right != NULL) {q.push(node->right) ;} 
          
            }
        }
        return res;
}

simply do level order but store only the first element.
