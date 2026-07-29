class Solution {
public:
    bool palindromeHelper(int l,int r,string s){
        while(l<r){
            if(s[l]!=s[r]){
                return false;

            }
            else{
                l++;
                r--;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int l=0;
        int r=s.length()-1;

        while(l<r){
            char left=s[l],
            right=s[r];

            if(left!=right){
                return palindromeHelper(l+1,r,s)||palindromeHelper(l,r-1,s);
            }
            else{
                l++;
                r--;
            }
        }
        return true;
    }
};