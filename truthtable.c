// truth table for and,or,not gates
#include<stdio.h>
int main(){
    int a[2][2],b[2][2];
    for(int i=0;i<=1;i++){
        for(int j=0;j<=1;j++){
            a[i][j]=(i&&j);
            b[i][j]=(i||j);
        }
    }
    printf("Truth table for AND gate:-\n\n");
    for(int i=0;i<=1;i++){
        for(int j=0;j<=1;j++){
            printf("%d  %d  =   %d\n",i,j,a[i][j]);
        }
    }`
    printf("\n");
    printf("Truth table for OR gate:-\n\n");
    for(int i=0;i<=1;i++){
        for(int j=0;j<=1;j++){
            printf("%d  %d  =   %d\n",i,j,b[i][j]);
        }
    }
    int c[2];
    for(int i=0;i<=1;i++){
        c[i]=!i;
    }
    printf("\n");
    printf("Truth table for NOT gate:-\n\n");
    for(int i=0;i<=1;i++){
        printf("%d   =    %d\n",i,c[i]);
    }
    return 0;
}
