class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        
        //brute force 
        //O(n+m);
        //tc O(n+m)+ O(m+n(log(m+n)))
        // vector<int> ans;
        // if(list1==NULL && list2==NULL){
        //     return NULL;
        // }
        // ListNode* temp =list1;
        // while(temp!=NULL){
        //     ans.push_back(temp->val);
        //     temp=temp->next;
        // }
        // ListNode* temp2=list2;
        // while(temp2!=NULL){
        //     ans.push_back(temp2->val);
        //     temp2=temp2->next;
        // }
        // sort(ans.begin(),ans.end());
        // ListNode* newhead= new ListNode(ans[0]);
        // ListNode* curr=newhead;
        // for(int i=1;i<ans.size();i++){
        //     curr->next=new ListNode(ans[i]);
        //     curr=curr->next;
        // }
        // return newhead;
        
       
        
        //optimised
       ListNode* l1=list1;
        ListNode* l2=list2;
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        if(l1->val>l2->val) swap(l1,l2);
        ListNode* res =l1;
        while(l1!=NULL && l2!=NULL){
            ListNode* temp=NULL;
            while(l1!=NULL && l1->val<=l2->val){
                temp=l1;
                l1=l1->next;
            }
            temp->next=l2;
            swap(l1,l2);
        }
        return res;
    }
};
