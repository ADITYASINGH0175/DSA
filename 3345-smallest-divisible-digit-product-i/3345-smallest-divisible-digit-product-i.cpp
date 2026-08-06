class Solution {
public:
    int prod(int x){
        int prod=1;
        while(x>0){
            int digit=x%10;
            prod*=digit;
            x/=10;
        }
        return prod;
    }
    int smallestNumber(int n, int t) {
        while(true){
            if(prod(n)%t==0){
                return n;
            }
            else{
                n++;
            }
        }
    }
};