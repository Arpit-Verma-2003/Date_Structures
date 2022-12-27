#include<stdio.h>
#include<stdlib.h>
int main(){
    int* ptr;
    ptr =(int*) malloc(6*sizeof(int));
    /*for(int i=0;i<9;i++){
        printf("enter the value of %d: ",i);
        scanf("%d",&ptr[i]);
    }*/
    //for(int i=0;i<6;i++){
      //  printf("%d = %d\n",i,ptr[i]);
    //}
    int* ptr1;
    ptr1 = (int*) calloc(6,sizeof(int));
    for(int i=0;i<10;i++){
        printf("%d = %d\n",i,ptr1[i]);
    }
    //initialize every element value from 0
    //free(ptr);
    //free(ptr1);

    ptr1 = realloc(ptr1,10*sizeof(int));
    /*for(int i=0;i<10;i++){
            printf("enter value of index %d:",i);
    scanf("%d",&ptr1[i]);

    }*/
    for(int i=0;i<10;i++){
        printf("%d = %d\n",i,ptr1[i]);
    }
    return 0;
}
