// basic structues
#include<stdio.h>
#include<string.h>
int main(){
    struct emp{
        int roll;
        char name[10];
        float salary;

    };
    //printf("enter roll for a1 , a2,a3 respectively: \n");
    //scanf("%d %d %d",&a[1].roll,&a[2].roll,&a[3].roll);
    struct emp a1={21,"arpit",55.90};
    printf("roll = %d",a1.roll);
    printf("name = %s",a1.name);
    printf("salary = %f",a1.salary);
    return 0;

}
