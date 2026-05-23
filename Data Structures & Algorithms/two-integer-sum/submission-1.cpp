class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();
        unordered_map<int,int>registry;
        for(int i=0;i<n;i++){
            int diff = target - nums[i];
            if(registry.contains(diff)) return {registry[diff],i};
            registry[nums[i]]=i; 
        }
    return {};
    }
};
