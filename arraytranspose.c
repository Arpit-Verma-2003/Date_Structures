// more on structure
#include<stdio.h>
int main(){
    typedef struct stu{
        int roll;
        float perc;
        char ini;


    }sem;
    sem a,a2,a3;
    a.roll = 22;
    printf("%d ",a.roll);

    sem a1={23,98.23,'a'};
    printf("%d %.2f %c",a1.roll,a1.perc,a1.ini);

    return 0;
}
