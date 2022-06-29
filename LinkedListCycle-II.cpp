    ListNode *detectCycle(ListNode *head) {
        //iterative
//          unordered_map<ListNode*,int> s;
//         ListNode* temp=head;
        
//         while(temp!=NULL){
//             if(s[temp]>1){
//                 return temp;
//             }
//            s[temp]++;
//             temp=temp->next;
//         }
//         return NULL;
        
        //optimised
        if(head==NULL || head->next==NULL) return NULL;
        
        ListNode* slow=head;
         ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                slow=head;
               while(slow!=fast){
                    slow=slow->next;
                    fast=fast->next;
                }
                return slow;
            }
        }
         
        return NULL;
    }
};
