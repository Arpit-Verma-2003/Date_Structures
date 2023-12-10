class Solution {
public:
    ListNode *reversell(ListNode * head){
    ListNode *newnode = NULL;
    ListNode *dnode = head;
    while(head!=NULL){
        ListNode* post = head->next;
        head->next = newnode;
        newnode = head;
        head = post;
    }
    return newnode;
}
    bool isPalindrome(ListNode* head) {
        if(head==NULL||head->next==NULL) return true;
        ListNode *s = head;
        ListNode *f = head;
            while(f->next!=NULL&&f->next->next!=NULL){
                s= s->next;
                f= f->next->next;
            }
            s->next = reversell(s->next);
            s=s->next;
            while(s!=NULL){
                if(head->val!=s->val) return false;
                head=head->next;
                s=s->next;
            }
            return true;
    }
};
