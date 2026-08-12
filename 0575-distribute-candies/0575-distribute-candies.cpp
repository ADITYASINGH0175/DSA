class Solution {
public:
    int countc(vector<int> &arr ){
        if(arr.empty()) return 0;
        int cnt=1;
        sort(arr.begin(),arr.end());
        for(int i=1;i<arr.size();i++){
            if(arr[i]!=arr[i-1]){
                cnt++;
            }
        }
        return cnt;
    }
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        if(countc(candyType)>=n/2) return n/2;

        else return countc(candyType);
    }
};