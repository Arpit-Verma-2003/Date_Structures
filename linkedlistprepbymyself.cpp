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

void deletenode(Node* &head,int val){
    Node* temp = head;
    if(head==NULL){
        cout<<"the list is empty hence no element can't be deleted"<<endl;
        return;
    }
    if(val==head->data){
        Node* del = temp;
        head = head->next;
        delete del;
        return;
    }
    while(temp->next->data!=val){
        temp = temp->next;
    }
    Node* del = temp->next;
    temp->next = temp->next->next;
    delete del;
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
void insertatpos(Node* &head,int val,int index){
    Node* nodetoins = new Node(val);
    Node* temp = head;
    if(index==1){
        nodetoins->next = head;
        head = nodetoins;
        return;
    }
    int count = 1;
    while(count< index-1){
        temp = temp->next;
        count++;
    }
    if(temp->next== NULL){
        AddEleEnd(head,val);
        return ;
    }
    nodetoins->next = temp->next;
    temp->next = nodetoins;
    return;
}
int main(){
    Node* head = NULL;
    AddEleEnd(head,2);
    AddEleEnd(head,3);
    AddEleEnd(head,4);
    displaylist(head);
    //deletenode(head,2);
    //displaylist(head);
    insertatpos(head,6,4);
    displaylist(head);
    return 0;
}
