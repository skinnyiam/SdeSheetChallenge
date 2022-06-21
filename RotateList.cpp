class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL){
            return head;
        }
        vector<int> ans;
        ListNode* temp=head;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        k=k%ans.size();
        reverse(ans.begin(),ans.end());
        reverse(ans.begin(),ans.begin()+k);
        reverse(ans.begin()+k,ans.end());
        
        ListNode* newhead=new ListNode(ans[0]);
        ListNode* curr=newhead;
        for(int i=1;i<ans.size();i++){
            ListNode* add=new ListNode(ans[i]);
            curr->next=add;
            curr=curr->next;
        }
        return newhead;
        
        
        
    }
};
