Node *findMiddle(Node *head) {
    // Write your code here
    Node* s = head;
    Node* f = head;
    while(f!=NULL&&(f->next)!=NULL){
        s = s->next;
        f = f->next->next;
    }
    return s;
}
