//phone call problem
#include<iostream>
#include<string>
#include<vector>
using namespace std;
void f(string digits, string output, int index,string mapping[],vector<string> &ans){
    if(index>=digits.length()){
        ans.push_back(output);
        return ;
    }
    int n = digits[index] - '0';
    string value = mapping[n];
    for(int i=0;i<value.length();i++){
        output.push_back(value[i]);
        f(digits,output,index+1,mapping,ans);
        output.pop_back();
    }
}
int main(){
    string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string digits;
    cin>> digits;
    string output ="";
    vector<string> ans;
    f(digits,output,0,mapping,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}
