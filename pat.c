#include<stdio.h>
int main(){
    int k=0;
for(int i=0;i<5;i++){
    for(int j=10;k<i;j=j+10){
        k++;
        printf("%d",j);
    }
    printf("\n");
}
return 0;
}
