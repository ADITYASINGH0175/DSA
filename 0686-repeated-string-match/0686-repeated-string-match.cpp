class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string t = a;
    int cnt = 1;

    
    while (t.size() < b.size()) {
        t += a;
        cnt++;
    }

    
    if (t.find(b) != string::npos) return cnt;

    
    t += a;
    cnt++;
    if (t.find(b) != string::npos) return cnt;

    return -1; 

    }
};