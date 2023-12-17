 class Solution {
public:
    void insert_node(ListNode*&head,ListNode*&tail,int val){
        ListNode*n = new ListNode(val);
        if(head==NULL){
            head=n;
            tail=n;
            return;
        }
        tail->next=n;
        tail=n;
    }
    void reverse_node(ListNode*&head,ListNode*cur){
        if(cur->next==NULL){
            head=cur;
            return;
        }
        reverse_node(head,cur->next);
        cur->next->next=cur;
        cur->next=NULL;
    }
    bool isPalindrome(ListNode* head) {
        ListNode*tem=head;
        ListNode*head2=NULL,*tail=NULL;
        while(tem!=NULL){
            insert_node(head2,tail,tem->val);
            tem=tem->next;
        }
        reverse_node(head2,head2);
        tem=head;
        while(tem!=NULL){
            if(tem->val != head2->val) return false;
            tem=tem->next;
            head2=head2->next;
        }
        return true;   
    }
};