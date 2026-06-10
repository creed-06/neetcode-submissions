class Solution {
public:
    int findMin(vector<int> &nums) {
        int lower=0,higher=nums.size()-1;
        while(lower<higher){
            int mid = lower + (higher-lower)/2;
            if(nums[mid]<nums[higher]) higher=mid;
            else lower=mid+1;
        }
    return nums[lower];
    }
};
