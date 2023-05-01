#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
void displaylist(Node* head){
    if(head==NULL){
        cout<<"the list is empty"<<endl;
    }
    while(head!=NULL){
        cout<<head->data<<" ";
        head =  head->next;
    }
    cout<<endl;
}
void AddEleEnd(Node* &head, int val){
    Node* n = new Node(val);
    Node* temp = head;
    if(temp==NULL){
        head = n;
        return;
    }
    while(temp->next!=NULL){
        temp = head->next;
    }
    temp->next = n;
}
Node* revll(Node* &head){
    Node* cur = head;
    Node* pre = NULL;
    Node* next;
    while(next!=NULL){
        next = cur->next;
        cur->next = pre;
        pre = cur;
        cur = next;
    }
    return pre;

}
Node* revllrec(Node* &head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    Node* newn = revllrec(head->next);
    head->next->next = head;
    head->next = NULL;
}
int main(){
    Node* head = NULL;
    AddEleEnd(head,2);
    AddEleEnd(head,3);
    AddEleEnd(head,4);
    displaylist(head);
    Node* newhead = revll(head);
    displaylist(newhead);
    newhead = revllrec(newhead);
    displaylist(head);
    return 0;
}
