class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        int pos=nums[n]*nums[n-1]*nums[n-2];
        int neg=nums[0]*nums[1]*nums[n];

        return max(pos,neg);
    }
};