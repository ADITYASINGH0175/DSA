class Solution {
public:
    int findPoisonedDuration(vector<int>& arr, int k) {
        if(arr.empty()) return 0;
        int cnt=k;
        for(int i=1;i<arr.size();i++){
            int x=arr[i]-arr[i-1];
            if(x>=k){
                cnt+=k;
            }
            else if(x<k){
                cnt+=x;
            }
        }
        return cnt;
    }
};