#include<iostream>
using namespace std;
// doubly link list
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int value){
        this->data = value;
        this->next = NULL;
        this->prev = NULL;
    }
};
void printnode(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    return;
}
void insertathead(Node* &head,int val){
    Node* n = new Node(val);
    if(head==NULL){
        head = n;
    }
    n->next = head;
    head->prev = n;
    head = n;
    return;
}
void insertatend(Node*& head,int val){
    Node* temp = head;
    Node* n = new Node(val);
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
    n->next = NULL;
    n->prev = temp;
    return;
}
void insertatpos(Node* &head,int val,int index){
    Node* temp = head;
    Node* n = new Node(val);
    if(head==NULL){
        head = n;
    }
    if(index == 1){
        insertathead(head,val);
        return;
    }
    int count =1;
    while(count!=index-1){
        temp = temp->next;
        count++;
    }
    if(temp->next == NULL){
        insertatend(head,val);
        return;
    }
    n->next = temp->next;
    temp->next = n;
    n->prev = temp;
    return;

}
void deletenode(Node* &head,int val){
    Node* temp = head;
    if(head==NULL){
        cout<<"nothing to delete"<<endl;
    }
    if(temp->data==val){
        Node* del = head;
        head=head->next;
        head->prev = NULL;
        return;
    }
    while(temp->next->data!=val){
        temp=temp->next;
    }
    if(temp->next->next == NULL){
        Node* del = temp->next;
        temp->next = NULL;
        delete del;
        return ;
    }
    Node* temp2 = temp->next->next;
    Node* del = temp->next;
    temp->next= temp->next->next;
    temp2->prev = temp;
    delete del;
    return;

}
int main(){
    Node* n = new Node(5);
    Node* head = n;
    printnode(head);
    insertathead(head,10);
    printnode(head);
    insertathead(head,15);
    printnode(head);
    insertatend(head,18);
    printnode(head);
    insertatpos(head,7,1);
    printnode(head);
    deletenode(head,5);
    printnode(head);
    return 0;
}
