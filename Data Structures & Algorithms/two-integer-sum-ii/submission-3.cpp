class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
    int left=0, right = num.size()-1;
    while(left<right){
        int curr_sum=num[left]+num[right];
        if(curr_sum>target) right--;
        else if(curr_sum<target) left++;
        else return{left+1, right+1};
        }
    return {};
    }
};
