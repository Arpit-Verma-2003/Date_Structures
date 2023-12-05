// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this-> data = data;
            this-> next = NULL;
        }
        static void Insertathead(Node* &head, int d){
            Node* temp = new Node(d);
            temp->next = head;
            head = temp;
        }
        static void printlist(Node* &head){
            Node* temp = head;
            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp=temp->next;
            }
        }
};
int main() {
    // Write C++ code here
    Node* N1 =  new Node(10);
    Node* head = N1;
    Node::Insertathead(head,11);
    Node::printlist(head);
    return 0;
}
