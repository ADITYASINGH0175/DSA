class Solution {
public:
    int thirdMax(vector<int>& arr) {
        if(arr.empty()) return -1;
        long first=LONG_MIN;
        long second=LONG_MIN;
        long third=LONG_MIN;

        for(int i=0;i<arr.size();i++){
            if (arr[i] == first || arr[i] == second || arr[i] == third) continue;

            if(arr[i]>first){
                third=second;
                second=first;
                first=arr[i];
            }
            else if(arr[i]>second){
                third=second;
                second=arr[i];
            }
            else if(arr[i]>third){
                third=arr[i];
            }
        }
        if(third==LONG_MIN) return int(first);

        else return int(third);
    }
};