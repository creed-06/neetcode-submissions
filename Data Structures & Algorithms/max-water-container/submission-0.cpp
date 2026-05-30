class Solution {
public:
    int maxArea(vector<int>& heights) {
        int area=0;
        int left=0,right=heights.size()-1;
        while(left<right){
            int currheight=(right-left)*min(heights[left], heights[right]);
            area=max(currheight,area);
            if(heights[left]<heights[right]) left++;
            else right--;
        }
    return area;
    }
};
