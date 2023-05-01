#include<iostream>
using namespace std;
void entryarray(int arr[], int n){
    cout <<"enter the values in the array:"<<endl;
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
}
void mergearray(int marr[],int arr1[],int arr2[], int n1, int n2){
    for(int i=0;i<n1;i++){
        marr[i]= arr1[i];
    }
    for(int i=n1;i<n1+n2;i++){
        marr[i]=arr2[i-n1];
    }
}
void sorting(int marr[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
        if(marr[j+1]<marr[j])
            swap(marr[j+1],marr[j]);
    }
    }
}
int main(){
    int arr1[100];
    int arr2[100];
    int n1,n2;
    cout << "enter the size of array 1"<<endl;
    cin >> n1;
    entryarray(arr1,n1);
    cout << "enter the size of array 2"<<endl;
    cin >> n2;
    entryarray(arr2,n2);
    int marr[200];
    mergearray(marr,arr1,arr2,n1,n2);
    cout<<"size of the merge array:"<< endl;
    cout<< n1+n2<<endl;
    cout<<"merged array before sorting"<<endl;
    printarray(marr,n1+n2);
    sorting(marr,n1+n2);
    cout<<"merge sorted array"<<endl;
    printarray(marr,n1+n2);
    return 0;
}
