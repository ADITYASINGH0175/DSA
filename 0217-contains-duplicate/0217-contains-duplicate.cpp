class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;  // Set to store unique elements
    for (int num : nums) {
        if (seen.find(num) != seen.end()) {
            return true;  // Duplicate found
        }
        seen.insert(num);  // Insert the element into the set
    }
    return false;
    }
};