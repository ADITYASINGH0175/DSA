class Solution {
public:
    vector<int> validSequence(string word1, string word2) {
        int n = word1.length();
        int m = word2.length();
        
        
        vector<int> suffix_match(m, -1);
        int p1 = n - 1;
        int p2 = m - 1;
        
        
        while (p1 >= 0 && p2 >= 0) {
            if (word1[p1] == word2[p2]) {
                suffix_match[p2] = p1;
                p2--;
            }
            p1--;
        }
        
        vector<int> ans;
        bool changed = false;
        int j = 0;
        
        
        for (int i = 0; i < n && j < m; ++i) {
            if (word1[i] == word2[j]) {
                ans.push_back(i);
                j++;
            } 
           
            else if (!changed) {
                
                if (j + 1 == m || suffix_match[j + 1] > i) {
                    ans.push_back(i);
                    j++;
                    changed = true;
                }
            }
        }
        
        
        if (ans.size() == m) {
            return ans;
        }
        
        return {};
    }
};