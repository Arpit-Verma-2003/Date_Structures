Node* removeKthNode(Node* head, int K)
{
    // Write your code here.
    Node* temp = new Node();
    temp->next = head;
    Node* s = temp;
    Node* f = temp;
    
    for(int i=0;i<K;i++){
        f = f->next;
    }
    while(f->next!=NULL){
        s=s->next;
        f=f->next;
    }
    s->next = s->next->next;
    return temp->next;
}
