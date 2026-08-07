class Solution {
public:
    int findLengthOfLCIS(vector<int>& arr) {
        if(arr.empty()) return 0;
        int len=1;
        int n=arr.size();
        int curr=1;
        for(int i=1;i<n;i++){
            
            if(arr[i]>arr[i-1]){
                curr++;
            }
            else{
                curr=1;
            }
            len=max(len,curr);
        }
        return len;
    }
};