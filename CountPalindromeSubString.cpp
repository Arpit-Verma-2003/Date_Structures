int CountPS(char str[], int N)
{
    //code here
    int sum =0;
    string res = "";
        for(int i=0;i<N;i++){
            int l = i;
            int r =i; //odd cases (ki aaa)
            l--; // coz hame unit length wala consider nahi karna
            r++; 
            while(l>=0&&r<N&&str[l]==str[r]){
                sum++; // agr match toh ek or palindrome
                l--;
                r++;
            }
            // even cases (ki aa coz vo a|a me consider nahi ho rha)
            l = i; // coz yaha unit length wala nahi hai already so waise hi rehne do
            r = i+1; 
            while(l>=0&&r<N&&str[l]==str[r]){
                sum++; // agr match toh ek or palindrome
                l--;
                r++;
            }
        }
        return sum;
}
