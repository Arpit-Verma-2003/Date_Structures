class Solution{
public:
    int minimumDays(int S, int N, int M){
        // code here
        int req = S*M;
        int Nsun = S/7;
        int temp = (S-Nsun)*N;
        if(req>temp) return -1;
        if((S*M)%N==0) return (S*M)/N;
        else return ((S*M)/N)+1;
        
    }
};
