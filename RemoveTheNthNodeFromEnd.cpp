class Solution {
public:
    //O(2N)
    int getLength(ListNode* head,int &length){
        ListNode* temp=head;
         while(temp!=NULL){
            length++;
            temp=temp->next;
        }
        return length;
    }
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         ListNode* temp=head;
       int length=0;
        getLength(head,length);
        // cout<<length;
        ListNode* dummy = new  ListNode();
        ListNode* curr = dummy; 
         int count=1;
        while(temp!=NULL){
            if(count==(length-n+1)){
              curr->next=temp->next;
                temp=temp->next;
                break;
            }else{
            curr->next=temp;
            curr=temp;
            temp=temp->next;
            count++;
            }
        }
        return dummy->next;
    }
    
    //O(N)
    class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy= new ListNode();
        dummy->next=head;
        ListNode* fast=dummy;
      ListNode* slow=dummy;
        for(int i=0;i<n;i++){
            fast=fast->next;
        }
        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;
        return dummy->next;
        

    }
};
};
