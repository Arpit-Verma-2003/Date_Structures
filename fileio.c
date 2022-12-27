// file revise
#include<stdio.h>
int main(){
    FILE *ptr;
        char x[20];
        char y[20];
        int a;

    ptr = fopen("newf.txt","r");
    if(ptr== NULL){
        printf("the file does not exist");
    }
else{
    fscanf(ptr,"%s",&x);
    printf("%s ",x);
    fscanf(ptr,"%s",&y);
    printf("%s ",y);
    fscanf(ptr,"%d",&a);
    printf("%d",a);
    fclose(ptr);}
    return 0;
}
