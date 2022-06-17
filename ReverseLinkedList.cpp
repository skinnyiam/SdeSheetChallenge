class Solution {
public:
    
     // ListNode* reverse(ListNode* head,ListNode* newHead){
     //     if(head==NULL){
     //         return newHead;
     //     }
     //     ListNode* next =head->next;
     //     head->next=newHead;
     //     newHead=head;
     //     head=next;
     //     return reverse(head,newHead);
     // }
    
    ListNode* reverseList(ListNode* head) {
        /* first itrative  */
         ListNode* curr=head;
        ListNode* prev=NULL;
        while(curr!=NULL){
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
           }
        
        
        return prev;
        // /* recursive */
        // ListNode* newHead=NULL;
        // return reverse(head,newHead);
    }
};
