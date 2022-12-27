#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter n"<<endl;
    cin>>n;
    int arr[10][10];
    int temp=1000,sum=0;
    for(i=0;i<n;i++){
            temp=1000;
        for(j=0;j<n;j++){
            cin>>arr[i][j];
            if(arr[i][j]<temp&&arr[i][j]>0){
                temp=arr[i][j];
            }
        }
        sum=sum+temp;
    }
    cout<<endl;
    cout<<"weigh:"<<endl;
    cout<<sum;
    return 0;
}
