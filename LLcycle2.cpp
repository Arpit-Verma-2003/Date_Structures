Node *firstNode(Node *head)
{
    //    Write your code here.
    if(head==NULL||head->next==NULL) return NULL;
    Node* s = head;
    Node* f = head;
    Node* d = head;
    while(f->next!=NULL&&f->next->next!=NULL){
        s=s->next;
        f=f->next->next;
        if(s==f){
            while(s!=d){
                s=s->next;
                d=d->next;
            }
            return d;
        }
    }
    return NULL;
}
