// linked list traversal
#include<stdio.h>
#include<stdlib.h>
struct link{
        int data;
        struct link* next;
    };
void linklistprint (struct link *ptr){
    while(ptr!=NULL){
        printf("element =%d\n",ptr->data);
        ptr=ptr->next;
    }
}
int main(){
    struct link* mainn;
    struct link* first;
    struct link* second;
    struct link* third;
    mainn = (struct link*)malloc(sizeof(struct link));
    first = (struct link*)malloc(sizeof(struct link));
    second = (struct link*)malloc(sizeof(struct link));
    third = (struct link*)malloc(sizeof(struct link));
    mainn->data=2;
    mainn->next=first;
    first->data=3;
    first->next=second;
    second->data=4;
    second->next=third;
    third->data=5;
    third->next=NULL;
    linklistprint(mainn);
    return 0;
}

