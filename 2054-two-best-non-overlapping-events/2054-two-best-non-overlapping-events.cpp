class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
       
        sort(events.begin(), events.end());
        
        // Max heap: stores {endTime, value}
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
        
        int best = 0, ans = 0;
        
        for (auto &e : events) {
            int start = e[0], end = e[1], val = e[2];
            
            // Pop events that end before current start
            while (!pq.empty() && pq.top().first < start) {
                best = max(best, pq.top().second);
                pq.pop();
            }
            
            // Update answer with best + current value
            ans = max(ans, best + val);
            
            // Push current event into heap
            pq.push({end, val});
        }
        
        return ans;
    }
};
