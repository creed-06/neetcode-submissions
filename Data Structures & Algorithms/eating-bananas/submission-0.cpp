class Solution {
public:
    int maximum(vector<int>&arr){
        int m=0;
        for(int i : arr) m=max(m,i);  
        return m;  
    }
    int sum_arr(vector<int>&arr, int n){
        int total=0;
        for(int i : arr) total+=(i+n-1)/n;
        return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int lower = 1, higher = maximum(piles), speed=higher;
        while(lower<=higher){
            int mid=lower+(higher-lower)/2;
            if(sum_arr(piles,mid)<=h){
                speed=mid;
                higher=mid-1;
            }
            else lower = mid+1;
        }
    return speed;
    }
};
