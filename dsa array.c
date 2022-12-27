#include<stdio.h>
#include<stdlib.h>
struct custarr{
    int total_size;
    int use_size;
    int* baseadd;
};
void arrc(struct custarr* a,int tsize,int usize){
    //(*a).total_size = tsize;
    //(*a).use_size = usize;
    //(*a).baseadd = (int*)malloc(tsize*sizeof(int));
    a->total_size = tsize;
    a->use_size = usize;
    a->baseadd = (int*)malloc(tsize*sizeof(int));
}
void set(struct custarr* a){
    int n;
    for(int i=0;i<a->use_size;i++){
        printf("enter element %d = ",i);
        scanf("%d",&n);
        (a->baseadd)[i]=n;
    }
}
void show(struct custarr* a){
    for(int i=0;i<a->use_size;i++){
        printf("%d\n",(a->baseadd)[i]);
    }
}
int main(){
    struct custarr stu;
    arrc(&stu,10,5);
    set(&stu);
    show(&stu);
    return 0;
}
