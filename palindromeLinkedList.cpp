class Solution {
public:
    
    ListNode* reverse(ListNode* head){
        ListNode* pre=NULL;
        ListNode* next=NULL;
        while(head!=NULL){
            next=head->next;
            head->next=pre;
            pre=head;
            head=next;
        }
        return pre;
    }
    
    bool isPalindrome(ListNode* head) {
     if(head==NULL || head->next==NULL){
         return true;
     }   
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow=reverse(slow);
        
        //connecting the reverse linked list to slow node
        while(slow!=NULL){
            if(head->val!=slow->val){
                return false;
            }
            slow=slow->next;
            head=head->next;
        }
        return true;
    }
};
