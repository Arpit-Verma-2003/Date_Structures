#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data= val;
        next =NULL;
    }
};

void displayl(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
    return ;
}

void insertnode(Node* &head, int val){
    Node* temp = head;
    Node* n = new Node(val);
    if(head==NULL){
        head = n;
        return;
    }
    n->next = temp;
    head = n;
    return;
}

Node* reversek(Node* head,int k){
    if(head==NULL){
        return NULL;
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    int count = 0;
    while(count<k&&curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr= next;
        count++;
    }
    if(next!=NULL){
        head->next = reversek(next,k);
    }
    return prev;
}

void makecycle(Node*&head,int index){
    Node* temp =head;
    int count = 1;
    Node* nodeval;
    while(temp->next!=NULL){
        if(count==index){
            nodeval = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = nodeval;
    return;
}

bool detectcycle(Node* head){
    Node* fast=head;
    Node* slow=head;
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
            return true;
        }
    }
    return false;
}

void removecycle(Node* head){
    Node* fast=head;
    Node* slow=head;
    do{
        slow = slow->next;
        fast = fast->next->next;
    } while(fast!=slow);
    fast= head;
    while(fast->next!=slow->next){
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=NULL;
}

int main(){
    Node* head = NULL;
    insertnode(head,2);
    insertnode(head,3);
    insertnode(head,4);
    insertnode(head,5);
    insertnode(head,6);
    insertnode(head,7);
    displayl(head);
    Node* newhead = reversek(head,3);
    displayl(newhead);
    cout<<detectcycle(head)<<endl;
    makecycle(head,3);
    cout<<detectcycle(head)<<endl;
    removecycle(head);
    cout<<detectcycle(head);
    return 0;
}
