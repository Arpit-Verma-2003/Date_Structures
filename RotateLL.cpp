Node *rotate(Node *head, int k) {
     // Write your code here.
     if(head==NULL||k==0||head->next==NULL) return head;
     int len = 1;
     Node* temp = head;
     while(temp->next!=NULL){
          len++;
          temp=temp->next;
     }
     temp->next = head;
     k = k%len;
     k = len-k;
     while(k!=0){
          temp=temp->next;
          k--;
     }
     head = temp->next;
     temp->next = NULL;
     return head;
}
