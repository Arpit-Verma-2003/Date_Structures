#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        data = d;
        next = NULL;
    }
};
bool search(Node* head,int key){
    while(head!=NULL){
        if(key==head->data){
            return true;
        }
        head=head->next;
    }
    return false;
}
void newnodeend(Node* &head, int val){
    Node* n = new Node(val);
    if(head==NULL){
        head=n;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL){
        temp =  temp->next;
    }
    temp->next = n;
}
void newnodehead(Node* &head,int val){
    Node* n = new Node(val);
    Node* temp = head;
    head = n;
    n->next = temp;
}
void displaylist(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* head = NULL;
    newnodeend(head,3);
    newnodeend(head,2);
    newnodeend(head,1);
    displaylist(head);
    newnodehead(head,4);
    displaylist(head);
    cout<<search(head,5);
    return 0;
}
