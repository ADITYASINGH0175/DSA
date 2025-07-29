class Solution {
public:
    
    int numberOfDigits(int num){
        if (num == 0) return 1;
        int n=0;
        while(num>0){
            num=num/10;
            n++;
        }
        return n;
    }
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if (numberOfDigits(nums[i])%2==0) count++;

        }
        return count;
    }
};