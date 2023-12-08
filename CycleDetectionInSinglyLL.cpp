bool detectCycle(Node *head)
{
	//	Write your code here
    if(head==NULL||head->next==NULL) return false;
    Node* f = head;
    Node* s = head;
    while(f->next!=NULL&&f->next->next!=NULL){
        s = s->next;
        f = f->next->next;
        if(f==s) return true;
    }
    return false;
}
