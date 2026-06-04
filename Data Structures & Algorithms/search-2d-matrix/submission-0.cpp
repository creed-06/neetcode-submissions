class Solution {
public:
    int binary(vector<int>arr, int find){
        int l=0,r=arr.size()-1;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(arr[mid]<find) l=mid+1;
            else if(arr[mid]>find) r=mid-1;
            else return true;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++){
            if(binary(matrix[i],target)) return true;
        }
    return false;
    }
};
