#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        this->data=val;
        this->next=NULL;
    }
};

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

void removeduplicates(Node* &head){
    Node* temp = head;
    while(temp->next!=NULL){
        if(temp->data==temp->next->data){
            Node* temp2 = temp->next->next;
            Node* nodetodel = temp->next;
            delete nodetodel;
            temp->next = temp2;
        }
        else{
                temp=temp->next;
        }
    }
    return;
}

void unsortedremdup(Node* &head){
    Node* temp = head;
    while(temp!=NULL&&temp->next!=NULL){
            Node* temp2 = temp;
        while(temp2->next!=NULL){
            if(temp->data==temp2->next->data){
                Node* nodetodel = temp2->next;
                temp2->next = temp2->next->next;
                delete nodetodel;
            }
            else{
                temp2 = temp2->next;
            }
        }
        temp=temp->next;
    }
    return ;
}
void sort01(Node* head){
    Node* temp= head;
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    while(temp!=NULL){
        if(temp->data==0){
            count0++;
        }
        else if(temp->data==1){
            count1++;
        }
        else if(temp->data==2){
            count2++;
        }
        temp= temp->next;
    }
    temp=head;
    while(temp!=NULL){
        if(count0!=0){
            temp->data=0;
            count0--;
        }
        else if(count1!=0){
            temp->data=1;
            count1--;
        }
        else if(count2!=0){
            temp->data=2;
            count2--;
        }
        temp=temp->next;
    }
}

bool checkpalindrome(Node* &head){
    vector<int> arr;
    Node* temp = head;
    while(temp!=NULL){
        arr.push_back(temp->data);
        temp = temp->next;
    }
    int j=arr.size()-1;
    int i =0;
    while(i<=j){
        if(arr[i]!=arr[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int add(Node* &head1/*,Node* &head2*/){
    Node* temp1 = head1;
    //Node* temp2 = head2;
    int count = 1;
    int sum=0;
    while(temp1->next!=NULL){
        temp1=temp1->next;
        count=count*10;
    }
    temp1 = head1;
    while(temp1!=NULL){
        sum = (temp1->data)*count + sum;
        temp1=temp1->next;
        count=count/10;
    }
    return sum;
}

int add2lists(Node* &head1, Node* &head2){
    int sum = add(head1)+add(head2);
    return sum;
}

int main(){
    Node* head = NULL;
    newnodehead(head,1);
    newnodehead(head,2);
    newnodeend(head,3);
    Node* head2 = NULL;
    newnodehead(head2,1);
    newnodeend(head2,0);
    newnodeend(head2,0);
    newnodeend(head2,1);
    //newnodeend(head,1);
    //newnodeend(head,2);
    //newnodeend(head,0);
    //displaylist(head);
    //removeduplicates(head);
    //unsortedremdup(head);
    //sort01(head);
    //cout<<checkpalindrome(head)<<endl;
    displaylist(head);
    displaylist(head2);
    cout<<add(head)<<endl;
    cout<<add2lists(head,head2)<<endl;
    return 0;
}
