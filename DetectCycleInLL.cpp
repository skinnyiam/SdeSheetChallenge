class Solution {
public:
    bool hasCycle(ListNode *head) {
      
        //brute force 
//       unordered_map<ListNode*,int> s;
//         ListNode* temp=head;
        
//         while(temp!=NULL){
//             if(s[temp]>1){
//                 return true;
//             }
//            s[temp]++;
//             temp=temp->next;
//         }
//         return false;
        
        //optimised
        if(head==NULL || head->next==NULL) return false;
        
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast->next!=NULL && fast->next->next!=NULL  ){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow){
                return true;
            }
        }
        return false;
    }
};
