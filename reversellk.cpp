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
    return;
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
    return;
}

Node* reversek(Node* head,int k){
    if(head==NULL){
        return NULL;
    }
    Node* prev=NULL;
    Node* curr = head;
    Node* next=NULL;
    int count =0;
    while(curr!=NULL&&count<k){
        next = curr->next;
        curr ->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if(next!=NULL){
        head->next = reversek(head,k);
    }
    return prev;
}

int main(){
    Node* head = NULL;
    AddEleEnd(head,2);
    AddEleEnd(head,3);
    AddEleEnd(head,4);
    //AddEleEnd(head,6);
    //AddEleEnd(head,7);
    displaylist(head);
    Node* nhead = reversek(head,2);
    displaylist(nhead);
    return 0;
}
