class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        long long totalApples = accumulate(apple.begin(), apple.end(), 0LL); 
        sort(capacity.begin(), capacity.end(), greater<int>()); 
        long long sum = 0; 
        int count = 0; 
        for (int cap : capacity) { 
            sum += cap; 
            count++; 
            if (sum >= totalApples) return count; 
        } 
        return count;
    }
};