class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        //brute force
//          while(headA!=NULL){
//              ListNode* temp=headB;
//              while(temp!=NULL){
//                  if(temp==headA){
//                      return headA;
                     
//                  }
//                  temp=temp->next;
//              }
//              headA=headA->next;
//          }
//         return NULL;
        
        //optimiused
        
        if(headA==NULL || headB==NULL) return NULL;
        
        ListNode* a=headA;
        ListNode* b=headB;
        
        while(a!=b){
            a=a ==NULL ? headB : a->next;
            b=b ==NULL ? headA : b->next;
        }
        return a;
    }
};
