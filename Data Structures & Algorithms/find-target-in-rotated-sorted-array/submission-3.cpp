class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lower=0;
        int higher=nums.size()-1;
        while(lower<=higher){
            int mid = lower + (higher-lower)/2;
            if(nums[mid] == target) return mid;
            if(nums[lower]<=nums[mid]){
                if(target>nums[mid] or target<nums[lower]) lower=mid+1;
                else higher=mid-1;
            }
            else{
                if(target<nums[mid] or target>nums[higher]) higher=mid-1;
                else lower = mid+1;
            }
        }
    return -1;
    }
};
