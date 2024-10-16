class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> count;
    
   
    for (int num : nums) {
        count[num]++;
    }
    
    
    int sum = 0;
    for (auto& entry : count) {
        if (entry.second == 1) {
            sum += entry.first;
        }
    }
    
    return sum;
    }
};