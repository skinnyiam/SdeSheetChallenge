class Solution {
public:/*
    int getLength(ListNode* head,int &length){
        ListNode* temp = head;
        while(temp!=NULL){
            length++;
            temp=temp->next;
        }
        return length;
    }
    
    ListNode* middleNode(ListNode* head) {
        int length=0;
        getLength(head,length);
        ListNode* temp =head;
        int count=1;
        if(length%2!=0){
            while(temp!=NULL){
                if(count==((length/2)+1)){
                   return temp;
                    break;
                }
                temp=temp->next;
                count++;
            }
        }else{
            while(temp!=NULL){
                if(count==((length/2)+1)){
                   return temp;
                    break;
                }
                temp=temp->next;
                count++;
            }
        } 
    
        return head;
        */
     ListNode* middleNode(ListNode* head) {
         ListNode* slow=head;
         ListNode* fast=head;
         while(fast!=NULL && fast->next!=NULL){
             slow=slow->next;
             fast=fast->next->next;
         }
         return slow;
     }
           
    
};
