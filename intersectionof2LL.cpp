Node* findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    if(firstHead==NULL||secondHead==NULL) return NULL;
    Node* a = firstHead;
    Node* b = secondHead;
    while(a!=b){
        if(a==NULL) a = secondHead;
        if(b==NULL) b = firstHead;
        a=a->next;
        b=b->next;
    }
    return a;
}
