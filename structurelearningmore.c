#include<stdio.h>
/*int main(){
    typedef struct vector{
        float real;
        float img;
    }vec;
    vec r1,r2;
    printf("Enter real nd img part of vec 1:");
    scanf("%f%f",&r1.real,&r1.img);
    printf("Enter real nd img part of vec 2:");
    scanf("%f%f",&r2.real,&r2.img);
    printf("Vector Sum=%.1f %.1f",r1.real+r2.real,r1.img+r2.img);
    return 0;
}*/
int main(){
    display();
    return 0;
}
/*int display(){
    struct disp{
        int r;
        int i;
    };
    struct disp r[6];
    for(int i=1;i<6;i++){
        printf("enter real part of vector %d: ",i);
        scanf("%d",&r[i].r);
        printf("enter img part of vector %d: ",i);
        scanf("%d",&r[i].i);
    }
    for(int i=1;i<6;i++){
        printf("Vector %d: %dx+%di+c\n",i,r[i].r,r[i].i);
    }
    return 0;
}
int display(){
    typedef struct disp{
        int r;
        int i;
    }v;
    v r[6];
    for(int i=1;i<6;i++){
        printf("enter real part of vector %d: ",i);
        scanf("%d",&r[i].r);
        printf("enter img part of vector %d: ",i);
        scanf("%d",&r[i].i);
    }
    for(int i=1;i<6;i++){
        printf("Vector %d: %dx+%di+c\n",i,r[i].r,r[i].i);
    }
    return 0;
}*/

