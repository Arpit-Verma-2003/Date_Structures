#include<iostream>
using namespace std;
int main(){
    int n = 4;
    int nn[5];
    int b[5];
    int k;
    cout<<"enter arrival time"<<endl;
    for(int i=0;i<4;i++){
        cin>>nn[i];
    }
    cout<<"enter burst time"<<endl;
    for(int i=0;i<4;i++){
        cin>>b[i];
    }
    int temp;
    for (int i = 0; i < 4-1; i++){
        for (int j = 0; j < 4 - i-1; j++){
            if (nn[j] > nn[j + 1]){
                temp = nn[j];
                nn[j]=nn[j+1];
                nn[j+1]=temp;
                temp = b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
        }
}
for(int i=0;i<4;i++){
    cout<<nn[i]<<endl;
}
    for(int i=0;i<4;i++){
            cout<< "response time = "<<b[i-1]+b[i]<<endl;

    }
    return 0;
}
